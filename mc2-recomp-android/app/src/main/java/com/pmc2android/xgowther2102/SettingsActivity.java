package com.pmc2android.xgowther2102;

import android.app.Activity;
import android.os.Bundle;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;

/**
 * Ajustes organizados por pestañas Glassmorphic:
 * [Gráficos] [Controles] [Medidor FPS] [Fondo Launcher] [MC2HOOK / Online].
 */
public class SettingsActivity extends Activity {

    private static final int NEON_PINK = 0xFFF472B6;
    private static String[] tabTitles() {
        return new String[]{
                AppLang.t("Gráficos", "Graphics"),
                AppLang.t("Controles", "Controls"),
                AppLang.t("Medidor FPS", "FPS Meter"),
                AppLang.t("Interfaz / Idioma", "Interface / Lang"),
                "MC2HOOK / Online"
        };
    }
    private static final int TAB_COUNT = 5;
    private static final int[] TAB_ACCENTS = {
            LauncherArtView.FOCUS_CYAN,
            LauncherArtView.NEON_PURPLE,
            LauncherArtView.NITRO_GREEN,
            LauncherArtView.RACING_ORANGE,
            NEON_PINK
    };

    private GameConfig cfg;
    private LauncherArtView.NeonBackdropView backdrop;

    private int activeTab;
    private final Button[] tabButtons = new Button[TAB_COUNT];
    private final View[] tabPages = new View[TAB_COUNT];

    // Ajustes rápidos gráficos
    private final Button[] presetButtons = new Button[5];
    private TextView hwDetectText;
    private boolean syncingPreset;

    // Gráficos + Mejoras Nivel 1, 2 & 3
    private Spinner rendererSpinner;
    private Spinner fpsSpinner;
    private Spinner anisoSpinner;
    private Spinner msaaSpinner;
    private SeekBar scaleBar;
    private TextView scaleValue;
    private Switch vsyncSwitch;
    private Switch filterSwitch;
    private Switch depth24Switch;
    private Switch fogSwitch;
    private Switch bloomSwitch;
    private Switch fxaaSwitch;
    private Switch nightEnhanceSwitch;

    // Controles
    private Spinner schemeSpinner;
    private TextView schemeDetail;
    private SeekBar opacityBar;
    private TextView opacityValue;
    private Switch autoHideSwitch;

    // Medidor FPS / Debug
    private Switch perfEnabledSwitch;
    private Spinner perfStyleSpinner;
    private Spinner perfPosSpinner;
    private Spinner perfSizeSpinner;
    private SeekBar perfBgOpBar;
    private TextView perfBgOpValue;
    private CheckBox perfCpuCb;
    private CheckBox perfGpuCb;
    private CheckBox perfRamCb;
    private CheckBox perfTempCb;
    private Switch overlaySwitch;

    // Fondo del launcher e idioma
    private Spinner langSpinner;
    private Spinner bgThemeSpinner;
    private SeekBar bgSpeedBar;
    private TextView bgSpeedValue;
    private SeekBar bgIntensityBar;
    private TextView bgIntensityValue;
    private SeekBar bgWavesBar;
    private TextView bgWavesValue;
    private Switch bgParticlesSwitch;
    private Switch bgScanlinesSwitch;

