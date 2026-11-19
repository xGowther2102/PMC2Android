// ---------------------------------------------------------------------------
//  mc2rt — runtime Android del port de Midnight Club II (PC, PE32) a ARM64.
//
//  Responsabilidades:
//    * Mapear mc2.exe en el espacio de direcciones invitado de 512 MB.
//    * Ejecutar el codigo recompilado en un hilo propio con pila de 16 MB.
//    * Traducir los lotes D3D9 generados por pc_runtime.c a OpenGL ES 3.x
//      en un unico hilo de render con contexto EGL propio.
//    * Exponer un contrato JNI estrecho y no bloqueante para la capa Java.
//
//  Reglas de ciclo de vida:
//    * detach() solo senaliza; nunca hace join desde el UI thread.
//    * shutdown() es el unico punto que une hilos y libera memoria invitada.
//    * El hilo de render es el propietario exclusivo de ANativeWindow y EGL.
// ---------------------------------------------------------------------------

#include <jni.h>

#include <android/log.h>
#include <android/native_window.h>
#include <android/native_window_jni.h>

#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#include <fcntl.h>
#include <unistd.h>
#include <sys/resource.h>
#include <sys/stat.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>
#include <pthread.h>
#include <aaudio/AAudio.h>

#include "pc_runtime.h"

#define LOG_TAG "MC2RT"
#ifdef NDEBUG
#define LOGI(...) do { if (0) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__); } while (0)
#define PORTDBG(...) do { if (0) __android_log_print(ANDROID_LOG_INFO, "PortDebug", __VA_ARGS__); } while (0)
#else
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
/* Tag unico de diagnostico: adb logcat -s PortDebug */
#define PORTDBG(...) __android_log_print(ANDROID_LOG_INFO, "PortDebug", __VA_ARGS__)
#endif
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#ifndef EGL_OPENGL_ES3_BIT_KHR
#define EGL_OPENGL_ES3_BIT_KHR 0x0040
#endif

// ---------------------------------------------------------------------------
// Estado global
// ---------------------------------------------------------------------------

namespace {

std::atomic<bool> gRunning{false};
std::atomic<bool> gAttached{false};
std::atomic<bool> gRenderThreadAlive{false};
std::atomic<bool> gShuttingDown{false};
std::atomic<int> gFps{0};
std::atomic<int> gGameFps{0};
std::atomic<int> gFrameTenthsMs{0};
std::atomic<int> gFrames{0};
std::atomic<int> gWidth{0};
std::atomic<int> gHeight{0};

std::atomic<int> gRenderer{0};   // 0 = GLES3, 1 = GLES2
std::atomic<int> gScale{100};    // 50..100 (%)
std::atomic<int> gFpsCap{60};    // 0 = sin limite
std::atomic<bool> gLinear{true};
std::atomic<bool> gVsync{true};
std::atomic<int> gAnisoLevel{8};
std::atomic<bool> gDepth24{true};
std::atomic<bool> gFogEnabled{true};
std::atomic<int> gMsaaSamples{0};
std::atomic<bool> gBloomEnabled{true};
std::atomic<bool> gFxaaEnabled{true};
std::atomic<bool> gNightEnhance{true};
std::atomic<bool> gMc2HookShader{false};
std::atomic<float> gMc2HookFogMult{1.0f};

std::mutex gMutex;
std::string gError;
std::string gGlInfo;
std::string gWorkDir;
std::string gDataDir;
std::string gLaunchArgs = "-skipintro";

std::thread gThread;
ANativeWindow *gWindow = nullptr;   // propiedad exclusiva del hilo de render

std::atomic<bool> gPcImageLoaded{false};
std::atomic<bool> gPcThreadRunning{false};
std::atomic<bool> gPcExited{false};
std::atomic<int> gPcExitCode{0};
pthread_t gPcThread = 0;
bool gPcThreadCreated = false;

/* gWorkDir/gDataDir se escriben desde el UI thread (init) y se leen desde el
   hilo del juego. Las copias bajo mutex eliminan el use-after-free del
   gWorkDir.c_str() original, que se guardaba en un array de const char*. */
std::string snapshotDataDir() {
    std::lock_guard<std::mutex> lock(gMutex);
    return gDataDir;
}

std::string snapshotWorkDir() {
    std::lock_guard<std::mutex> lock(gMutex);
    return gWorkDir;
}

bool hasGameAssets(const std::string &dir) {
    if (dir.empty()) return false;
    struct stat st{};
    return stat((dir + "/assets_p.dat").c_str(), &st) == 0;
}

void *pcGameThreadEntry(void *) {
    const std::string work = snapshotWorkDir();
    std::string data = snapshotDataDir();

    if (!hasGameAssets(data)) {
        /* Compatibilidad con instalaciones anteriores que aun conservan el
           permiso MANAGE_EXTERNAL_STORAGE. En un dispositivo limpio (API 30+)
           estas rutas no existen: lo acabamos de verificar en un POCO F3. */
        const std::string legacy[] = {
                "/sdcard/Games/Midnight Club II",
                "/storage/emulated/0/Games/Midnight Club II"
        };
        for (const std::string &cand : legacy) {
            if (hasGameAssets(cand)) {
                data = cand;
                break;
            }
        }
    }
    if (!hasGameAssets(data)) {
        LOGW("No se encontro assets_p.dat. Ruta de datos: %s", data.c_str());
        if (data.empty()) data = work;
    }

    LOGI("Using game data directory: %s", data.c_str());
    PORTDBG("[DATA] directorio efectivo del juego: %s", data.c_str());
    mc2_pc_set_paths(data.c_str(), work.c_str());
    /* Win32 siempre incluye el ejecutable como argv[0]. Se restaura por
       fidelidad a la API. VERIFICADO: el juego imprime sus propios
       "ARGS: mc.exe -path=. -archive=assets_p.dat" y NO consume GetCommandLineA,
       por lo que -skipintro NO suprime las cinematicas. Los 6 errores de Bink
       siguen apareciendo y se documentan como limitacion de la Etapa 3. */
    std::string extraArgs;
    {
        std::lock_guard<std::mutex> lock(gMutex);
        extraArgs = gLaunchArgs;
    }
    std::string cmd = "mc2.exe -path=. -archive=assets_p.dat";
    if (!extraArgs.empty()) {
        cmd += " ";
        cmd += extraArgs;
    }
    mc2_pc_set_cmdline(cmd.c_str());
    int rc = mc2_pc_run_loaded();
    gPcExitCode = rc;
    gPcThreadRunning = false;
    if (!gShuttingDown.load()) {
        gPcExited = true;
    }
    LOGI("PC recompiled game thread finished with rc=%d", rc);
    return nullptr;
}

void startPcGameThreadIfNeeded() {
    if (!gPcImageLoaded.load() || gPcThreadCreated || gPcExited.load()) return;
    bool expected = false;
    if (!gPcThreadRunning.compare_exchange_strong(expected, true)) return;
    gPcExited = false;

    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 16u * 1024u * 1024u);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
    if (pthread_create(&gPcThread, &attr, pcGameThreadEntry, nullptr) != 0) {
        gPcThreadRunning = false;
        LOGE("pthread_create failed for pcGameThreadEntry");
    } else {
        gPcThreadCreated = true;
    }
    pthread_attr_destroy(&attr);
}

void setError(const std::string &e) {
    std::lock_guard<std::mutex> lock(gMutex);
    gError = e;
    LOGE("%s", e.c_str());
}

// ---------------------------------------------------------------------------
// EGL / GLES
// ---------------------------------------------------------------------------

EGLConfig chooseConfig(EGLDisplay dpy, int version, EGLint surfaceType) {
    EGLint renderBit = version >= 3 ? EGL_OPENGL_ES3_BIT_KHR : EGL_OPENGL_ES2_BIT;
    EGLConfig cfg = nullptr;
    EGLint n = 0;
    if (gDepth24.load()) {
        EGLint attribs24[] = {
                EGL_RENDERABLE_TYPE, renderBit,
                EGL_SURFACE_TYPE, surfaceType,
                EGL_RED_SIZE, 8,
                EGL_GREEN_SIZE, 8,
                EGL_BLUE_SIZE, 8,
                EGL_ALPHA_SIZE, 8,
                EGL_DEPTH_SIZE, 24,
                EGL_STENCIL_SIZE, 8,
                EGL_NONE
        };
        if (eglChooseConfig(dpy, attribs24, &cfg, 1, &n) && n >= 1) {
            return cfg;
        }
    }
    EGLint attribsStencil[] = {
            EGL_RENDERABLE_TYPE, renderBit,
            EGL_SURFACE_TYPE, surfaceType,
            EGL_RED_SIZE, 8,
            EGL_GREEN_SIZE, 8,
            EGL_BLUE_SIZE, 8,
            EGL_ALPHA_SIZE, 8,
            EGL_DEPTH_SIZE, 16,
            EGL_STENCIL_SIZE, 8,
            EGL_NONE
    };
    if (eglChooseConfig(dpy, attribsStencil, &cfg, 1, &n) && n >= 1) {
        return cfg;
    }
    EGLint attribs[] = {
            EGL_RENDERABLE_TYPE, renderBit,
            EGL_SURFACE_TYPE, surfaceType,
            EGL_RED_SIZE, 8,
            EGL_GREEN_SIZE, 8,
            EGL_BLUE_SIZE, 8,
            EGL_ALPHA_SIZE, 8,
            EGL_DEPTH_SIZE, 16,
            EGL_NONE
    };
    if (!eglChooseConfig(dpy, attribs, &cfg, 1, &n) || n < 1) {
        return nullptr;
    }
    return cfg;
}

EGLContext createContext(EGLDisplay dpy, EGLConfig cfg, int version) {
    const EGLint a2[] = {EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE};
    const EGLint a3[] = {EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE};
    EGLContext ctx = eglCreateContext(dpy, cfg, EGL_NO_CONTEXT,
                                      version >= 3 ? a3 : a2);
    if (ctx == EGL_NO_CONTEXT && version >= 3) {
        ctx = eglCreateContext(dpy, cfg, EGL_NO_CONTEXT, a2);
    }
    return ctx;
}

static const char *kVertexShader =
        "attribute vec2 aPos;\n"
        "varying vec2 vUv;\n"
        "void main() {\n"
        "  vUv = aPos * 0.5 + 0.5;\n"
        "  gl_Position = vec4(aPos, 0.0, 1.0);\n"
        "}\n";

static const char *kFragmentShader =
        "precision mediump float;\n"
        "varying vec2 vUv;\n"
        "uniform float uTime;\n"
        "uniform vec2 uRes;\n"
        "void main() {\n"
        "  vec2 p = vUv;\n"
        "  float wave = 0.5 + 0.5 * sin(uTime * 0.8 + p.x * 6.2831);\n"
        "  vec3 base = mix(vec3(0.03, 0.05, 0.09), vec3(0.10, 0.22, 0.55), p.y);\n"
        "  base *= 0.65 + 0.35 * wave;\n"
        "  float diag = fract((p.x + p.y) * 1.6 - uTime * 0.12);\n"
        "  float band = smoothstep(0.46, 0.50, diag) * (1.0 - smoothstep(0.50, 0.54, diag));\n"
        "  base += vec3(1.0, 0.35, 0.22) * band * 0.22;\n"
        "  vec2 g = abs(fract(p * uRes / 48.0) - 0.5);\n"
        "  base += vec3(0.045) * step(0.47, max(g.x, g.y));\n"
        "  gl_FragColor = vec4(base, 1.0);\n"
        "}\n";

static const char *kD3DVertexShader =
        "attribute vec4 aPos;\n"
        "attribute vec4 aCol;\n"
        "attribute vec2 aUv;\n"
        "attribute vec2 aUv1;\n"
        "uniform float uFlipY;\n"
        "varying vec4 vCol;\n"
        "varying vec2 vUv;\n"
        "varying vec2 vUv1;\n"
        "varying float vFogDepth;\n"
        "void main() {\n"
        "  vCol = aCol;\n"
        "  vUv = aUv;\n"
        "  vUv1 = aUv1;\n"
        "  vFogDepth = aPos.w;\n"
        "  gl_Position = vec4(aPos.x, aPos.y * uFlipY, aPos.z, aPos.w);\n"
        "}\n";

