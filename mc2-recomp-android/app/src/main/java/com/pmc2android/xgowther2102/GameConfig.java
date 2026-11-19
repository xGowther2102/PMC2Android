package com.pmc2android.xgowther2102;

import android.content.Context;
import android.content.SharedPreferences;

/** Ajustes de "gráficos" y arranque. Persistidos en SharedPreferences. */
public final class GameConfig {

    public static final int RENDERER_GLES3 = 0;
    public static final int RENDERER_GLES2 = 1;
    public static final int SCHEME_MODERN = 0;
    public static final int SCHEME_CLASSIC = 1;

    private static final String PREFS = "mc2_settings";

    public static final int PRESET_RECOMMENDED = 0;
    public static final int PRESET_LOW = 1;
    public static final int PRESET_MID = 2;
    public static final int PRESET_HIGH = 3;
    public static final int PRESET_CUSTOM = 4;

    public int renderer = RENDERER_GLES3;
    public int gfxPreset = PRESET_RECOMMENDED;
    public int scalePercent = 100;   // 50..200 (Supersampling >100% en GLES 3)
    public int fpsCap = 60;          // 0 = sin límite
    public boolean linearFilter = true;
    public static final int PERF_POS_TOP_CENTER = 0;
    public static final int PERF_POS_TOP_LEFT = 1;
    public static final int PERF_POS_TOP_RIGHT = 2;

    public static final int PERF_STYLE_FPS_ONLY = 0;
    public static final int PERF_STYLE_BAR = 1;
    public static final int PERF_STYLE_DETAILED = 2;

    public static final int BG_THEME_MC2_PURPLE = 0;
    public static final int BG_THEME_LA_SUNSET = 1;
    public static final int BG_THEME_PARIS_CYAN = 2;
    public static final int BG_THEME_TOKYO_NITRO = 3;
    public static final int BG_THEME_MULTICOLOR_FADE = 4;

    public boolean vsync = true;
    public int anisoLevel = 8;         // 0, 4, 8, 16
    public boolean depth24 = true;     // EGL_DEPTH_SIZE=24 vs 16
    public boolean fogEnabled = true;  // Niebla atmosférica D3D9 real
    public int msaaSamples = 0;        // 0, 2, 4 (FBO offscreen GLES 3)
    public boolean bloomEnabled = true;  // Nivel 3: Bloom selectivo luces/neón
    public boolean fxaaEnabled = true;   // Nivel 3: Anti-aliasing rápido FXAA
    public boolean nightEnhance = true;  // Nivel 3: Nitidez y contraste nocturno
    public boolean debugOverlay = false;
    public boolean showFpsCounter = false;
    public int perfPos = PERF_POS_TOP_CENTER;
    public int perfStyle = PERF_STYLE_BAR;
    public int perfTextSize = 1;       // 0=pequeño, 1=normal, 2=grande
    public int perfBgOpacity = 70;     // 0..100
    public boolean perfShowCpu = true;
    public boolean perfShowGpu = true;
    public boolean perfShowRam = true;
    public boolean perfShowTemp = false;

    public int bgTheme = BG_THEME_MC2_PURPLE;
    public int bgSpeed = 45;           // 0..150 (%)
    public int bgIntensity = 100;      // 30..150 (%)
    public int bgWaveCount = 6;        // 3..8
    public boolean bgParticles = true;
    public boolean bgScanlines = true;
    public int appLanguage = AppLang.LANG_AUTO; // 0=Auto, 1=ES, 2=EN

    public int controlScheme = SCHEME_MODERN;
    public int touchOpacity = 85;    // 40..100
    public boolean autoHideTouchOnGamepad = true;
    public String launchArgs = "-skipintro";

    // Modulo integrado MC2HOOK (adaptacion nativa ARM64 de jtxredline/mc2hook)
    public boolean mc2hEnabled = false;
    public boolean mc2hOpenSpy = true;
    public boolean mc2hMultiDat = true;
    public int mc2hReflectionRes = 512;     // 128, 256, 512, 1024
    public boolean mc2hReflNoSkip = true;
    public boolean mc2hAiPlayerModels = true;
    public int mc2hShadowPercent = 100;     // 50..150 (100 = 1.0f)
    public boolean mc2hBodyShader = true;
    public int mc2hDrawDistPercent = 120;   // 100..250 (1.0x..2.5x)
    public boolean mc2hMenuScrollFix = true;
    public boolean mc2hBurnoutFpsFix = true;
    public boolean mc2hManualReverse = true;
    public boolean mc2hExpandWorld = false;
    public int mc2hTimeWarpPercent = 100;   // 50, 100, 125, 150
    public int mc2hGravityDeci = -98;       // -98 (-9.8), -65, -40, -135

