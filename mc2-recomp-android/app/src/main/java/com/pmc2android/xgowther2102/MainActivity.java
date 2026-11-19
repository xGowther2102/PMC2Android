package com.pmc2android.xgowther2102;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.hardware.input.InputManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.provider.DocumentsContract;
import android.text.TextUtils;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.View;
import android.view.WindowInsets;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * Launcher horizontal tipo consola Bento Dashboard (12 columnas 5+4+3)
 * con soporte híbrido Touch + Mando Xbox/D-Pad y estética Glassmorphism MC2.
 */
public class MainActivity extends Activity {

    private static final int REQ_TREE = 1003;
    private static final int REQ_BACKUP_ZIP = 1004;
    private static final int REQ_RESTORE_ZIP = 1005;
    private static final int REQ_EXPORT_LOGS = 1006;

    private GameConfig cfg;
    private boolean dataReady;
    private boolean pendingAutostart;
    private GameDataManager.Report lastReport;
    private String pendingLogExport = "";

    private LinearLayout mainContainer;
    private LauncherArtView.NeonBackdropView backdrop;
    private FrameLayout heroTile;
    private TextView heroStatusChip;
    private TextView heroChangeFolderBtn;
    private TextView heroSub;
    private Button heroActionBtn;

    private TextView controllerChip;
    private TextView folderChip;
    private TextView runtimeFooterChip;

    private TextView gfxSub;
    private TextView ctrlSub;
    private TextView argsSub;
    private TextView savesSub;
    private TextView logsSub;
    private TextView dataSub;
    private TextView aboutSub;
    private boolean createdInEnglish;

    private InputManager inputManager;
    private final Handler mainHandler = new Handler(Looper.getMainLooper());
    private final ExecutorService worker = Executors.newSingleThreadExecutor(r -> {
        Thread t = new Thread(r, "mc2-main-worker");
        t.setDaemon(true);
        return t;
    });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        PortDebug.life("MainActivity.onCreate · nivel 1 (arranque en frio)");
        cfg = GameConfig.load(this);
        createdInEnglish = AppLang.isEn();
        if (BuildConfig.DEBUG) {
            String debugTreeId = getIntent().getStringExtra("debug_tree_id");
            if (debugTreeId != null && !debugTreeId.isEmpty()) {
                Uri debugTree = DocumentsContract.buildTreeDocumentUri(
                        "com.android.externalstorage.documents", debugTreeId);
                GameDataManager.saveTree(this, debugTree);
                PortDebug.test("DEBUG · arbol SAF fijado por adb: " + debugTreeId);
            }
        }
        GameDataManager.ensureWritableStructure(this);
        setContentView(buildUi());
        LauncherArtView.applyImmersiveWindow(this);
        registerInputListener();
        runSelfCheck();
        worker.execute(() -> GpuTierDetector.detect(getApplicationContext()));
        pendingAutostart = getIntent().getBooleanExtra("autostart", false);
        validateData();
        refreshDynamicSubtitles();
        if (pendingAutostart && dataReady) {
            pendingAutostart = false;
            startGame();
        } else if (heroTile != null) {
            heroTile.post(() -> heroTile.requestFocus());
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        LauncherArtView.applyImmersiveWindow(this);
        cfg = GameConfig.load(this);
        if (AppLang.isEn() != createdInEnglish) {
            recreate();
            return;
        }
        if (backdrop != null) {
            backdrop.applyConfig(cfg);
            backdrop.setLifecyclePaused(false);
        }
        refreshControllerChip();
        refreshDynamicSubtitles();
        validateData();
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
    protected void onDestroy() {
        unregisterInputListener();
        worker.shutdownNow();
        mainHandler.removeCallbacksAndMessages(null);
        super.onDestroy();
    }

    // ------------------------------------------------------------------ UI Bento 12-Col

    private View buildUi() {
        FrameLayout root = new FrameLayout(this);
        root.setBackgroundColor(0xFF060810);

        backdrop = new LauncherArtView.NeonBackdropView(this);
        backdrop.applyConfig(cfg);
        root.addView(backdrop, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        mainContainer = new LinearLayout(this);
        mainContainer.setOrientation(LinearLayout.VERTICAL);
        mainContainer.setClipChildren(false);
        mainContainer.setClipToPadding(false);
        LauncherArtView.applySafeAreaInsets(this, root, mainContainer);

        int vGap = LauncherArtView.isCompactLandscape(this) ? 6 : 10;
        mainContainer.addView(buildHeaderBar(), Ui.matchWrap());
        mainContainer.addView(Ui.gap(this, vGap));

        LinearLayout bentoGrid = buildBentoGrid();
        LinearLayout.LayoutParams gridLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f);
        mainContainer.addView(bentoGrid, gridLp);

        mainContainer.addView(Ui.gap(this, vGap));
        mainContainer.addView(buildFooterBar(), Ui.matchWrap());

        root.addView(mainContainer, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));
        return root;
    }