static const char *kD3DFragmentShader =
        "#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
        "precision highp float;\n"
        "#else\n"
        "precision mediump float;\n"
        "#endif\n"
        "varying vec4 vCol;\n"
        "varying vec2 vUv;\n"
        "varying vec2 vUv1;\n"
        "varying float vFogDepth;\n"
        "uniform sampler2D uTex;\n"
        "uniform sampler2D uTex1;\n"
        "uniform samplerCube uCubeTex1;\n"
        "uniform float uUseTexRgb;\n"
        "uniform float uUseTexA;\n"
        "uniform float uHasTex1;\n"
        "uniform float uHasCube1;\n"
        "uniform float uColorOp1;\n"
        "uniform float uAlphaOp1;\n"
        "uniform float uColor1Arg1;\n"
        "uniform float uColor1Arg2;\n"
        "uniform float uAlpha1Arg1;\n"
        "uniform float uAlpha1Arg2;\n"
        "uniform vec4 uTFactor;\n"
        "uniform float uAlphaTest;\n"
        "uniform float uAlphaFunc;\n"
        "uniform float uAlphaRef;\n"
        "uniform float uColorkeyDiscard;\n"
        "uniform float uFogEnable;\n"
        "uniform float uFogMode;\n"
        "uniform vec3 uFogColor;\n"
        "uniform float uFogStart;\n"
        "uniform float uFogEnd;\n"
        "uniform float uFogDensity;\n"
        "uniform float uMc2HookShader;\n"
        "vec3 selectRgb(int arg, vec4 cur, vec4 t1, vec4 dif, vec4 tf) {\n"
        "  int base = arg - (arg / 16) * 16;\n"
        "  vec4 s = cur;\n"
        "  if (base == 0) s = dif;\n"
        "  else if (base == 2) s = t1;\n"
        "  else if (base == 3) s = tf;\n"
        "  vec3 res = (arg >= 32) ? vec3(s.a) : s.rgb;\n"
        "  int hi = arg - (arg / 32) * 32;\n"
        "  if (hi >= 16) res = vec3(1.0) - res;\n"
        "  return res;\n"
        "}\n"
        "float selectA(int arg, float cur, float t1, float dif, float tf) {\n"
        "  int base = arg - (arg / 16) * 16;\n"
        "  float res = cur;\n"
        "  if (base == 0) res = dif;\n"
        "  else if (base == 2) res = t1;\n"
        "  else if (base == 3) res = tf;\n"
        "  int hi = arg - (arg / 32) * 32;\n"
        "  if (hi >= 16) res = 1.0 - res;\n"
        "  return res;\n"
        "}\n"
        "void main() {\n"
        "  vec4 c = vCol;\n"
        "  if (uUseTexRgb > 0.5 || uUseTexA > 0.5) {\n"
        "    vec4 tc = texture2D(uTex, vUv);\n"
        "    if (uUseTexRgb > 0.5) c.rgb = tc.rgb * vCol.rgb;\n"
        "    if (uUseTexA > 0.5) c.a = tc.a * vCol.a;\n"
        "  }\n"
        "  int cop1 = int(uColorOp1 + 0.5);\n"
        "  int aop1 = int(uAlphaOp1 + 0.5);\n"
        "  if (cop1 > 1 || aop1 > 1) {\n"
        "    vec2 cn = clamp(vec2(vUv1.x * 2.0 - 1.0, 1.0 - vUv1.y * 2.0), -1.0, 1.0);\n"
        "    float cz = -sqrt(max(0.08, 1.0 - dot(cn, cn) * 0.72));\n"
        "    vec3 cubeDir = normalize(vec3(cn, cz));\n"
        "    vec4 t1 = (uHasCube1 > 0.5) ? textureCube(uCubeTex1, cubeDir)\n"
        "            : ((uHasTex1 > 0.5) ? texture2D(uTex1, vUv1) : vec4(1.0));\n"
        "    vec4 cur = c;\n"
        "    if (cop1 > 1) {\n"
        "      vec3 a1 = selectRgb(int(uColor1Arg1 + 0.5), cur, t1, vCol, uTFactor);\n"
        "      vec3 a2 = selectRgb(int(uColor1Arg2 + 0.5), cur, t1, vCol, uTFactor);\n"
        "      if (cop1 == 2) c.rgb = a1;\n"
        "      else if (cop1 == 3) c.rgb = a2;\n"
        "      else if (cop1 == 4) c.rgb = a1 * a2;\n"
        "      else if (cop1 == 5) c.rgb = clamp(a1 * a2 * 2.0, 0.0, 1.0);\n"
        "      else if (cop1 == 6) c.rgb = clamp(a1 * a2 * 4.0, 0.0, 1.0);\n"
        "      else if (cop1 == 7) c.rgb = clamp(a1 + a2, 0.0, 1.0);\n"
        "      else if (cop1 == 11) c.rgb = clamp(a1 + a2 * (1.0 - a1), 0.0, 1.0);\n"
        "      else if (cop1 == 12) c.rgb = mix(a2, a1, vCol.a);\n"
        "      else if (cop1 == 13) c.rgb = mix(a2, a1, t1.a);\n"
        "      else if (cop1 == 14) c.rgb = mix(a2, a1, uTFactor.a);\n"
        "      else if (cop1 == 16) c.rgb = mix(a2, a1, cur.a);\n"
        "      else c.rgb = a1 * a2;\n"
        "    }\n"
        "    if (uMc2HookShader > 0.5 && (uHasCube1 > 0.5 || cop1 == 7 || cop1 == 11)) {\n"
        "      float lum = dot(c.rgb, vec3(0.299, 0.587, 0.114));\n"
        "      float specBoost = pow(clamp(lum, 0.0, 1.0), 1.65) * 0.22;\n"
        "      c.rgb = clamp(c.rgb * 1.08 + vec3(specBoost), 0.0, 1.0);\n"
        "    }\n"
        "    if (aop1 > 1) {\n"
        "      float aa1 = selectA(int(uAlpha1Arg1 + 0.5), cur.a, t1.a, vCol.a, uTFactor.a);\n"
        "      float aa2 = selectA(int(uAlpha1Arg2 + 0.5), cur.a, t1.a, vCol.a, uTFactor.a);\n"
        "      if (aop1 == 2) c.a = aa1;\n"
        "      else if (aop1 == 3) c.a = aa2;\n"
        "      else if (aop1 == 4) c.a = aa1 * aa2;\n"
        "      else if (aop1 == 5) c.a = clamp(aa1 * aa2 * 2.0, 0.0, 1.0);\n"
        "      else if (aop1 == 7) c.a = clamp(aa1 + aa2, 0.0, 1.0);\n"
        "      else if (aop1 == 11) c.a = clamp(aa1 + aa2 * (1.0 - aa1), 0.0, 1.0);\n"
        "      else if (aop1 == 12) c.a = mix(aa2, aa1, vCol.a);\n"
        "      else if (aop1 == 13) c.a = mix(aa2, aa1, t1.a);\n"
        "      else if (aop1 == 14) c.a = mix(aa2, aa1, uTFactor.a);\n"
        "      else if (aop1 == 16) c.a = mix(aa2, aa1, cur.a);\n"
        "      else c.a = aa1 * aa2;\n"
        "    }\n"
        "  }\n"
        "  if (uAlphaTest > 0.5) {\n"
        "    int fn = int(uAlphaFunc + 0.5);\n"
        "    bool pass = true;\n"
        "    if (fn == 1) pass = false;\n"
        "    else if (fn == 2) pass = (c.a < uAlphaRef - 0.002);\n"
        "    else if (fn == 3) pass = (abs(c.a - uAlphaRef) < 0.004);\n"
        "    else if (fn == 4) pass = (c.a <= uAlphaRef + 0.002);\n"
        "    else if (fn == 5) pass = (c.a > uAlphaRef + 0.002);\n"
        "    else if (fn == 6) pass = (abs(c.a - uAlphaRef) >= 0.004);\n"
        "    else if (fn == 7) pass = (c.a >= uAlphaRef - 0.002);\n"
        "    if (!pass) discard;\n"
        "  } else if (uColorkeyDiscard > 0.5 && c.a < 0.05) {\n"
        "    discard;\n"
        "  }\n"
        "  if (uFogEnable > 0.5) {\n"
        "    float d = max(0.0, vFogDepth);\n"
        "    float f = 1.0;\n"
        "    int fm = int(uFogMode + 0.5);\n"
        "    if (fm == 3) {\n"
        "      float denom = max(0.001, uFogEnd - uFogStart);\n"
        "      f = clamp((uFogEnd - d) / denom, 0.0, 1.0);\n"
        "    } else if (fm == 1) {\n"
        "      f = clamp(exp(-uFogDensity * d), 0.0, 1.0);\n"
        "    } else if (fm == 2) {\n"
        "      float dd = uFogDensity * d;\n"
        "      f = clamp(exp(-(dd * dd)), 0.0, 1.0);\n"
        "    }\n"
        "    c.rgb = mix(uFogColor, c.rgb, f);\n"
        "  }\n"
        "  gl_FragColor = c;\n"
        "}\n";

static const char *kBloomExtractShader =
        "precision mediump float;\n"
        "varying vec2 vUv;\n"
        "uniform sampler2D uTex;\n"
        "void main() {\n"
        "  vec3 c = texture2D(uTex, vUv).rgb;\n"
        "  float mx = max(c.r, max(c.g, c.b));\n"
        "  float luma = dot(c, vec3(0.299, 0.587, 0.114));\n"
        "  float energy = mix(luma, mx, 0.55);\n"
        "  float w = smoothstep(0.60, 0.94, energy);\n"
        "  gl_FragColor = vec4(c * w, 1.0);\n"
        "}\n";

static const char *kBloomBlurShader =
        "precision mediump float;\n"
        "varying vec2 vUv;\n"
        "uniform sampler2D uTex;\n"
        "uniform vec2 uStep;\n"
        "void main() {\n"
        "  vec3 acc = texture2D(uTex, vUv).rgb * 0.227027;\n"
        "  acc += texture2D(uTex, vUv + uStep * 1.384615).rgb * 0.316216;\n"
        "  acc += texture2D(uTex, vUv - uStep * 1.384615).rgb * 0.316216;\n"
        "  acc += texture2D(uTex, vUv + uStep * 3.230769).rgb * 0.070270;\n"
        "  acc += texture2D(uTex, vUv - uStep * 3.230769).rgb * 0.070270;\n"
        "  gl_FragColor = vec4(acc, 1.0);\n"
        "}\n";

static const char *kPostShader =
        "#ifdef GL_FRAGMENT_PRECISION_HIGH\n"
        "precision highp float;\n"
        "#else\n"
        "precision mediump float;\n"
        "#endif\n"
        "varying vec2 vUv;\n"
        "uniform sampler2D uSceneTex;\n"
        "uniform sampler2D uBloomTex;\n"
        "uniform vec2 uTexel;\n"
        "uniform float uFxaa;\n"
        "uniform float uBloom;\n"
        "uniform float uEnhance;\n"
        "float luma3(vec3 c) { return dot(c, vec3(0.299, 0.587, 0.114)); }\n"
        "void main() {\n"
        "  vec3 c = texture2D(uSceneTex, vUv).rgb;\n"
        "  vec3 n = texture2D(uSceneTex, vUv + vec2(0.0, uTexel.y)).rgb;\n"
        "  vec3 s = texture2D(uSceneTex, vUv - vec2(0.0, uTexel.y)).rgb;\n"
        "  vec3 e = texture2D(uSceneTex, vUv + vec2(uTexel.x, 0.0)).rgb;\n"
        "  vec3 w = texture2D(uSceneTex, vUv - vec2(uTexel.x, 0.0)).rgb;\n"
        "  if (uFxaa > 0.5) {\n"
        "    float lc = luma3(c), ln = luma3(n), ls = luma3(s), le = luma3(e), lw = luma3(w);\n"
        "    float lMin = min(lc, min(min(ln, ls), min(le, lw)));\n"
        "    float lMax = max(lc, max(max(ln, ls), max(le, lw)));\n"
        "    float range = lMax - lMin;\n"
        "    if (range >= max(0.045, lMax * 0.14)) {\n"
        "      vec2 dir = vec2(-(ln - ls), (le - lw));\n"
        "      float dirReduce = max((ln + ls + le + lw) * 0.03125, 0.0078125);\n"
        "      float rcpDirMin = 1.0 / (min(abs(dir.x), abs(dir.y)) + dirReduce);\n"
        "      dir = clamp(dir * rcpDirMin, vec2(-3.5), vec2(3.5)) * uTexel;\n"
        "      vec3 rgbA = 0.5 * (texture2D(uSceneTex, vUv + dir * (1.0 / 3.0 - 0.5)).rgb +\n"
        "                         texture2D(uSceneTex, vUv + dir * (2.0 / 3.0 - 0.5)).rgb);\n"
        "      vec3 rgbB = rgbA * 0.5 + 0.25 * (texture2D(uSceneTex, vUv + dir * -0.5).rgb +\n"
        "                                       texture2D(uSceneTex, vUv + dir * 0.5).rgb);\n"
        "      float lb = luma3(rgbB);\n"
        "      c = (lb < lMin || lb > lMax) ? rgbA : rgbB;\n"
        "    }\n"
        "  }\n"
        "  if (uEnhance > 0.5) {\n"
        "    vec3 blur4 = 0.25 * (n + s + e + w);\n"
        "    c = clamp(c + (c - blur4) * 0.28, 0.0, 1.0);\n"
        "    float lum = luma3(c);\n"
        "    vec3 sat = mix(vec3(lum), c, 1.12);\n"
        "    vec3 curve = mix(sat, sat * sat * (3.0 - 2.0 * sat), 0.28);\n"
        "    c = clamp(curve, 0.0, 1.0);\n"
        "  }\n"
        "  if (uBloom > 0.01) {\n"
        "    vec3 bm = texture2D(uBloomTex, vUv).rgb;\n"
        "    c = clamp(c + bm * uBloom * (1.0 - c * 0.30), 0.0, 1.0);\n"
        "  }\n"
        "  gl_FragColor = vec4(c, 1.0);\n"
        "}\n";

GLuint compileShader(GLenum type, const char *src) {
    GLuint sh = glCreateShader(type);
    glShaderSource(sh, 1, &src, nullptr);
    glCompileShader(sh);
    GLint ok = 0;
    glGetShaderiv(sh, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        GLsizei len = 0;
        glGetShaderInfoLog(sh, sizeof(log), &len, log);
        setError(std::string("shader: ") + std::string(log, (size_t) len));
        glDeleteShader(sh);
        return 0;
    }
    PORTDBG("[GFX] shader GLSL compilado (tipo=0x%X)", type);
    return sh;
}

GLuint buildSimpleProgram(const char *fsSrc) {
    GLuint vs = compileShader(GL_VERTEX_SHADER, kVertexShader);
    if (!vs) return 0;
    GLuint fs = compileShader(GL_FRAGMENT_SHADER, fsSrc);
    if (!fs) {
        glDeleteShader(vs);
        return 0;
    }
    GLuint prog = glCreateProgram();
    glAttachShader(prog, vs);
    glAttachShader(prog, fs);
    glBindAttribLocation(prog, 0, "aPos");
    glLinkProgram(prog);
    GLint ok = 0;
    glGetProgramiv(prog, GL_LINK_STATUS, &ok);
    glDeleteShader(vs);
    glDeleteShader(fs);
    if (!ok) {
        char log[1024];
        GLsizei len = 0;
        glGetProgramInfoLog(prog, sizeof(log), &len, log);
        setError(std::string("link: ") + std::string(log, (size_t) len));
        glDeleteProgram(prog);
        return 0;
    }
    return prog;
}

GLuint buildProgram() {
    return buildSimpleProgram(kFragmentShader);
}

GLuint buildD3DProgram() {
    GLuint vs = compileShader(GL_VERTEX_SHADER, kD3DVertexShader);
    if (!vs) return 0;
    GLuint fs = compileShader(GL_FRAGMENT_SHADER, kD3DFragmentShader);
    if (!fs) {
        glDeleteShader(vs);
        return 0;
    }
    GLuint prog = glCreateProgram();
    glAttachShader(prog, vs);
    glAttachShader(prog, fs);
    glBindAttribLocation(prog, 0, "aPos");
    glBindAttribLocation(prog, 1, "aCol");
    glBindAttribLocation(prog, 2, "aUv");
    glBindAttribLocation(prog, 3, "aUv1");
    glLinkProgram(prog);
    GLint ok = 0;
    glGetProgramiv(prog, GL_LINK_STATUS, &ok);
    glDeleteShader(vs);
    glDeleteShader(fs);
    if (!ok) {
        char log[1024];
        GLsizei len = 0;
        glGetProgramInfoLog(prog, sizeof(log), &len, log);
        setError(std::string("d3d link: ") + std::string(log, (size_t) len));
        glDeleteProgram(prog);
        return 0;
    }
    PORTDBG("[GFX] programa D3D9->GLES enlazado (alpha test + blending)");
    return prog;
}

static GLenum mapD3DBlend(uint8_t d3dBlend, GLenum fallback) {
    switch (d3dBlend) {
        case 1: return GL_ZERO;
        case 2: return GL_ONE;
        case 3: return GL_SRC_COLOR;
        case 4: return GL_ONE_MINUS_SRC_COLOR;
        case 5: return GL_SRC_ALPHA;
        case 6: return GL_ONE_MINUS_SRC_ALPHA;
        case 7: return GL_DST_ALPHA;
        case 8: return GL_ONE_MINUS_DST_ALPHA;
        case 9: return GL_DST_COLOR;
        case 10: return GL_ONE_MINUS_DST_COLOR;
        default: return fallback;
    }
}

static GLint mapD3DWrap(uint8_t d3dAddr, uint8_t zEnable) {
    switch (d3dAddr) {
        case 1: return GL_REPEAT;
        case 2: return GL_MIRRORED_REPEAT;
        case 3:
        case 4: return GL_CLAMP_TO_EDGE;
        default: return zEnable ? GL_REPEAT : GL_CLAMP_TO_EDGE;
    }
}

