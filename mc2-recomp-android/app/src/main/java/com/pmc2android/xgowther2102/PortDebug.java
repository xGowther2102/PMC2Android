package com.pmc2android.xgowther2102;

import android.util.Log;

/**
 * Capa de diagnostico del port. Todas las lineas salen con el tag "PortDebug"
 * para poder filtrarlas con:  adb logcat -s PortDebug
 *
 * Categorias: [DATA] [GFX] [AUDIO] [INPUT] [LIFE] [TEST]
 * El mismo tag se usa desde C++ (__android_log_print) para que un unico
 * comando muestre la traza completa Java + nativa.
 */
public final class PortDebug {

    public static final String TAG = "PortDebug";

    private static final long INPUT_THROTTLE_MS = 2000L;
    private static long lastInputLog = 0L;
    private static long inputEvents = 0L;

    private PortDebug() {
    }

    public static void data(String msg) {
        if (!BuildConfig.DEBUG) return;
        Log.i(TAG, "[DATA] " + msg);
    }

    public static void gfx(String msg) {
        if (!BuildConfig.DEBUG) return;
        Log.i(TAG, "[GFX] " + msg);
    }

    public static void audio(String msg) {
        if (!BuildConfig.DEBUG) return;
        Log.i(TAG, "[AUDIO] " + msg);
    }

    public static void life(String msg) {
        if (!BuildConfig.DEBUG) return;
        Log.i(TAG, "[LIFE] " + msg);
    }

    public static void test(String msg) {
        if (!BuildConfig.DEBUG) return;
        Log.i(TAG, "[TEST] " + msg);
    }

    /** Los eventos de input son miles por segundo: se agregan, nunca por tecla. */
    public static void input(String msg) {
        if (!BuildConfig.DEBUG) return;
        inputEvents++;
        long now = System.currentTimeMillis();
        if (now - lastInputLog < INPUT_THROTTLE_MS) return;
        lastInputLog = now;
        Log.i(TAG, "[INPUT] " + msg + " · eventos acumulados=" + inputEvents);
    }

    public static void warn(String category, String msg) {
        Log.w(TAG, "[" + category + "] " + msg);
    }

    public static void error(String category, String msg) {
        Log.e(TAG, "[" + category + "] " + msg);
    }
}