    public static GameConfig load(Context c) {
        SharedPreferences sp = c.getSharedPreferences(PREFS, Context.MODE_PRIVATE);
        GameConfig g = new GameConfig();
        if (!sp.getBoolean("preset_auto_init", false)) {
            if (!sp.contains("scale")) {
                g.applyPreset(c, PRESET_RECOMMENDED);
                sp.edit().putBoolean("preset_auto_init", true).apply();
                return g;
            }
            sp.edit().putBoolean("preset_auto_init", true).apply();
        }
        g.renderer = sp.getInt("renderer", g.renderer);
        g.gfxPreset = clamp(sp.getInt("gfx_preset", g.gfxPreset), 0, 4);
        g.scalePercent = clamp(sp.getInt("scale", g.scalePercent), 50, 200);
        g.fpsCap = sp.getInt("fps", g.fpsCap);
        if (!sp.getBoolean("filter_v2_migrated", false)) {
            g.linearFilter = true;
            sp.edit().putBoolean("filter", true).putBoolean("filter_v2_migrated", true).apply();
        } else {
            g.linearFilter = sp.getBoolean("filter", g.linearFilter);
        }
        g.vsync = sp.getBoolean("vsync", g.vsync);
        g.anisoLevel = clamp(sp.getInt("aniso_level", g.anisoLevel), 0, 16);
        g.depth24 = sp.getBoolean("depth_24", g.depth24);
        g.fogEnabled = sp.getBoolean("fog_enabled", g.fogEnabled);
        g.msaaSamples = clamp(sp.getInt("msaa_samples", g.msaaSamples), 0, 4);
        g.bloomEnabled = sp.getBoolean("bloom_enabled", g.bloomEnabled);
        g.fxaaEnabled = sp.getBoolean("fxaa_enabled", g.fxaaEnabled);
        g.nightEnhance = sp.getBoolean("night_enhance", g.nightEnhance);
        g.debugOverlay = sp.getBoolean("overlay", g.debugOverlay);
        g.showFpsCounter = sp.getBoolean("fps_counter", g.showFpsCounter);
        g.perfPos = clamp(sp.getInt("perf_pos", g.perfPos), 0, 2);
        g.perfStyle = clamp(sp.getInt("perf_style", g.perfStyle), 0, 2);
        g.perfTextSize = clamp(sp.getInt("perf_size", g.perfTextSize), 0, 2);
        g.perfBgOpacity = clamp(sp.getInt("perf_bg_op", g.perfBgOpacity), 0, 100);
        g.perfShowCpu = sp.getBoolean("perf_cpu", g.perfShowCpu);
        g.perfShowGpu = sp.getBoolean("perf_gpu", g.perfShowGpu);
        g.perfShowRam = sp.getBoolean("perf_ram", g.perfShowRam);
        g.perfShowTemp = sp.getBoolean("perf_temp", g.perfShowTemp);
        g.bgTheme = clamp(sp.getInt("bg_theme", g.bgTheme), 0, 4);
        g.bgSpeed = clamp(sp.getInt("bg_speed", g.bgSpeed), 0, 150);
        g.bgIntensity = clamp(sp.getInt("bg_intensity", g.bgIntensity), 30, 150);
        g.bgWaveCount = clamp(sp.getInt("bg_waves", g.bgWaveCount), 3, 8);
        g.bgParticles = sp.getBoolean("bg_particles", g.bgParticles);
        g.bgScanlines = sp.getBoolean("bg_scanlines", g.bgScanlines);
        g.appLanguage = clamp(sp.getInt("app_language", g.appLanguage), 0, 2);
        AppLang.apply(g.appLanguage);
        g.controlScheme = sp.getInt("control_scheme", g.controlScheme);
        g.touchOpacity = clamp(sp.getInt("touch_opacity", g.touchOpacity), 40, 100);
        g.autoHideTouchOnGamepad = sp.getBoolean("auto_hide_touch", g.autoHideTouchOnGamepad);
        String args = sp.getString("launch_args", g.launchArgs);
        g.launchArgs = args != null ? args.trim() : "";
        g.mc2hEnabled = sp.getBoolean("mc2h_enabled", g.mc2hEnabled);
        g.mc2hOpenSpy = sp.getBoolean("mc2h_openspy", g.mc2hOpenSpy);
        g.mc2hMultiDat = sp.getBoolean("mc2h_multidat", g.mc2hMultiDat);
        g.mc2hReflectionRes = sp.getInt("mc2h_refl_res", g.mc2hReflectionRes);
        if (g.mc2hReflectionRes != 128 && g.mc2hReflectionRes != 256
                && g.mc2hReflectionRes != 512 && g.mc2hReflectionRes != 1024) {
            g.mc2hReflectionRes = 512;
        }
        g.mc2hReflNoSkip = sp.getBoolean("mc2h_refl_noskip", g.mc2hReflNoSkip);
        g.mc2hAiPlayerModels = sp.getBoolean("mc2h_ai_models", g.mc2hAiPlayerModels);
        g.mc2hShadowPercent = clamp(sp.getInt("mc2h_shadow_pct", g.mc2hShadowPercent), 50, 150);
        g.mc2hBodyShader = sp.getBoolean("mc2h_body_shader", g.mc2hBodyShader);
        g.mc2hDrawDistPercent = clamp(sp.getInt("mc2h_draw_dist_pct", g.mc2hDrawDistPercent), 100, 250);
        g.mc2hMenuScrollFix = sp.getBoolean("mc2h_menu_scroll", g.mc2hMenuScrollFix);
        g.mc2hBurnoutFpsFix = sp.getBoolean("mc2h_burnout_fps", g.mc2hBurnoutFpsFix);
        g.mc2hManualReverse = sp.getBoolean("mc2h_manual_rev", g.mc2hManualReverse);
        g.mc2hExpandWorld = sp.getBoolean("mc2h_expand_world", g.mc2hExpandWorld);
        g.mc2hTimeWarpPercent = clamp(sp.getInt("mc2h_time_warp", g.mc2hTimeWarpPercent), 50, 150);
        g.mc2hGravityDeci = clamp(sp.getInt("mc2h_gravity", g.mc2hGravityDeci), -150, -30);
        if (g.renderer != RENDERER_GLES3 && g.renderer != RENDERER_GLES2) {
            g.renderer = RENDERER_GLES3;
        }
        if (g.controlScheme != SCHEME_MODERN && g.controlScheme != SCHEME_CLASSIC) {
            g.controlScheme = SCHEME_MODERN;
        }
        return g;
    }