static GLenum mapD3DPrim(uint32_t primType) {
    switch (primType) {
        case 1: return GL_POINTS;
        case 2: return GL_LINES;
        case 3: return GL_LINE_STRIP;
        case 4: return GL_TRIANGLES;
        case 5: return GL_TRIANGLE_STRIP;
        case 6: return GL_TRIANGLE_FAN;
        default: return GL_TRIANGLES;
    }
}

static GLenum mapD3DCmpFunc(uint8_t d3dCmp) {
    switch (d3dCmp) {
        case 1: return GL_NEVER;
        case 2: return GL_LESS;
        case 3: return GL_EQUAL;
        case 4: return GL_LEQUAL;
        case 5: return GL_GREATER;
        case 6: return GL_NOTEQUAL;
        case 7: return GL_GEQUAL;
        case 8:
        default: return GL_ALWAYS;
    }
}

static GLenum mapD3DBlendOp(uint8_t d3dBlendOp) {
    switch (d3dBlendOp) {
        case 2: return GL_FUNC_SUBTRACT;
        case 3: return GL_FUNC_REVERSE_SUBTRACT;
        default: return GL_FUNC_ADD;
    }
}

static GLenum mapD3DStencilOp(uint8_t d3dOp) {
    switch (d3dOp) {
        case 1: return GL_KEEP;
        case 2: return GL_ZERO;
        case 3: return GL_REPLACE;
        case 4: return GL_INCR_WRAP;
        case 5: return GL_DECR_WRAP;
        case 6: return GL_INVERT;
        case 7: return GL_INCR;
        case 8: return GL_DECR;
        default: return GL_KEEP;
    }
}

struct GlTexCacheEntry {
    GLuint texId = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    uint32_t version = 0;
    long lastUsedFrame = 0;
    bool isRt = false;
    bool hasMipmaps = false;
    GLenum lastMinFilter = 0;
    GLenum lastMagFilter = 0;
    float lastAniso = -1.0f;
    GLint lastWrapS = 0;
    GLint lastWrapT = 0;
};

static void bindStageTexture(std::unordered_map<uint32_t, GlTexCacheEntry> &texCache,
                             int unit, uint32_t va, uint32_t w, uint32_t h, uint32_t ver,
                             const uint8_t *rgba, uint8_t isRt, uint8_t wrapU, uint8_t wrapV,
                             uint8_t zEnable, GLint filter, float maxAniso, long frame) {
    GlTexCacheEntry &te = texCache[va];
    if (te.texId == 0) {
        glGenTextures(1, &te.texId);
    }
    te.lastUsedFrame = frame;
    if (isRt) te.isRt = true;
    glActiveTexture(unit == 0 ? GL_TEXTURE0 : GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, te.texId);
    bool isNpot = ((w & (w - 1u)) != 0u) || ((h & (h - 1u)) != 0u);
    if (isRt) {
        te.hasMipmaps = false;
        if (te.width != w || te.height != h) {
            te.width = w;
            te.height = h;
            te.version = 1;
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)w, (GLsizei)h, 0,
                         GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        }
    } else if (te.width != w || te.height != h) {
        te.width = w;
        te.height = h;
        te.version = ver;
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)w, (GLsizei)h, 0,
                     GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        if (!isNpot && rgba) {
            glGenerateMipmap(GL_TEXTURE_2D);
            te.hasMipmaps = true;
        } else {
            te.hasMipmaps = false;
        }
    } else if (te.version != ver) {
        te.version = ver;
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, (GLsizei)w, (GLsizei)h,
                        GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        if (!isNpot && rgba) {
            glGenerateMipmap(GL_TEXTURE_2D);
            te.hasMipmaps = true;
        } else {
            te.hasMipmaps = false;
        }
    }
    GLenum magFilter = (filter == GL_NEAREST) ? GL_NEAREST : GL_LINEAR;
    GLenum minFilter = (filter == GL_NEAREST)
                       ? GL_NEAREST
                       : ((te.hasMipmaps && !isNpot && !isRt) ? GL_LINEAR_MIPMAP_LINEAR : GL_LINEAR);
    if (te.lastMinFilter != minFilter) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, minFilter);
        te.lastMinFilter = minFilter;
    }
    if (te.lastMagFilter != magFilter) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, magFilter);
        te.lastMagFilter = magFilter;
    }
    if (maxAniso > 1.0f) {
        float reqAniso = (float)std::max(1, gAnisoLevel.load());
        float activeAniso = std::min(maxAniso, reqAniso);
        float targetAniso = (filter != GL_NEAREST && te.hasMipmaps && !isNpot && !isRt && reqAniso > 1.0f) ? activeAniso : 1.0f;
        if (te.lastAniso != targetAniso) {
            glTexParameterf(GL_TEXTURE_2D, 0x84FE /* GL_TEXTURE_MAX_ANISOTROPY_EXT */, targetAniso);
            te.lastAniso = targetAniso;
        }
    }
    GLint wrapS = (isRt || isNpot) ? GL_CLAMP_TO_EDGE : mapD3DWrap(wrapU, zEnable);
    GLint wrapT = (isRt || isNpot) ? GL_CLAMP_TO_EDGE : mapD3DWrap(wrapV, zEnable);
    if (te.lastWrapS != wrapS) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrapS);
        te.lastWrapS = wrapS;
    }
    if (te.lastWrapT != wrapT) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrapT);
        te.lastWrapT = wrapT;
    }
}

static aaudio_data_callback_result_t aaudioDataCallback(
        AAudioStream *stream, void *userData, void *audioData, int32_t numFrames) {
    (void)stream;
    (void)userData;
    int16_t *pcm = (int16_t *)audioData;
    mc2_audio_mix(pcm, (int)numFrames, 44100);
    int dm_peak = mc2_dm_mix_pcm(pcm, (int)numFrames, 44100);
    static int s_audio_ticks = 0;
    static int s_max_peak = 0;
    static int s_dm_max = 0;
    if (dm_peak > s_dm_max) s_dm_max = dm_peak;
    for (int i = 0; i < (int)numFrames * 2; i += 16) {
        int a = pcm[i] < 0 ? -pcm[i] : pcm[i];
        if (a > s_max_peak) s_max_peak = a;
    }
    if ((++s_audio_ticks % 1000) == 0) {
        LOGI("AAudio mix ticks=%d total_peak=%d dm_peak=%d", s_audio_ticks, s_max_peak, s_dm_max);
        s_max_peak = 0;
        s_dm_max = 0;
    }
    return AAUDIO_CALLBACK_RESULT_CONTINUE;
}

