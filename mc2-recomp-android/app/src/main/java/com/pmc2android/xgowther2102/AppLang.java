package com.pmc2android.xgowther2102;

import android.content.Context;

import java.util.Locale;

/**
 * Selector de idioma de la interfaz (Auto / Español / English).
 * Se sincroniza automáticamente desde GameConfig.load/save.
 */
public final class AppLang {

    public static final int LANG_AUTO = 0;
    public static final int LANG_ES = 1;
    public static final int LANG_EN = 2;

    private static volatile boolean english = false;

    private AppLang() {
    }

    public static void apply(int mode) {
        if (mode == LANG_EN) {
            english = true;
        } else if (mode == LANG_ES) {
            english = false;
        } else {
            String lang = Locale.getDefault().getLanguage();
            english = lang != null && lang.toLowerCase(Locale.US).startsWith("en");
        }
    }

    public static void sync(Context c) {
        if (c == null) return;
        int mode = c.getSharedPreferences("mc2_settings", Context.MODE_PRIVATE)
                .getInt("app_language", LANG_AUTO);
        apply(mode);
    }

    public static boolean isEn() {
        return english;
    }

    public static String t(String es, String en) {
        return english ? en : es;
    }
}
