package com.pmc2android.xgowther2102;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.View;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * Pantalla exclusiva de Mods y Backup Original, con el mismo estilo
 * Glassmorphic + Neon que SettingsActivity:
 * [Mods (Overlay)] [Backup Original].
 */
public class ModsActivity extends Activity {

    private static final int REQ_IMPORT_MOD_ZIP = 2001;
    private static String[] tabTitles() {
        return new String[]{
                "Mods (Overlay)",
                AppLang.t("Backup Original", "Original Backup")
        };
    }
    private static final int TAB_COUNT = 2;
    private static final int[] TAB_ACCENTS = {
            LauncherArtView.FOCUS_CYAN,
            LauncherArtView.NITRO_GREEN
    };

    private GameConfig cfg;
    private LauncherArtView.NeonBackdropView backdrop;
    private int activeTab;
    private final Button[] tabButtons = new Button[TAB_COUNT];
    private final View[] tabPages = new View[TAB_COUNT];

    private LinearLayout modsListBox;
    private TextView modsHeaderHint;
    private TextView backupStatusText;
    private TextView mc2hookStatusText;
    private Switch mc2hookSwitch;

    private final Handler mainHandler = new Handler(Looper.getMainLooper());
    private final ExecutorService worker = Executors.newSingleThreadExecutor(r -> {
        Thread t = new Thread(r, "mc2-mods");
        t.setDaemon(true);
        return t;
    });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        cfg = GameConfig.load(this);
        activeTab = GameConfig.clamp(getIntent().getIntExtra("tab", 0), 0, TAB_COUNT - 1);
        setContentView(buildUi());
        LauncherArtView.applyImmersiveWindow(this);
        reloadAll();
    }

    @Override
    protected void onResume() {
        super.onResume();
        LauncherArtView.applyImmersiveWindow(this);
        cfg = GameConfig.load(this);
        refreshMc2HookCard();
        if (backdrop != null) backdrop.setLifecyclePaused(false);
    }

    @Override
    protected void onPause() {
        if (backdrop != null) backdrop.setLifecyclePaused(true);
        super.onPause();
    }

    @Override
    protected void onDestroy() {
        worker.shutdownNow();
        super.onDestroy();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) LauncherArtView.applyImmersiveWindow(this);
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (keyCode == KeyEvent.KEYCODE_BUTTON_B) {
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
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        LinearLayout shell = Ui.column(this);
        LauncherArtView.applySafeAreaInsets(this, root, shell);
        root.addView(shell, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        // ── Header ──
        LinearLayout header = Ui.row(this);
        header.setGravity(Gravity.CENTER_VERTICAL);

        Button backBtn = Ui.ghost(this, AppLang.t("← Volver", "← Back"));
        backBtn.setTextSize(13f);
        backBtn.setPadding(Ui.dp(this, 14), Ui.dp(this, 8), Ui.dp(this, 14), Ui.dp(this, 8));
        backBtn.setOnClickListener(v -> finish());
        header.addView(backBtn);

        LinearLayout titleBox = new LinearLayout(this);
        titleBox.setOrientation(LinearLayout.VERTICAL);
        titleBox.setPadding(Ui.dp(this, 14), 0, Ui.dp(this, 14), 0);
        titleBox.addView(Ui.text(this, AppLang.t("Gestor de Mods · Overlay y Backup", "Mod Manager · Overlay & Backup"), 18f, Ui.TEXT, true));
        titleBox.addView(Ui.text(this, AppLang.t(
                "Los mods se cargan sobre el juego sin dañar los archivos originales (LB / RB con mando).",
                "Mods load as an overlay without altering original game files (LB / RB on gamepad)."),
                11.5f, Ui.MUTED, false));
        header.addView(titleBox, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));

        Button safeBtn = makeGlassBtn(AppLang.t("Modo Seguro (0 mods)", "Safe Mode (0 mods)"),
                LauncherArtView.RACING_ORANGE, 0x66FFFFFF, 0xFFFFFFFF);
        safeBtn.setTextSize(12.5f);
        safeBtn.setPadding(Ui.dp(this, 14), Ui.dp(this, 8), Ui.dp(this, 14), Ui.dp(this, 8));
        safeBtn.setOnClickListener(v -> {
            ModManager.disableAllMods(this);
            reloadAll();
            Toast.makeText(this, AppLang.t("Modo Seguro: todos los mods desactivados", "Safe Mode: all mods disabled"), Toast.LENGTH_SHORT).show();
        });
        header.addView(safeBtn);
        shell.addView(header);
        shell.addView(Ui.gap(this, 10));

        // ── Tabs ──
        LinearLayout tabRow = Ui.row(this);
        String[] titles = tabTitles();
        for (int i = 0; i < TAB_COUNT; i++) {
            final int idx = i;
            Button tb = Ui.button(this, titles[i], 0x55121826, Ui.TEXT, 0x33FFFFFF);
            tb.setTextSize(13f);
            tb.setPadding(Ui.dp(this, 12), Ui.dp(this, 8), Ui.dp(this, 12), Ui.dp(this, 8));
            tb.setOnClickListener(v -> selectTab(idx));
            LinearLayout.LayoutParams tLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
            if (i < TAB_COUNT - 1) tLp.rightMargin = Ui.dp(this, 8);
            tabRow.addView(tb, tLp);
            tabButtons[i] = tb;
        }
        shell.addView(tabRow);
        shell.addView(Ui.gap(this, 10));

        // ── Content pages ──
        FrameLayout pager = new FrameLayout(this);
        tabPages[0] = wrapPage(buildModsTab());
        tabPages[1] = wrapPage(buildBackupTab());
        for (View p : tabPages) {
            pager.addView(p, new FrameLayout.LayoutParams(
                    FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));
        }
        shell.addView(pager, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, 0, 1f));

        selectTab(activeTab);
        return root;
    }

    private Button makeGlassBtn(String label, int fill, int stroke, int textColor) {
        Button b = Ui.button(this, label, fill, textColor, stroke);
        b.setBackground(LauncherArtView.glassDrawable(this, fill, stroke, 1f, 12f));
        return b;
    }

    private View wrapPage(View content) {
        ScrollView sv = new ScrollView(this);
        sv.setVerticalScrollBarEnabled(true);
        sv.addView(content);
        return sv;
    }

    private void selectTab(int idx) {
        activeTab = idx;
        for (int i = 0; i < TAB_COUNT; i++) {
            boolean sel = (i == idx);
            int accent = TAB_ACCENTS[i];
            int fill = sel ? (0x33000000 | (accent & 0x00FFFFFF)) : 0x44121826;
            int stroke = sel ? accent : 0x2AFFFFFF;
            tabButtons[i].setBackground(LauncherArtView.glassDrawable(this, fill, stroke, sel ? 1.5f : 1f, 12f));
            tabButtons[i].setTextColor(sel ? 0xFFFFFFFF : 0xFFAAB4C8);
            tabPages[i].setVisibility(sel ? View.VISIBLE : View.GONE);
        }
    }

    private LinearLayout card(String title, int accent) {
        LinearLayout box = new LinearLayout(this);
        box.setOrientation(LinearLayout.VERTICAL);
        box.setBackground(LauncherArtView.glassDrawable(this, 0x660B101C, 0x33FFFFFF, 1f, 14f));
        box.setPadding(Ui.dp(this, 14), Ui.dp(this, 12), Ui.dp(this, 14), Ui.dp(this, 12));
        box.addView(Ui.text(this, title, 12f, accent, true));
        box.addView(Ui.gap(this, 8));
        return box;
    }

    private View buildModsTab() {
        LinearLayout page = new LinearLayout(this);
        page.setOrientation(LinearLayout.VERTICAL);

        LinearLayout top = card(AppLang.t("CARPETA DE MODS (<JUEGO>/mods/)", "MODS FOLDER (<GAME>/mods/)"), LauncherArtView.FOCUS_CYAN);
        modsHeaderHint = Ui.text(this, AppLang.t("Escaneando carpeta del juego...", "Scanning game folder..."), 12f, Ui.MUTED, false);
        top.addView(modsHeaderHint);
        top.addView(Ui.gap(this, 8));

        LinearLayout btnRow = Ui.row(this);
        Button btnImport = makeGlassBtn(AppLang.t("+ Importar .zip", "+ Import .zip"), Ui.BLUE, 0x66FFFFFF, 0xFFFFFFFF);
        btnImport.setTextSize(12.5f);
        btnImport.setOnClickListener(v -> launchImportZip());

        Button btnRefresh = makeGlassBtn(AppLang.t("Actualizar lista", "Refresh List"), 0x55121826, 0x44FFFFFF, Ui.TEXT);
        btnRefresh.setTextSize(12.5f);
        btnRefresh.setOnClickListener(v -> reloadAll());

        LinearLayout.LayoutParams bLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        bLp.rightMargin = Ui.dp(this, 10);
        btnRow.addView(btnImport, bLp);
        btnRow.addView(btnRefresh, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        top.addView(btnRow);

        page.addView(top);
        page.addView(Ui.gap(this, 10));

        // ── Modulo integrado MC2HOOK ──
        LinearLayout hookCard = card(AppLang.t("MOD INTEGRADO · MC2HOOK (FRAMEWORK ARM64)", "BUILT-IN MOD · MC2HOOK (ARM64 FRAMEWORK)"), 0xFFF472B6);
        hookCard.addView(Ui.text(this, AppLang.t(
                "AVISO DE VENTAJAS: Activar MC2HOOK (jtxredline/mc2hook adaptado a ARM64) habilita carga multi-.dat de mods sin modificar assets_p.dat, Online vía OpenSpy, reflejos HD a 60 FPS, modelos HD en IA y arreglos de física/mando.",
                "FEATURE NOTICE: Enabling MC2HOOK (jtxredline/mc2hook ported to ARM64) adds multi-.dat mod loading without altering assets_p.dat, Online via OpenSpy, 60 FPS HD reflections, HD AI models, and physics/gamepad fixes."),
                11.5f, Ui.MUTED, false));
        hookCard.addView(Ui.gap(this, 8));

        LinearLayout hookRow = Ui.row(this);
        hookRow.setGravity(Gravity.CENTER_VERTICAL);
        mc2hookStatusText = Ui.text(this, AppLang.t("Estado: ", "Status: ") + cfg.mc2hookSummary(), 13f,
                cfg.mc2hEnabled ? LauncherArtView.NITRO_GREEN : Ui.TEXT, true);
        hookRow.addView(mc2hookStatusText, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));

        Button btnHookCfg = makeGlassBtn(AppLang.t("Configurar / OpenSpy →", "Configure / OpenSpy →"),
                0x33F472B6, 0xFFF472B6, 0xFFFFFFFF);
        btnHookCfg.setTextSize(12f);
        btnHookCfg.setPadding(Ui.dp(this, 12), Ui.dp(this, 6), Ui.dp(this, 12), Ui.dp(this, 6));
        btnHookCfg.setOnClickListener(v -> startActivity(
                new Intent(this, SettingsActivity.class).putExtra("tab", 4)));
        LinearLayout.LayoutParams cfgLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        cfgLp.rightMargin = Ui.dp(this, 10);
        hookRow.addView(btnHookCfg, cfgLp);

        mc2hookSwitch = new Switch(this);
        mc2hookSwitch.setChecked(cfg.mc2hEnabled);
        mc2hookSwitch.setOnCheckedChangeListener((b, checked) -> {
            cfg.mc2hEnabled = checked;
            cfg.save(this);
            refreshMc2HookCard();
        });
        hookRow.addView(mc2hookSwitch);
        hookCard.addView(hookRow);
        page.addView(hookCard);
        page.addView(Ui.gap(this, 10));

        LinearLayout listCard = card(AppLang.t("MODS DETECTADOS (EL #1 TIENE MAYOR PRIORIDAD)", "DETECTED MODS (#1 HAS HIGHEST PRIORITY)"), LauncherArtView.NEON_PURPLE);
        modsListBox = new LinearLayout(this);
        modsListBox.setOrientation(LinearLayout.VERTICAL);
        listCard.addView(modsListBox);
        page.addView(listCard);
        return page;
    }

    private View buildBackupTab() {
        LinearLayout page = new LinearLayout(this);
        page.setOrientation(LinearLayout.VERTICAL);

        LinearLayout box = card(AppLang.t("RESPALDO DEL JUEGO ORIGINAL (<JUEGO>/_backup_original/)", "ORIGINAL GAME BACKUP (<GAME>/_backup_original/)"), LauncherArtView.NITRO_GREEN);
        box.addView(Ui.text(this, AppLang.t(
                "Guarda una copia intacta de assets_p.dat, streams_pc.dat y mc2.exe dentro de la carpeta del juego para restaurar todo si algún archivo base se modifica.",
                "Saves an untouched copy of assets_p.dat, streams_pc.dat, and mc2.exe inside the game folder to restore everything if any base file is modified."),
                12f, Ui.MUTED, false));
        box.addView(Ui.gap(this, 8));

        backupStatusText = Ui.text(this, AppLang.t("Comprobando respaldo...", "Checking backup..."), 13f, Ui.TEXT, true);
        box.addView(backupStatusText);
        box.addView(Ui.gap(this, 12));

        LinearLayout row = Ui.row(this);
        Button btnBackup = makeGlassBtn(AppLang.t("Crear Backup Original", "Create Original Backup"),
                0x3316A34A, LauncherArtView.NITRO_GREEN, 0xFFFFFFFF);
        btnBackup.setTextSize(12.5f);

        Button btnRestore = makeGlassBtn(AppLang.t("Restaurar Juego a Original", "Restore Game to Original"),
                0x33EF4444, LauncherArtView.RACING_ORANGE, 0xFFFFFFFF);
        btnRestore.setTextSize(12.5f);

        LinearLayout.LayoutParams rLp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        rLp.rightMargin = Ui.dp(this, 10);
        row.addView(btnBackup, rLp);
        row.addView(btnRestore, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        box.addView(row);

        final Uri tree = GameDataManager.loadTree(this);
        btnBackup.setOnClickListener(v -> {
            if (tree == null) return;
            backupStatusText.setText("Creando backup original (~15-30s por los archivos .dat)...");
            worker.execute(() -> {
                String msg = ModManager.createOriginalBackup(this, tree,
                        p -> mainHandler.post(() -> backupStatusText.setText(p)));
                mainHandler.post(() -> {
                    Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
                    reloadAll();
                });
            });
        });

        btnRestore.setOnClickListener(v -> {
            if (tree == null) return;
            new AlertDialog.Builder(this)
                    .setTitle("Restaurar Juego a Original")
                    .setMessage("Se desactivarán todos los mods y se restaurarán los archivos originales desde _backup_original/. ¿Continuar?")
                    .setPositiveButton("Restaurar", (d, w) -> {
                        backupStatusText.setText("Restaurando archivos originales...");
                        worker.execute(() -> {
                            String msg = ModManager.restoreOriginalBackup(this, tree,
                                    p -> mainHandler.post(() -> backupStatusText.setText(p)));
                            mainHandler.post(() -> {
                                Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
                                reloadAll();
                            });
                        });
                    })
                    .setNegativeButton("Cancelar", null)
                    .show();
        });

        page.addView(box);
        return page;
    }

    private void refreshMc2HookCard() {
        if (mc2hookStatusText != null && cfg != null) {
            mc2hookStatusText.setText("Estado: " + cfg.mc2hookSummary());
            mc2hookStatusText.setTextColor(cfg.mc2hEnabled ? LauncherArtView.NITRO_GREEN : Ui.TEXT);
        }
        if (mc2hookSwitch != null && cfg != null && mc2hookSwitch.isChecked() != cfg.mc2hEnabled) {
            mc2hookSwitch.setChecked(cfg.mc2hEnabled);
        }
    }

    private void reloadAll() {
        final Uri tree = GameDataManager.loadTree(this);
        if (tree == null) {
            if (modsHeaderHint != null) modsHeaderHint.setText("No hay carpeta del juego seleccionada.");
            if (backupStatusText != null) backupStatusText.setText("Sin carpeta seleccionada.");
            return;
        }
        if (modsHeaderHint != null) {
            refreshMc2HookCard();
        modsHeaderHint.setText("Ruta: " + GameDataManager.selectedFolderLabel(this) + "/mods/ · " + ModManager.summary(this));
        }
        worker.execute(() -> {
            List<ModManager.ModInfo> mods = ModManager.scanMods(this, tree);
            ModManager.BackupStatus bs = ModManager.getBackupStatus(this, tree);
            mainHandler.post(() -> {
                if (backupStatusText != null) backupStatusText.setText(bs.summary);
                renderModsList(tree, mods);
            });
        });
    }

    private void renderModsList(Uri tree, List<ModManager.ModInfo> mods) {
        if (modsListBox == null) return;
        modsListBox.removeAllViews();
        if (mods.isEmpty()) {
            modsListBox.addView(Ui.text(this,
                    "No se encontraron mods en <Carpeta del Juego>/mods/.\nCopia una carpeta de mod ahí o usa '+ Importar .zip'.",
                    12f, Ui.MUTED, false));
            return;
        }
        int activeCount = 0;
        for (ModManager.ModInfo m : mods) {
            if (m.enabled) activeCount++;
        }
        for (ModManager.ModInfo m : mods) {
            LinearLayout item = new LinearLayout(this);
            item.setOrientation(LinearLayout.HORIZONTAL);
            item.setGravity(Gravity.CENTER_VERTICAL);
            item.setBackground(LauncherArtView.glassDrawable(this, 0x550A0E17,
                    m.enabled ? LauncherArtView.FOCUS_CYAN : 0x33FFFFFF, 1f, 12f));
            item.setPadding(Ui.dp(this, 12), Ui.dp(this, 10), Ui.dp(this, 12), Ui.dp(this, 10));

            LinearLayout col = new LinearLayout(this);
            col.setOrientation(LinearLayout.VERTICAL);
            String titleStr = m.enabled ? ("#" + m.priority + " · " + m.name) : m.name;
            col.addView(Ui.text(this, titleStr, 14f, m.enabled ? LauncherArtView.FOCUS_CYAN : Ui.TEXT, true));

            String stText;
            int stColor;
            if (m.status == ModManager.Status.COMPATIBLE) {
                stText = "Compatible · " + m.assetFiles + " arch (" + GameDataManager.human(m.totalBytes) + ")";
                stColor = LauncherArtView.NITRO_GREEN;
            } else if (m.status == ModManager.Status.MIXED_PC_AND_DATA) {
                stText = "Mixto (solo datos) · " + m.assetFiles + " arch · DLLs ignoradas";
                stColor = Ui.AMBER;
            } else if (m.status == ModManager.Status.PC_ONLY_UNSUPPORTED) {
                stText = "Solo PC (x86/DLL) · Incompatible con ARM64";
                stColor = LauncherArtView.RACING_ORANGE;
            } else {
                stText = "Carpeta vacía / sin archivos del juego";
                stColor = Ui.MUTED;
            }
            col.addView(Ui.text(this, stText, 11.5f, stColor, false));
            item.addView(col, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));

            if (m.enabled && activeCount > 1) {
                Button upBtn = makeGlassBtn("▲", 0x55121826,
                        m.priority > 1 ? LauncherArtView.FOCUS_CYAN : 0x22FFFFFF,
                        m.priority > 1 ? 0xFFFFFFFF : 0x55AAAAAA);
                upBtn.setTextSize(12f);
                upBtn.setPadding(Ui.dp(this, 10), Ui.dp(this, 4), Ui.dp(this, 10), Ui.dp(this, 4));
                upBtn.setEnabled(m.priority > 1);
                upBtn.setOnClickListener(v -> {
                    if (ModManager.moveModPriority(this, m.name, -1)) reloadAll();
                });

                Button dnBtn = makeGlassBtn("▼", 0x55121826,
                        m.priority < activeCount ? LauncherArtView.FOCUS_CYAN : 0x22FFFFFF,
                        m.priority < activeCount ? 0xFFFFFFFF : 0x55AAAAAA);
                dnBtn.setTextSize(12f);
                dnBtn.setPadding(Ui.dp(this, 10), Ui.dp(this, 4), Ui.dp(this, 10), Ui.dp(this, 4));
                dnBtn.setEnabled(m.priority < activeCount);
                dnBtn.setOnClickListener(v -> {
                    if (ModManager.moveModPriority(this, m.name, 1)) reloadAll();
                });

                LinearLayout.LayoutParams pLp = new LinearLayout.LayoutParams(
                        LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
                pLp.rightMargin = Ui.dp(this, 6);
                item.addView(upBtn, pLp);
                item.addView(dnBtn, pLp);
            }

            if (m.status == ModManager.Status.COMPATIBLE || m.status == ModManager.Status.MIXED_PC_AND_DATA) {
                Switch sw = new Switch(this);
                sw.setChecked(m.enabled);
                sw.setOnCheckedChangeListener((b, checked) -> {
                    ModManager.setModEnabled(this, m.name, checked);
                    reloadAll();
                });
                item.addView(sw);
            }

            Button del = makeGlassBtn("Eliminar", 0x33EF4444, LauncherArtView.RACING_ORANGE, 0xFFFFFFFF);
            del.setTextSize(11f);
            del.setPadding(Ui.dp(this, 10), Ui.dp(this, 6), Ui.dp(this, 10), Ui.dp(this, 6));
            del.setOnClickListener(v -> new AlertDialog.Builder(this)
                    .setTitle("Eliminar mod")
                    .setMessage("¿Eliminar '" + m.name + "' de la carpeta mods/?")
                    .setPositiveButton("Eliminar", (dd, ww) -> worker.execute(() -> {
                        boolean ok = ModManager.deleteMod(this, tree, m);
                        mainHandler.post(() -> {
                            Toast.makeText(this, ok ? "Mod eliminado" : "No se pudo eliminar (falta permiso escritura)", Toast.LENGTH_SHORT).show();
                            reloadAll();
                        });
                    }))
                    .setNegativeButton("Cancelar", null)
                    .show());
            LinearLayout.LayoutParams dLp = new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
            dLp.leftMargin = Ui.dp(this, 10);
            item.addView(del, dLp);

            LinearLayout.LayoutParams itemLp = new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT);
            itemLp.bottomMargin = Ui.dp(this, 8);
            modsListBox.addView(item, itemLp);
        }
    }

    private void launchImportZip() {
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

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == REQ_IMPORT_MOD_ZIP && resultCode == RESULT_OK && data != null && data.getData() != null) {
            final Uri zipUri = data.getData();
            final Uri tree = GameDataManager.loadTree(this);
            String name = zipUri.getLastPathSegment();
            if (name != null && name.contains("/")) name = name.substring(name.lastIndexOf('/') + 1);
            final String finalName = name;
            if (modsHeaderHint != null) modsHeaderHint.setText("Importando mod desde ZIP...");
            worker.execute(() -> {
                String msg = ModManager.importZipMod(this, tree, zipUri, finalName,
                        p -> mainHandler.post(() -> {
                            if (modsHeaderHint != null) modsHeaderHint.setText(p);
                        }));
                mainHandler.post(() -> {
                    Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
                    reloadAll();
                });
            });
        }
    }
}