void renderMain() {
    ANativeWindow *win = gWindow;
    setpriority(PRIO_PROCESS, 0, -4);
    if (!win) {
        setError("sin ANativeWindow");
        gRunning = false;
        return;
    }

    EGLDisplay dpy = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    if (dpy == EGL_NO_DISPLAY || !eglInitialize(dpy, nullptr, nullptr)) {
        setError("eglInitialize falló en el hilo de render");
        gRunning = false;
        return;
    }

    EGLConfig cfg = chooseConfig(dpy, gRenderer.load(), EGL_WINDOW_BIT);
    if (!cfg) {
        setError("sin EGLConfig compatible con la ventana");
        eglTerminate(dpy);
        gRunning = false;
        return;
    }

    EGLSurface surf = eglCreateWindowSurface(dpy, cfg, win, nullptr);
    if (surf == EGL_NO_SURFACE) {
        setError("eglCreateWindowSurface falló");
        eglTerminate(dpy);
        gRunning = false;
        return;
    }

    EGLContext ctx = createContext(dpy, cfg, gRenderer.load());
    if (ctx == EGL_NO_CONTEXT) {
        setError("eglCreateContext falló");
        eglDestroySurface(dpy, surf);
        eglTerminate(dpy);
        gRunning = false;
        return;
    }

    if (!eglMakeCurrent(dpy, surf, surf, ctx)) {
        setError("eglMakeCurrent falló");
        eglDestroyContext(dpy, ctx);
        eglDestroySurface(dpy, surf);
        eglTerminate(dpy);
        gRunning = false;
        return;
    }

    eglSwapInterval(dpy, gVsync.load() ? 1 : 0);

    {
        std::lock_guard<std::mutex> lock(gMutex);
        const char *ver = (const char *) glGetString(GL_VERSION);
        gGlInfo = ver ? ver : "?";
        PORTDBG("[GFX] contexto EGL creado · GL_VERSION=%s",
                ver ? ver : "?");
    }

    GLuint prog = buildProgram();
    GLuint d3dProg = buildD3DProgram();
    if (!prog || !d3dProg) {
        if (prog) glDeleteProgram(prog);
        if (d3dProg) glDeleteProgram(d3dProg);
        gRunning = false;
        eglMakeCurrent(dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
        eglDestroyContext(dpy, ctx);
        eglDestroySurface(dpy, surf);
        eglTerminate(dpy);
        return;
    }

    GLuint bloomExtractProg = buildSimpleProgram(kBloomExtractShader);
    GLuint bloomBlurProg = buildSimpleProgram(kBloomBlurShader);
    GLuint postProg = buildSimpleProgram(kPostShader);
    GLint uBloomExtTex = bloomExtractProg ? glGetUniformLocation(bloomExtractProg, "uTex") : -1;
    GLint uBloomBlurTex = bloomBlurProg ? glGetUniformLocation(bloomBlurProg, "uTex") : -1;
    GLint uBloomBlurStep = bloomBlurProg ? glGetUniformLocation(bloomBlurProg, "uStep") : -1;
    GLint uPostSceneTex = postProg ? glGetUniformLocation(postProg, "uSceneTex") : -1;
    GLint uPostBloomTex = postProg ? glGetUniformLocation(postProg, "uBloomTex") : -1;
    GLint uPostTexel = postProg ? glGetUniformLocation(postProg, "uTexel") : -1;
    GLint uPostFxaa = postProg ? glGetUniformLocation(postProg, "uFxaa") : -1;
    GLint uPostBloom = postProg ? glGetUniformLocation(postProg, "uBloom") : -1;
    GLint uPostEnhance = postProg ? glGetUniformLocation(postProg, "uEnhance") : -1;

    const GLfloat verts[] = {-1.f, -1.f, 1.f, -1.f, -1.f, 1.f, 1.f, 1.f};
    GLuint vbo = 0;
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);

    GLuint d3dVbo = 0, d3dIbo = 0;
    glGenBuffers(1, &d3dVbo);
    glGenBuffers(1, &d3dIbo);
    GLsizeiptr curVboCap = 0, curIboCap = 0;

    GLint uD3DTex = glGetUniformLocation(d3dProg, "uTex");
    GLint uD3DTex1 = glGetUniformLocation(d3dProg, "uTex1");
    GLint uD3DCubeTex1 = glGetUniformLocation(d3dProg, "uCubeTex1");
    GLint uD3DFlipY = glGetUniformLocation(d3dProg, "uFlipY");
    GLint uD3DUseTexRgb = glGetUniformLocation(d3dProg, "uUseTexRgb");
    GLint uD3DUseTexA = glGetUniformLocation(d3dProg, "uUseTexA");
    GLint uD3DHasTex1 = glGetUniformLocation(d3dProg, "uHasTex1");
    GLint uD3DHasCube1 = glGetUniformLocation(d3dProg, "uHasCube1");
    GLint uD3DColorOp1 = glGetUniformLocation(d3dProg, "uColorOp1");
    GLint uD3DAlphaOp1 = glGetUniformLocation(d3dProg, "uAlphaOp1");
    GLint uD3DColor1Arg1 = glGetUniformLocation(d3dProg, "uColor1Arg1");
    GLint uD3DColor1Arg2 = glGetUniformLocation(d3dProg, "uColor1Arg2");
    GLint uD3DAlpha1Arg1 = glGetUniformLocation(d3dProg, "uAlpha1Arg1");
    GLint uD3DAlpha1Arg2 = glGetUniformLocation(d3dProg, "uAlpha1Arg2");
    GLint uD3DTFactor = glGetUniformLocation(d3dProg, "uTFactor");
    GLint uD3DAlphaTest = glGetUniformLocation(d3dProg, "uAlphaTest");
    GLint uD3DAlphaFunc = glGetUniformLocation(d3dProg, "uAlphaFunc");
    GLint uD3DAlphaRef = glGetUniformLocation(d3dProg, "uAlphaRef");
    GLint uD3DColorkeyDiscard = glGetUniformLocation(d3dProg, "uColorkeyDiscard");
    GLint uD3DFogEnable = glGetUniformLocation(d3dProg, "uFogEnable");
    GLint uD3DFogMode = glGetUniformLocation(d3dProg, "uFogMode");
    GLint uD3DFogColor = glGetUniformLocation(d3dProg, "uFogColor");
    GLint uD3DFogStart = glGetUniformLocation(d3dProg, "uFogStart");
    GLint uD3DFogEnd = glGetUniformLocation(d3dProg, "uFogEnd");
    GLint uD3DFogDensity = glGetUniformLocation(d3dProg, "uFogDensity");
    GLint uD3DMc2HookShader = glGetUniformLocation(d3dProg, "uMc2HookShader");

    struct GlFboEntry {
        GLuint fbo = 0;
        GLuint depthStencilRb = 0;
        uint32_t w = 0;
        uint32_t h = 0;
    };
    struct GlCubeEntry {
        GLuint texId = 0;
        GLuint fbo[6] = {0, 0, 0, 0, 0, 0};
        GLuint depthStencilRb = 0;
        uint32_t edge = 0;
        long lastUsedFrame = 0;
    };
    std::unordered_map<uint32_t, GlTexCacheEntry> texCache;
    std::unordered_map<uint32_t, GlFboEntry> fboCache;
    std::unordered_map<uint32_t, GlCubeEntry> cubeCache;
    float maxAniso = 1.0f;
    const char *glExts = reinterpret_cast<const char *>(glGetString(GL_EXTENSIONS));
    if (glExts && std::strstr(glExts, "GL_EXT_texture_filter_anisotropic") != nullptr) {
        GLfloat maxVal = 1.0f;
        glGetFloatv(0x84FF /* GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT */, &maxVal);
        maxAniso = std::min(16.0f, std::max(1.0f, (float)maxVal));
    }
    GLuint persistTex = 0;
    int persistW = 0;
    int persistH = 0;
    bool persistValid = false;
    static std::atomic<bool> s_firstFrameLogged{false};

#ifndef GL_READ_FRAMEBUFFER
#define GL_READ_FRAMEBUFFER 0x8CA8
#endif
#ifndef GL_DRAW_FRAMEBUFFER
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#endif
#ifndef GL_RGBA8
#define GL_RGBA8 0x8058
#endif
#ifndef GL_DEPTH24_STENCIL8
#define GL_DEPTH24_STENCIL8 0x88F0
#endif
#ifndef GL_MAX_SAMPLES
#define GL_MAX_SAMPLES 0x8D57
#endif

    typedef void (*PFN_RB_MULTISAMPLE)(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
    typedef void (*PFN_BLIT_FB)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
    const char *glVerStr = reinterpret_cast<const char *>(glGetString(GL_VERSION));
    const bool isGles3Ctx = (glVerStr && std::strstr(glVerStr, "OpenGL ES 3.") != nullptr);
    auto pRenderbufferStorageMultisample = isGles3Ctx
            ? reinterpret_cast<PFN_RB_MULTISAMPLE>(eglGetProcAddress("glRenderbufferStorageMultisample"))
            : nullptr;
    auto pBlitFramebuffer = isGles3Ctx
            ? reinterpret_cast<PFN_BLIT_FB>(eglGetProcAddress("glBlitFramebuffer"))
            : nullptr;
    GLint hwMaxSamples = 0;
    if (isGles3Ctx && pRenderbufferStorageMultisample && pBlitFramebuffer) {
        glGetIntegerv(GL_MAX_SAMPLES, &hwMaxSamples);
    }
    GLint hwMaxTex = 2048, hwMaxRb = 2048;
    glGetIntegerv(GL_MAX_TEXTURE_SIZE, &hwMaxTex);
    glGetIntegerv(GL_MAX_RENDERBUFFER_SIZE, &hwMaxRb);
    const int maxSurfDim = std::max(1024, std::min(4096, (int)std::min(hwMaxTex, hwMaxRb)));

    GLuint sceneResolveFbo = 0, sceneTex = 0, sceneSingleDepthRb = 0;
    GLuint sceneMsaaFbo = 0, sceneMsaaColorRb = 0, sceneMsaaDepthRb = 0;
    GLuint bloomFboA = 0, bloomTexA = 0, bloomFboB = 0, bloomTexB = 0;
    int curSceneW = 0, curSceneH = 0, curSceneMsaa = -1;
    int curBloomW = 0, curBloomH = 0;
    bool sceneFboReady = false;

    AAudioStreamBuilder *audioBuilder = nullptr;
    AAudioStream *audioStream = nullptr;
    if (AAudio_createStreamBuilder(&audioBuilder) == AAUDIO_OK) {
        AAudioStreamBuilder_setFormat(audioBuilder, AAUDIO_FORMAT_PCM_I16);
        AAudioStreamBuilder_setChannelCount(audioBuilder, 2);
        AAudioStreamBuilder_setSampleRate(audioBuilder, 44100);
        AAudioStreamBuilder_setDataCallback(audioBuilder, aaudioDataCallback, nullptr);
        AAudioStreamBuilder_setPerformanceMode(audioBuilder, AAUDIO_PERFORMANCE_MODE_LOW_LATENCY);
        if (AAudioStreamBuilder_openStream(audioBuilder, &audioStream) == AAUDIO_OK) {
            AAudioStream_requestStart(audioStream);
            LOGI("AAudio stream started (44.1kHz stereo)");
            PORTDBG("[AUDIO] AAudio 44.1 kHz estereo · LOW_LATENCY iniciado");
        }
        AAudioStreamBuilder_delete(audioBuilder);
    }

    auto start = std::chrono::steady_clock::now();
    auto fpsWindow = start;
    int fpsFrames = 0;
    int gameFpsFrames = 0;
    uint32_t lastGameFrameId = 0;
    long long renderWorkUs = 0;
    long frame = 0;

    while (gRunning.load()) {
        auto loopStart = std::chrono::steady_clock::now();
        int w = ANativeWindow_getWidth(win);
        int h = ANativeWindow_getHeight(win);
        gWidth = w;
        gHeight = h;

        // 16:9 aspect ratio target on window
        int targetW = w;
        int targetH = h;
        if (w * 9 > h * 16) {
            targetW = h * 16 / 9;
        } else {
            targetH = w * 9 / 16;
        }
        int scale = std::max(50, std::min(200, gScale.load()));
        int reqMsaa = gMsaaSamples.load();
        int activeMsaa = (isGles3Ctx && pRenderbufferStorageMultisample && pBlitFramebuffer &&
                          hwMaxSamples >= 2 && reqMsaa >= 2)
                         ? std::min(reqMsaa, (int)hwMaxSamples)
                         : 0;
        if (activeMsaa >= 4) activeMsaa = 4;
        else if (activeMsaa >= 2) activeMsaa = 2;
        else activeMsaa = 0;

        const int winVx = (w - targetW) / 2;
        const int winVy = (h - targetH) / 2;
        const int winVw = std::max(1, targetW);
        const int winVh = std::max(1, targetH);

        const bool wantBloom = gBloomEnabled.load() && bloomExtractProg && bloomBlurProg && postProg;
        const bool wantFxaa = gFxaaEnabled.load() && postProg;
        const bool wantEnhance = gNightEnhance.load() && postProg;
        const bool wantPost = (wantBloom || wantFxaa || wantEnhance);
        bool useSceneFbo = (isGles3Ctx && (scale != 100 || activeMsaa > 0)) || wantPost;
        int vw = winVw;
        int vh = winVh;
        int vx = winVx;
        int vy = winVy;
        GLuint mainSceneFbo = 0;

        if (useSceneFbo) {
            int effScale = isGles3Ctx ? scale : std::min(100, scale);
            int desiredW = std::min(maxSurfDim, std::max(1, targetW * effScale / 100));
            int desiredH = std::min(maxSurfDim, std::max(1, targetH * effScale / 100));
            if (!sceneFboReady || curSceneW != desiredW || curSceneH != desiredH || curSceneMsaa != activeMsaa) {
                if (sceneTex == 0) glGenTextures(1, &sceneTex);
                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, sceneTex);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, desiredW, desiredH, 0,
                             GL_RGBA, GL_UNSIGNED_BYTE, nullptr);

                if (sceneResolveFbo == 0) glGenFramebuffers(1, &sceneResolveFbo);
                glBindFramebuffer(GL_FRAMEBUFFER, sceneResolveFbo);
                glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, sceneTex, 0);

                bool ok = true;
                if (activeMsaa > 0) {
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, 0);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, 0);
                    if (sceneMsaaFbo == 0) glGenFramebuffers(1, &sceneMsaaFbo);
                    if (sceneMsaaColorRb == 0) glGenRenderbuffers(1, &sceneMsaaColorRb);
                    if (sceneMsaaDepthRb == 0) glGenRenderbuffers(1, &sceneMsaaDepthRb);
                    glBindRenderbuffer(GL_RENDERBUFFER, sceneMsaaColorRb);
                    pRenderbufferStorageMultisample(GL_RENDERBUFFER, activeMsaa, GL_RGBA8, desiredW, desiredH);
                    glBindRenderbuffer(GL_RENDERBUFFER, sceneMsaaDepthRb);
                    pRenderbufferStorageMultisample(GL_RENDERBUFFER, activeMsaa, GL_DEPTH24_STENCIL8, desiredW, desiredH);
                    glBindFramebuffer(GL_FRAMEBUFFER, sceneMsaaFbo);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, sceneMsaaColorRb);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, sceneMsaaDepthRb);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, sceneMsaaDepthRb);
                    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
                        activeMsaa = 0;
                        ok = false;
                    }
                }
                if (activeMsaa == 0) {
                    if (sceneSingleDepthRb == 0) glGenRenderbuffers(1, &sceneSingleDepthRb);
                    glBindRenderbuffer(GL_RENDERBUFFER, sceneSingleDepthRb);
                    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, desiredW, desiredH);
                    glBindFramebuffer(GL_FRAMEBUFFER, sceneResolveFbo);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, sceneSingleDepthRb);
                    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, sceneSingleDepthRb);
                    ok = (glCheckFramebufferStatus(GL_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE);
                }
                glBindFramebuffer(GL_FRAMEBUFFER, 0);
                sceneFboReady = ok;
                curSceneW = desiredW;
                curSceneH = desiredH;
                curSceneMsaa = activeMsaa;
                if (ok) {
                    PORTDBG("[GFX] FBO offscreen %dx%d · escala=%d%% · MSAA=%dx",
                            desiredW, desiredH, scale, activeMsaa);
                } else {
                    PORTDBG("[GFX] FBO offscreen falló, volviendo a FBO 0");
                }
            }
            if (sceneFboReady) {
                vx = 0;
                vy = 0;
                vw = curSceneW;
                vh = curSceneH;
                mainSceneFbo = (curSceneMsaa > 0) ? sceneMsaaFbo : sceneResolveFbo;
            } else {
                useSceneFbo = false;
            }
        }
        if (!useSceneFbo) {
            int directScale = std::min(100, scale);
            vw = std::max(1, targetW * directScale / 100);
            vh = std::max(1, targetH * directScale / 100);
            vx = (w - vw) / 2;
            vy = (h - vh) / 2;
            mainSceneFbo = 0;
        }

        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        glDisable(GL_SCISSOR_TEST);
        glDisable(GL_STENCIL_TEST);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glViewport(0, 0, w, h);
        glDepthMask(GL_TRUE);
        glStencilMask(0xFFu);
        glClearColor(0.f, 0.f, 0.f, 1.f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

        if (useSceneFbo) {
            glBindFramebuffer(GL_FRAMEBUFFER, mainSceneFbo);
        }
        glViewport(vx, vy, vw, vh);
        glScissor(vx, vy, vw, vh);
        glEnable(GL_SCISSOR_TEST);

        const Mc2RenderFrame *rf = mc2_pc_acquire_render_frame();
        if (rf && rf->frame_id != 0 && rf->frame_id != lastGameFrameId) {
            lastGameFrameId = rf->frame_id;
            gameFpsFrames++;
        }
        bool hasFullColorClear = false;
        if (rf && rf->frame_id > 0 && rf->batch_count > 0) {
            for (uint32_t bi = 0; bi < rf->batch_count; bi++) {
                const Mc2DrawBatch &cb = rf->batches[bi];
                if (cb.is_clear && cb.target_va == 0 && (cb.clear_flags & 1u) && !cb.has_scissor) {
                    hasFullColorClear = true;
                    break;
                }
            }
        }
        bool renderedD3D = false;
        auto drawFullscreenTex = [&](GLuint texId, GLuint dstFbo, int vpX, int vpY, int vpW, int vpH, bool reenableScissor) {
            if (texId == 0 || vpW <= 0 || vpH <= 0) return;
            Mc2Vertex q[4];
            memset(q, 0, sizeof(q));
            const float xs[4] = { -1.0f,  1.0f, -1.0f,  1.0f };
            const float ys[4] = { -1.0f, -1.0f,  1.0f,  1.0f };
            const float us[4] = {  0.0f,  1.0f,  0.0f,  1.0f };
            const float vs[4] = {  0.0f,  0.0f,  1.0f,  1.0f };
            for (int k = 0; k < 4; k++) {
                q[k].x = xs[k]; q[k].y = ys[k]; q[k].z = 0.0f; q[k].w = 1.0f;
                q[k].r = 255; q[k].g = 255; q[k].b = 255; q[k].a = 255;
                q[k].u = us[k]; q[k].v = vs[k];
            }
            glDisable(GL_SCISSOR_TEST);
            glDisable(GL_BLEND);
            glBlendEquation(GL_FUNC_ADD);
            glDisable(GL_DEPTH_TEST);
            glDepthMask(GL_FALSE);
            glDisable(GL_CULL_FACE);
            glDisable(GL_STENCIL_TEST);
            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            glBindFramebuffer(GL_FRAMEBUFFER, dstFbo);
            glViewport(vpX, vpY, vpW, vpH);
            glUseProgram(d3dProg);
            glBindBuffer(GL_ARRAY_BUFFER, 0);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            glEnableVertexAttribArray(0);
            glEnableVertexAttribArray(1);
            glEnableVertexAttribArray(2);
            glEnableVertexAttribArray(3);
            glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex), &q[0].x);
            glVertexAttribPointer(1, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(Mc2Vertex), &q[0].r);
            glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex), &q[0].u);
            glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex), &q[0].u1);
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, texId);
            glUniform1i(uD3DTex, 0);
            glUniform1i(uD3DTex1, 1);
            glUniform1i(uD3DCubeTex1, 2);
            glUniform1f(uD3DFlipY, 1.0f);
            glUniform1f(uD3DUseTexRgb, 1.0f);
            glUniform1f(uD3DUseTexA, 0.0f);
            glUniform1f(uD3DHasTex1, 0.0f);
            glUniform1f(uD3DHasCube1, 0.0f);
            glUniform1f(uD3DColorOp1, 1.0f);
            glUniform1f(uD3DAlphaOp1, 1.0f);
            glUniform1f(uD3DAlphaTest, 0.0f);
            glUniform1f(uD3DColorkeyDiscard, 0.0f);
            glUniform1f(uD3DFogEnable, 0.0f);
            glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
            if (reenableScissor) {
                glScissor(vpX, vpY, vpW, vpH);
                glEnable(GL_SCISSOR_TEST);
            }
        };
        if (!hasFullColorClear && persistValid && persistTex != 0 && persistW > 0 && persistH > 0) {
            drawFullscreenTex(persistTex, mainSceneFbo, vx, vy, vw, vh, true);
        }
        if (rf && rf->frame_id > 0 && rf->batch_count > 0) {
            renderedD3D = true;
            if (!s_firstFrameLogged.exchange(true)) {
                GLint abits = -1, sbits = -1, dbits = -1;
                glGetIntegerv(GL_ALPHA_BITS, &abits);
                glGetIntegerv(GL_STENCIL_BITS, &sbits);
                glGetIntegerv(GL_DEPTH_BITS, &dbits);
                PORTDBG("[GFX] primer frame D3D · batches=%u verts=%u idx=%u · fb(A=%d,D=%d,S=%d)",
                        rf->batch_count, rf->vert_count, rf->idx_count, abits, dbits, sbits);
            }
            glUseProgram(d3dProg);
            glUniform1i(uD3DTex, 0);
            glUniform1i(uD3DTex1, 1);
            glUniform1i(uD3DCubeTex1, 2);

            if (rf->vert_count > 0 && rf->idx_count > 0) {
                GLsizeiptr vBytes = (GLsizeiptr)(rf->vert_count * sizeof(Mc2Vertex));
                if (vBytes > curVboCap) {
                    curVboCap = vBytes;
                }
                glBindBuffer(GL_ARRAY_BUFFER, d3dVbo);
                glBufferData(GL_ARRAY_BUFFER, curVboCap, nullptr, GL_STREAM_DRAW);
                glBufferSubData(GL_ARRAY_BUFFER, 0, vBytes, rf->verts);

                GLsizeiptr iBytes = (GLsizeiptr)(rf->idx_count * sizeof(uint32_t));
                if (iBytes > curIboCap) {
                    curIboCap = iBytes;
                }
                glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, d3dIbo);
                glBufferData(GL_ELEMENT_ARRAY_BUFFER, curIboCap, nullptr, GL_STREAM_DRAW);
                glBufferSubData(GL_ELEMENT_ARRAY_BUFFER, 0, iBytes, rf->indices);

                glEnableVertexAttribArray(0);
                glEnableVertexAttribArray(1);
                glEnableVertexAttribArray(2);
                glEnableVertexAttribArray(3);
                glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex),
                                      (const void *)offsetof(Mc2Vertex, x));
                glVertexAttribPointer(1, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(Mc2Vertex),
                                      (const void *)offsetof(Mc2Vertex, r));
                glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex),
                                      (const void *)offsetof(Mc2Vertex, u));
                glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(Mc2Vertex),
                                      (const void *)offsetof(Mc2Vertex, u1));
            }

            GLint filter = gLinear.load() ? GL_LINEAR : GL_NEAREST;
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

            GLuint curBoundFbo = mainSceneFbo;
            struct BatchStateCache {
                bool valid = false;
                uint8_t cwrite = 0;
                bool wantBlend = false;
                uint8_t blendOp = 0, srcBlend = 0, dstBlend = 0;
                bool alphaTest = false, colorkey = false;
                uint8_t alphaFunc = 0, alphaRef = 0;
                bool fogSet = false, wantFog = false;
                uint8_t fogMode = 0;
                uint32_t fogColor = 0;
                float fogStart = 0.0f, fogEnd = 0.0f, fogDensity = 0.0f;
                bool stencilEn = false;
                uint8_t stencilFunc = 0, stencilFail = 0, stencilZfail = 0, stencilPass = 0;
                uint32_t stencilRef = 0, stencilMask = 0, stencilWmask = 0;
                bool zEnable = false, zWrite = false;
                uint8_t zFunc = 0, cullMode = 0;
                bool toFbo = false;
                bool tex0Set = false, useTexRgb = false, useTexA = false;
                bool tex1Set = false, hasCube1 = false, hasTex1 = false;
                uint8_t cop1 = 0, aop1 = 0, c1a1 = 0, c1a2 = 0, a1a1 = 0, a1a2 = 0;
                bool tfSet = false;
                uint32_t tfactor = 0;
            } bs;

            for (uint32_t bi = 0; bi < rf->batch_count; bi++) {
                const Mc2DrawBatch &b = rf->batches[bi];

                bool toFbo = (b.target_va != 0 && b.target_w > 0 && b.target_h > 0);
                if (toFbo && b.target_cube_face >= 1u && b.target_cube_face <= 6u) {
                    GlCubeEntry &ce = cubeCache[b.target_va];
                    ce.lastUsedFrame = frame;
                    uint32_t edge = b.target_w;
                    if (ce.texId == 0 || ce.edge != edge) {
                        if (ce.texId == 0) glGenTextures(1, &ce.texId);
                        glActiveTexture(GL_TEXTURE0);
                        glBindTexture(GL_TEXTURE_CUBE_MAP, ce.texId);
                        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                        for (int f = 0; f < 6; f++) {
                            glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + f, 0, GL_RGBA,
                                         (GLsizei)edge, (GLsizei)edge, 0,
                                         GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
                        }
                        if (ce.depthStencilRb == 0) glGenRenderbuffers(1, &ce.depthStencilRb);
                        glBindRenderbuffer(GL_RENDERBUFFER, ce.depthStencilRb);
                        glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8_OES,
                                              (GLsizei)edge, (GLsizei)edge);
                        for (int f = 0; f < 6; f++) {
                            if (ce.fbo[f] == 0) glGenFramebuffers(1, &ce.fbo[f]);
                            glBindFramebuffer(GL_FRAMEBUFFER, ce.fbo[f]);
                            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
                                                   GL_TEXTURE_CUBE_MAP_POSITIVE_X + f, ce.texId, 0);
                            glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
                                                      GL_RENDERBUFFER, ce.depthStencilRb);
                            glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT,
                                                      GL_RENDERBUFFER, ce.depthStencilRb);
                        }
                        ce.edge = edge;
                        curBoundFbo = 0;
                    }
                    GLuint faceFbo = ce.fbo[b.target_cube_face - 1u];
                    if (curBoundFbo != faceFbo) {
                        glBindFramebuffer(GL_FRAMEBUFFER, faceFbo);
                        curBoundFbo = faceFbo;
                    }
                    glUniform1f(uD3DFlipY, -1.0f);
                    int fboX = (b.vp_w > 1.0f) ? (int)b.vp_x : 0;
                    int fboY = (b.vp_h > 1.0f) ? (int)b.vp_y : 0;
                    int fboW = (b.vp_w > 1.0f) ? (int)b.vp_w : (int)edge;
                    int fboH = (b.vp_h > 1.0f) ? (int)b.vp_h : (int)edge;
                    glViewport(fboX, fboY, std::max(1, fboW), std::max(1, fboH));
                    glDisable(GL_SCISSOR_TEST);
                } else if (toFbo) {
                    GlFboEntry &fe = fboCache[b.target_va];
                    GlTexCacheEntry &rte = texCache[b.target_va];
                    rte.isRt = true;
                    rte.lastUsedFrame = frame;
                    if (fe.fbo == 0 || fe.w != b.target_w || fe.h != b.target_h || rte.texId == 0) {
                        if (rte.texId == 0) glGenTextures(1, &rte.texId);
                        glActiveTexture(GL_TEXTURE0);
                        glBindTexture(GL_TEXTURE_2D, rte.texId);
                        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
                        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
                        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
                                     (GLsizei)b.target_w, (GLsizei)b.target_h, 0,
                                     GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
                        rte.width = b.target_w;
                        rte.height = b.target_h;
                        rte.version = 1;

                        if (fe.fbo == 0) glGenFramebuffers(1, &fe.fbo);
                        if (fe.depthStencilRb == 0) glGenRenderbuffers(1, &fe.depthStencilRb);
                        glBindRenderbuffer(GL_RENDERBUFFER, fe.depthStencilRb);
                        glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8_OES,
                                              (GLsizei)b.target_w, (GLsizei)b.target_h);
                        glBindFramebuffer(GL_FRAMEBUFFER, fe.fbo);
                        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, rte.texId, 0);
                        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, fe.depthStencilRb);
                        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_STENCIL_ATTACHMENT, GL_RENDERBUFFER, fe.depthStencilRb);
                        curBoundFbo = fe.fbo;
                        fe.w = b.target_w;
                        fe.h = b.target_h;
                    } else if (curBoundFbo != fe.fbo) {
                        glBindFramebuffer(GL_FRAMEBUFFER, fe.fbo);
                        curBoundFbo = fe.fbo;
                    }
                    glUniform1f(uD3DFlipY, -1.0f);
                    int fboX = (b.vp_w > 1.0f) ? (int)b.vp_x : 0;
                    int fboY = (b.vp_h > 1.0f) ? (int)b.vp_y : 0;
                    int fboW = (b.vp_w > 1.0f) ? (int)b.vp_w : (int)b.target_w;
                    int fboH = (b.vp_h > 1.0f) ? (int)b.vp_h : (int)b.target_h;
                    glViewport(fboX, fboY, std::max(1, fboW), std::max(1, fboH));
                    glScissor(fboX, fboY, std::max(1, fboW), std::max(1, fboH));
                } else {
                    if (curBoundFbo != mainSceneFbo) {
                        glBindFramebuffer(GL_FRAMEBUFFER, mainSceneFbo);
                        curBoundFbo = mainSceneFbo;
                    }
                    glUniform1f(uD3DFlipY, 1.0f);
                    // Viewport & Scissor per batch (preserves 3D car sub-viewport preview and 2D UI)
                    float frameW = (rf->dev_w > 1u) ? (float)rf->dev_w : 1280.0f;
                    float frameH = (rf->dev_h > 1u) ? (float)rf->dev_h : 720.0f;
                    float refW = (b.vp_w > frameW) ? b.vp_w : frameW;
                    float refH = (b.vp_h > frameH) ? b.vp_h : frameH;
                    bool isSubVp = (b.vp_w > 1.0f && b.vp_h > 1.0f && (b.vp_w < (refW - 1.0f) || b.vp_h < (refH - 1.0f)));
                    if (isSubVp) {
                        int curVpX = vx + (int)(b.vp_x * vw / refW);
                        int curVpY = vy + (int)((refH - b.vp_y - b.vp_h) * vh / refH);
                        int curVpW = std::max(1, (int)(b.vp_w * vw / refW));
                        int curVpH = std::max(1, (int)(b.vp_h * vh / refH));
                        glViewport(curVpX, curVpY, curVpW, curVpH);
                        glScissor(curVpX, curVpY, curVpW, curVpH);
                    } else {
                        glViewport(vx, vy, vw, vh);
                        glScissor(vx, vy, vw, vh);
                    }
                }

                if (b.is_clear) {
                    GLbitfield mask = 0;
                    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
                    float frameW = (rf->dev_w > 1u) ? (float)rf->dev_w : 1280.0f;
                    float frameH = (rf->dev_h > 1u) ? (float)rf->dev_h : 720.0f;
                    float refW = toFbo ? (float)std::max<uint16_t>(1, b.target_w) : ((b.vp_w > frameW) ? b.vp_w : frameW);
                    float refH = toFbo ? (float)std::max<uint16_t>(1, b.target_h) : ((b.vp_h > frameH) ? b.vp_h : frameH);
                    bool isSubVp = !toFbo && (b.vp_w > 1.0f && b.vp_h > 1.0f && (b.vp_w < (refW - 1.0f) || b.vp_h < (refH - 1.0f)));
                    GLint prevScissor[4] = {0, 0, 0, 0};
                    if (b.has_scissor) {
                        GLint vpBox[4] = {0, 0, vw, vh};
                        glGetIntegerv(GL_VIEWPORT, vpBox);
                        glGetIntegerv(GL_SCISSOR_BOX, prevScissor);
                        int sx0 = vpBox[0] + (int)((float)b.scissor_x * vpBox[2] / refW);
                        int sw = std::max(1, (int)((float)b.scissor_w * vpBox[2] / refW));
                        int sh = std::max(1, (int)((float)b.scissor_h * vpBox[3] / refH));
                        int sy0 = toFbo
                            ? (vpBox[1] + (int)((float)b.scissor_y * vpBox[3] / refH))
                            : (vpBox[1] + vpBox[3] - (int)(((float)b.scissor_y + (float)b.scissor_h) * vpBox[3] / refH));
                        glScissor(sx0, sy0, sw, sh);
                    }
                    if ((b.clear_flags & 1u) && (!isSubVp || b.has_scissor)) {
                        float cr = ((b.clear_color >> 16) & 0xFFu) / 255.0f;
                        float cg = ((b.clear_color >> 8) & 0xFFu) / 255.0f;
                        float cb = (b.clear_color & 0xFFu) / 255.0f;
                        float ca = ((b.clear_color >> 24) & 0xFFu) / 255.0f;
                        glClearColor(cr, cg, cb, ca);
                        mask |= GL_COLOR_BUFFER_BIT;
                    }
                    if (b.clear_flags & 2u) {
                        glDepthMask(GL_TRUE);
                        mask |= GL_DEPTH_BUFFER_BIT;
                    }
                    if (b.clear_flags & 4u) {
                        glStencilMask(0xFFu);
                        mask |= GL_STENCIL_BUFFER_BIT;
                    }
                    if (mask != 0) {
                        glClear(mask);
                    }
                    if (b.has_scissor) {
                        glScissor(prevScissor[0], prevScissor[1], prevScissor[2], prevScissor[3]);
                    }
                    bs.valid = false;
                    continue;
                }

                if (b.idx_count == 0) continue;

                if (!toFbo && !b.z_enable
                        && b.cwrite_mask == 0x08u && !b.alpha_blend
                        && !b.use_tex_rgb && !b.use_tex_alpha) {
                    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_TRUE);
                    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
                    glClear(GL_COLOR_BUFFER_BIT);
                    bs.valid = false;
                }

                if (!bs.valid || bs.cwrite != b.cwrite_mask) {
                    glColorMask((b.cwrite_mask & 1u) != 0 ? GL_TRUE : GL_FALSE,
                                (b.cwrite_mask & 2u) != 0 ? GL_TRUE : GL_FALSE,
                                (b.cwrite_mask & 4u) != 0 ? GL_TRUE : GL_FALSE,
                                (b.cwrite_mask & 8u) != 0 ? GL_TRUE : GL_FALSE);
                    bs.cwrite = b.cwrite_mask;
                }

                // Keep P8 UI colorkey transparency when alpha_blend=0, EXCEPT when writing alpha-only mask (cwrite=8 or 0)
                // or explicit ONE/ZERO opaque overwrite (e.g. radar destination alpha mask or FBO composite).
                const bool isOpaqueMaskWrite = (!b.alpha_blend && !b.alpha_test &&
                                                ((b.cwrite_mask & 0x07u) == 0u || (b.src_blend == 2 && b.dst_blend == 1)));
                const bool isFlat2DZ = (!b.z_enable || (!b.z_write && b.z_func == 8u));
                const bool wantBlend = b.alpha_blend ||
                                       (b.target_cube_face != 0 && b.src_blend == 2u && b.dst_blend == 2u) ||
                                       (!isOpaqueMaskWrite && (b.tex_rgba != nullptr || b.src_is_rt != 0) &&
                                        b.use_tex_alpha && isFlat2DZ);
                if (!bs.valid || bs.wantBlend != wantBlend) {
                    if (wantBlend) glEnable(GL_BLEND);
                    else glDisable(GL_BLEND);
                }
                if (wantBlend) {
                    if (!bs.valid || !bs.wantBlend || bs.blendOp != b.blend_op) {
                        glBlendEquation(mapD3DBlendOp(b.blend_op));
                        bs.blendOp = b.blend_op;
                    }
                    if (!bs.valid || !bs.wantBlend || bs.srcBlend != b.src_blend || bs.dstBlend != b.dst_blend) {
                        glBlendFunc(mapD3DBlend(b.src_blend, GL_SRC_ALPHA),
                                    mapD3DBlend(b.dst_blend, GL_ONE_MINUS_SRC_ALPHA));
                        bs.srcBlend = b.src_blend;
                        bs.dstBlend = b.dst_blend;
                    }
                } else if (!bs.valid) {
                    glBlendEquation(GL_FUNC_ADD);
                }
                bs.wantBlend = wantBlend;

                const bool wantColorkeyDiscard = (!b.alpha_test && !isOpaqueMaskWrite &&
                                                  b.tex_rgba != nullptr && b.use_tex_alpha && isFlat2DZ);
                if (!bs.valid || bs.alphaTest != (b.alpha_test != 0)) {
                    glUniform1f(uD3DAlphaTest, b.alpha_test ? 1.0f : 0.0f);
                    bs.alphaTest = (b.alpha_test != 0);
                }
                uint8_t af = b.alpha_func ? b.alpha_func : 8u;
                if (!bs.valid || bs.alphaFunc != af) {
                    glUniform1f(uD3DAlphaFunc, (float)af);
                    bs.alphaFunc = af;
                }
                if (!bs.valid || bs.alphaRef != b.alpha_ref) {
                    glUniform1f(uD3DAlphaRef, (float)b.alpha_ref / 255.0f);
                    bs.alphaRef = b.alpha_ref;
                }
                if (!bs.valid || bs.colorkey != wantColorkeyDiscard) {
                    glUniform1f(uD3DColorkeyDiscard, wantColorkeyDiscard ? 1.0f : 0.0f);
                    bs.colorkey = wantColorkeyDiscard;
                }

                const bool wantFog = gFogEnabled.load() && b.fog_enable && !(b.alpha_blend && b.dst_blend == 2u);
                if (!bs.fogSet || bs.wantFog != wantFog) {
                    glUniform1f(uD3DFogEnable, wantFog ? 1.0f : 0.0f);
                    bs.wantFog = wantFog;
                }
                if (wantFog) {
                    uint8_t fm = b.fog_mode ? b.fog_mode : 3u;
                    if (!bs.fogSet || bs.fogMode != fm) {
                        glUniform1f(uD3DFogMode, (float)fm);
                        bs.fogMode = fm;
                    }
                    if (!bs.fogSet || bs.fogColor != b.fog_color) {
                        float fR = ((b.fog_color >> 16) & 0xFFu) / 255.0f;
                        float fG = ((b.fog_color >> 8) & 0xFFu) / 255.0f;
                        float fB = (b.fog_color & 0xFFu) / 255.0f;
                        glUniform3f(uD3DFogColor, fR, fG, fB);
                        bs.fogColor = b.fog_color;
                    }
                    if (!bs.fogSet || bs.fogStart != b.fog_start) {
                        glUniform1f(uD3DFogStart, b.fog_start);
                        bs.fogStart = b.fog_start;
                    }
                    const float effFogEnd = b.fog_end * gMc2HookFogMult.load();
                    if (!bs.fogSet || bs.fogEnd != effFogEnd) {
                        glUniform1f(uD3DFogEnd, effFogEnd);
                        bs.fogEnd = effFogEnd;
                    }
                    if (!bs.fogSet || bs.fogDensity != b.fog_density) {
                        glUniform1f(uD3DFogDensity, b.fog_density);
                        bs.fogDensity = b.fog_density;
                    }
                }
                bs.fogSet = true;
                if (uD3DMc2HookShader >= 0 && !bs.valid) {
                    glUniform1f(uD3DMc2HookShader, gMc2HookShader.load() ? 1.0f : 0.0f);
                }

                bool stEn = (b.stencil_en != 0);
                if (!bs.valid || bs.stencilEn != stEn) {
                    if (stEn) glEnable(GL_STENCIL_TEST);
                    else glDisable(GL_STENCIL_TEST);
                    bs.stencilEn = stEn;
                }
                if (stEn) {
                    if (!bs.valid || bs.stencilFunc != b.stencil_func || bs.stencilRef != b.stencil_ref || bs.stencilMask != b.stencil_mask) {
                        glStencilFunc(mapD3DCmpFunc(b.stencil_func), (GLint)b.stencil_ref, (GLuint)b.stencil_mask);
                        bs.stencilFunc = b.stencil_func;
                        bs.stencilRef = b.stencil_ref;
                        bs.stencilMask = b.stencil_mask;
                    }
                    if (!bs.valid || bs.stencilWmask != b.stencil_wmask) {
                        glStencilMask((GLuint)b.stencil_wmask);
                        bs.stencilWmask = b.stencil_wmask;
                    }
                    if (!bs.valid || bs.stencilFail != b.stencil_fail || bs.stencilZfail != b.stencil_zfail || bs.stencilPass != b.stencil_pass) {
                        glStencilOp(mapD3DStencilOp(b.stencil_fail),
                                    mapD3DStencilOp(b.stencil_zfail),
                                    mapD3DStencilOp(b.stencil_pass));
                        bs.stencilFail = b.stencil_fail;
                        bs.stencilZfail = b.stencil_zfail;
                        bs.stencilPass = b.stencil_pass;
                    }
                }

                bool zEn = (b.z_enable != 0);
                if (!bs.valid || bs.zEnable != zEn) {
                    if (zEn) glEnable(GL_DEPTH_TEST);
                    else glDisable(GL_DEPTH_TEST);
                    bs.zEnable = zEn;
                }
                if (zEn) {
                    uint8_t zf = b.z_func ? b.z_func : 4u;
                    if (!bs.valid || bs.zFunc != zf) {
                        glDepthFunc(mapD3DCmpFunc(zf));
                        bs.zFunc = zf;
                    }
                }
                bool zWr = (b.z_write != 0);
                if (!bs.valid || bs.zWrite != zWr) {
                    glDepthMask(zWr ? GL_TRUE : GL_FALSE);
                    bs.zWrite = zWr;
                }
                if (!bs.valid || bs.cullMode != b.cull_mode || bs.toFbo != toFbo) {
                    if (b.cull_mode == 2u) {
                        glEnable(GL_CULL_FACE);
                        glFrontFace(toFbo ? GL_CCW : GL_CW);
                        glCullFace(GL_FRONT);
                    } else if (b.cull_mode == 3u) {
                        glEnable(GL_CULL_FACE);
                        glFrontFace(toFbo ? GL_CCW : GL_CW);
                        glCullFace(GL_BACK);
                    } else {
                        glDisable(GL_CULL_FACE);
                    }
                    bs.cullMode = b.cull_mode;
                    bs.toFbo = toFbo;
                }

                if (b.tex_va != 0 && b.tex_w > 0 && b.tex_h > 0 &&
                    (b.src_is_rt != 0 || b.tex_rgba != nullptr) &&
                    (b.use_tex_rgb || b.use_tex_alpha)) {
                    bindStageTexture(texCache, 0, b.tex_va, b.tex_w, b.tex_h, b.tex_version,
                                     b.tex_rgba, b.src_is_rt, b.wrap_u, b.wrap_v, b.z_enable, filter, maxAniso, frame);
                    if (!bs.tex0Set || bs.useTexRgb != (b.use_tex_rgb != 0)) {
                        glUniform1f(uD3DUseTexRgb, b.use_tex_rgb ? 1.0f : 0.0f);
                        bs.useTexRgb = (b.use_tex_rgb != 0);
                    }
                    if (!bs.tex0Set || bs.useTexA != (b.use_tex_alpha != 0)) {
                        glUniform1f(uD3DUseTexA, b.use_tex_alpha ? 1.0f : 0.0f);
                        bs.useTexA = (b.use_tex_alpha != 0);
                    }
                } else {
                    if (!bs.tex0Set || bs.useTexRgb) {
                        glUniform1f(uD3DUseTexRgb, 0.0f);
                        bs.useTexRgb = false;
                    }
                    if (!bs.tex0Set || bs.useTexA) {
                        glUniform1f(uD3DUseTexA, 0.0f);
                        bs.useTexA = false;
                    }
                }
                bs.tex0Set = true;

                auto stageOpUsesTex = [](uint8_t op, uint8_t arg1, uint8_t arg2) -> bool {
                    if (op <= 1u) return false;
                    uint8_t c1 = arg1 & 0xFu;
                    uint8_t c2 = arg2 & 0xFu;
                    if (op == 2u) return (c1 == 2u);
                    if (op == 3u) return (c2 == 2u);
                    if (op == 13u) return true;
                    return (c1 == 2u || c2 == 2u);
                };
                uint8_t cop1 = b.color_op1 ? b.color_op1 : 1u;
                uint8_t aop1 = b.alpha_op1 ? b.alpha_op1 : 1u;
                const bool hasTex1 = (b.tex1_va != 0 && b.tex1_w > 0 && b.tex1_h > 0 &&
                                      (b.tex1_is_cube != 0 || b.src1_is_rt != 0 || b.tex1_rgba != nullptr) &&
                                      (cop1 > 1u || aop1 > 1u));
                if (!hasTex1) {
                    if (stageOpUsesTex(cop1, b.color1_arg1, b.color1_arg2)) {
                        cop1 = 1u;
                        aop1 = 1u;
                    } else if (stageOpUsesTex(aop1, b.alpha1_arg1, b.alpha1_arg2)) {
                        aop1 = 1u;
                    }
                }
                bool nextCube1 = false, nextTex1 = false;
                if (hasTex1 && (cop1 > 1u || aop1 > 1u)) {
                    auto cubeIt = b.tex1_is_cube ? cubeCache.find(b.tex1_va) : cubeCache.end();
                    if (b.tex1_is_cube && cubeIt != cubeCache.end() && cubeIt->second.texId != 0) {
                        glActiveTexture(GL_TEXTURE2);
                        glBindTexture(GL_TEXTURE_CUBE_MAP, cubeIt->second.texId);
                        glActiveTexture(GL_TEXTURE0);
                        nextCube1 = true;
                    } else if (!b.tex1_is_cube) {
                        bindStageTexture(texCache, 1, b.tex1_va, b.tex1_w, b.tex1_h, b.tex1_version,
                                         b.tex1_rgba, b.src1_is_rt, b.wrap_u1, b.wrap_v1, b.z_enable, filter, maxAniso, frame);
                        glActiveTexture(GL_TEXTURE0);
                        nextTex1 = true;
                    }
                }
                if (!bs.tex1Set || bs.hasCube1 != nextCube1) {
                    glUniform1f(uD3DHasCube1, nextCube1 ? 1.0f : 0.0f);
                    bs.hasCube1 = nextCube1;
                }
                if (!bs.tex1Set || bs.hasTex1 != nextTex1) {
                    glUniform1f(uD3DHasTex1, nextTex1 ? 1.0f : 0.0f);
                    bs.hasTex1 = nextTex1;
                }
                if (!bs.tex1Set || bs.cop1 != cop1) { glUniform1f(uD3DColorOp1, (float)cop1); bs.cop1 = cop1; }
                if (!bs.tex1Set || bs.aop1 != aop1) { glUniform1f(uD3DAlphaOp1, (float)aop1); bs.aop1 = aop1; }
                if (!bs.tex1Set || bs.c1a1 != b.color1_arg1) { glUniform1f(uD3DColor1Arg1, (float)b.color1_arg1); bs.c1a1 = b.color1_arg1; }
                if (!bs.tex1Set || bs.c1a2 != b.color1_arg2) { glUniform1f(uD3DColor1Arg2, (float)b.color1_arg2); bs.c1a2 = b.color1_arg2; }
                if (!bs.tex1Set || bs.a1a1 != b.alpha1_arg1) { glUniform1f(uD3DAlpha1Arg1, (float)b.alpha1_arg1); bs.a1a1 = b.alpha1_arg1; }
                if (!bs.tex1Set || bs.a1a2 != b.alpha1_arg2) { glUniform1f(uD3DAlpha1Arg2, (float)b.alpha1_arg2); bs.a1a2 = b.alpha1_arg2; }
                bs.tex1Set = true;

                if (!bs.tfSet || bs.tfactor != b.texture_factor) {
                    float tfR = ((b.texture_factor >> 16) & 0xFFu) / 255.0f;
                    float tfG = ((b.texture_factor >> 8) & 0xFFu) / 255.0f;
                    float tfB = (b.texture_factor & 0xFFu) / 255.0f;
                    float tfA = ((b.texture_factor >> 24) & 0xFFu) / 255.0f;
                    glUniform4f(uD3DTFactor, tfR, tfG, tfB, tfA);
                    bs.tfactor = b.texture_factor;
                    bs.tfSet = true;
                }
                bs.valid = true;

                glDrawElements(mapD3DPrim(b.prim_type),
                               (GLsizei)b.idx_count,
                               GL_UNSIGNED_INT,
                               (const void *)(uintptr_t)(b.first_idx * sizeof(uint32_t)));
            }
            if (rf) mc2_pc_release_render_frame();

            if (useSceneFbo) {
                if (curSceneMsaa > 0) {
                    glDisable(GL_SCISSOR_TEST);
                    glBindFramebuffer(GL_READ_FRAMEBUFFER, sceneMsaaFbo);
                    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, sceneResolveFbo);
                    pBlitFramebuffer(0, 0, curSceneW, curSceneH, 0, 0, curSceneW, curSceneH,
                                     GL_COLOR_BUFFER_BIT, GL_NEAREST);
                }
                glBindFramebuffer(GL_FRAMEBUFFER, sceneResolveFbo);
            } else if (curBoundFbo != 0) {
                glBindFramebuffer(GL_FRAMEBUFFER, 0);
            }

            glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
            glDisable(GL_STENCIL_TEST);
            glDisableVertexAttribArray(0);
            glDisableVertexAttribArray(1);
            glDisableVertexAttribArray(2);
            glDisableVertexAttribArray(3);
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
            glActiveTexture(GL_TEXTURE0);
            if (vw > 0 && vh > 0) {
                if (persistTex == 0) {
                    glGenTextures(1, &persistTex);
                }
                glBindTexture(GL_TEXTURE_2D, persistTex);
                if (persistW != vw || persistH != vh) {
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, vw, vh, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
                    persistW = vw;
                    persistH = vh;
                }
                glCopyTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, vx, vy, vw, vh);
                persistValid = true;
            }
            if (useSceneFbo) {
                auto drawSimpleQuad = [&](GLuint shaderProg, GLuint dstFbo, int qx, int qy, int qw, int qh) {
                    glDisable(GL_SCISSOR_TEST);
                    glDisable(GL_BLEND);
                    glDisable(GL_DEPTH_TEST);
                    glDepthMask(GL_FALSE);
                    glDisable(GL_CULL_FACE);
                    glDisable(GL_STENCIL_TEST);
                    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
                    glBindFramebuffer(GL_FRAMEBUFFER, dstFbo);
                    glViewport(qx, qy, qw, qh);
                    glUseProgram(shaderProg);
                    glBindBuffer(GL_ARRAY_BUFFER, vbo);
                    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
                    glEnableVertexAttribArray(0);
                    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
                    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
                    glDisableVertexAttribArray(0);
                    glBindBuffer(GL_ARRAY_BUFFER, 0);
                };

                if (wantPost) {
                    if (wantBloom) {
                        int bw = std::max(64, curSceneW / 4);
                        int bh = std::max(36, curSceneH / 4);
                        if (bloomFboA == 0 || curBloomW != bw || curBloomH != bh) {
                            auto initBloomTarget = [&](GLuint &fbo, GLuint &tex) {
                                if (tex == 0) glGenTextures(1, &tex);
                                glBindTexture(GL_TEXTURE_2D, tex);
                                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
                                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
                                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
                                glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
                                glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, bw, bh, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
                                if (fbo == 0) glGenFramebuffers(1, &fbo);
                                glBindFramebuffer(GL_FRAMEBUFFER, fbo);
                                glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, tex, 0);
                            };
                            initBloomTarget(bloomFboA, bloomTexA);
                            initBloomTarget(bloomFboB, bloomTexB);
                            curBloomW = bw;
                            curBloomH = bh;
                        }
                        glUseProgram(bloomExtractProg);
                        glActiveTexture(GL_TEXTURE0);
                        glBindTexture(GL_TEXTURE_2D, sceneTex);
                        glUniform1i(uBloomExtTex, 0);
                        drawSimpleQuad(bloomExtractProg, bloomFboA, 0, 0, bw, bh);

                        glUseProgram(bloomBlurProg);
                        glUniform1i(uBloomBlurTex, 0);
                        glBindTexture(GL_TEXTURE_2D, bloomTexA);
                        glUniform2f(uBloomBlurStep, 1.35f / (float)bw, 0.0f);
                        drawSimpleQuad(bloomBlurProg, bloomFboB, 0, 0, bw, bh);

                        glBindTexture(GL_TEXTURE_2D, bloomTexB);
                        glUniform2f(uBloomBlurStep, 0.0f, 1.35f / (float)bh);
                        drawSimpleQuad(bloomBlurProg, bloomFboA, 0, 0, bw, bh);
                    }

                    glUseProgram(postProg);
                    glActiveTexture(GL_TEXTURE0);
                    glBindTexture(GL_TEXTURE_2D, sceneTex);
                    glUniform1i(uPostSceneTex, 0);
                    glActiveTexture(GL_TEXTURE1);
                    glBindTexture(GL_TEXTURE_2D, wantBloom ? bloomTexA : sceneTex);
                    glUniform1i(uPostBloomTex, 1);
                    glUniform2f(uPostTexel, 1.0f / (float)std::max(1, curSceneW),
                                1.0f / (float)std::max(1, curSceneH));
                    glUniform1f(uPostFxaa, wantFxaa ? 1.0f : 0.0f);
                    glUniform1f(uPostBloom, wantBloom ? 0.42f : 0.0f);
                    glUniform1f(uPostEnhance, wantEnhance ? 1.0f : 0.0f);
                    drawSimpleQuad(postProg, 0, winVx, winVy, winVw, winVh);
                    glActiveTexture(GL_TEXTURE0);
                } else {
                    drawFullscreenTex(sceneTex, 0, winVx, winVy, winVw, winVh, false);
                    glDisableVertexAttribArray(0);
                    glDisableVertexAttribArray(1);
                    glDisableVertexAttribArray(2);
                    glDisableVertexAttribArray(3);
                }
            }

            if ((frame % 60L) == 0L && texCache.size() > 512) {
                for (auto it = texCache.begin(); it != texCache.end(); ) {
                    if (!it->second.isRt && (frame - it->second.lastUsedFrame) > 300L) {
                        if (it->second.texId != 0) glDeleteTextures(1, &it->second.texId);
                        it = texCache.erase(it);
                    } else {
                        ++it;
                    }
                }
            }
        } else if (rf) {
            mc2_pc_release_render_frame();
        }

        if (!renderedD3D && persistValid && persistTex != 0) {
            drawFullscreenTex(persistTex, 0, winVx, winVy, winVw, winVh, false);
            glDisableVertexAttribArray(0);
            glDisableVertexAttribArray(1);
            glDisableVertexAttribArray(2);
            glDisableVertexAttribArray(3);
        }

        if (!eglSwapBuffers(dpy, surf)) {
            setError("eglSwapBuffers falló");
            break;
        }

        frame++;
        gFrames = (int) frame;
        fpsFrames++;

        auto now = std::chrono::steady_clock::now();
        renderWorkUs += std::chrono::duration_cast<std::chrono::microseconds>(now - loopStart).count();
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - fpsWindow).count();
        if (elapsed >= 500) {
            gFps = (int) (fpsFrames * 1000.0 / (double) elapsed);
            gGameFps = (int) (gameFpsFrames * 1000.0 / (double) elapsed);
            gFrameTenthsMs = (fpsFrames > 0) ? (int) (renderWorkUs / (fpsFrames * 100LL)) : 0;
            fpsFrames = 0;
            gameFpsFrames = 0;
            renderWorkUs = 0;
            fpsWindow = now;
        }

        int cap = gFpsCap.load();
        bool vsyncActive = gVsync.load();
        if (cap > 0 && (!vsyncActive || cap < 60)) {
            static auto s_nextRenderWake = std::chrono::steady_clock::now();
            auto target = std::chrono::microseconds(1000000 / cap);
            auto cur = std::chrono::steady_clock::now();
            s_nextRenderWake += target;
            if (cur > s_nextRenderWake + target * 2) {
                s_nextRenderWake = cur;
            } else if (cur < s_nextRenderWake) {
                std::this_thread::sleep_until(s_nextRenderWake);
            }
        }
    }

    for (auto &kv : cubeCache) {
        for (int f = 0; f < 6; f++) {
            if (kv.second.fbo[f] != 0) glDeleteFramebuffers(1, &kv.second.fbo[f]);
        }
        if (kv.second.depthStencilRb != 0) glDeleteRenderbuffers(1, &kv.second.depthStencilRb);
        if (kv.second.texId != 0) glDeleteTextures(1, &kv.second.texId);
    }
    for (auto &kv : fboCache) {
        if (kv.second.fbo != 0) glDeleteFramebuffers(1, &kv.second.fbo);
        if (kv.second.depthStencilRb != 0) glDeleteRenderbuffers(1, &kv.second.depthStencilRb);
    }
    for (auto &kv : texCache) {
        if (kv.second.texId != 0) {
            glDeleteTextures(1, &kv.second.texId);
        }
    }
    if (persistTex != 0) {
        glDeleteTextures(1, &persistTex);
        persistTex = 0;
    }
    if (sceneMsaaFbo != 0) glDeleteFramebuffers(1, &sceneMsaaFbo);
    if (sceneMsaaColorRb != 0) glDeleteRenderbuffers(1, &sceneMsaaColorRb);
    if (sceneMsaaDepthRb != 0) glDeleteRenderbuffers(1, &sceneMsaaDepthRb);
    if (sceneResolveFbo != 0) glDeleteFramebuffers(1, &sceneResolveFbo);
    if (sceneSingleDepthRb != 0) glDeleteRenderbuffers(1, &sceneSingleDepthRb);
    if (sceneTex != 0) glDeleteTextures(1, &sceneTex);
    if (bloomFboA != 0) glDeleteFramebuffers(1, &bloomFboA);
    if (bloomTexA != 0) glDeleteTextures(1, &bloomTexA);
    if (bloomFboB != 0) glDeleteFramebuffers(1, &bloomFboB);
    if (bloomTexB != 0) glDeleteTextures(1, &bloomTexB);
    glDeleteBuffers(1, &d3dVbo);
    glDeleteBuffers(1, &d3dIbo);
    glDeleteBuffers(1, &vbo);
    if (bloomExtractProg) glDeleteProgram(bloomExtractProg);
    if (bloomBlurProg) glDeleteProgram(bloomBlurProg);
    if (postProg) glDeleteProgram(postProg);
    glDeleteProgram(d3dProg);
    glDeleteProgram(prog);
    if (audioStream) {
        PORTDBG("[AUDIO] AAudio detenido");
        AAudioStream_requestStop(audioStream);
        AAudioStream_close(audioStream);
        audioStream = nullptr;
    }
    eglMakeCurrent(dpy, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(dpy, ctx);
    eglDestroySurface(dpy, surf);
    eglTerminate(dpy);
    gAttached = false;
}

