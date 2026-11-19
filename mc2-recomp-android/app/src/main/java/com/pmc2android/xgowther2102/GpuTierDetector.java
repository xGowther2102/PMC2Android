package com.pmc2android.xgowther2102;

import android.app.ActivityManager;
import android.content.Context;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.os.Build;

import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * Detecta la GPU (GL_RENDERER vía EGL14 Pbuffer 1x1), SoC, núcleos CPU y RAM
 * para elegir automáticamente el perfil gráfico óptimo ("Recomendado").
 */
final class GpuTierDetector {

    enum Tier { LOW, MID, HIGH, ULTRA }

    static final class HardwareInfo {
        final String gpuRenderer;
        final String socName;
        final int cpuCores;
        final int ramGb;
        final Tier tier;

        HardwareInfo(String gpuRenderer, String socName, int cpuCores, int ramGb, Tier tier) {
            this.gpuRenderer = gpuRenderer;
            this.socName = socName;
            this.cpuCores = cpuCores;
            this.ramGb = ramGb;
            this.tier = tier;
        }

        String summaryLine() {
            String tierLbl;
            switch (tier) {
                case ULTRA: tierLbl = AppLang.t("Gama Ultra", "Ultra Tier"); break;
                case HIGH: tierLbl = AppLang.t("Gama Alta", "High Tier"); break;
                case MID: tierLbl = AppLang.t("Gama Media", "Mid Tier"); break;
                default: tierLbl = AppLang.t("Gama Entrada", "Entry Tier"); break;
            }
            return gpuRenderer + " · " + cpuCores + AppLang.t(" núcleos · ", " cores · ")
                    + ramGb + " GB RAM (" + tierLbl + ")";
        }
    }

    private static volatile HardwareInfo cached;

    private GpuTierDetector() {}

    static HardwareInfo detect(Context ctx) {
        if (cached != null) return cached;

        String gpu = queryGlRenderer();
        String soc = resolveSocName();
        int cores = Math.max(1, Runtime.getRuntime().availableProcessors());
        int ramGb = resolveRamGb(ctx);
        Tier tier = classify(gpu, soc, cores, ramGb);

        HardwareInfo info = new HardwareInfo(gpu, soc, cores, ramGb, tier);
        cached = info;
        return info;
    }