    // MC2HOOK / OpenSpy (Módulo integrado)
    private Switch mc2hEnabledSwitch;
    private TextView mc2hLockBanner;
    private View mc2hOptionsHost;
    private Switch mc2hOpenSpySwitch;
    private Switch mc2hMultiDatSwitch;
    private Spinner mc2hReflResSpinner;
    private Switch mc2hReflNoSkipSwitch;
    private Switch mc2hAiModelsSwitch;
    private SeekBar mc2hShadowBar;
    private TextView mc2hShadowValue;
    private Switch mc2hBodyShaderSwitch;
    private SeekBar mc2hDrawDistBar;
    private TextView mc2hDrawDistValue;
    private Switch mc2hMenuScrollSwitch;
    private Switch mc2hBurnoutFixSwitch;
    private Switch mc2hManualRevSwitch;
    private Switch mc2hExpandWorldSwitch;
    private Spinner mc2hTimeWarpSpinner;
    private Spinner mc2hGravitySpinner;
    private boolean syncingMc2Hook;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        cfg = GameConfig.load(this);
        activeTab = GameConfig.clamp(getIntent().getIntExtra("tab", 0), 0, TAB_COUNT - 1);
        setContentView(buildUi());
        LauncherArtView.applyImmersiveWindow(this);
    }

    @Override
    protected void onResume() {
        super.onResume();
        LauncherArtView.applyImmersiveWindow(this);
        if (backdrop != null) backdrop.setLifecyclePaused(false);
    }

    @Override
    protected void onPause() {
        if (backdrop != null) backdrop.setLifecyclePaused(true);
        super.onPause();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) LauncherArtView.applyImmersiveWindow(this);
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (keyCode == KeyEvent.KEYCODE_BUTTON_B) {
            persist();
            finish();
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_BUTTON_L1) {
            selectTab((activeTab + TAB_COUNT - 1) % TAB_COUNT);
            return true;
        }
        if (keyCode == KeyEvent.KEYCODE_BUTTON_R1) {
            selectTab((activeTab + 1) % TAB_COUNT);
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    private View buildUi() {
        FrameLayout root = new FrameLayout(this);
        root.setBackgroundColor(0xFF060810);

        backdrop = new LauncherArtView.NeonBackdropView(this);
        backdrop.applyConfig(cfg);
        root.addView(backdrop, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        LinearLayout container = Ui.column(this);
        LauncherArtView.applySafeAreaInsets(this, root, container);

        container.addView(buildHeaderBar(), Ui.matchWrap());
        container.addView(Ui.gap(this, 8));
        container.addView(buildTabStrip(), Ui.matchWrap());
        container.addView(Ui.gap(this, 10));

        FrameLayout pageHost = new FrameLayout(this);
        tabPages[0] = wrapScroll(buildGraphicsTab());
        tabPages[1] = wrapScroll(buildControlsTab());
        tabPages[2] = wrapScroll(buildPerfTab());
        tabPages[3] = wrapScroll(buildBackdropTab());
        tabPages[4] = wrapScroll(buildMc2HookTab());

        for (View page : tabPages) {
            pageHost.addView(page, new FrameLayout.LayoutParams(
                    FrameLayout.LayoutParams.MATCH_PARENT,
                    FrameLayout.LayoutParams.MATCH_PARENT));
        }
        container.addView(pageHost, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f));

        root.addView(container, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        selectTab(activeTab);
        bindListeners();
        return root;
    }

    private LinearLayout buildHeaderBar() {
        LinearLayout header = Ui.row(this);
        Button backBtn = Ui.ghost(this, AppLang.t("← Volver", "← Back"));
        backBtn.setTextSize(13f);
        backBtn.setPadding(Ui.dp(this, 14), Ui.dp(this, 7), Ui.dp(this, 14), Ui.dp(this, 7));
        backBtn.setOnClickListener(v -> {
            persist();
            finish();
        });
        header.addView(backBtn);

        LinearLayout titleCol = Ui.column(this);
        TextView title = Ui.text(this, AppLang.t(
                "Configuración · Gráficos, Controles y Tema",
                "Settings · Graphics, Controls & Theme"), 17f, Ui.TEXT, true);
        TextView sub = Ui.text(this, AppLang.t(
                "Cambiar pestaña (o LB / RB con mando) · los cambios se guardan al instante.",
                "Switch tabs (or LB / RB on gamepad) · changes are saved instantly."),
                11f, Ui.MUTED, false);
        titleCol.addView(title);
        titleCol.addView(sub);
        LinearLayout.LayoutParams tLp = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        tLp.leftMargin = Ui.dp(this, 12);
        header.addView(titleCol, tLp);

        Button langQuickBtn = Ui.ghost(this, AppLang.isEn() ? "🌐 EN → ES" : "🌐 ES → EN");
        langQuickBtn.setTextSize(12f);
        langQuickBtn.setPadding(Ui.dp(this, 10), Ui.dp(this, 7), Ui.dp(this, 10), Ui.dp(this, 7));
        langQuickBtn.setOnClickListener(v -> {
            cfg.appLanguage = AppLang.isEn() ? AppLang.LANG_ES : AppLang.LANG_EN;
            persist();
            getIntent().putExtra("tab", activeTab);
            recreate();
        });
        header.addView(langQuickBtn);

        header.addView(Ui.gap(this, 8));

        Button resetBtn = Ui.ghost(this, AppLang.t("Restablecer", "Reset"));
        resetBtn.setTextSize(12.5f);
        resetBtn.setPadding(Ui.dp(this, 12), Ui.dp(this, 7), Ui.dp(this, 12), Ui.dp(this, 7));
        resetBtn.setOnClickListener(v -> resetDefaults());
        header.addView(resetBtn);

        header.addView(Ui.gap(this, 8));

        Button saveBtn = Ui.accent(this, AppLang.t("Guardar", "Save"));
        saveBtn.setTextSize(12.5f);
        saveBtn.setPadding(Ui.dp(this, 16), Ui.dp(this, 7), Ui.dp(this, 16), Ui.dp(this, 7));
        saveBtn.setOnClickListener(v -> {
            persist();
            finish();
        });
        header.addView(saveBtn);
        return header;
    }

    private LinearLayout buildTabStrip() {
        LinearLayout strip = Ui.row(this);
        strip.setGravity(Gravity.CENTER_VERTICAL);
        String[] titles = tabTitles();
        for (int i = 0; i < TAB_COUNT; i++) {
            final int idx = i;
            Button btn = Ui.button(this, titles[i], 0x440D1220, Ui.TEXT, 0x33FFFFFF);
            btn.setTextSize(11.5f);
            btn.setPadding(Ui.dp(this, 8), Ui.dp(this, 7), Ui.dp(this, 8), Ui.dp(this, 7));
            btn.setOnClickListener(v -> selectTab(idx));
            LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(0,
                    LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
            if (i < TAB_COUNT - 1) lp.rightMargin = Ui.dp(this, 8);
            strip.addView(btn, lp);
            tabButtons[i] = btn;
        }
        return strip;
    }

    private void selectTab(int index) {
        activeTab = GameConfig.clamp(index, 0, TAB_COUNT - 1);
        for (int i = 0; i < TAB_COUNT; i++) {
            boolean sel = (i == activeTab);
            if (tabPages[i] != null) tabPages[i].setVisibility(sel ? View.VISIBLE : View.GONE);
            Button b = tabButtons[i];
            if (b != null) {
                int acc = TAB_ACCENTS[i];
                int fill = sel ? ((0x3A << 24) | (acc & 0x00FFFFFF)) : LauncherArtView.GLASS_FILL;
                int stroke = sel ? acc : LauncherArtView.GLASS_STROKE;
                b.setBackground(LauncherArtView.glassDrawable(this, fill, stroke, sel ? 1.6f : 1f, 12f));
                b.setTextColor(sel ? 0xFFFFFFFF : Ui.MUTED);
            }
        }
    }

    private View wrapScroll(View content) {
        ScrollView scroll = new ScrollView(this);
        scroll.setFillViewport(true);
        scroll.addView(content, new ScrollView.LayoutParams(
                ScrollView.LayoutParams.MATCH_PARENT,
                ScrollView.LayoutParams.WRAP_CONTENT));
        return scroll;
    }

    private LinearLayout twoColumnRow(LinearLayout left, LinearLayout right) {
        LinearLayout row = Ui.row(this);
        row.setGravity(Gravity.TOP);
        row.addView(left, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        LinearLayout.LayoutParams rightLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        rightLp.leftMargin = Ui.dp(this, 14);
        row.addView(right, rightLp);
        return row;
    }

    private View buildGraphicsTab() {
        LinearLayout rootCol = Ui.column(this);

        LinearLayout presetCard = glassCard();
        presetCard.addView(sectionHeader(AppLang.t(
                "Perfiles Rápidos · Ajustados al Hardware",
                "Quick Presets · Tuned to Hardware"), LauncherArtView.FOCUS_CYAN));
        GpuTierDetector.HardwareInfo hw = GpuTierDetector.detect(this);
        hwDetectText = note(AppLang.t("Hardware detectado: ", "Detected hardware: ") + hw.summaryLine());
        presetCard.addView(hwDetectText);

        LinearLayout presetRow = Ui.row(this);
        LinearLayout.LayoutParams prLp = Ui.matchWrap();
        prLp.topMargin = Ui.dp(this, 8);
        String[] pNames = {
                AppLang.t("Recomendado", "Recommended"),
                AppLang.t("Bajos", "Low"),
                AppLang.t("Medios", "Medium"),
                AppLang.t("Alto", "High"),
                AppLang.t("Personalizado", "Custom")
        };
        for (int i = 0; i < pNames.length; i++) {
            final int pIdx = i;
            Button pb = Ui.button(this, pNames[i], 0x440D1220, Ui.TEXT, 0x33FFFFFF);
            pb.setTextSize(11.5f);
            pb.setPadding(Ui.dp(this, 6), Ui.dp(this, 6), Ui.dp(this, 6), Ui.dp(this, 6));
            pb.setOnClickListener(v -> applyQuickPreset(pIdx));
            LinearLayout.LayoutParams bLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
            if (i < pNames.length - 1) bLp.rightMargin = Ui.dp(this, 6);
            presetRow.addView(pb, bLp);
            presetButtons[i] = pb;
        }
        presetCard.addView(presetRow, prLp);
        rootCol.addView(presetCard, Ui.matchWrap());
        rootCol.addView(Ui.gap(this, 10));

        LinearLayout left = glassCard();
        left.addView(sectionHeader(AppLang.t("Renderizado & Escala", "Rendering & Scale"), LauncherArtView.FOCUS_CYAN));

        left.addView(fieldLabel(AppLang.t("API gráfica", "Graphics API")));
        rendererSpinner = new Spinner(this);
        rendererSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("OpenGL ES 3 (recomendado)", "OpenGL ES 3 (recommended)"),
                        AppLang.t("OpenGL ES 2 (compatibilidad)", "OpenGL ES 2 (compatibility)")
                }));
        rendererSpinner.setSelection(cfg.renderer == GameConfig.RENDERER_GLES2 ? 1 : 0);
        styleSpinner(rendererSpinner);
        left.addView(rendererSpinner);
        left.addView(note(AppLang.t(
                "ES 3 usa el contexto 3.x; si el driver falla, el runtime cae a ES 2.",
                "ES 3 uses 3.x context; falls back to ES 2 if unsupported by driver.")));

        left.addView(fieldLabel(AppLang.t("Escala / Supersampling", "Scale / Supersampling")));
        LinearLayout scaleRow = Ui.row(this);
        scaleBar = new SeekBar(this);
        scaleBar.setMax(150); // 50..200
        scaleBar.setProgress(GameConfig.clamp(cfg.scalePercent, 50, 200) - 50);
        scaleValue = Ui.text(this, cfg.scalePercent + "%", 14f, LauncherArtView.FOCUS_CYAN, true);
        scaleValue.setMinWidth(Ui.dp(this, 56));
        scaleValue.setGravity(Gravity.END);
        scaleRow.addView(scaleBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        scaleRow.addView(scaleValue);
        left.addView(scaleRow);
        left.addView(note(AppLang.t(
                "50–95% rendimiento · 100% nativo · 125–200% Supersampling real (GLES 3).",
                "50–95% performance · 100% native · 125–200% true Supersampling (GLES 3).")));

        left.addView(fieldLabel(AppLang.t("Límite de FPS", "FPS Limit")));
        fpsSpinner = new Spinner(this);
        fpsSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{"30 fps", "60 fps", "120 fps", AppLang.t("Sin límite", "Unlimited")}));
        fpsSpinner.setSelection(fpsIndex(cfg.fpsCap));
        styleSpinner(fpsSpinner);
        left.addView(fpsSpinner);

        vsyncSwitch = makeSwitch(AppLang.t("Sincronización vertical (VSync)", "Vertical Sync (VSync)"), cfg.vsync);
        left.addView(vsyncSwitch);
        left.addView(note(AppLang.t(
                "Evita cortes de imagen (tearing) manteniendo estabilidad.",
                "Prevents screen tearing while keeping frame pacing stable.")));

        LinearLayout right = glassCard();
        right.addView(sectionHeader(AppLang.t("Mejoras Gráficas (Nivel 1, 2 & 3)", "Graphics Enhancements (Tier 1, 2 & 3)"), LauncherArtView.NITRO_GREEN));

        right.addView(fieldLabel("Anti-Aliasing MSAA (GLES 3)"));
        msaaSpinner = new Spinner(this);
        msaaSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Desactivado (0x)", "Off (0x)"),
                        AppLang.t("2x MSAA (Recomendado)", "2x MSAA (Recommended)"),
                        AppLang.t("4x MSAA (Máximo)", "4x MSAA (Max)")
                }));
        msaaSpinner.setSelection(msaaIndex(cfg.msaaSamples));
        styleSpinner(msaaSpinner);
        right.addView(msaaSpinner);
        right.addView(note(AppLang.t(
                "Suaviza bordes de autos y edificios con FBO multisample (requiere OpenGL ES 3).",
                "Smooths vehicle and building edges via multisample FBO (requires OpenGL ES 3).")));

        filterSwitch = makeSwitch(AppLang.t("Filtrado trilineal + mipmaps", "Trilinear filtering + mipmaps"), cfg.linearFilter);
        right.addView(filterSwitch);
        right.addView(note(AppLang.t(
                "Activa GL_LINEAR_MIPMAP_LINEAR y elimina líneas negras en texturas.",
                "Enables GL_LINEAR_MIPMAP_LINEAR and removes dark texture seams.")));

        right.addView(fieldLabel(AppLang.t("Filtrado Anisotrópico", "Anisotropic Filtering")));
        anisoSpinner = new Spinner(this);
        anisoSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Desactivado (1x)", "Off (1x)"),
                        AppLang.t("4x (Ligero)", "4x (Light)"),
                        AppLang.t("8x (Recomendado)", "8x (Recommended)"),
                        AppLang.t("16x (Máximo)", "16x (Max)")
                }));
        anisoSpinner.setSelection(anisoIndex(cfg.anisoLevel));
        styleSpinner(anisoSpinner);
        right.addView(anisoSpinner);
        right.addView(note(AppLang.t(
                "Aumenta la nitidez de calles, aceras y letreros en ángulos inclinados.",
                "Sharpens roads, curbs, and signs viewed at steep angles.")));

        depth24Switch = makeSwitch(AppLang.t("Profundidad 24 bits (Anti Z-Fighting)", "24-bit Depth Buffer (Anti Z-Fighting)"), cfg.depth24);
        right.addView(depth24Switch);
        right.addView(note(AppLang.t(
                "Reduce parpadeos en edificios y marcas viales lejanas (cae a 16-bit si no hay soporte).",
                "Reduces flickering on distant buildings and road markings (falls back to 16-bit if unsupported).")));

        fogSwitch = makeSwitch(AppLang.t("Niebla atmosférica D3D9", "D3D9 Atmospheric Fog"), cfg.fogEnabled);
        right.addView(fogSwitch);
        right.addView(note(AppLang.t(
                "Renderiza la niebla nocturna original de Los Ángeles, París y Tokio.",
                "Renders original night atmospheric fog for Los Angeles, Paris, and Tokyo.")));

        bloomSwitch = makeSwitch(AppLang.t("Bloom selectivo (Luces, Neón y Nitro)", "Selective Bloom (Lights, Neon & Nitro)"), cfg.bloomEnabled);
        right.addView(bloomSwitch);
        right.addView(note(AppLang.t(
                "Añade halo luminoso suave a faros, frenos, carteles neón y llamas nitro.",
                "Adds soft glow to headlights, brake lights, neon signs, and nitro flames.")));

        fxaaSwitch = makeSwitch(AppLang.t("FXAA (Anti-Aliasing rápido)", "FXAA (Fast Anti-Aliasing)"), cfg.fxaaEnabled);
        right.addView(fxaaSwitch);
        right.addView(note(AppLang.t(
                "Suaviza bordes dentados con muy bajo costo de GPU.",
                "Smooths jagged edges with minimal GPU cost.")));

        nightEnhanceSwitch = makeSwitch(AppLang.t("Realce nocturno y nitidez", "Night Contrast & Sharpness"), cfg.nightEnhance);
        right.addView(nightEnhanceSwitch);
        right.addView(note(AppLang.t(
                "Acentúa detalles del asfalto/autos y mejora contraste y reflejos.",
                "Enhances asphalt/car detail, contrast, and reflections.")));

        TextView ver = Ui.text(this,
                Native.LOADED
                        ? "Runtime libmc2rt: " + safeVersion() + " · v" + BuildConfig.VERSION_TAG
                        : "libmc2rt no cargada: " + Native.loadError(),
                11.5f, Native.LOADED ? LauncherArtView.NITRO_GREEN : Ui.RED, false);
        LinearLayout.LayoutParams verLp = Ui.matchWrap();
        verLp.topMargin = Ui.dp(this, 12);
        right.addView(ver, verLp);

        rootCol.addView(twoColumnRow(left, right), Ui.matchWrap());
        refreshPresetButtons();
        return rootCol;
    }

    private View buildControlsTab() {
        LinearLayout left = glassCard();
        left.addView(sectionHeader(AppLang.t("Mando Bluetooth / USB", "Bluetooth / USB Gamepad"), LauncherArtView.NEON_PURPLE));

        left.addView(fieldLabel(AppLang.t("Esquema de mapeo", "Mapping Scheme")));
        schemeSpinner = new Spinner(this);
        schemeSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Moderno (Xbox Series / One)", "Modern (Xbox Series / One)"),
                        AppLang.t("Clásico (PS2 / Xbox)", "Classic (PS2 / Xbox)")
                }));
        schemeSpinner.setSelection(cfg.controlScheme == GameConfig.SCHEME_CLASSIC ? 1 : 0);
        styleSpinner(schemeSpinner);
        left.addView(schemeSpinner);

        schemeDetail = note(schemeDescription(cfg.controlScheme));
        left.addView(schemeDetail);

        LinearLayout right = glassCard();
        right.addView(sectionHeader(AppLang.t("HUD Táctil en Pantalla", "On-Screen Touch HUD"), LauncherArtView.FOCUS_CYAN));

        right.addView(fieldLabel(AppLang.t("Opacidad de botones táctiles", "Touch Button Opacity")));
        LinearLayout opRow = Ui.row(this);
        opacityBar = new SeekBar(this);
        opacityBar.setMax(60); // 40..100
        int curOpacity = GameConfig.clamp(cfg.touchOpacity, 40, 100);
        opacityBar.setProgress(curOpacity - 40);
        opacityValue = Ui.text(this, curOpacity + "%", 14f, LauncherArtView.FOCUS_CYAN, true);
        opacityValue.setMinWidth(Ui.dp(this, 56));
        opacityValue.setGravity(Gravity.END);
        opRow.addView(opacityBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        opRow.addView(opacityValue);
        right.addView(opRow);

        autoHideSwitch = makeSwitch(AppLang.t("Auto-ocultar táctil con mando", "Auto-hide touch on gamepad"), cfg.autoHideTouchOnGamepad);
        right.addView(autoHideSwitch);
        right.addView(note(AppLang.t(
                "Oculta los controles táctiles automáticamente al detectar mando Bluetooth/USB.",
                "Automatically hides touch controls when a Bluetooth/USB gamepad is detected.")));
        right.addView(note(AppLang.t(
                "En partida también se puede alternar desde el botón superior derecho ⚙.",
                "Can also be toggled in-game from the top-right ⚙ quick menu.")));

        return twoColumnRow(left, right);
    }

    private View buildPerfTab() {
        LinearLayout left = glassCard();
        left.addView(sectionHeader(AppLang.t("Medidor de Rendimiento en Juego", "In-Game Performance Meter"), LauncherArtView.NITRO_GREEN));

        perfEnabledSwitch = makeSwitch(AppLang.t("Mostrar medidor superior en partida", "Show top performance bar in-game"), cfg.showFpsCounter);
        left.addView(perfEnabledSwitch);

        left.addView(fieldLabel(AppLang.t("Estilo / Nivel de detalle", "Style / Detail Level")));
        perfStyleSpinner = new Spinner(this);
        perfStyleSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Solo FPS (Minimalista)", "FPS Only (Minimal)"),
                        AppLang.t("Barra estándar (FPS · CPU · GPU · RAM)", "Standard Bar (FPS · CPU · GPU · RAM)"),
                        AppLang.t("Detallado (FPS real/Hz + completo)", "Detailed (Live FPS/Hz + full)")
                }));
        perfStyleSpinner.setSelection(GameConfig.clamp(cfg.perfStyle, 0, 2));
        styleSpinner(perfStyleSpinner);
        left.addView(perfStyleSpinner);

        left.addView(fieldLabel(AppLang.t("Posición en pantalla", "Screen Position")));
        perfPosSpinner = new Spinner(this);
        perfPosSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Arriba Centro", "Top Center"),
                        AppLang.t("Arriba Izquierda", "Top Left"),
                        AppLang.t("Arriba Derecha", "Top Right")
                }));
        perfPosSpinner.setSelection(GameConfig.clamp(cfg.perfPos, 0, 2));
        styleSpinner(perfPosSpinner);
        left.addView(perfPosSpinner);

        LinearLayout right = glassCard();
        right.addView(sectionHeader(AppLang.t("Apariencia, Métricas y Diagnóstico", "Appearance, Metrics & Diagnostics"), LauncherArtView.FOCUS_CYAN));

        right.addView(fieldLabel(AppLang.t("Tamaño de texto", "Text Size")));
        perfSizeSpinner = new Spinner(this);
        perfSizeSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Pequeño", "Small"),
                        "Normal",
                        AppLang.t("Grande", "Large")
                }));
        perfSizeSpinner.setSelection(GameConfig.clamp(cfg.perfTextSize, 0, 2));
        styleSpinner(perfSizeSpinner);
        right.addView(perfSizeSpinner);

        right.addView(fieldLabel(AppLang.t("Opacidad del fondo del medidor", "Meter Background Opacity")));
        LinearLayout perfOpRow = Ui.row(this);
        perfBgOpBar = new SeekBar(this);
        perfBgOpBar.setMax(100);
        perfBgOpBar.setProgress(GameConfig.clamp(cfg.perfBgOpacity, 0, 100));
        perfBgOpValue = Ui.text(this, cfg.perfBgOpacity + "%", 14f, LauncherArtView.NITRO_GREEN, true);
        perfBgOpValue.setMinWidth(Ui.dp(this, 56));
        perfBgOpValue.setGravity(Gravity.END);
        perfOpRow.addView(perfBgOpBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        perfOpRow.addView(perfBgOpValue);
        right.addView(perfOpRow);

        right.addView(fieldLabel(AppLang.t("Métricas visibles en la barra", "Visible Bar Metrics")));
        LinearLayout metricsRow = Ui.row(this);
        perfCpuCb = makeMetricCheck("CPU", cfg.perfShowCpu);
        perfGpuCb = makeMetricCheck("GPU", cfg.perfShowGpu);
        perfRamCb = makeMetricCheck("RAM", cfg.perfShowRam);
        perfTempCb = makeMetricCheck("Temp", cfg.perfShowTemp);
        metricsRow.addView(perfCpuCb);
        metricsRow.addView(perfGpuCb);
        metricsRow.addView(perfRamCb);
        metricsRow.addView(perfTempCb);
        right.addView(metricsRow);

        overlaySwitch = makeSwitch(AppLang.t("Info técnica / Logs en pantalla", "Technical Info / On-Screen Logs"), cfg.debugOverlay);
        right.addView(overlaySwitch);
        right.addView(note(AppLang.t(
                "Muestra panel completo de depuración y logs recientes de mc2.exe.",
                "Shows full debug overlay and recent mc2.exe logs.")));

        return twoColumnRow(left, right);
    }

    private View buildBackdropTab() {
        LinearLayout left = glassCard();
        left.addView(sectionHeader(AppLang.t("Idioma y Paleta del Launcher", "Language & Launcher Palette"), LauncherArtView.RACING_ORANGE));

        left.addView(fieldLabel(AppLang.t("Idioma de la interfaz / Language", "Interface Language / Idioma")));
        langSpinner = new Spinner(this);
        langSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("Automático (Sistema)", "Automatic (System)"),
                        "Español",
                        "English"
                }));
        langSpinner.setSelection(GameConfig.clamp(cfg.appLanguage, 0, 2));
        styleSpinner(langSpinner);
        left.addView(langSpinner);
        left.addView(note(AppLang.t(
                "Cambia el idioma del launcher, configuración, mods y menús en partida al instante.",
                "Instantly switches language for launcher, settings, mods, and in-game menus.")));

        left.addView(fieldLabel(AppLang.t("Tema de color neón", "Neon Color Theme")));
        bgThemeSpinner = new Spinner(this);
        bgThemeSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("MC2 Neón Púrpura (Clásico)", "MC2 Neon Purple (Classic)"),
                        AppLang.t("Los Ángeles Sunset (Naranja/Carmesí)", "Los Angeles Sunset (Orange/Crimson)"),
                        AppLang.t("París Nocturno (Cian/Azul)", "Paris Night (Cyan/Blue)"),
                        AppLang.t("Tokio Nitro (Verde Esmeralda)", "Tokyo Nitro (Emerald Green)"),
                        AppLang.t("Multicolor Fade (4 Ciudades juntas)", "Multicolor Fade (All 4 Cities)")
                }));
        bgThemeSpinner.setSelection(GameConfig.clamp(cfg.bgTheme, 0, 4));
        styleSpinner(bgThemeSpinner);
        left.addView(bgThemeSpinner);
        left.addView(note(AppLang.t(
                "Multicolor Fade combina los 4 estilos haciendo transición suave entre ciudades.",
                "Multicolor Fade blends all 4 city themes with smooth transitions.")));

        left.addView(fieldLabel(AppLang.t("Velocidad de las ondas", "Wave Speed")));
        LinearLayout speedRow = Ui.row(this);
        bgSpeedBar = new SeekBar(this);
        bgSpeedBar.setMax(150);
        bgSpeedBar.setProgress(GameConfig.clamp(cfg.bgSpeed, 0, 150));
        bgSpeedValue = Ui.text(this, cfg.bgSpeed == 0 ? AppLang.t("Fijo", "Static") : cfg.bgSpeed + "%", 14f, LauncherArtView.RACING_ORANGE, true);
        bgSpeedValue.setMinWidth(Ui.dp(this, 56));
        bgSpeedValue.setGravity(Gravity.END);
        speedRow.addView(bgSpeedBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        speedRow.addView(bgSpeedValue);
        left.addView(speedRow);

        LinearLayout right = glassCard();
        right.addView(sectionHeader(AppLang.t("Brillo y Detalles Visuales", "Glow & Visual Details"), LauncherArtView.NEON_PURPLE));

        right.addView(fieldLabel(AppLang.t("Brillo / Intensidad del efecto", "Effect Glow / Intensity")));
        LinearLayout intRow = Ui.row(this);
        bgIntensityBar = new SeekBar(this);
        bgIntensityBar.setMax(120); // 30..150
        bgIntensityBar.setProgress(GameConfig.clamp(cfg.bgIntensity, 30, 150) - 30);
        bgIntensityValue = Ui.text(this, cfg.bgIntensity + "%", 14f, LauncherArtView.NEON_PURPLE, true);
        bgIntensityValue.setMinWidth(Ui.dp(this, 56));
        bgIntensityValue.setGravity(Gravity.END);
        intRow.addView(bgIntensityBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        intRow.addView(bgIntensityValue);
        right.addView(intRow);

        right.addView(fieldLabel(AppLang.t("Cantidad de ondas", "Wave Count")));
        LinearLayout waveRow = Ui.row(this);
        bgWavesBar = new SeekBar(this);
        bgWavesBar.setMax(5); // 3..8
        bgWavesBar.setProgress(GameConfig.clamp(cfg.bgWaveCount, 3, 8) - 3);
        bgWavesValue = Ui.text(this, String.valueOf(cfg.bgWaveCount), 14f, LauncherArtView.NEON_PURPLE, true);
        bgWavesValue.setMinWidth(Ui.dp(this, 56));
        bgWavesValue.setGravity(Gravity.END);
        waveRow.addView(bgWavesBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        waveRow.addView(bgWavesValue);
        right.addView(waveRow);

        bgParticlesSwitch = makeSwitch(AppLang.t("Partículas luminosas ascendentes", "Rising glowing particles"), cfg.bgParticles);
        right.addView(bgParticlesSwitch);

        bgScanlinesSwitch = makeSwitch(AppLang.t("Scanlines estilo menú 2003", "2003 Menu-style Scanlines"), cfg.bgScanlines);
        right.addView(bgScanlinesSwitch);
        right.addView(note(AppLang.t(
                "Vista previa en tiempo real detrás de estas tarjetas.",
                "Live preview rendered behind these cards.")));

        return twoColumnRow(left, right);
    }

    private View buildMc2HookTab() {
        LinearLayout rootCol = Ui.column(this);

        LinearLayout infoCard = glassCard();
        infoCard.addView(sectionHeader(AppLang.t(
                "Módulo Integrado · MC2HOOK (jtxredline/mc2hook ARM64)",
                "Integrated Module · MC2HOOK (jtxredline/mc2hook ARM64)"), NEON_PINK));
        infoCard.addView(note(AppLang.t(
                "AVISO DE VENTAJAS: En Android no pueden ejecutarse DLLs x86 (dinput8.dll), por lo que se adaptó "
                + "nativamente el framework MC2HOOK directo en el motor del juego:\n"
                + "• Gestión avanzada de Mods (Multi-.dat): carga archivos .dat adicionales en mods/ sin modificar ni reempaquetar assets_p.dat.\n"
                + "• Multijugador Online (OpenSpy): redirige servidores GameSpy hacia openspy.net (además del modo LAN ya integrado).\n"
                + "• Fidelidad HD: reflejos en carrocería hasta 1024px a 60 FPS, rivales IA con modelos HD, sombra bajo coches y shader de brillo.\n"
                + "• Física y Bugs: ajuste burnout/nitro a 60 FPS, fix de desplazamiento rápido en menús con mando, reversa en Transmisión Manual, límites del mapa ampliados y mayor distancia de tráfico.",
                "FEATURE NOTICE: x86 DLLs (dinput8.dll) cannot run on Android, so the MC2HOOK framework was ported "
                + "natively into the game engine:\n"
                + "• Advanced Mod Loading (Multi-.dat): loads extra .dat packages in mods/ without modifying assets_p.dat.\n"
                + "• Online Multiplayer (OpenSpy): redirects GameSpy servers to openspy.net (in addition to built-in LAN).\n"
                + "• HD Fidelity: up to 1024px 60 FPS reflections, HD player car models for AI racers, shadow intensity, and body shader.\n"
                + "• Physics & Fixes: 60 FPS burnout/nitro fix, controller menu scroll fix, Manual Transmission reverse, expanded map boundaries, and extended traffic distance.")));

        mc2hEnabledSwitch = makeSwitch(AppLang.t(
                "Activar MC2HOOK (requerido para usar OpenSpy y mejoras)",
                "Enable MC2HOOK (required for OpenSpy and enhancements)"), cfg.mc2hEnabled);
        infoCard.addView(mc2hEnabledSwitch);

        mc2hLockBanner = Ui.text(this, AppLang.t(
                "⚠ Activar primero MC2HOOK arriba para desbloquear OpenSpy, Multi-.dat, reflejos HD y parches de física.",
                "⚠ Enable MC2HOOK above first to unlock OpenSpy, Multi-.dat, HD reflections, and physics fixes."),
                12f, LauncherArtView.RACING_ORANGE, true);
        LinearLayout.LayoutParams lbLp = Ui.matchWrap();
        lbLp.topMargin = Ui.dp(this, 6);
        infoCard.addView(mc2hLockBanner, lbLp);
        rootCol.addView(infoCard);

        LinearLayout left = glassCard();
        left.addView(sectionHeader(AppLang.t("Online (OpenSpy), Mods y Fidelidad HD", "Online (OpenSpy), Mods & HD Fidelity"), LauncherArtView.FOCUS_CYAN));

        mc2hOpenSpySwitch = makeSwitch(AppLang.t("Multijugador Online (OpenSpy)", "Online Multiplayer (OpenSpy)"), cfg.mc2hOpenSpy);
        left.addView(mc2hOpenSpySwitch);
        left.addView(note(AppLang.t(
                "Redirige *.gamespy.com hacia *.openspy.net para salas Online por Internet (LAN sigue funcionando siempre).",
                "Redirects *.gamespy.com to *.openspy.net for Internet multiplayer lobbies (LAN always works).")));

        mc2hMultiDatSwitch = makeSwitch(AppLang.t("Carga Multi-.dat para Mods adicionales", "Multi-.dat Loading for Extra Mods"), cfg.mc2hMultiDat);
        left.addView(mc2hMultiDatSwitch);
        left.addView(note(AppLang.t(
                "Monta paquetes *.dat extra dentro de los mods activos además de assets_p.dat.",
                "Mounts extra *.dat archives inside active mods alongside assets_p.dat.")));

        left.addView(fieldLabel(AppLang.t("Resolución de reflejos del vehículo (Cubemap)", "Vehicle Reflection Resolution (Cubemap)")));
        mc2hReflResSpinner = new Spinner(this);
        mc2hReflResSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("128 px (Original)", "128 px (Original)"),
                        AppLang.t("256 px (Medio)", "256 px (Medium)"),
                        AppLang.t("512 px (Alto - Rec.)", "512 px (High - Rec.)"),
                        "1024 px (Ultra)"
                }));
        mc2hReflResSpinner.setSelection(reflResIndex(cfg.mc2hReflectionRes));
        styleSpinner(mc2hReflResSpinner);
        left.addView(mc2hReflResSpinner);

        mc2hReflNoSkipSwitch = makeSwitch(AppLang.t("Reflejos a 60 FPS sin salto de cuadros", "60 FPS Reflections (No Frame Skip)"), cfg.mc2hReflNoSkip);
        left.addView(mc2hReflNoSkipSwitch);

        mc2hAiModelsSwitch = makeSwitch(AppLang.t("Rivales IA con modelos HD de jugador", "HD Player Models for AI Racers"), cfg.mc2hAiPlayerModels);
        left.addView(mc2hAiModelsSwitch);
        left.addView(note(AppLang.t(
                "Muestra interiores, conductor y daño completo en coches rivales.",
                "Renders interiors, driver, and full damage on AI opponent cars.")));

        mc2hBodyShaderSwitch = makeSwitch(AppLang.t("Shader carrocería mejorado (brillo + reflejo)", "Enhanced Car Body Shader (Gloss + Reflection)"), cfg.mc2hBodyShader);
        left.addView(mc2hBodyShaderSwitch);

        left.addView(fieldLabel(AppLang.t("Intensidad de sombra bajo coches", "Under-Car Shadow Intensity")));
        LinearLayout shRow = Ui.row(this);
        mc2hShadowBar = new SeekBar(this);
        mc2hShadowBar.setMax(100); // 50..150 (%)
        mc2hShadowBar.setProgress(GameConfig.clamp(cfg.mc2hShadowPercent, 50, 150) - 50);
        mc2hShadowValue = Ui.text(this, cfg.mc2hShadowPercent + "%", 14f, LauncherArtView.FOCUS_CYAN, true);
        mc2hShadowValue.setMinWidth(Ui.dp(this, 56));
        mc2hShadowValue.setGravity(Gravity.END);
        shRow.addView(mc2hShadowBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        shRow.addView(mc2hShadowValue);
        left.addView(shRow);

        left.addView(fieldLabel(AppLang.t("Distancia de tráfico y niebla", "Traffic & Fog Draw Distance")));
        LinearLayout ddRow = Ui.row(this);
        mc2hDrawDistBar = new SeekBar(this);
        mc2hDrawDistBar.setMax(150); // 100..250 (%)
        mc2hDrawDistBar.setProgress(GameConfig.clamp(cfg.mc2hDrawDistPercent, 100, 250) - 100);
        mc2hDrawDistValue = Ui.text(this, String.format(java.util.Locale.US, "%.1fx", cfg.mc2hDrawDistPercent / 100f),
                14f, LauncherArtView.FOCUS_CYAN, true);
        mc2hDrawDistValue.setMinWidth(Ui.dp(this, 56));
        mc2hDrawDistValue.setGravity(Gravity.END);
        ddRow.addView(mc2hDrawDistBar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        ddRow.addView(mc2hDrawDistValue);
        left.addView(ddRow);

        LinearLayout right = glassCard();
        right.addView(sectionHeader(AppLang.t("Física 60 FPS, Mando y Correcciones", "60 FPS Physics, Gamepad & Fixes"), LauncherArtView.NITRO_GREEN));

        mc2hMenuScrollSwitch = makeSwitch(AppLang.t("Fix scroll rápido de menús con mando", "Fix Fast Menu Scroll on Gamepad"), cfg.mc2hMenuScrollFix);
        right.addView(mc2hMenuScrollSwitch);

        mc2hBurnoutFixSwitch = makeSwitch(AppLang.t("Fix física de Burnout / Nitro a 60 FPS", "60 FPS Burnout / Nitro Physics Fix"), cfg.mc2hBurnoutFpsFix);
        right.addView(mc2hBurnoutFixSwitch);
        right.addView(note(AppLang.t(
                "Mantiene el ritmo original de carga y daño de burnout pensado para 30 FPS.",
                "Preserves original 30 FPS burnout charge rate and engine damage pacing.")));

        mc2hManualRevSwitch = makeSwitch(AppLang.t("Permitir Reversa en Transmisión Manual", "Allow Reverse in Manual Transmission"), cfg.mc2hManualReverse);
        right.addView(mc2hManualRevSwitch);

        mc2hExpandWorldSwitch = makeSwitch(AppLang.t("Ampliar límites del mapa (±4000m)", "Expand World Boundaries (±4000m)"), cfg.mc2hExpandWorld);
        right.addView(mc2hExpandWorldSwitch);
        right.addView(note(AppLang.t(
                "Expande los topes horizontales del mundo para exploración o mapas mod.",
                "Expands horizontal world bounds for free-roam exploration or custom mod maps.")));

        right.addView(fieldLabel(AppLang.t("Velocidad del juego (TimeWarp)", "Game Speed (TimeWarp)")));
        mc2hTimeWarpSpinner = new Spinner(this);
        mc2hTimeWarpSpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        AppLang.t("0.5x Cámara Lenta", "0.5x Slow Motion"),
                        AppLang.t("1.0x Normal (Estándar)", "1.0x Normal (Default)"),
                        "1.25x Turbo",
                        AppLang.t("1.5x Extremo", "1.5x Extreme")
                }));
        mc2hTimeWarpSpinner.setSelection(timeWarpIndex(cfg.mc2hTimeWarpPercent));
        styleSpinner(mc2hTimeWarpSpinner);
        right.addView(mc2hTimeWarpSpinner);

        right.addView(fieldLabel(AppLang.t("Gravedad", "Gravity")));
        mc2hGravitySpinner = new Spinner(this);
        mc2hGravitySpinner.setAdapter(new ArrayAdapter<>(this,
                android.R.layout.simple_spinner_dropdown_item,
                new String[]{
                        "-9.8 m/s² (Normal)",
                        "-6.5 m/s² (Arcade)",
                        AppLang.t("-4.0 m/s² (Lunar)", "-4.0 m/s² (Moon)"),
                        AppLang.t("-13.5 m/s² (Pesada)", "-13.5 m/s² (Heavy)")
                }));
        mc2hGravitySpinner.setSelection(gravityIndex(cfg.mc2hGravityDeci));
        styleSpinner(mc2hGravitySpinner);
        right.addView(mc2hGravitySpinner);
        right.addView(note(AppLang.t(
                "Para partidas 100% vanilla o speedrun sin alterar, basta desactivar el interruptor MC2HOOK arriba.",
                "For 100% unaltered vanilla or speedrun play, simply disable the MC2HOOK switch above.")));

        LinearLayout cols = twoColumnRow(left, right);
        LinearLayout.LayoutParams cLp = Ui.matchWrap();
        cLp.topMargin = Ui.dp(this, 10);
        mc2hOptionsHost = cols;
        rootCol.addView(cols, cLp);

        refreshMc2HookLockState();
        return rootCol;
    }

    private void bindListeners() {
        rendererSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingPreset) return;
            int next = pos == 1 ? GameConfig.RENDERER_GLES2 : GameConfig.RENDERER_GLES3;
            if (next == cfg.renderer) return;
            cfg.renderer = next;
            markCustomPreset();
        }));

        fpsSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingPreset) return;
            int next;
            switch (pos) {
                case 0: next = 30; break;
                case 1: next = 60; break;
                case 2: next = 120; break;
                default: next = 0; break;
            }
            if (next == cfg.fpsCap) return;
            cfg.fpsCap = next;
            markCustomPreset();
        }));

        anisoSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingPreset) return;
            int next;
            switch (pos) {
                case 0: next = 0; break;
                case 1: next = 4; break;
                case 3: next = 16; break;
                default: next = 8; break;
            }
            if (next == cfg.anisoLevel) return;
            cfg.anisoLevel = next;
            markCustomPreset();
        }));

        msaaSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingPreset) return;
            int next = (pos == 1) ? 2 : (pos == 2 ? 4 : 0);
            if (next == cfg.msaaSamples) return;
            cfg.msaaSamples = next;
            markCustomPreset();
        }));

        scaleBar.setOnSeekBarChangeListener(onSeek(p -> {
            if (syncingPreset) return;
            int v = GameConfig.clamp(50 + Math.round(p / 5f) * 5, 50, 200);
            if (v == cfg.scalePercent) return;
            cfg.scalePercent = v;
            scaleValue.setText(v + "%");
            markCustomPreset();
        }));

        vsyncSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.vsync = c; markCustomPreset(); } });
        filterSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.linearFilter = c; markCustomPreset(); } });
        depth24Switch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.depth24 = c; markCustomPreset(); } });
        fogSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.fogEnabled = c; markCustomPreset(); } });
        bloomSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.bloomEnabled = c; markCustomPreset(); } });
        fxaaSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.fxaaEnabled = c; markCustomPreset(); } });
        nightEnhanceSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingPreset) { cfg.nightEnhance = c; markCustomPreset(); } });

        schemeSpinner.setOnItemSelectedListener(onSelect(pos -> {
            cfg.controlScheme = pos == 1 ? GameConfig.SCHEME_CLASSIC : GameConfig.SCHEME_MODERN;
            cfg.save(this);
            schemeDetail.setText(schemeDescription(cfg.controlScheme));
        }));

        opacityBar.setOnSeekBarChangeListener(onSeek(p -> {
            int v = GameConfig.clamp(40 + Math.round(p / 5f) * 5, 40, 100);
            cfg.touchOpacity = v;
            opacityValue.setText(v + "%");
            cfg.save(this);
        }));

        autoHideSwitch.setOnCheckedChangeListener((b, c) -> { cfg.autoHideTouchOnGamepad = c; cfg.save(this); });
        overlaySwitch.setOnCheckedChangeListener((b, c) -> { cfg.debugOverlay = c; cfg.save(this); });

        perfEnabledSwitch.setOnCheckedChangeListener((b, c) -> { cfg.showFpsCounter = c; cfg.save(this); });
        perfStyleSpinner.setOnItemSelectedListener(onSelect(pos -> { cfg.perfStyle = GameConfig.clamp(pos, 0, 2); cfg.save(this); }));
        perfPosSpinner.setOnItemSelectedListener(onSelect(pos -> { cfg.perfPos = GameConfig.clamp(pos, 0, 2); cfg.save(this); }));
        perfSizeSpinner.setOnItemSelectedListener(onSelect(pos -> { cfg.perfTextSize = GameConfig.clamp(pos, 0, 2); cfg.save(this); }));

        perfBgOpBar.setOnSeekBarChangeListener(onSeek(p -> {
            int v = GameConfig.clamp(Math.round(p / 5f) * 5, 0, 100);
            cfg.perfBgOpacity = v;
            perfBgOpValue.setText(v + "%");
            cfg.save(this);
        }));

        perfCpuCb.setOnCheckedChangeListener((b, c) -> { cfg.perfShowCpu = c; cfg.save(this); });
        perfGpuCb.setOnCheckedChangeListener((b, c) -> { cfg.perfShowGpu = c; cfg.save(this); });
        perfRamCb.setOnCheckedChangeListener((b, c) -> { cfg.perfShowRam = c; cfg.save(this); });
        perfTempCb.setOnCheckedChangeListener((b, c) -> { cfg.perfShowTemp = c; cfg.save(this); });

        langSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (pos == cfg.appLanguage) return;
            cfg.appLanguage = pos;
            persist();
            getIntent().putExtra("tab", activeTab);
            recreate();
        }));

        bgThemeSpinner.setOnItemSelectedListener(onSelect(pos -> {
            cfg.bgTheme = GameConfig.clamp(pos, 0, 4);
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        }));

        bgSpeedBar.setOnSeekBarChangeListener(onSeek(p -> {
            int v = GameConfig.clamp(Math.round(p / 5f) * 5, 0, 150);
            cfg.bgSpeed = v;
            bgSpeedValue.setText(v == 0 ? "Fijo" : v + "%");
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        }));

        bgIntensityBar.setOnSeekBarChangeListener(onSeek(p -> {
            int v = GameConfig.clamp(30 + Math.round(p / 5f) * 5, 30, 150);
            cfg.bgIntensity = v;
            bgIntensityValue.setText(v + "%");
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        }));

        bgWavesBar.setOnSeekBarChangeListener(onSeek(p -> {
            int v = GameConfig.clamp(3 + p, 3, 8);
            cfg.bgWaveCount = v;
            bgWavesValue.setText(String.valueOf(v));
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        }));

        bgParticlesSwitch.setOnCheckedChangeListener((b, c) -> {
            cfg.bgParticles = c;
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        });
        bgScanlinesSwitch.setOnCheckedChangeListener((b, c) -> {
            cfg.bgScanlines = c;
            cfg.save(this);
            if (backdrop != null) backdrop.applyConfig(cfg);
        });

        mc2hEnabledSwitch.setOnCheckedChangeListener((b, c) -> {
            if (syncingMc2Hook) return;
            cfg.mc2hEnabled = c;
            cfg.save(this);
            refreshMc2HookLockState();
        });
        mc2hOpenSpySwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hOpenSpy = c; cfg.save(this); } });
        mc2hMultiDatSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hMultiDat = c; cfg.save(this); } });
        mc2hReflResSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingMc2Hook) return;
            int next = (pos == 0) ? 128 : (pos == 1 ? 256 : (pos == 3 ? 1024 : 512));
            if (next == cfg.mc2hReflectionRes) return;
            cfg.mc2hReflectionRes = next;
            cfg.save(this);
        }));
        mc2hReflNoSkipSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hReflNoSkip = c; cfg.save(this); } });
        mc2hAiModelsSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hAiPlayerModels = c; cfg.save(this); } });
        mc2hBodyShaderSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hBodyShader = c; cfg.save(this); } });
        mc2hShadowBar.setOnSeekBarChangeListener(onSeek(p -> {
            if (syncingMc2Hook) return;
            int v = GameConfig.clamp(50 + Math.round(p / 5f) * 5, 50, 150);
            cfg.mc2hShadowPercent = v;
            mc2hShadowValue.setText(v + "%");
            cfg.save(this);
        }));
        mc2hDrawDistBar.setOnSeekBarChangeListener(onSeek(p -> {
            if (syncingMc2Hook) return;
            int v = GameConfig.clamp(100 + Math.round(p / 10f) * 10, 100, 250);
            cfg.mc2hDrawDistPercent = v;
            mc2hDrawDistValue.setText(String.format(java.util.Locale.US, "%.1fx", v / 100f));
            cfg.save(this);
        }));
        mc2hMenuScrollSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hMenuScrollFix = c; cfg.save(this); } });
        mc2hBurnoutFixSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hBurnoutFpsFix = c; cfg.save(this); } });
        mc2hManualRevSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hManualReverse = c; cfg.save(this); } });
        mc2hExpandWorldSwitch.setOnCheckedChangeListener((b, c) -> { if (!syncingMc2Hook) { cfg.mc2hExpandWorld = c; cfg.save(this); } });
        mc2hTimeWarpSpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingMc2Hook) return;
            int next = (pos == 0) ? 50 : (pos == 2 ? 125 : (pos == 3 ? 150 : 100));
            if (next == cfg.mc2hTimeWarpPercent) return;
            cfg.mc2hTimeWarpPercent = next;
            cfg.save(this);
        }));
        mc2hGravitySpinner.setOnItemSelectedListener(onSelect(pos -> {
            if (syncingMc2Hook) return;
            int next = (pos == 1) ? -65 : (pos == 2 ? -40 : (pos == 3 ? -135 : -98));
            if (next == cfg.mc2hGravityDeci) return;
            cfg.mc2hGravityDeci = next;
            cfg.save(this);
        }));
    }

    private void applyQuickPreset(int preset) {
        cfg.applyPreset(this, preset);
        cfg.save(this);
        syncGraphicsWidgets();
        refreshPresetButtons();
    }

    private void markCustomPreset() {
        cfg.gfxPreset = GameConfig.PRESET_CUSTOM;
        cfg.save(this);
        refreshPresetButtons();
    }

    private void refreshPresetButtons() {
        int[] cols = {
                LauncherArtView.NITRO_GREEN,
                LauncherArtView.FOCUS_CYAN,
                LauncherArtView.NEON_PURPLE,
                LauncherArtView.RACING_ORANGE,
                Ui.AMBER
        };
        for (int i = 0; i < presetButtons.length; i++) {
            Button b = presetButtons[i];
            if (b == null) continue;
            boolean sel = (cfg.gfxPreset == i);
            int acc = cols[i];
            int fill = sel ? ((0x44 << 24) | (acc & 0x00FFFFFF)) : LauncherArtView.GLASS_FILL;
            int stroke = sel ? acc : LauncherArtView.GLASS_STROKE;
            b.setBackground(LauncherArtView.glassDrawable(this, fill, stroke, sel ? 1.6f : 1f, 10f));
            b.setTextColor(sel ? 0xFFFFFFFF : Ui.MUTED);
        }
    }

    private void syncGraphicsWidgets() {
        syncingPreset = true;
        try {
            rendererSpinner.setSelection(cfg.renderer == GameConfig.RENDERER_GLES2 ? 1 : 0);
            fpsSpinner.setSelection(fpsIndex(cfg.fpsCap));
            anisoSpinner.setSelection(anisoIndex(cfg.anisoLevel));
            msaaSpinner.setSelection(msaaIndex(cfg.msaaSamples));
            scaleBar.setProgress(GameConfig.clamp(cfg.scalePercent, 50, 200) - 50);
            scaleValue.setText(cfg.scalePercent + "%");
            vsyncSwitch.setChecked(cfg.vsync);
            filterSwitch.setChecked(cfg.linearFilter);
            depth24Switch.setChecked(cfg.depth24);
            fogSwitch.setChecked(cfg.fogEnabled);
            bloomSwitch.setChecked(cfg.bloomEnabled);
            fxaaSwitch.setChecked(cfg.fxaaEnabled);
            nightEnhanceSwitch.setChecked(cfg.nightEnhance);
        } finally {
            syncingPreset = false;
        }
    }

    private void resetDefaults() {
        cfg = new GameConfig();
        cfg.applyPreset(this, GameConfig.PRESET_RECOMMENDED);
        cfg.save(this);
        syncGraphicsWidgets();
        refreshPresetButtons();

        schemeSpinner.setSelection(0);
        schemeDetail.setText(schemeDescription(cfg.controlScheme));
        opacityBar.setProgress(cfg.touchOpacity - 40);
        opacityValue.setText(cfg.touchOpacity + "%");
        autoHideSwitch.setChecked(cfg.autoHideTouchOnGamepad);
        overlaySwitch.setChecked(cfg.debugOverlay);

        perfEnabledSwitch.setChecked(cfg.showFpsCounter);
        perfStyleSpinner.setSelection(cfg.perfStyle);
        perfPosSpinner.setSelection(cfg.perfPos);
        perfSizeSpinner.setSelection(cfg.perfTextSize);
        perfBgOpBar.setProgress(cfg.perfBgOpacity);
        perfBgOpValue.setText(cfg.perfBgOpacity + "%");
        perfCpuCb.setChecked(cfg.perfShowCpu);
        perfGpuCb.setChecked(cfg.perfShowGpu);
        perfRamCb.setChecked(cfg.perfShowRam);
        perfTempCb.setChecked(cfg.perfShowTemp);

        bgThemeSpinner.setSelection(cfg.bgTheme);
        bgSpeedBar.setProgress(cfg.bgSpeed);
        bgSpeedValue.setText(cfg.bgSpeed == 0 ? "Fijo" : cfg.bgSpeed + "%");
        bgIntensityBar.setProgress(cfg.bgIntensity - 30);
        bgIntensityValue.setText(cfg.bgIntensity + "%");
        bgWavesBar.setProgress(cfg.bgWaveCount - 3);
        bgWavesValue.setText(String.valueOf(cfg.bgWaveCount));
        bgParticlesSwitch.setChecked(cfg.bgParticles);
        bgScanlinesSwitch.setChecked(cfg.bgScanlines);
        if (backdrop != null) backdrop.applyConfig(cfg);

        syncingMc2Hook = true;
        try {
            mc2hEnabledSwitch.setChecked(cfg.mc2hEnabled);
            mc2hOpenSpySwitch.setChecked(cfg.mc2hOpenSpy);
            mc2hMultiDatSwitch.setChecked(cfg.mc2hMultiDat);
            mc2hReflResSpinner.setSelection(reflResIndex(cfg.mc2hReflectionRes));
            mc2hReflNoSkipSwitch.setChecked(cfg.mc2hReflNoSkip);
            mc2hAiModelsSwitch.setChecked(cfg.mc2hAiPlayerModels);
            mc2hBodyShaderSwitch.setChecked(cfg.mc2hBodyShader);
            mc2hShadowBar.setProgress(cfg.mc2hShadowPercent - 50);
            mc2hShadowValue.setText(cfg.mc2hShadowPercent + "%");
            mc2hDrawDistBar.setProgress(cfg.mc2hDrawDistPercent - 100);
            mc2hDrawDistValue.setText(String.format(java.util.Locale.US, "%.1fx", cfg.mc2hDrawDistPercent / 100f));
            mc2hMenuScrollSwitch.setChecked(cfg.mc2hMenuScrollFix);
            mc2hBurnoutFixSwitch.setChecked(cfg.mc2hBurnoutFpsFix);
            mc2hManualRevSwitch.setChecked(cfg.mc2hManualReverse);
            mc2hExpandWorldSwitch.setChecked(cfg.mc2hExpandWorld);
            mc2hTimeWarpSpinner.setSelection(timeWarpIndex(cfg.mc2hTimeWarpPercent));
            mc2hGravitySpinner.setSelection(gravityIndex(cfg.mc2hGravityDeci));
        } finally {
            syncingMc2Hook = false;
        }
        refreshMc2HookLockState();
    }

    private void refreshMc2HookLockState() {
        boolean on = cfg.mc2hEnabled;
        if (mc2hLockBanner != null) {
            mc2hLockBanner.setVisibility(on ? View.GONE : View.VISIBLE);
        }
        if (mc2hOptionsHost != null) {
            mc2hOptionsHost.setAlpha(on ? 1.0f : 0.45f);
            setEnabledRecursive(mc2hOptionsHost, on);
        }
    }

    private static void setEnabledRecursive(View v, boolean enabled) {
        v.setEnabled(enabled);
        if (v instanceof ViewGroup) {
            ViewGroup vg = (ViewGroup) v;
            for (int i = 0; i < vg.getChildCount(); i++) {
                setEnabledRecursive(vg.getChildAt(i), enabled);
            }
        }
    }

    private static int reflResIndex(int res) {
        if (res <= 128) return 0;
        if (res <= 256) return 1;
        if (res >= 1024) return 3;
        return 2;
    }

    private static int timeWarpIndex(int pct) {
        if (pct < 80) return 0;
        if (pct >= 140) return 3;
        if (pct >= 115) return 2;
        return 1;
    }

    private static int gravityIndex(int deci) {
        if (deci > -55) return 2;
        if (deci > -80) return 1;
        if (deci < -115) return 3;
        return 0;
    }

    private static int fpsIndex(int cap) {
        if (cap == 30) return 0;
        if (cap == 60) return 1;
        if (cap == 120) return 2;
        return 3;
    }

    private static int anisoIndex(int level) {
        if (level <= 1) return 0;
        if (level <= 4) return 1;
        if (level <= 8) return 2;
        return 3;
    }

    private static int msaaIndex(int samples) {
        if (samples >= 4) return 2;
        if (samples >= 2) return 1;
        return 0;
    }

    private interface IntCb { void onVal(int val); }

    private static AdapterView.OnItemSelectedListener onSelect(IntCb cb) {
        return new AdapterView.OnItemSelectedListener() {
            @Override public void onItemSelected(AdapterView<?> p, View v, int pos, long id) { cb.onVal(pos); }
            @Override public void onNothingSelected(AdapterView<?> p) {}
        };
    }

    private static SeekBar.OnSeekBarChangeListener onSeek(IntCb cb) {
        return new SeekBar.OnSeekBarChangeListener() {
            @Override public void onProgressChanged(SeekBar sb, int p, boolean u) { cb.onVal(p); }
            @Override public void onStartTrackingTouch(SeekBar sb) {}
            @Override public void onStopTrackingTouch(SeekBar sb) {}
        };
    }

    private LinearLayout glassCard() {
        LinearLayout card = Ui.column(this);
        card.setBackground(LauncherArtView.glassDrawable(
                this, LauncherArtView.GLASS_FILL, LauncherArtView.GLASS_STROKE, 1.2f, 16f));
        card.setPadding(Ui.dp(this, 18), Ui.dp(this, 14), Ui.dp(this, 18), Ui.dp(this, 16));
        return card;
    }

    private TextView sectionHeader(String text, int accentColor) {
        TextView t = Ui.text(this, text.toUpperCase(), 11.5f, accentColor, true);
        t.setLetterSpacing(0.08f);
        return t;
    }

    private String schemeDescription(int scheme) {
        if (AppLang.isEn()) {
            String common = " · Left Stick: Steer/Weight · D-Pad ↑↓: Map Zoom · ←→: Track · "
                    + "View: Chat/Online · Menu: Pause.";
            String touchNote = "\nTouch (Xbox Series layout): uses PS2/Xbox buttons "
                    + "(A Gas · X Brake · B Handbrake · Y Camera · RT Nitro · LB Weight · LT Look Back · "
                    + "L3 Lights · RB Horn · R3 Map).";
            if (scheme == GameConfig.SCHEME_CLASSIC) {
                return "Classic Gamepad (PS2/Xbox): A Gas · X Brake/Reverse · B Handbrake · "
                        + "Y Camera · RT Nitro · LT Look Back · LB Weight · RB Horn · "
                        + "L3 Lights · R3 Map" + common + touchNote;
            }
            return "Modern Gamepad: RT Gas · LT Brake/Reverse · A Handbrake/Accept · "
                    + "B Nitro/Back · X Lights/Power-Up · Y Weight · LB Look Back · RB Camera · "
                    + "L3 Horn · R3 Map" + common + touchNote;
        }
        String common = " · Stick Izq: Dirección/Peso · Cruceta ↑↓: Zoom mapa · ←→: Canción · "
                + "View: Chat/Online · Menu: Pausa.";
        String touchNote = "\nTáctil (layout Xbox Series): usa los botones de PS2/Xbox "
                + "(A Gas · X Freno · B Mano · Y Cámara · RT Nitro · LB Peso · LT Atrás · "
                + "L3 Luces · RB Claxon · R3 Mapa).";
        if (scheme == GameConfig.SCHEME_CLASSIC) {
            return "Mando Clásico (PS2/Xbox): A Acelerar · X Freno/Reversa · B Freno de mano · "
                    + "Y Cámara · RT Nitro · LT Mirar atrás · LB Peso · RB Claxon · "
                    + "L3 Luces · R3 Mapa" + common + touchNote;
        }
        return "Mando Moderno: RT Acelerar · LT Freno/Reversa · A Freno de mano/Aceptar · "
                + "B Nitro/Atrás · X Luces/Power-Up · Y Peso · LB Mirar atrás · RB Cámara · "
                + "L3 Claxon · R3 Mapa" + common + touchNote;
    }

    private void persist() {
        cfg.save(this);
    }

    private TextView fieldLabel(String s) {
        TextView t = Ui.text(this, s, 12.5f, Ui.TEXT, true);
        LinearLayout.LayoutParams lp = Ui.matchWrap();
        lp.topMargin = Ui.dp(this, 10);
        t.setLayoutParams(lp);
        return t;
    }

    private TextView note(String s) {
        TextView t = Ui.text(this, s, 11f, 0xFF8390A8, false);
        LinearLayout.LayoutParams lp = Ui.matchWrap();
        lp.topMargin = Ui.dp(this, 4);
        t.setLayoutParams(lp);
        return t;
    }

    private void styleSpinner(Spinner s) {
        s.setBackground(LauncherArtView.glassDrawable(this, 0xCC0D1220, LauncherArtView.GLASS_STROKE, 1f, 10f));
        s.setPadding(Ui.dp(this, 12), Ui.dp(this, 7), Ui.dp(this, 12), Ui.dp(this, 7));
        LinearLayout.LayoutParams lp = Ui.matchWrap();
        lp.topMargin = Ui.dp(this, 5);
        s.setLayoutParams(lp);
    }

    private Switch makeSwitch(String title, boolean checked) {
        Switch sw = new Switch(this);
        sw.setText(title);
        sw.setTextSize(13f);
        sw.setTextColor(Ui.TEXT);
        sw.setChecked(checked);
        sw.setPadding(0, Ui.dp(this, 9), 0, Ui.dp(this, 2));
        return sw;
    }

    private CheckBox makeMetricCheck(String label, boolean checked) {
        CheckBox cb = new CheckBox(this);
        cb.setText(label);
        cb.setTextSize(12.5f);
        cb.setTextColor(Ui.TEXT);
        cb.setChecked(checked);
        cb.setPadding(0, 0, Ui.dp(this, 8), 0);
        return cb;
    }

    private String safeVersion() {
        try {
            return Native.version();
        } catch (Throwable t) {
            return "?";
        }
    }
}