/* Wrapper que garantiza la liberacion de ANativeWindow y el estado del hilo
   en TODAS las rutas de salida de renderMain(), incluidos los fallos de EGL. */
void renderThreadMain() {
    renderMain();
    if (gWindow) {
        ANativeWindow_release(gWindow);
        gWindow = nullptr;
    }
    gRunning = false;
    gAttached = false;
    gRenderThreadAlive = false;
}

// ---------------------------------------------------------------------------
// Lectura de ficheros e imágenes
// ---------------------------------------------------------------------------

bool readAt(int fd, uint64_t off, void *buf, size_t len) {
    uint8_t *p = (uint8_t *) buf;
    size_t done = 0;
    while (done < len) {
        ssize_t n = pread(fd, p + done, len - done, (off_t) (off + done));
        if (n <= 0) return false;
        done += (size_t) n;
    }
    return true;
}

std::string jstringToStd(JNIEnv *env, jstring s) {
    if (!s) return "";
    const char *c = env->GetStringUTFChars(s, nullptr);
    std::string out = c ? c : "";
    if (c) env->ReleaseStringUTFChars(s, c);
    return out;
}

} // namespace

static JavaVM *gJvm = nullptr;
static jclass gGameActivityClass = nullptr;
static jmethodID gMidPlayMusic = nullptr;
static jmethodID gMidStopMusic = nullptr;
static jmethodID gMidPauseMusic = nullptr;
static jmethodID gMidResumeMusic = nullptr;
static jmethodID gMidSetMusicVolume = nullptr;