    private LinearLayout buildHeaderBar() {
        LinearLayout top = Ui.row(this);

        TextView logoPill = Ui.text(this, "PMC2", 12f, 0xFF070910, true);
        logoPill.setBackground(LauncherArtView.glassDrawable(this, LauncherArtView.FOCUS_CYAN, 0, 0f, 8f));
        logoPill.setPadding(Ui.dp(this, 9), Ui.dp(this, 3), Ui.dp(this, 9), Ui.dp(this, 3));
        top.addView(logoPill);

        TextView title = Ui.text(this, "PMC2Android", 18f, Ui.TEXT, true);
        title.setLetterSpacing(0.04f);
        LinearLayout.LayoutParams tLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        tLp.leftMargin = Ui.dp(this, 10);
        top.addView(title, tLp);

        TextView verChip = Ui.chip(this, "v" + BuildConfig.VERSION_TAG + " · ARM64", LauncherArtView.NEON_PURPLE);
        LinearLayout.LayoutParams vLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        vLp.leftMargin = Ui.dp(this, 10);
        top.addView(verChip, vLp);

        top.addView(Ui.spacer(this));

        folderChip = Ui.chip(this, "📁 ...", Ui.MUTED);
        folderChip.setMaxWidth(Ui.dp(this, 210));
        folderChip.setSingleLine(true);
        folderChip.setEllipsize(TextUtils.TruncateAt.MIDDLE);
        folderChip.setOnClickListener(v -> openTreePicker());
        folderChip.setFocusable(false);
        LinearLayout.LayoutParams fLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        fLp.rightMargin = Ui.dp(this, 8);
        top.addView(folderChip, fLp);

        controllerChip = Ui.chip(this, AppLang.t("📱 MODO TÁCTIL", "📱 TOUCH MODE"), Ui.AMBER);
        top.addView(controllerChip);

        refreshControllerChip();
        return top;
    }

    private LinearLayout buildBentoGrid() {
        LinearLayout grid = new LinearLayout(this);
        grid.setOrientation(LinearLayout.HORIZONTAL);
        grid.setClipChildren(false);
        grid.setClipToPadding(false);

        // Columna Izquierda (5/12): Hero Tile
        View hero = buildHeroTile();
        LinearLayout.LayoutParams heroLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 5f);
        heroLp.rightMargin = Ui.dp(this, 10);
        grid.addView(hero, heroLp);

        // Columna Central (4/12): 2x2 ajustes clave
        LinearLayout centerCol = new LinearLayout(this);
        centerCol.setOrientation(LinearLayout.VERTICAL);
        centerCol.setClipChildren(false);
        centerCol.setClipToPadding(false);

        LinearLayout rowTop = new LinearLayout(this);
        rowTop.setOrientation(LinearLayout.HORIZONTAL);
        rowTop.setClipChildren(false);
        rowTop.setClipToPadding(false);