    public void save(Context c) {
        c.getSharedPreferences(PREFS, Context.MODE_PRIVATE).edit()
                .putInt("renderer", renderer)
                .putInt("gfx_preset", gfxPreset)
                .putInt("scale", scalePercent)
                .putInt("fps", fpsCap)
                .putBoolean("filter", linearFilter)
                .putBoolean("vsync", vsync)
                .putInt("aniso_level", anisoLevel)
                .putBoolean("depth_24", depth24)
                .putBoolean("fog_enabled", fogEnabled)
                .putInt("msaa_samples", msaaSamples)
                .putBoolean("bloom_enabled", bloomEnabled)
                .putBoolean("fxaa_enabled", fxaaEnabled)
                .putBoolean("night_enhance", nightEnhance)
                .putBoolean("overlay", debugOverlay)
                .putBoolean("fps_counter", showFpsCounter)
                .putInt("perf_pos", perfPos)
                .putInt("perf_style", perfStyle)
                .putInt("perf_size", perfTextSize)
                .putInt("perf_bg_op", perfBgOpacity)
                .putBoolean("perf_cpu", perfShowCpu)
                .putBoolean("perf_gpu", perfShowGpu)
                .putBoolean("perf_ram", perfShowRam)
                .putBoolean("perf_temp", perfShowTemp)
                .putInt("bg_theme", bgTheme)
                .putInt("bg_speed", bgSpeed)
                .putInt("bg_intensity", bgIntensity)
                .putInt("bg_waves", bgWaveCount)
                .putBoolean("bg_particles", bgParticles)
                .putBoolean("bg_scanlines", bgScanlines)
                .putInt("app_language", appLanguage)
                .putInt("control_scheme", controlScheme)
                .putInt("touch_opacity", touchOpacity)
                .putBoolean("auto_hide_touch", autoHideTouchOnGamepad)
                .putString("launch_args", launchArgs != null ? launchArgs.trim() : "")
                .putBoolean("mc2h_enabled", mc2hEnabled)
                .putBoolean("mc2h_openspy", mc2hOpenSpy)
                .putBoolean("mc2h_multidat", mc2hMultiDat)
                .putInt("mc2h_refl_res", mc2hReflectionRes)
                .putBoolean("mc2h_refl_noskip", mc2hReflNoSkip)
                .putBoolean("mc2h_ai_models", mc2hAiPlayerModels)
                .putInt("mc2h_shadow_pct", mc2hShadowPercent)
                .putBoolean("mc2h_body_shader", mc2hBodyShader)
                .putInt("mc2h_draw_dist_pct", mc2hDrawDistPercent)
                .putBoolean("mc2h_menu_scroll", mc2hMenuScrollFix)
                .putBoolean("mc2h_burnout_fps", mc2hBurnoutFpsFix)
                .putBoolean("mc2h_manual_rev", mc2hManualReverse)
                .putBoolean("mc2h_expand_world", mc2hExpandWorld)
                .putInt("mc2h_time_warp", mc2hTimeWarpPercent)
                .putInt("mc2h_gravity", mc2hGravityDeci)
                .apply();
        AppLang.apply(appLanguage);
    }