static void bindMusicMethods(JNIEnv *env) {
    if (!env || gGameActivityClass) return;
    jclass localCls = env->FindClass("com/pmc2android/xgowther2102/GameActivity");
    if (!localCls) {
        LOGW("bindMusicMethods: no se encontro com/pmc2android/xgowther2102/GameActivity");
        env->ExceptionClear();
        return;
    }
    gGameActivityClass = (jclass) env->NewGlobalRef(localCls);
    env->DeleteLocalRef(localCls);
    if (!gGameActivityClass) return;

    gMidPlayMusic = env->GetStaticMethodID(gGameActivityClass, "playMusic",
                                           "(Ljava/lang/String;Z)V");
    gMidStopMusic = env->GetStaticMethodID(gGameActivityClass, "stopMusic", "()V");
    gMidPauseMusic = env->GetStaticMethodID(gGameActivityClass, "pauseMusic", "()V");
    gMidResumeMusic = env->GetStaticMethodID(gGameActivityClass, "resumeMusic", "()V");
    gMidSetMusicVolume = env->GetStaticMethodID(gGameActivityClass, "setMusicVolume", "(F)V");
    if (env->ExceptionCheck()) {
        /* Una firma que no coincide deja una excepcion JNI pendiente que
           abortaria la siguiente llamada. Se limpia y se desactiva el puente. */
        env->ExceptionClear();
        gMidPlayMusic = gMidStopMusic = gMidPauseMusic = nullptr;
        gMidResumeMusic = gMidSetMusicVolume = nullptr;
    }
}