        gfxSub = new TextView(this);
        View gfxTile = LauncherArtView.createBentoTile(this, LauncherArtView.FOCUS_CYAN, "CONFIG",
                AppLang.t("Configuración", "Settings"), gfxSub,
                () -> startActivity(new Intent(this, SettingsActivity.class).putExtra("tab", 0)));
        LinearLayout.LayoutParams tlLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 1f);
        tlLp.rightMargin = Ui.dp(this, 8);
        rowTop.addView(gfxTile, tlLp);

        ctrlSub = new TextView(this);
        View modsTile = LauncherArtView.createBentoTile(this, LauncherArtView.NEON_PURPLE, "MODS",
                AppLang.t("Mods y Backup", "Mods & Backup"), ctrlSub,
                () -> startActivity(new Intent(this, ModsActivity.class)));
        rowTop.addView(modsTile, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 1f));

        LinearLayout rowBot = new LinearLayout(this);
        rowBot.setOrientation(LinearLayout.HORIZONTAL);
        rowBot.setClipChildren(false);
        rowBot.setClipToPadding(false);

        argsSub = new TextView(this);
        View argsTile = LauncherArtView.createBentoTile(this, Ui.AMBER, "ARGS",
                AppLang.t("Arranque", "Launch Args"), argsSub,
                () -> LauncherDialogs.showArgsDialog(this, cfg, this::refreshDynamicSubtitles));
        LinearLayout.LayoutParams blLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 1f);
        blLp.rightMargin = Ui.dp(this, 8);
        rowBot.addView(argsTile, blLp);

        savesSub = new TextView(this);
        View savesTile = LauncherArtView.createBentoTile(this, LauncherArtView.NITRO_GREEN, "SAVE",
                AppLang.t("Partidas Guardadas", "Save Files"), savesSub, () ->
                        LauncherDialogs.showSavesDialog(this, worker, mainHandler,
                                this::launchBackupZip, this::launchRestoreZip,
                                this::refreshDynamicSubtitles));
        rowBot.addView(savesTile, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.MATCH_PARENT, 1f));

        LinearLayout.LayoutParams rtLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f);
        rtLp.bottomMargin = Ui.dp(this, 8);
        centerCol.addView(rowTop, rtLp);
        centerCol.addView(rowBot, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f));

        LinearLayout.LayoutParams centerLp = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, 4.1f);
        centerLp.rightMargin = Ui.dp(this, 10);
        grid.addView(centerCol, centerLp);

        // Columna Derecha (3/12): 3 utilidades rápidas apiladas
        LinearLayout rightCol = new LinearLayout(this);
        rightCol.setOrientation(LinearLayout.VERTICAL);
        rightCol.setClipChildren(false);
        rightCol.setClipToPadding(false);

        logsSub = new TextView(this);
        View logsTile = LauncherArtView.createBentoTile(this, Ui.BLUE, "LOG",
                AppLang.t("Consola / Logs", "Console / Logs"), logsSub, this::openLogsModal);
        LinearLayout.LayoutParams r1Lp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f);
        r1Lp.bottomMargin = Ui.dp(this, 8);
        rightCol.addView(logsTile, r1Lp);

        dataSub = new TextView(this);
        View dataTile = LauncherArtView.createBentoTile(this, LauncherArtView.NITRO_GREEN, "PC",
                AppLang.t("Integridad de Datos", "Data Integrity"), dataSub, () ->
                        LauncherDialogs.showIntegrityDialog(this, lastReport,
                                this::validateData, this::openTreePicker));
        LinearLayout.LayoutParams r2Lp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f);
        r2Lp.bottomMargin = Ui.dp(this, 8);
        rightCol.addView(dataTile, r2Lp);

        aboutSub = new TextView(this);
        View aboutTile = LauncherArtView.createBentoTile(this, LauncherArtView.RACING_ORANGE, "INFO",
                AppLang.t("Créditos / Salir", "Credits / Exit"), aboutSub, () ->
                        LauncherDialogs.showCreditsDialog(this, cfg, this::finish));
        rightCol.addView(aboutTile, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f));

        grid.addView(rightCol, new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.MATCH_PARENT, 2.9f));
        return grid;
    }

    private View buildHeroTile() {
        heroTile = new FrameLayout(this);
        heroTile.setFocusable(true);
        heroTile.setClickable(true);
        heroTile.setOutlineProvider(new android.view.ViewOutlineProvider() {
            @Override
            public void getOutline(View view, android.graphics.Outline outline) {
                outline.setRoundRect(0, 0, view.getWidth(), view.getHeight(), Ui.dp(MainActivity.this, 20));
            }
        });
        heroTile.setClipToOutline(true);

        final GradientDrawable normalBg = LauncherArtView.glassDrawable(
                this, 0xCC0D1020, 0x44FFFFFF, 1.2f, 20f);
        final GradientDrawable focusBg = LauncherArtView.glassDrawable(
                this, 0xEE11162B, LauncherArtView.FOCUS_CYAN, 2.5f, 20f);
        heroTile.setBackground(normalBg);

        ImageView heroBg = new ImageView(this);
        heroBg.setImageResource(R.drawable.hero_mc2);
        heroBg.setScaleType(ImageView.ScaleType.CENTER_CROP);
        FrameLayout.LayoutParams artLp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT);
        int inset = Ui.dp(this, 2);
        artLp.setMargins(inset, inset, inset, inset);
        heroTile.addView(heroBg, artLp);

        View scrim = new View(this);
        scrim.setBackground(new GradientDrawable(
                GradientDrawable.Orientation.TOP_BOTTOM,
                new int[]{0x44070912, 0x22070912, 0xD8070912, 0xF5070912}));
        heroTile.addView(scrim, artLp);

        LinearLayout content = new LinearLayout(this);
        content.setOrientation(LinearLayout.VERTICAL);
        content.setPadding(Ui.dp(this, 18), Ui.dp(this, 16), Ui.dp(this, 18), Ui.dp(this, 16));

        LinearLayout topRow = Ui.row(this);
        FrameLayout statusWrap = new FrameLayout(this);
        heroStatusChip = Ui.chip(this, AppLang.t("● COMPROBANDO...", "● CHECKING..."), Ui.AMBER);
        heroStatusChip.setTextSize(10.5f);
        heroStatusChip.setMaxLines(1);
        heroStatusChip.setEllipsize(TextUtils.TruncateAt.END);
        statusWrap.addView(heroStatusChip, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT));
        LinearLayout.LayoutParams swLp = new LinearLayout.LayoutParams(
                0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        swLp.rightMargin = Ui.dp(this, 8);
        topRow.addView(statusWrap, swLp);

        heroChangeFolderBtn = Ui.text(this, AppLang.t("Cambiar", "Change"), 11f, 0xFFD0DCFF, true);
        heroChangeFolderBtn.setBackground(LauncherArtView.glassDrawable(this, 0x77000000, 0x55FFFFFF, 1f, 10f));
        heroChangeFolderBtn.setPadding(Ui.dp(this, 10), Ui.dp(this, 4), Ui.dp(this, 10), Ui.dp(this, 4));
        heroChangeFolderBtn.setOnClickListener(v -> openTreePicker());
        heroChangeFolderBtn.setFocusable(false);
        topRow.addView(heroChangeFolderBtn);
        content.addView(topRow);

        content.addView(Ui.spacer(this));

        TextView heroTag = Ui.text(this, "ROCKSTAR SAN DIEGO · PORT PC → ARM64", 10.5f,
                LauncherArtView.FOCUS_CYAN, true);
        heroTag.setLetterSpacing(0.10f);
        content.addView(heroTag);

        TextView heroTitle = Ui.text(this, "MIDNIGHT CLUB II", 25f, 0xFFFFFFFF, true);
        heroTitle.setShadowLayer(Ui.dp(this, 6f), 0f, Ui.dp(this, 2f), 0xCC000000);
        content.addView(heroTitle);

        heroSub = Ui.text(this, AppLang.t(
                "11.226 funciones · D3D9 → OpenGL ES 3 · Audio AAudio",
                "11,226 functions · D3D9 → OpenGL ES 3 · AAudio"),
                12f, 0xFFC8D3E8, false);
        LinearLayout.LayoutParams subLp = Ui.matchWrap();
        subLp.topMargin = Ui.dp(this, 2);
        subLp.bottomMargin = Ui.dp(this, 14);
        content.addView(heroSub, subLp);

        heroActionBtn = Ui.accent(this, AppLang.t("IMPORTAR CARPETA PC", "SELECT PC FOLDER"));
        heroActionBtn.setTextSize(15.5f);
        heroActionBtn.setPadding(Ui.dp(this, 18), Ui.dp(this, 13), Ui.dp(this, 18), Ui.dp(this, 13));
        heroActionBtn.setOnClickListener(v -> triggerHeroAction());
        heroActionBtn.setFocusable(false);
        content.addView(heroActionBtn, Ui.matchWrap());

        heroTile.addView(content, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        heroTile.setOnFocusChangeListener((v, hasFocus) ->
                LauncherArtView.applyFocusVisual(v, hasFocus, normalBg, focusBg));
        heroTile.setOnClickListener(v -> triggerHeroAction());
        return heroTile;
    }

    private LinearLayout buildFooterBar() {
        LinearLayout bot = Ui.row(this);
        bot.addView(LauncherArtView.consoleHint(this, "A", LauncherArtView.NITRO_GREEN, AppLang.t("Seleccionar", "Select")));
        bot.addView(LauncherArtView.consoleHint(this, "X", Ui.BLUE, "Logs"));
        bot.addView(LauncherArtView.consoleHint(this, "Y", Ui.AMBER, AppLang.t("Carpeta PC", "PC Folder")));
        bot.addView(LauncherArtView.consoleHint(this, "B", LauncherArtView.RACING_ORANGE, AppLang.t("Salir", "Exit")));
        bot.addView(Ui.spacer(this));

        runtimeFooterChip = Ui.text(this, AppLang.t("Runtime: comprobando...", "Runtime: checking..."), 11.5f, Ui.MUTED, false);
        bot.addView(runtimeFooterChip);
        return bot;
    }

    // ------------------------------------------------------------ estado y datos

    private void runSelfCheck() {
        if (!Native.LOADED) {
            runtimeFooterChip.setText("ERROR libmc2rt: " + Native.loadError());
            runtimeFooterChip.setTextColor(Ui.RED);
            PortDebug.error("DATA", "libmc2rt.so no cargo: " + Native.loadError());
            return;
        }
        runtimeFooterChip.setText("libmc2rt OK · v" + BuildConfig.VERSION_TAG);
        runtimeFooterChip.setTextColor(LauncherArtView.NITRO_GREEN);
        PortDebug.data("Runtime cargado · version " + BuildConfig.VERSION_TAG);

        worker.execute(() -> {
            File work = new File(getFilesDir(), "mc2");
            if (!work.exists() && !work.mkdirs()) {
                PortDebug.warn("DATA", "No se pudo crear " + work);
            }
            String result = Native.init(
                    GameDataManager.privateDir(MainActivity.this).getAbsolutePath(),
                    work.getAbsolutePath(), cfg.renderer, cfg.scalePercent,
                    cfg.fpsCap, cfg.linearFilter, cfg.vsync);
            Native.setLaunchArgs(cfg.launchArgs);
            PortDebug.data("Native.init -> " + result.replace('\n', ' '));
        });
    }

    private void validateData() {
        final Uri tree = GameDataManager.loadTree(this);
        String label = GameDataManager.selectedFolderLabel(this);
        if (folderChip != null) {
            folderChip.setText(tree == null ? AppLang.t("📁 Sin carpeta", "📁 No folder") : "📁 " + label);
        }
        if (tree == null) {
            dataReady = false;
            lastReport = null;
            applyHeroState(false, AppLang.t("● FALTAN DATOS DE PC", "● PC DATA MISSING"), Ui.AMBER,
                    AppLang.t("Seleccionar la carpeta original de PC (mc2.exe, assets_p.dat, streams_pc.dat)",
                            "Select the PC game folder (mc2.exe, assets_p.dat, streams_pc.dat)"));
            if (dataSub != null) dataSub.setText(AppLang.t("Sin carpeta · Tocar para elegir", "No folder · Tap to select"));
            return;
        }

        if (dataSub != null) dataSub.setText(AppLang.t("Verificando archivos...", "Checking files..."));
        PortDebug.data("Validando carpeta SAF: " + label);
        worker.execute(() -> {
            final GameDataManager.Report report;
            try {
                report = GameDataManager.validate(this, tree);
            } catch (Exception e) {
                mainHandler.post(() -> {
                    dataReady = false;
                    lastReport = null;
                    applyHeroState(false, AppLang.t("● ERROR DE ACCESO", "● ACCESS ERROR"), Ui.RED,
                            AppLang.t("No se pudo leer la carpeta SAF. Volver a importarla.",
                                    "Could not read SAF folder. Select it again."));
                    if (dataSub != null) dataSub.setText(AppLang.t("Error al leer · Reintentar", "Read error · Retry"));
                });
                return;
            }
            mainHandler.post(() -> applyReport(report));
        });
    }

    private void applyReport(GameDataManager.Report report) {
        lastReport = report;
        dataReady = report.ready && Native.LOADED;
        String sizeStr = GameDataManager.human(report.totalBytes);
        if (report.ready) {
            applyHeroState(true, AppLang.t("● VERIFICADO · ", "● VERIFIED · ") + sizeStr + " OK",
                    LauncherArtView.NITRO_GREEN,
                    AppLang.t("Carpeta: ", "Folder: ") + report.folderLabel + AppLang.t(" · Listo para arrancar", " · Ready to launch"));
            dataSub.setText(report.fileCount + AppLang.t(" archivos · ", " files · ") + sizeStr + " OK");
            PortDebug.data("Validacion OK · " + sizeStr + " · carpeta " + report.folderLabel);
            if (pendingAutostart && dataReady) {
                pendingAutostart = false;
                startGame();
            }
        } else {
            applyHeroState(false, AppLang.t("● FALTAN ARCHIVOS (", "● MISSING FILES (") + report.headline + ")",
                    Ui.RED,
                    AppLang.t("Tocar «Importar carpeta» o abrir Integridad para ver detalles",
                            "Tap 'Select folder' or open Data Integrity for details"));
            dataSub.setText(report.headline + AppLang.t(" · Revisar", " · Check"));
            PortDebug.warn("DATA", "Validacion fallida en " + report.folderLabel);
        }
    }

    private void applyHeroState(boolean ready, String badgeText, int badgeColor, String subText) {
        heroStatusChip.setText(badgeText);
        heroStatusChip.setTextColor(badgeColor);
        int fill = Color.argb(38, Color.red(badgeColor), Color.green(badgeColor), Color.blue(badgeColor));
        int stroke = Color.argb(130, Color.red(badgeColor), Color.green(badgeColor), Color.blue(badgeColor));
        heroStatusChip.setBackground(LauncherArtView.glassDrawable(this, fill, stroke, 1f, 14f));
        heroSub.setText(subText);

        if (ready) {
            heroActionBtn.setText(AppLang.t("▶   JUGAR AHORA", "▶   PLAY NOW"));
            heroActionBtn.setBackground(LauncherArtView.glassDrawable(
                    this, LauncherArtView.RACING_ORANGE, 0x66FFFFFF, 1f, 14f));
            heroChangeFolderBtn.setVisibility(View.VISIBLE);
        } else {
            heroActionBtn.setText(AppLang.t("📁   IMPORTAR CARPETA PC", "📁   SELECT PC FOLDER"));
            heroActionBtn.setBackground(LauncherArtView.glassDrawable(
                    this, Ui.BLUE, 0x66FFFFFF, 1f, 14f));
            heroChangeFolderBtn.setVisibility(View.GONE);
        }
    }

    private void refreshDynamicSubtitles() {
        if (cfg == null) cfg = GameConfig.load(this);
        if (gfxSub != null) {
            gfxSub.setText(cfg.presetName() + " · " + cfg.scalePercent + "% · " + cfg.fpsLabel());
        }
        if (ctrlSub != null) {
            String hookPart = cfg.mc2hEnabled ? " · MC2HOOK ON" : "";
            ctrlSub.setText(ModManager.summary(this) + hookPart + AppLang.t(" · Overlay y Backup", " · Overlay & Backup"));
        }
        if (argsSub != null) {
            argsSub.setText(cfg.argsSummary());
        }
        if (savesSub != null) {
            savesSub.setText(LauncherDialogs.savesSubtitle(this));
        }
        if (logsSub != null) {
            logsSub.setText(AppLang.t("Logcat en vivo · Exportar .txt", "Live Logcat · Export .txt"));
        }
        if (aboutSub != null) {
            aboutSub.setText("v" + BuildConfig.VERSION_TAG + AppLang.t(" · Acerca y Salir", " · About & Exit"));
        }
    }

    // ------------------------------------------------------------ Mando / Hybrid Input

    private final InputManager.InputDeviceListener inputListener =
            new InputManager.InputDeviceListener() {
                @Override public void onInputDeviceAdded(int id) { refreshControllerChip(); }
                @Override public void onInputDeviceRemoved(int id) { refreshControllerChip(); }
                @Override public void onInputDeviceChanged(int id) { refreshControllerChip(); }
            };

    private void registerInputListener() {
        inputManager = (InputManager) getSystemService(Context.INPUT_SERVICE);
        if (inputManager != null) {
            inputManager.registerInputDeviceListener(inputListener, mainHandler);
        }
    }

    private void unregisterInputListener() {
        if (inputManager != null) {
            inputManager.unregisterInputDeviceListener(inputListener);
            inputManager = null;
        }
    }

    private void refreshControllerChip() {
        if (controllerChip == null) return;
        String padName = XboxControls.findConnectedGamepadName();
        if (padName != null) {
            controllerChip.setText(AppLang.t("🎮 MANDO: ", "🎮 GAMEPAD: ") + padName);
            controllerChip.setTextColor(LauncherArtView.NITRO_GREEN);
            controllerChip.setBackground(LauncherArtView.glassDrawable(
                    this, 0x2635D07F, 0x8035D07F, 1f, 14f));
        } else {
            controllerChip.setText(AppLang.t("📱 MODO TÁCTIL", "📱 TOUCH MODE"));
            controllerChip.setTextColor(Ui.AMBER);
            controllerChip.setBackground(LauncherArtView.glassDrawable(
                    this, 0x24F2B33D, 0x70F2B33D, 1f, 14f));
        }
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent event) {
        if (event.getAction() == KeyEvent.ACTION_DOWN && event.getRepeatCount() == 0) {
            int kc = event.getKeyCode();
            if (kc == KeyEvent.KEYCODE_BUTTON_X) {
                openLogsModal();
                return true;
            }
            if (kc == KeyEvent.KEYCODE_BUTTON_Y) {
                openTreePicker();
                return true;
            }
            if (kc == KeyEvent.KEYCODE_BUTTON_B) {
                finish();
                return true;
            }
            if (kc == KeyEvent.KEYCODE_BUTTON_A) {
                View cur = getCurrentFocus();
                if (cur != null) {
                    cur.performClick();
                    return true;
                }
            }
        }
        return super.dispatchKeyEvent(event);
    }

    // ------------------------------------------------------------ Acciones / SAF

    private void triggerHeroAction() {
        if (dataReady && Native.LOADED) {
            startGame();
        } else {
            openTreePicker();
        }
    }

    private void openLogsModal() {
        LauncherDialogs.showLogsDialog(this, worker, mainHandler, content -> {
            pendingLogExport = content != null ? content : "";
            Intent i = new Intent(Intent.ACTION_CREATE_DOCUMENT);
            i.addCategory(Intent.CATEGORY_OPENABLE);
            i.setType("text/plain");
            i.putExtra(Intent.EXTRA_TITLE, "mc2_console_logs.txt");
            try {
                startActivityForResult(i, REQ_EXPORT_LOGS);
            } catch (Exception e) {
                Toast.makeText(this, "No se pudo abrir selector para exportar", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void launchBackupZip() {
        Intent i = new Intent(Intent.ACTION_CREATE_DOCUMENT);
        i.addCategory(Intent.CATEGORY_OPENABLE);
        i.setType("application/zip");
        i.putExtra(Intent.EXTRA_TITLE, "mc2_saves_backup.zip");
        try {
            startActivityForResult(i, REQ_BACKUP_ZIP);
        } catch (Exception e) {
            Toast.makeText(this, "No hay selector de archivos disponible", Toast.LENGTH_SHORT).show();
        }
    }

    private void launchRestoreZip() {
        Intent i = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        i.addCategory(Intent.CATEGORY_OPENABLE);
        i.setType("application/zip");
        try {
            startActivityForResult(i, REQ_RESTORE_ZIP);
        } catch (Exception e) {
            Toast.makeText(this, "No hay selector de archivos disponible", Toast.LENGTH_SHORT).show();
        }
    }

    private static final int REQ_IMPORT_MOD_ZIP = 1004;

    private void launchImportModZip() {
        Intent i = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        i.addCategory(Intent.CATEGORY_OPENABLE);
        i.setType("application/zip");
        i.putExtra(Intent.EXTRA_MIME_TYPES, new String[]{"application/zip", "application/x-zip-compressed", "application/octet-stream"});
        try {
            startActivityForResult(i, REQ_IMPORT_MOD_ZIP);
        } catch (Exception e) {
            Toast.makeText(this, "No hay selector de archivos disponible", Toast.LENGTH_SHORT).show();
        }
    }

    private void openTreePicker() {
        Intent i = new Intent(Intent.ACTION_OPEN_DOCUMENT_TREE);
        i.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION
                | Intent.FLAG_GRANT_WRITE_URI_PERMISSION
                | Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION);
        try {
            startActivityForResult(i, REQ_TREE);
        } catch (Exception e) {
            Toast.makeText(this, "No hay selector de carpetas disponible", Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (resultCode != RESULT_OK || data == null || data.getData() == null) return;
        Uri uri = data.getData();

        if (requestCode == REQ_TREE) {
            GameDataManager.saveTree(this, uri);
            PortDebug.data("Carpeta elegida: " + GameDataManager.selectedFolderLabel(this));
            validateData();
        } else if (requestCode == REQ_BACKUP_ZIP) {
            worker.execute(() -> {
                String msg = LauncherDialogs.backupSavesToZip(this, uri);
                mainHandler.post(() -> Toast.makeText(this, msg, Toast.LENGTH_LONG).show());
            });
        } else if (requestCode == REQ_RESTORE_ZIP) {
            worker.execute(() -> {
                String msg = LauncherDialogs.restoreSavesFromZip(this, uri);
                mainHandler.post(() -> {
                    Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
                    refreshDynamicSubtitles();
                });
            });
        } else if (requestCode == REQ_IMPORT_MOD_ZIP) {
            final Uri tree = GameDataManager.loadTree(this);
            String name = uri.getLastPathSegment();
            if (name != null && name.contains("/")) name = name.substring(name.lastIndexOf('/') + 1);
            final String finalName = name;
            Toast.makeText(this, "Importando mod desde ZIP...", Toast.LENGTH_SHORT).show();
            worker.execute(() -> {
                String msg = ModManager.importZipMod(this, tree, uri, finalName, null);
                mainHandler.post(() -> {
                    Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
                    refreshDynamicSubtitles();
                });
            });
        } else if (requestCode == REQ_EXPORT_LOGS) {
            final String text = pendingLogExport;
            worker.execute(() -> {
                String msg;
                try (OutputStream os = getContentResolver().openOutputStream(uri)) {
                    if (os != null) os.write(text.getBytes(StandardCharsets.UTF_8));
                    msg = "Logs exportados correctamente";
                } catch (Exception e) {
                    msg = "Error al exportar: " + e.getMessage();
                }
                final String finalMsg = msg;
                mainHandler.post(() -> Toast.makeText(this, finalMsg, Toast.LENGTH_SHORT).show());
            });
        }
    }

    private void startGame() {
        final Uri tree = GameDataManager.loadTree(this);
        if (!Native.LOADED || !dataReady || tree == null) {
            PortDebug.warn("DATA", "Arranque bloqueado: seleccionar una carpeta valida");
            Toast.makeText(this, AppLang.t("Seleccionar primero la carpeta del juego", "Select the game folder first"), Toast.LENGTH_LONG).show();
            return;
        }
        PortDebug.test("NIVEL 1 superado · arranque autorizado");
        if (backdrop != null) backdrop.setLifecyclePaused(true);
        Intent i = new Intent(this, GameActivity.class);
        i.setData(tree);
        startActivity(i);
    }
}
