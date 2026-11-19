# Midnight Club II — Port de Recompilación Estática PC → Android (ARM64)

Este directorio contiene el pipeline y runtime de recompilación estática de la versión original de PC (`C:\Program Files\Midnight Club II\mc2.exe`) hacia **Android ARM64 (`arm64-v8a`)**.

---

## 1. Desencriptado del OEP y Conversión PE → XBE

- **Ejecutable origen:** `mc2.exe` (`PE32`, ImageBase `0x00400000`, `4,694,016` bytes, 8 secciones).
- **Stub `.grxdd` (`0x0087137C`):** Desencriptado (`XOR 0x6C697665` `"evil"` + rotación de bytes) para extraer el **Original Entry Point (OEP)** real en `.text`:
  - **OEP (`WinMainCRTStartup`):** `0x0061958A`
  - **`WinMain`:** `0x00401010`
  - **`mc.cpp` (Main del motor AGE):** `0x00401190`
- **Script:** `scripts/pe_to_xbe.py`
  - Empaqueta las 8 secciones del PE en `game_files/mc2_pc.xbe` con `entry_point = 0x0061958A`.
  - Extrae los **202 imports de la IAT** (12 DLLs) en `game_files/pe_imports.json`.
  - Extrae **2,811 punteros de código** desde `.reloc` en `seeds_reloc.json`.

---

## 2. Pipeline de Recompilación Estática (`11,226` funciones → `1.35M` líneas de C)

Ejecutado con las herramientas de `mc2-xbox/tools` (`disasm`, `func_id`, `abi_analysis`, `recomp`):

| Etapa | Resultado | Directorio |
|---|---|---|
| **Desensamblado (`disasm`)** | `769,976` instrucciones, `11,216` funciones en `.text` (85.6% alcanzable) | `pipeline/disasm/` |
| **Identificación (`func_id`)** | `659` vtables de C++ (motor AGE), `13,018` entradas clasificadas | `pipeline/func_id/` |
| **Análisis de ABI (`abi_analysis`)** | `11,216` firmas (`2,594` métodos `thiscall`) | `pipeline/abi/` |
| **Traducción a C (`recomp`)** | **`11,226 / 11,226` funciones traducidas (`0` fallos)**, `1,352,916` líneas de C en 45 fragmentos (`recomp_0000.c` .. `recomp_0044.c`) | `recomp/gen/` |

---

## 3. Puente Win32 / Direct3D9 / DirectInput8 / Miles Sound System / Bink (`src/`)

- **`src/pc_imports_table.inc`** (generado por `scripts/gen_pc_bridge.py`): Tabla exacta de los 202 thunks IAT (`0x0062D000`..`0x0062D384`) con sus bytes de limpieza de pila `stdcall`.
- **`src/pc_runtime.c` / `src/pc_runtime.h`**:
  - Espacio de direccionamiento invitado plano de **512 MB** (`mmap` / `VirtualAlloc`).
  - Soporta carga directa tanto de **`mc2.exe` (`MZ`/`PE32`)** como de **`mc2_pc.xbe` (`XBEH`)**.
  - **Win32 (`kernel32`, `user32`, `gdi32`, `advapi32`, `ole32`, `version`, `winmm`):** Heap (`HeapCreate`/`HeapAlloc`/`HeapReAlloc`/`HeapFree`), sistema de archivos (`CreateFileA`, `ReadFile` síncrono y `OVERLAPPED`, `SetFilePointer`, `FindFirstFileA`) para leer `assets_p.dat` y `streams/`, y logger interno del motor AGE (`0x00679848 |= 2` → `OutputDebugStringA`).
  - **Direct3D 9 (`d3d9.dll`):** Emulación COM completa de `IDirect3D9` (17 métodos), `IDirect3DDevice9` (119 métodos), `IDirect3DTexture9`, `IDirect3DSurface9`, `IDirect3DVertexBuffer9`, `IDirect3DIndexBuffer9` y Vertex/Pixel Shaders.
  - **DirectInput 8 (`dinput8.dll`):** Emulación COM de `IDirectInput8A` e `IDirectInputDevice8A` (teclado, ratón y gamepad virtual).
  - **Audio (`mss32.dll`) y Vídeo (`binkw32.dll`):** Stubs de Miles Sound System (`AIL_*`) y Bink Video (`Bink*`).
  - **Red (`wsock32.dll`):** Stubs offline limpios (`WSAStartup`, `socket` → `INVALID_SOCKET`) sin requerir red.

