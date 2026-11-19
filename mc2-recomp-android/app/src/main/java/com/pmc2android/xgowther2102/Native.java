package com.pmc2android.xgowther2102;

import android.view.Surface;

/**
 * Contrato único entre la capa Android y libmc2rt.so.
 *
 * Reglas del contrato (obligatorias para cualquier módulo que lo use):
 *  - Toda llamada que pueda bloquear (boot, shutdown) se hace fuera del UI thread.
 *  - attach/detach son no bloqueantes: señalizan al hilo de render, nunca hacen join
 *    desde el hilo principal.
 *  - resetInput() debe invocarse en cada pausa para no dejar teclas pegadas.
 *  - version() es la única fuente de verdad de la versión del runtime.
 */
public final class Native {

    public static final boolean LOADED;
    private static final String LOAD_ERROR;

    static {
        boolean ok;
        String err;
        try {
            System.loadLibrary("mc2rt");
            ok = true;
            err = null;
        } catch (Throwable t) {
            ok = false;
            err = t.getClass().getSimpleName() + ": " + t.getMessage();
        }
        LOADED = ok;
        LOAD_ERROR = err;
    }

    private Native() {
    }

    public static String loadError() {
        return LOAD_ERROR == null ? "" : LOAD_ERROR;
    }

    /**
     * Configura el runtime sin tocar EGL. dataDir es el directorio de los datos del
     * juego; workDir es el directorio privado de la app para guardados y caché.
     */
    public static native String init(String dataDir, String workDir, int renderer,
                                     int scalePercent, int fpsCap,
                                     boolean linearFilter, boolean vsync);

    /** Define argumentos extra de línea de comandos para mc2.exe (p. ej. "-skipintro -nomovies"). */
    public static native void setLaunchArgs(String args);

    /** Mapea el ejecutable PE de PC y devuelve "OK\n..." o "ERR=...". Bloqueante. */
    public static native String boot(int fd, long size);

    /** Arranca el hilo de render sobre la Surface. No bloqueante. */
    public static native void attach(Surface surface);

    /** Detiene el hilo de render. No bloqueante. */
    public static native void detach();

    /**
     * Apagado completo: detiene el juego, libera EGL y la memoria invitada.
     * BLOQUEANTE. Llamar siempre desde un hilo de fondo.
     */
    public static native void shutdown();

    /** Compatibilidad con llamadas antiguas; equivale a shutdown(). */
    public static void stop() {
        if (LOADED) {
            shutdown();
        }
    }

    /** Instantánea de estado para el HUD. Barata, pero se invoca desde un hilo de fondo. */
    public static native String stats();

    /** Inyecta el estado final ya arbitado de una tecla DirectInput (DIK_*). */
    public static native void keyEvent(int dikCode, boolean pressed);

    /** Inyecta un caracter Unicode/ASCII en la cola WM_CHAR sin activar teclas de menu (p. ej. 'b' = POPUP_BACK). */
    public static native void charEvent(int ch);

    /** Inyecta posicion/deltas de raton en coordenadas activas del juego y evento Win32 (0=solo delta, 1=down, 2=move, 3=up). */
    public static native void mouseEvent(int x, int y, int dx, int dy, boolean leftDown, int msgType);

    /** Resolución interna actual del dispositivo D3D9 del juego (p. ej. 1280x720). */
    public static native int gameWidth();
    public static native int gameHeight();

    /** Mejoras gráficas Nivel 1, 2 & 3 (aniso, 24-bit depth, niebla, MSAA, bloom, FXAA y nitidez). */
    public static native void setGraphicsEnhancements(
            int anisoLevel, boolean depth24, boolean fogEnabled, int msaaSamples,
            boolean bloomEnabled, boolean fxaaEnabled, boolean nightEnhance);

    /** Modulo integrado MC2HOOK (jtxredline/mc2hook adaptado nativamente a ARM64). */
    public static native void setMc2HookConfig(
            boolean enabled, boolean openSpy, boolean multiDat,
            int reflectionRes, boolean reflNoSkip, boolean aiPlayerModels,
            int shadowPercent, boolean bodyShader, int drawDistPercent,
            boolean menuScrollFix, boolean burnoutFpsFix, boolean manualReverse,
            boolean expandWorld, int timeWarpPercent, int gravityDeci);

    /** Libera todas las teclas que pudieran haber quedado pulsadas. */
    public static native void resetInput();

    /** Versión del runtime; coincide con BuildConfig.VERSION_NAME. */
    public static native String version();

    /** Resumen de cuantos archivos del arbol SAF ha usado realmente el juego. */
    public static native String dataUsage();

    /** Informe completo de anomalias agrupadas por categoria. */
    public static native String diagReport();

    /** Contadores compactos para el HUD. */
    public static native String diagSummary();

    /** Reinicia el colector de diagnostico. */
    public static native void diagReset();

    /** CRC32 + cabecera hex de un tramo leido por la ruta SAF real. */
    public static native String dataProbe(String path, long offset, int len);

    /**
     * Sonda de acceso nativo: intenta fopen(path, "rb") con el UID de la app.
     * Devuelve "OK size=N" o "ERR errno=N (mensaje)". Permite decidir si una
     * carpeta SAF resuelta a ruta de filesystem es realmente utilizable por el
     * motor C, sin depender de suposiciones sobre Scoped Storage.
     */
    public static native String probePath(String path);

    /**
     * Registra un descriptor abierto por SAF para que el motor C lo use en
     * lugar de fopen(). El codigo nativo hace dup(fd): Java puede cerrar su
     * ParcelFileDescriptor despues de llamar a esto.
     *
     * @param relativePath ruta relativa a la carpeta elegida (p. ej. "assets_p.dat")
     * @return numero total de descriptores registrados
     */
    public static native int registerDataFd(String relativePath, int fd, long size);

    /** Libera todos los descriptores SAF (al cambiar de carpeta o al apagar). */
    public static native void clearDataFds();

    public static native int dataFdCount();
}