    public String argsSummary() {
        String s = launchArgs != null ? launchArgs.trim() : "";
        return s.isEmpty() ? AppLang.t("Estándar", "Standard") : s;
    }

    public String rendererName() {
        return renderer == RENDERER_GLES2 ? "OpenGL ES 2" : "OpenGL ES 3";
    }

    public String fpsLabel() {
        return fpsCap == 0 ? AppLang.t("sin límite", "unlimited") : (fpsCap + " fps");
    }

    public String schemeLabel() {
        return controlScheme == SCHEME_CLASSIC
                ? AppLang.t("Clásico PS2/Xbox", "Classic PS2/Xbox")
                : AppLang.t("Xbox Moderno", "Modern Xbox");
    }

    public void applyPreset(Context ctx, int preset) {
        gfxPreset = clamp(preset, 0, 4);
        if (gfxPreset == PRESET_CUSTOM) return;
        int effective = gfxPreset;
        if (gfxPreset == PRESET_RECOMMENDED && ctx != null) {
            GpuTierDetector.HardwareInfo hw = GpuTierDetector.detect(ctx);
            switch (hw.tier) {
                case ULTRA:
                    renderer = RENDERER_GLES3;
                    scalePercent = 125;
                    fpsCap = 60;
                    vsync = true;
                    linearFilter = true;
                    anisoLevel = 16;
                    depth24 = true;
                    fogEnabled = true;
                    msaaSamples = 2;
                    bloomEnabled = true;
                    fxaaEnabled = true;
                    nightEnhance = true;
                    return;
                case HIGH:
                    effective = PRESET_HIGH;
                    break;
                case MID:
                    effective = PRESET_MID;
                    break;
                default:
                    effective = PRESET_LOW;
                    break;
            }
        }
        if (effective == PRESET_LOW) {
            renderer = RENDERER_GLES3;
            scalePercent = 80;
            fpsCap = 60;
            vsync = true;
            linearFilter = true;
            anisoLevel = 4;
            depth24 = false;
            fogEnabled = true;
            msaaSamples = 0;
            bloomEnabled = false;
            fxaaEnabled = false;
            nightEnhance = false;
        } else if (effective == PRESET_MID) {
            renderer = RENDERER_GLES3;
            scalePercent = 100;
            fpsCap = 60;
            vsync = true;
            linearFilter = true;
            anisoLevel = 8;
            depth24 = true;
            fogEnabled = true;
            msaaSamples = 0;
            bloomEnabled = false;
            fxaaEnabled = true;
            nightEnhance = true;
        } else {
            // HIGH (o fallback Recomendado sin contexto)
            renderer = RENDERER_GLES3;
            scalePercent = 100;
            fpsCap = 60;
            vsync = true;
            linearFilter = true;
            anisoLevel = 16;
            depth24 = true;
            fogEnabled = true;
            msaaSamples = 2;
            bloomEnabled = true;
            fxaaEnabled = true;
            nightEnhance = true;
        }
    }

    public String presetName() {
        switch (gfxPreset) {
            case PRESET_RECOMMENDED: return AppLang.t("Recomendado", "Recommended");
            case PRESET_LOW: return AppLang.t("Bajos", "Low");
            case PRESET_MID: return AppLang.t("Medios", "Medium");
            case PRESET_HIGH: return AppLang.t("Alto", "High");
            default: return AppLang.t("Personalizado", "Custom");
        }
    }

    public String summary() {
        return presetName() + " · " + scalePercent + "% · " + fpsLabel() + " · " + schemeLabel();
    }

    public String mc2hookSummary() {
        if (!mc2hEnabled) return AppLang.t("Inactivo", "Disabled");
        StringBuilder sb = new StringBuilder(AppLang.t("Activo", "Enabled"));
        if (mc2hOpenSpy) sb.append(" · OpenSpy");
        if (mc2hMultiDat) sb.append(" · Multi-DAT");
        sb.append(" · Ref ").append(mc2hReflectionRes).append("px");
        return sb.toString();
    }

    public static int clamp(int v, int lo, int hi) {
        return Math.max(lo, Math.min(hi, v));
    }
}