---

## 4. Compilación ARM64 (`libmc2pc.a` y `libmc2rt.so`)

```powershell
# Compilar las 48 unidades de traducción a libmc2pc.a (34.64 MB)
python scripts/build_arm64.py
```

La librería estática `recomp/obj_arm64/libmc2pc.a` se enlaza con `mc2-recomp-android/app/src/main/cpp/mc2_runtime.cpp` produciendo `libmc2rt.so` (**25.36 MB**, `aarch64-linux-android26`, 0 símbolos sin resolver).

---

## 5. Checkpoint Pre-Fase 3 (02/11/2026 — Arranque Completo Verificado en Dispositivo Android)

Prueba en vivo ejecutada por ADB inalámbrico con los datos originales de PC en `/sdcard/Games/Midnight Club II/`:

- **Secuencia de arranque completada sin errores (`mc2_boot.log`):**
  1. Inicializa CRT (`WinMainCRTStartup` -> `WinMain` -> `mc.cpp`), abre `userdata/options.cfg`, crea ventana `1920x1080` y dispositivo `IDirect3DDevice9`.
  2. Monta `assets_p.dat` (**32,213 archivos**) y `streams_pc.dat` (**10,350 archivos**).
  3. Inicializa audio (`AIL_quick_startup` + COM `IDirectMusicLoader8` / `IDirectMusicPerformance8::InitAudio` + hilo cargador `0x005DC4E0`).
  4. Inicializa red en modo offline (`WSAStartup` + `ioctlsocket`/`inet_addr`/`inet_ntoa` -> `I am at 127.0.0.1:9741`).
  5. Avanza por `rockstar.pss`, `sdlogo.pss`, `mc2intro.pss`, supera `**********Starting Legal screen**********` (`Present() frame #1`) y completa `Start loading frontend` -> `Done loading frontend` (carga de 242 íconos 2D, 32 vehículos 3D del menú, `userdata/keyboard_only.map`, y fuentes `chat`, `navigator_largest`, `arial12`).
  6. Permanece estable en el bucle del **Menú Principal** a **>34,000 frames** y **>3.74 millones de draw calls** (~110 draw calls/frame), con **0 `ICALL FAIL`** y **0 errores fatales**.

---

## 6. Fase 3 Completada (02/11/2026 — Renderizador D3D9 → OpenGL ES 3.0 y Controles en Pantalla)

- **Renderizador D3D9 → OpenGL ES 3.0 en Vivo:**
  - Doble buffer thread-safe (`Mc2RenderFrame`): lotes de dibujo (`Mc2DrawBatch`) y vértices normalizados (`Mc2Vertex`) transferidos de forma asíncrona entre el hilo nativo de `mc2.exe` y el hilo de presentación GL.
  - Decodificación en hardware de texturas paletizadas (`D3DFMT_P8 = 41`) con 256 colores, texturas comprimidas (`DXT1`, `DXT3`, `DXT5`) y texturas de color (`A8R8G8B8`, `X8R8G8B8`, `R5G6B5`, etc.).
  - Pacing de 60 FPS en `IDirect3DDevice9::Present` con `nanosleep` para ritmo real de fotogramas y prevención de contención de hilos.
  - Renderizado verificado en hardware real (Adreno 750 / GLES 3.2): pantalla legal, personajes de Midnight Club II (Hector, Moses), logos en japonés "湾岸 MIDNIGHT CLUB II", caja de diálogo "Introducir partida guardada / Introducción de nombre" y textos en español ("Aceptar introducción: Intro / Cancelar introducción de nombre: Esc").
- **Controles Táctiles y Gamepad:**
  - Controles táctiles transparentes integrados en [`GameActivity.java`](file:///C:/Users/mamal/WorkBuddy%20AI/PORTS/mc2-recomp-android/app/src/main/java/com/ports/mc2/GameActivity.java): D-Pad (Arriba, Abajo, Izquierda, Derecha), `ESC`, `CAM`, `ENTER`, `NITRO`, `SHIFT`, `FRENO`, `GAS` y botón `HUD`.
  - Conexión directa a `IDirectInputDevice8A::GetDeviceState` y cola de eventos de pulsación individual `GetDeviceData`.
  - Tasa de refresco medida: **53 a 60 FPS estables** a resolución nativa completa.



