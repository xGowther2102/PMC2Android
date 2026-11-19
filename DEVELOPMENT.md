# Guía de Desarrollo y Compilación — PMC2Android

Documentación técnica para desarrolladores, colaboradores e IA sobre la estructura del proyecto, compilación (`Debug` vs `Release`) y flujo de trabajo en Git.

---

## Estructura del repositorio

```text
PMC2Android/
├── README.md                    ← Guía para usuarios/jugadores
├── DEVELOPMENT.md               ← Esta guía técnica
├── .gitignore                   ← Excluye cachés, APKs, keystores y archivos multimedia del juego
├── mc2-pc-android/              ← Motor nativo C recompilado + runtime Win32/D3D9/Audio/mc2hook
│   ├── src/                     ← pc_runtime.c, pc_runtime.h, mc2_dmusic.h, pc_imports_table.inc
│   ├── recomp/gen/              ← 48 unidades C recompiladas de mc2.exe
│   ├── game_files/              ← mc2_pc.xbe, mc2_pc_analysis.json, pe_imports.json
│   ├── pipeline/                ← Desensamblado, ABI y símbolos de referencia
│   ├── scripts/                 ← build_arm64.py, gen_pc_bridge.py, pe_to_xbe.py
│   └── third_party/ffmpeg_arm64/← Cabeceras y librerías estáticas FFmpeg ARM64
└── mc2-recomp-android/          ← Proyecto Android Studio / Gradle
    └── app/src/main/
        ├── cpp/                 ← mc2_runtime.cpp (EGL/GLES 3, AAudio, JNI) y CMakeLists.txt
        └── java/com/pmc2android/xgowther2102/  ← UI, controles, SAF, Mods, Ajustes y PortDebug
```

---

## Requisitos de compilación

* **JDK 17** o superior
* **Android SDK** (`compileSdk 34`, `minSdk 26`, `CMake 3.22.1`)
* **Android NDK `28.2.13676358`** (debe coincidir exactamente entre `mc2-pc-android/scripts/build_arm64.py` y `mc2-recomp-android/app/build.gradle`)
* **Python 3**

Si tu NDK no está en `C:\Android\ndk\28.2.13676358`, exporta `ANDROID_NDK_HOME`. Además, crea `mc2-recomp-android/local.properties` con la ruta de tu SDK (ejemplo: `sdk.dir=C:\\Android`).

---

## Variantes de compilación (`Debug` vs `Release`)

Ambas variantes comparten el mismo `applicationId` (`com.pmc2android.xgowther2102`) para utilizar la misma carpeta de partidas guardadas (`.sav`).

### 1. Build **Debug** (desarrollo)
Mantiene activos los logs de `PortDebug.java`, `PORTDBG`/`LOGI` en `mc2_runtime.cpp`, `PORTDBG` en `pc_runtime.c` y los receptores `DEBUG_KEY` / `DIAG_DUMP` (`BuildConfig.DEBUG`) para pruebas por `adb`:

```powershell
# 1. Compilar motor nativo ARM64 (libmc2pc.a)
python mc2-pc-android/scripts/build_arm64.py

# 2. Compilar APK Debug
cd mc2-recomp-android
.\gradlew.bat assembleDebug
# Salida: app/build/outputs/apk/debug/app-debug.apk
```

### 2. Build **Release** (producción, sin debug)
Apaga automáticamente las trazas informativas de `PortDebug`, `PORTDBG`/`LOGI` (`-DNDEBUG` en C++ y `-DMC2_RELEASE=1` en C), receptores `BuildConfig.DEBUG` y flags `debuggable`:

```powershell
# 1. Compilar motor nativo ARM64 en modo Release (sin PORTDBG)
python mc2-pc-android/scripts/build_arm64.py --release

# 2. Compilar APK Release
cd mc2-recomp-android
.\gradlew.bat assembleRelease
# Salida: app/build/outputs/apk/release/
```

#### Firma del APK Release
Para que `assembleRelease` genere un APK firmado listo para distribuir, crea `mc2-recomp-android/keystore.properties` (ignorado por Git):

```properties
storeFile=mi-llave-release.jks
storePassword=TU_PASSWORD
keyAlias=pmc2
keyPassword=TU_PASSWORD
```

También puedes pasar los mismos datos con las variables de entorno `PMC2_STORE_FILE`, `PMC2_STORE_PASSWORD`, `PMC2_KEY_ALIAS` y `PMC2_KEY_PASSWORD`. Si no se configuran, Gradle genera `app-release-unsigned.apk` sin fallar.

---

## Flujo de ramas en GitHub

* **`dev`**: rama activa de desarrollo diario, pruebas y commits continuos.
* **`main`**: rama estable. Recibe merges desde `dev` cuando una versión queda probada (`v0.8.9`, `v0.9.0`, etc.) para etiquetar el release y publicar el APK en **GitHub Releases** (los `.apk` nunca se suben al árbol de código).