static void releaseMusicClass(JavaVM *vm) {
    if (!vm || !gGameActivityClass) return;
    JNIEnv *env = nullptr;
    if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) == JNI_OK && env) {
        env->DeleteGlobalRef(gGameActivityClass);
    } else if (vm->AttachCurrentThread(&env, nullptr) == JNI_OK && env) {
        env->DeleteGlobalRef(gGameActivityClass);
        vm->DetachCurrentThread();
    }
    gGameActivityClass = nullptr;
    gMidPlayMusic = gMidStopMusic = gMidPauseMusic = nullptr;
    gMidResumeMusic = gMidSetMusicVolume = nullptr;
}

jint JNI_OnLoad(JavaVM *vm, void *) {
    gJvm = vm;
    JNIEnv *env = nullptr;
    if (vm->GetEnv((void **) &env, JNI_VERSION_1_6) == JNI_OK && env) {
        bindMusicMethods(env);
    }
    return JNI_VERSION_1_6;
}

void JNI_OnUnload(JavaVM *vm, void *) {
    releaseMusicClass(vm);
    gJvm = nullptr;
}

static void ensure_game_activity_class(JNIEnv *env) {
    if (!gGameActivityClass && env) bindMusicMethods(env);
}

extern "C" {
void mc2_platform_play_music(const char *path, int loop) {
    if (!gJvm || !path) return;
    JNIEnv *env = nullptr;
    bool attached = false;
    if (gJvm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if (gJvm->AttachCurrentThread(&env, nullptr) == JNI_OK) {
            attached = true;
        } else {
            return;
        }
    }
    ensure_game_activity_class(env);
    if (gGameActivityClass && gMidPlayMusic) {
        jstring jstr = env->NewStringUTF(path);
        if (jstr) {
            env->CallStaticVoidMethod(gGameActivityClass, gMidPlayMusic, jstr, (jboolean)(loop ? JNI_TRUE : JNI_FALSE));
            env->DeleteLocalRef(jstr);
        }
    } else {
        LOGW("mc2_platform_play_music ignorado (clase/metodo no enlazado)");
    }
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
    if (attached) {
        gJvm->DetachCurrentThread();
    }
}

void mc2_platform_stop_music(void) {
    if (!gJvm) return;
    JNIEnv *env = nullptr;
    bool attached = false;
    if (gJvm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if (gJvm->AttachCurrentThread(&env, nullptr) == JNI_OK) {
            attached = true;
        } else {
            return;
        }
    }
    ensure_game_activity_class(env);
    if (gGameActivityClass && gMidStopMusic) {
        env->CallStaticVoidMethod(gGameActivityClass, gMidStopMusic);
    }
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
    if (attached) {
        gJvm->DetachCurrentThread();
    }
}

void mc2_platform_pause_music(void) {
    if (!gJvm) return;
    JNIEnv *env = nullptr;
    bool attached = false;
    if (gJvm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if (gJvm->AttachCurrentThread(&env, nullptr) == JNI_OK) {
            attached = true;
        } else {
            return;
        }
    }
    ensure_game_activity_class(env);
    if (gGameActivityClass && gMidPauseMusic) {
        env->CallStaticVoidMethod(gGameActivityClass, gMidPauseMusic);
    }
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
    if (attached) {
        gJvm->DetachCurrentThread();
    }
}

void mc2_platform_resume_music(void) {
    if (!gJvm) return;
    JNIEnv *env = nullptr;
    bool attached = false;
    if (gJvm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if (gJvm->AttachCurrentThread(&env, nullptr) == JNI_OK) {
            attached = true;
        } else {
            return;
        }
    }
    ensure_game_activity_class(env);
    if (gGameActivityClass && gMidResumeMusic) {
        env->CallStaticVoidMethod(gGameActivityClass, gMidResumeMusic);
    }
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
    if (attached) {
        gJvm->DetachCurrentThread();
    }
}

void mc2_platform_set_music_volume(float vol) {
    if (!gJvm) return;
    JNIEnv *env = nullptr;
    bool attached = false;
    if (gJvm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        if (gJvm->AttachCurrentThread(&env, nullptr) == JNI_OK) {
            attached = true;
        } else {
            return;
        }
    }
    ensure_game_activity_class(env);
    if (gGameActivityClass && gMidSetMusicVolume) {
        env->CallStaticVoidMethod(gGameActivityClass, gMidSetMusicVolume, (jfloat)vol);
    }
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
    if (attached) {
        gJvm->DetachCurrentThread();
    }
}
}