    private static String resolveSocName() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            String m = Build.SOC_MODEL != null ? Build.SOC_MODEL.trim() : "";
            String f = Build.SOC_MANUFACTURER != null ? Build.SOC_MANUFACTURER.trim() : "";
            String combined = (f + " " + m).trim();
            if (!combined.isEmpty() && !"unknown".equalsIgnoreCase(combined)) return combined;
        }
        return Build.HARDWARE != null ? Build.HARDWARE : "ARM64";
    }

    private static int resolveRamGb(Context ctx) {
        try {
            ActivityManager am = (ActivityManager) ctx.getSystemService(Context.ACTIVITY_SERVICE);
            if (am != null) {
                ActivityManager.MemoryInfo mi = new ActivityManager.MemoryInfo();
                am.getMemoryInfo(mi);
                return Math.max(1, (int) Math.round(mi.totalMem / (1024.0 * 1024.0 * 1024.0)));
            }
        } catch (Throwable ignored) {}
        return 4;
    }

    private static Tier classify(String gpu, String soc, int cores, int ramGb) {
        String g = gpu.toLowerCase(Locale.US);
        String s = soc.toLowerCase(Locale.US);

        // Qualcomm Adreno
        if (g.contains("adreno")) {
            int num = extractNumberAfter(g, "adreno");
            if (num >= 800 || num == 750 || s.contains("sm8750") || s.contains("sm8650")) return Tier.ULTRA;
            if (num >= 730 || num == 660 || num == 650 || s.contains("sm8550") || s.contains("sm8450")) return Tier.HIGH;
            if (num >= 620) return Tier.MID;
            if (num > 0) return Tier.LOW;
        }

        // ARM Immortalis / Mali
        if (g.contains("immortalis")) {
            int num = extractNumberAfter(g, "g");
            if (num >= 720) return Tier.ULTRA;
            return Tier.HIGH;
        }
        if (g.contains("mali-g")) {
            int num = extractNumberAfter(g, "mali-g");
            if (num >= 710 || num == 78 || num == 77) return Tier.HIGH;
            if (num >= 68 || num == 76 || num == 72) return Tier.MID;
            return Tier.LOW;
        }
        if (g.contains("mali-") || g.contains("powervr")) {
            return Tier.LOW;
        }

        // Samsung Xclipse (AMD RDNA)
        if (g.contains("xclipse")) {
            int num = extractNumberAfter(g, "xclipse");
            if (num >= 940) return Tier.ULTRA;
            if (num >= 920) return Tier.HIGH;
            return Tier.MID;
        }

        // Respaldo heurístico por RAM y núcleos
        if (ramGb >= 12 && cores >= 8) return Tier.ULTRA;
        if (ramGb >= 8 && cores >= 8) return Tier.HIGH;
        if (ramGb >= 6) return Tier.MID;
        return Tier.LOW;
    }

    private static int extractNumberAfter(String text, String token) {
        int idx = text.indexOf(token);
        if (idx < 0) return -1;
        Matcher m = Pattern.compile("(\\d{2,4})").matcher(text.substring(idx + token.length()));
        if (m.find()) {
            try {
                return Integer.parseInt(m.group(1));
            } catch (NumberFormatException ignored) {}
        }
        return -1;
    }

    private static String queryGlRenderer() {
        EGLDisplay dpy = EGL14.EGL_NO_DISPLAY;
        EGLSurface surf = EGL14.EGL_NO_SURFACE;
        EGLContext ctx = EGL14.EGL_NO_CONTEXT;
        try {
            dpy = EGL14.eglGetDisplay(EGL14.EGL_DEFAULT_DISPLAY);
            if (dpy == EGL14.EGL_NO_DISPLAY) return Build.HARDWARE;
            int[] ver = new int[2];
            if (!EGL14.eglInitialize(dpy, ver, 0, ver, 1)) return Build.HARDWARE;

            int[] cfgAttribs = {
                    EGL14.EGL_RED_SIZE, 8,
                    EGL14.EGL_GREEN_SIZE, 8,
                    EGL14.EGL_BLUE_SIZE, 8,
                    EGL14.EGL_RENDERABLE_TYPE, EGL14.EGL_OPENGL_ES2_BIT,
                    EGL14.EGL_SURFACE_TYPE, EGL14.EGL_PBUFFER_BIT,
                    EGL14.EGL_NONE
            };
            EGLConfig[] cfgs = new EGLConfig[1];
            int[] num = new int[1];
            if (!EGL14.eglChooseConfig(dpy, cfgAttribs, 0, cfgs, 0, 1, num, 0) || num[0] == 0) {
                return Build.HARDWARE;
            }
            int[] surfAttribs = {EGL14.EGL_WIDTH, 1, EGL14.EGL_HEIGHT, 1, EGL14.EGL_NONE};
            surf = EGL14.eglCreatePbufferSurface(dpy, cfgs[0], surfAttribs, 0);
            int[] ctxAttribs = {EGL14.EGL_CONTEXT_CLIENT_VERSION, 2, EGL14.EGL_NONE};
            ctx = EGL14.eglCreateContext(dpy, cfgs[0], EGL14.EGL_NO_CONTEXT, ctxAttribs, 0);
            if (surf == EGL14.EGL_NO_SURFACE || ctx == EGL14.EGL_NO_CONTEXT) return Build.HARDWARE;
            if (!EGL14.eglMakeCurrent(dpy, surf, surf, ctx)) return Build.HARDWARE;

            String r = GLES20.glGetString(GLES20.GL_RENDERER);
            return (r != null && !r.trim().isEmpty()) ? r.trim() : Build.HARDWARE;
        } catch (Throwable ignored) {
            return Build.HARDWARE;
        } finally {
            if (dpy != EGL14.EGL_NO_DISPLAY) {
                EGL14.eglMakeCurrent(dpy, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_CONTEXT);
                if (surf != EGL14.EGL_NO_SURFACE) EGL14.eglDestroySurface(dpy, surf);
                if (ctx != EGL14.EGL_NO_CONTEXT) EGL14.eglDestroyContext(dpy, ctx);
                EGL14.eglTerminate(dpy);
            }
        }
    }
}