// ---------------------------------------------------------------------------
// JNI — contrato unico con com.pmc2android.xgowther2102.Native
// ---------------------------------------------------------------------------

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_setGraphicsEnhancements(
        JNIEnv *, jclass, jint anisoLevel, jboolean depth24, jboolean fogEnabled, jint msaaSamples,
        jboolean bloomEnabled, jboolean fxaaEnabled, jboolean nightEnhance) {
    gAnisoLevel = std::max(0, std::min(16, (int) anisoLevel));
    gDepth24 = (depth24 == JNI_TRUE);
    gFogEnabled = (fogEnabled == JNI_TRUE);
    gMsaaSamples = std::max(0, std::min(4, (int) msaaSamples));
    gBloomEnabled = (bloomEnabled == JNI_TRUE);
    gFxaaEnabled = (fxaaEnabled == JNI_TRUE);
    gNightEnhance = (nightEnhance == JNI_TRUE);
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_setMc2HookConfig(
        JNIEnv *, jclass,
        jboolean enabled, jboolean openSpy, jboolean multiDat,
        jint reflectionRes, jboolean reflNoSkip, jboolean aiPlayerModels,
        jint shadowPercent, jboolean bodyShader, jint drawDistPercent,
        jboolean menuScrollFix, jboolean burnoutFpsFix, jboolean manualReverse,
        jboolean expandWorld, jint timeWarpPercent, jint gravityDeci) {
    Mc2HookConfig hc{};
    hc.enabled = (enabled == JNI_TRUE) ? 1 : 0;
    hc.open_spy = (openSpy == JNI_TRUE) ? 1 : 0;
    hc.multi_dat = (multiDat == JNI_TRUE) ? 1 : 0;
    hc.reflection_res = (int) reflectionRes;
    hc.reflection_no_skip = (reflNoSkip == JNI_TRUE) ? 1 : 0;
    hc.ai_player_models = (aiPlayerModels == JNI_TRUE) ? 1 : 0;
    hc.car_shadow_intensity = (float) shadowPercent / 100.0f;
    hc.body_shader = (bodyShader == JNI_TRUE) ? 1 : 0;
    hc.draw_dist_mult = (float) drawDistPercent / 100.0f;
    hc.menu_scroll_fix = (menuScrollFix == JNI_TRUE) ? 1 : 0;
    hc.burnout_fps_fix = (burnoutFpsFix == JNI_TRUE) ? 1 : 0;
    hc.manual_reverse = (manualReverse == JNI_TRUE) ? 1 : 0;
    hc.expand_world = (expandWorld == JNI_TRUE) ? 1 : 0;
    hc.time_warp = (float) timeWarpPercent / 100.0f;
    hc.gravity = (float) gravityDeci / 10.0f;
    mc2_pc_set_mc2hook_config(&hc);

    gMc2HookShader = (hc.enabled != 0 && hc.body_shader != 0);
    gMc2HookFogMult = (hc.enabled != 0) ? hc.draw_dist_mult : 1.0f;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_init(JNIEnv *env, jclass, jstring dataDir, jstring workDir,
                               jint renderer, jint scale, jint fps,
                               jboolean linear, jboolean vsync) {
    ensure_game_activity_class(env);
    gRenderer = renderer;
    gScale = scale;
    gFpsCap = fps;
    gLinear = (linear == JNI_TRUE);
    gVsync = (vsync == JNI_TRUE);

    const std::string data = jstringToStd(env, dataDir);
    const std::string work = jstringToStd(env, workDir);
    {
        std::lock_guard<std::mutex> lock(gMutex);
        gDataDir = data;
        gWorkDir = work;
    }

    PORTDBG("[DATA] init · dataDir=%s workDir=%s", data.c_str(),
            jstringToStd(env, workDir).c_str());
    if (!work.empty()) {
        mkdir(work.c_str(), 0770);
        mkdir((work + "/cache").c_str(), 0770);
    }

    /* No se sondea EGL aqui: crear y destruir un EGLDisplay global en cada
       onResume invalidaba el display del hilo de render. GL_VERSION se obtiene
       una sola vez dentro de renderMain(), que ya posee el contexto real. */
    return env->NewStringUTF(("OK\nDATA_DIR=" + data + "\nWORK_DIR=" + work).c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_setLaunchArgs(JNIEnv *env, jclass, jstring args) {
    const std::string s = jstringToStd(env, args);
    std::lock_guard<std::mutex> lock(gMutex);
    gLaunchArgs = s;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_boot(JNIEnv *env, jclass, jint fd, jlong size) {
    if (gPcImageLoaded.load()) {
        return env->NewStringUTF("OK\nALREADY_MAPPED=1");
    }
    int dupFd = dup(fd);
    if (dupFd < 0) {
        return env->NewStringUTF("ERR=No se pudo duplicar el descriptor del ejecutable");
    }

    if (size < 0x1000 || size > (64ll << 20)) {
        close(dupFd);
        return env->NewStringUTF("ERR=Tamano de mc2.exe fuera de rango (4 KB - 64 MB)");
    }

    uint8_t mz[64] = {0};
    if (!readAt(dupFd, 0, mz, sizeof(mz)) || mz[0] != 'M' || mz[1] != 'Z') {
        close(dupFd);
        return env->NewStringUTF("ERR=Se requiere mc2.exe de PC (cabecera MZ/PE32)");
    }

    uint32_t peOff = 0;
    memcpy(&peOff, mz + 0x3C, 4);
    if (peOff + 0x28 > (uint32_t) size) {
        close(dupFd);
        return env->NewStringUTF("ERR=Cabecera PE fuera de los limites del archivo");
    }

    /* Optional Header comienza en pe+0x18:
       +0x10 -> AddressOfEntryPoint (pe+0x28), +0x1C -> ImageBase (pe+0x34).
       Leer pe+0x10/pe+0x1C era un error: son campos de la cabecera COFF. */
    uint8_t pe[0x40] = {0};
    if (!readAt(dupFd, peOff, pe, sizeof(pe)) || memcmp(pe, "PE\0\0", 4) != 0) {
        close(dupFd);
        return env->NewStringUTF("ERR=Firma PE no encontrada en e_lfanew");
    }

    uint32_t entryRva = 0, imageBase = 0;
    memcpy(&entryRva, pe + 0x28, 4);
    memcpy(&imageBase, pe + 0x34, 4);

    std::vector<uint8_t> raw((size_t) size);
    if (!readAt(dupFd, 0, raw.data(), raw.size())) {
        close(dupFd);
        return env->NewStringUTF("ERR=No se pudo leer mc2.exe completo");
    }
    close(dupFd);

    if (!mc2_pc_memory_init_buffer(raw.data(), raw.size())) {
        return env->NewStringUTF("ERR=No se pudo mapear mc2.exe en el espacio de 512 MB");
    }
    gPcImageLoaded = true;

    char out[512];
    snprintf(out, sizeof(out),
             "OK\nSIZE=%lld\nBASE=0x%08X\nENTRY=0x%08X\nFORMAT=PE32",
             (long long) size, imageBase, imageBase + entryRva);
    PORTDBG("[DATA] mc2.exe mapeado · size=%lld base=0x%08X entryPE=0x%08X "
            "(stub SecuROM; OEP efectivo 0x0061958A)",
            (long long) size, imageBase, imageBase + entryRva);
    return env->NewStringUTF(out);
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_attach(JNIEnv *env, jclass, jobject surface) {
    if (surface == nullptr || gShuttingDown.load()) return;
    gRunning = false;
    if (gThread.joinable()) gThread.join();

    ANativeWindow *win = ANativeWindow_fromSurface(env, surface);
    if (!win) {
        setError("ANativeWindow_fromSurface devolvio null");
        return;
    }

    gWindow = win;
    {
        std::lock_guard<std::mutex> lock(gMutex);
        gError.clear();
    }
    gFrames = 0;
    gFps = 0;
    gRunning = true;
    gAttached = true;
    gRenderThreadAlive = true;
    gThread = std::thread(renderThreadMain);
    startPcGameThreadIfNeeded();
    LOGI("render thread arrancado");
    PORTDBG("[LIFE] attach · hilo de render arrancado");
}

/* No bloqueante: onPause() debe volver de inmediato. El hilo de render libera
   EGL y ANativeWindow por su cuenta al salir del bucle. */
extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_detach(JNIEnv *, jclass) {
    PORTDBG("[LIFE] detach · senal no bloqueante al hilo de render");
    gRunning = false;
    gAttached = false;
}

/* Apagado completo. BLOQUEANTE: la capa Java lo invoca en un hilo de fondo. */
extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_shutdown(JNIEnv *, jclass) {
    if (gShuttingDown.exchange(true)) return;

    gRunning = false;
    mc2_pc_request_stop();

    if (gThread.joinable()) gThread.join();
    if (gPcThreadCreated) {
        pthread_join(gPcThread, nullptr);
        gPcThreadCreated = false;
        gPcThread = 0;
    }

    mc2_pc_memory_shutdown();
    mc2_pc_clear_data_fds();
    gPcImageLoaded = false;
    gPcThreadRunning = false;
    gPcExited = false;
    gPcExitCode = 0;

    if (gWindow) {
        ANativeWindow_release(gWindow);
        gWindow = nullptr;
    }
    gFrames = 0;
    gFps = 0;
    gShuttingDown = false;
    LOGI("shutdown completo: EGL, hilos y memoria invitada liberados");
    PORTDBG("[LIFE] shutdown · EGL, hilos y 512 MB liberados");
}

/* Garantiza UTF-8 valido antes de NewStringUTF (MC2 puede registrar bytes crudos/XOR como en CHEAT). */
static jstring newSafeJString(JNIEnv *env, const char *src) {
    if (!src) return env->NewStringUTF("");
    std::string out;
    out.reserve(strlen(src) + 16);
    const unsigned char *p = reinterpret_cast<const unsigned char *>(src);
    while (*p) {
        unsigned char c = *p;
        if (c < 0x80) {
            out.push_back((c >= 0x20 || c == '\n' || c == '\t') ? static_cast<char>(c) : '?');
            p++;
        } else if ((c & 0xE0) == 0xC0 && p[1] && (p[1] & 0xC0) == 0x80 && c >= 0xC2) {
            out.push_back(static_cast<char>(p[0]));
            out.push_back(static_cast<char>(p[1]));
            p += 2;
        } else if ((c & 0xF0) == 0xE0 && p[1] && p[2] &&
                   (p[1] & 0xC0) == 0x80 && (p[2] & 0xC0) == 0x80) {
            out.push_back(static_cast<char>(p[0]));
            out.push_back(static_cast<char>(p[1]));
            out.push_back(static_cast<char>(p[2]));
            p += 3;
        } else {
            out.push_back('?');
            p++;
        }
    }
    return env->NewStringUTF(out.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_stats(JNIEnv *env, jclass) {
    char pc_logs[1024] = {0};
    mc2_pc_get_recent_logs(pc_logs, sizeof(pc_logs));
    for (char *p = pc_logs; *p; ++p) {
        if (*p == '\n') *p = '|';
    }

    std::string err;
    std::string gl;
    {
        std::lock_guard<std::mutex> lock(gMutex);
        err = gError;
        gl = gGlInfo;
    }

    char buf[2048];
    snprintf(buf, sizeof(buf),
             "fps=%d\ngame_fps=%d\nframe_tenths_ms=%d\nframes=%d\nwidth=%d\nheight=%d\nscale=%d\nfpscap=%d\n"
             "gl=%s\nerr=%s\npc_loaded=%d\npc_running=%d\npc_exited=%d\npc_frames=%u\n"
             "pc_draws=%u\npc_logs=%s",
             gFps.load(), gGameFps.load(), gFrameTenthsMs.load(), gFrames.load(), gWidth.load(), gHeight.load(),
             gScale.load(), gFpsCap.load(), gl.c_str(), err.c_str(),
             gPcImageLoaded.load() ? 1 : 0,
             gPcThreadRunning.load() ? 1 : 0,
             gPcExited.load() ? 1 : 0,
             mc2_pc_get_frame_count(),
             mc2_pc_get_draw_calls(),
             pc_logs);
    return newSafeJString(env, buf);
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_keyEvent(JNIEnv *, jclass, jint dikCode, jboolean pressed) {
    static std::atomic<uint32_t> s_count{0};
    uint32_t n = ++s_count;
    if ((n & 0xFFu) == 1u) {
        PORTDBG("[INPUT] eventos acumulados=%u · ultimo DIK=0x%02X %s",
                n, (unsigned) dikCode, pressed == JNI_TRUE ? "DOWN" : "UP");
    }
    mc2_pc_set_key_state((int) dikCode, pressed == JNI_TRUE ? 1 : 0);
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_charEvent(JNIEnv *, jclass, jint ch) {
    mc2_pc_push_char((int) ch);
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_mouseEvent(JNIEnv *, jclass, jint x, jint y, jint dx, jint dy,
                                     jboolean leftDown, jint msgType) {
    static std::atomic<uint32_t> s_mouse_count{0};
    uint32_t n = ++s_mouse_count;
    if (msgType == 1 || (n & 0x3Fu) == 1u) {
        PORTDBG("[MOUSE] ev=%u type=%d (%d,%d) delta=(%d,%d) left=%d",
                n, (int) msgType, (int) x, (int) y, (int) dx, (int) dy, leftDown == JNI_TRUE ? 1 : 0);
    }
    mc2_pc_set_mouse_state((int) x, (int) y, (int) dx, (int) dy,
                           leftDown == JNI_TRUE ? 1 : 0, (int) msgType);
}

extern "C" JNIEXPORT jint JNICALL
Java_com_pmc2android_xgowther2102_Native_gameWidth(JNIEnv *, jclass) {
    return (jint) mc2_pc_get_dev_w();
}

extern "C" JNIEXPORT jint JNICALL
Java_com_pmc2android_xgowther2102_Native_gameHeight(JNIEnv *, jclass) {
    return (jint) mc2_pc_get_dev_h();
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_resetInput(JNIEnv *, jclass) {
    PORTDBG("[INPUT] reset de las 256 teclas DirectInput");
    for (int dik = 0; dik < 256; dik++) {
        mc2_pc_set_key_state(dik, 0);
    }
}

/* La version numerica vive en build.gradle / BuildConfig.VERSION_TAG.
   Aqui solo se identifica el modulo nativo, para no duplicar la fuente. */
extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_version(JNIEnv *env, jclass) {
    return env->NewStringUTF("mc2rt");
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_dataUsage(JNIEnv *env, jclass) {
    return newSafeJString(env, mc2_pc_data_usage_summary());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_diagReport(JNIEnv *env, jclass) {
    return newSafeJString(env, mc2_diag_report());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_diagSummary(JNIEnv *env, jclass) {
    return newSafeJString(env, mc2_diag_summary());
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_diagReset(JNIEnv *, jclass) {
    mc2_diag_reset();
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_dataProbe(JNIEnv *env, jclass, jstring path,
                                    jlong offset, jint len) {
    const char *p = env->GetStringUTFChars(path, nullptr);
    std::string s = p ? p : "";
    if (p) env->ReleaseStringUTFChars(path, p);
    return newSafeJString(env, mc2_pc_probe_data(s.c_str(), (long long) offset, len));
}

/* Sonda de diagnostico: comprueba si el motor C puede abrir una ruta concreta
   con el UID de la app. Es la unica forma fiable de saber si Scoped Storage
   permite leer una carpeta externa elegida mediante SAF. */
extern "C" JNIEXPORT jstring JNICALL
Java_com_pmc2android_xgowther2102_Native_probePath(JNIEnv *env, jclass, jstring path) {
    const std::string p = jstringToStd(env, path);
    char out[512];
    FILE *f = fopen(p.c_str(), "rb");
    if (!f) {
        int e = errno;
        snprintf(out, sizeof(out), "ERR errno=%d (%s)", e, strerror(e));
    } else {
        fseek(f, 0, SEEK_END);
        long size = ftell(f);
        fclose(f);
        snprintf(out, sizeof(out), "OK size=%ld", size);
    }
    PORTDBG("[DATA] probePath(%s) -> %s", p.c_str(), out);
    return env->NewStringUTF(out);
}

extern "C" JNIEXPORT jint JNICALL
Java_com_pmc2android_xgowther2102_Native_registerDataFd(JNIEnv *env, jclass,
                                         jstring relativePath, jint fd, jlong size) {
    const std::string rel = jstringToStd(env, relativePath);
    mc2_pc_register_data_fd(rel.c_str(), (int) fd, (long long) size);
    int total = mc2_pc_data_fd_count();
    if (total <= 5 || (total % 25) == 0) {
        PORTDBG("[DATA] SAF registrado (%d): %s · %lld bytes",
                total, rel.c_str(), (long long) size);
    }
    return (jint) total;
}

extern "C" JNIEXPORT void JNICALL
Java_com_pmc2android_xgowther2102_Native_clearDataFds(JNIEnv *, jclass) {
    int before = mc2_pc_data_fd_count();
    mc2_pc_clear_data_fds();
    PORTDBG("[DATA] %d descriptores SAF liberados", before);
}

extern "C" JNIEXPORT jint JNICALL
Java_com_pmc2android_xgowther2102_Native_dataFdCount(JNIEnv *, jclass) {
    return (jint) mc2_pc_data_fd_count();
}

