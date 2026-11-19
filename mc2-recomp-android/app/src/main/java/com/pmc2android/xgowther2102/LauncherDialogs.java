package com.pmc2android.xgowther2102;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.graphics.Typeface;
import android.net.Uri;
import android.os.Handler;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.ExecutorService;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;
import java.util.zip.ZipOutputStream;

/**
 * Diálogos modales funcionales del Launcher Bento:
 * Controles, Argumentos/Mods, Partidas Guardadas (SAF/ZIP), Logs, Integridad y Créditos.
 */
final class LauncherDialogs {

    private LauncherDialogs() {
    }

    // --------------------------------------------------------- 1. Controles rápidos

    static void showControlsDialog(Activity a, GameConfig cfg, Runnable onChanged, Runnable openFullSettings) {
        LinearLayout root = dialogBody(a);

        TextView schemeLbl = Ui.text(a, "Esquema de mando Xbox One / Series", 13f, Ui.TEXT, true);
        root.addView(schemeLbl);
        root.addView(Ui.gap(a, 8));

        LinearLayout schemeRow = Ui.row(a);
        Button btnModern = Ui.button(a, "Moderno (Xbox)",
                cfg.controlScheme == GameConfig.SCHEME_MODERN ? Ui.BLUE : 0xFF1A2234,
                0xFFFFFFFF, Ui.STROKE);
        Button btnClassic = Ui.button(a, "Clásico PS2/Xbox",
                cfg.controlScheme == GameConfig.SCHEME_CLASSIC ? Ui.BLUE : 0xFF1A2234,
                0xFFFFFFFF, Ui.STROKE);
        btnModern.setTextSize(13f);
        btnClassic.setTextSize(13f);

        TextView desc = Ui.text(a, controlsDesc(cfg.controlScheme), 11.5f, Ui.MUTED, false);
        Runnable refreshSchemeButtons = () -> {
            btnModern.setBackground(Ui.rounded(a,
                    cfg.controlScheme == GameConfig.SCHEME_MODERN ? Ui.BLUE : 0xFF1A2234,
                    cfg.controlScheme == GameConfig.SCHEME_MODERN ? LauncherArtView.FOCUS_CYAN : Ui.STROKE, 12));
            btnClassic.setBackground(Ui.rounded(a,
                    cfg.controlScheme == GameConfig.SCHEME_CLASSIC ? Ui.BLUE : 0xFF1A2234,
                    cfg.controlScheme == GameConfig.SCHEME_CLASSIC ? LauncherArtView.FOCUS_CYAN : Ui.STROKE, 12));
            desc.setText(controlsDesc(cfg.controlScheme));
        };
        btnModern.setOnClickListener(v -> {
            cfg.controlScheme = GameConfig.SCHEME_MODERN;
            cfg.save(a);
            refreshSchemeButtons.run();
            if (onChanged != null) onChanged.run();
        });
        btnClassic.setOnClickListener(v -> {
            cfg.controlScheme = GameConfig.SCHEME_CLASSIC;
            cfg.save(a);
            refreshSchemeButtons.run();
            if (onChanged != null) onChanged.run();
        });

        schemeRow.addView(btnModern, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        schemeRow.addView(Ui.gap(a, 10));
        schemeRow.addView(btnClassic, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        root.addView(schemeRow);
        root.addView(Ui.gap(a, 8));
        root.addView(desc);

        root.addView(Ui.gap(a, 14));
        TextView opLbl = Ui.text(a, "Opacidad de controles táctiles", 13f, Ui.TEXT, true);
        root.addView(opLbl);
        LinearLayout opRow = Ui.row(a);
        SeekBar bar = new SeekBar(a);
        bar.setMax(60);
        bar.setProgress(GameConfig.clamp(cfg.touchOpacity, 40, 100) - 40);
        TextView opVal = Ui.text(a, cfg.touchOpacity + "%", 13f, LauncherArtView.FOCUS_CYAN, true);
        opVal.setMinWidth(Ui.dp(a, 48));
        opVal.setGravity(Gravity.END);
        bar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar s, int p, boolean fromUser) {
                int v = 40 + Math.round(p / 5f) * 5;
                v = GameConfig.clamp(v, 40, 100);
                cfg.touchOpacity = v;
                opVal.setText(v + "%");
                cfg.save(a);
                if (onChanged != null) onChanged.run();
            }
            @Override public void onStartTrackingTouch(SeekBar s) {}
            @Override public void onStopTrackingTouch(SeekBar s) {}
        });
        opRow.addView(bar, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f));
        opRow.addView(opVal);
        root.addView(opRow);

        Switch autoHide = new Switch(a);
        autoHide.setText("Ocultar táctil automáticamente al conectar mando");
        autoHide.setTextColor(Ui.TEXT);
        autoHide.setTextSize(13f);
        autoHide.setChecked(cfg.autoHideTouchOnGamepad);
        autoHide.setPadding(0, Ui.dp(a, 10), 0, 0);
        autoHide.setOnCheckedChangeListener((b, c) -> {
            cfg.autoHideTouchOnGamepad = c;
            cfg.save(a);
            if (onChanged != null) onChanged.run();
        });
        root.addView(autoHide);

        new AlertDialog.Builder(a)
                .setTitle("Controles y Táctil")
                .setView(wrapScroll(a, root))
                .setPositiveButton("Listo", null)
                .setNeutralButton("Ajustes avanzados", (d, w) -> {
                    if (openFullSettings != null) openFullSettings.run();
                })
                .show();
    }

    private static String controlsDesc(int scheme) {
        if (scheme == GameConfig.SCHEME_CLASSIC) {
            return "Mando: Clásico PS2/Xbox (A Gas · X Freno · B Mano · Y Cámara · RT Nitro · LT Atrás).";
        }
        return "Mando: Moderno Xbox Series (RT Gas · LT Freno · A Mano/Aceptar · B Nitro · RB Cámara). "
                + "Táctil conserva botones de PS2/Xbox con iconos Xbox Series.";
    }

    // --------------------------------------------------------- 2. Argumentos / Mods

    static void showArgsDialog(Activity a, GameConfig cfg, Runnable onChanged) {
        LinearLayout root = dialogBody(a);
        root.addView(Ui.text(a,
                "Parámetros pasados a mc2.exe al arrancar (base: -path=. -archive=assets_p.dat):",
                12f, Ui.MUTED, false));
        root.addView(Ui.gap(a, 10));

        final EditText input = new EditText(a);
        input.setText(cfg.launchArgs != null ? cfg.launchArgs : "");
        input.setSingleLine(true);
        input.setTextColor(Ui.TEXT);
        input.setHintTextColor(0xFF5D677B);
        input.setHint("-skipintro");
        input.setBackground(Ui.rounded(a, 0xFF0A0E17, Ui.STROKE, 10));
        input.setPadding(Ui.dp(a, 12), Ui.dp(a, 10), Ui.dp(a, 12), Ui.dp(a, 10));
        root.addView(input, Ui.matchWrap());
        root.addView(Ui.gap(a, 12));

        root.addView(Ui.text(a, "Atajos rápidos:", 12f, Ui.TEXT, true));
        root.addView(Ui.gap(a, 6));
        LinearLayout chips = Ui.row(a);
        String[] flags = {"-skipintro", "-nomovies", "-log", "-window", "-unpacked"};
        for (String flag : flags) {
            Button chip = Ui.button(a, flag, 0xFF1A2234, LauncherArtView.FOCUS_CYAN, Ui.STROKE);
            chip.setTextSize(11.5f);
            chip.setPadding(Ui.dp(a, 10), Ui.dp(a, 6), Ui.dp(a, 10), Ui.dp(a, 6));
            LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                    LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
            lp.rightMargin = Ui.dp(a, 6);
            chip.setOnClickListener(v -> toggleFlag(input, flag));
            chips.addView(chip, lp);
        }
        root.addView(chips);

        new AlertDialog.Builder(a)
                .setTitle("Argumentos de Arranque")
                .setView(wrapScroll(a, root))
                .setPositiveButton("Guardar", (d, w) -> {
                    cfg.launchArgs = input.getText().toString().trim();
                    cfg.save(a);
                    if (onChanged != null) onChanged.run();
                })
                .setNeutralButton("Limpiar", (d, w) -> {
                    cfg.launchArgs = "";
                    cfg.save(a);
                    if (onChanged != null) onChanged.run();
                })
                .setNegativeButton("Cancelar", null)
                .show();
    }

    private static void toggleFlag(EditText et, String flag) {
        String cur = et.getText().toString().trim();
        String[] parts = cur.isEmpty() ? new String[0] : cur.split("\\s+");
        StringBuilder sb = new StringBuilder();
        boolean found = false;
        for (String p : parts) {
            if (p.equalsIgnoreCase(flag)) {
                found = true;
            } else {
                if (sb.length() > 0) sb.append(' ');
                sb.append(p);
            }
        }
        if (!found) {
            if (sb.length() > 0) sb.append(' ');
            sb.append(flag);
        }
        et.setText(sb.toString());
        et.setSelection(et.getText().length());
    }

    // --------------------------------------------------------- 3. Partidas Guardadas

    static List<File> listLocalUserdata(Context c) {
        List<File> out = new ArrayList<>();
        File dir = new File(GameDataManager.privateDir(c), "userdata");
        File[] files = dir.listFiles();
        if (files == null) return out;
        for (File f : files) {
            if (f.isFile()) out.add(f);
        }
        return out;
    }

    static String savesSubtitle(Context c) {
        List<File> files = listLocalUserdata(c);
        int savs = 0;
        String firstSav = null;
        for (File f : files) {
            if (f.getName().toLowerCase(Locale.US).endsWith(".sav")) {
                savs++;
                if (firstSav == null) firstSav = f.getName();
            }
        }
        String suffix = GameDataManager.hasTreeWritePermission(c)
                ? AppLang.t(" · Sync carpeta OK", " · Folder sync OK")
                : (GameDataManager.loadTree(c) != null ? AppLang.t(" · Tocar Cambiar 1 vez para sync", " · Tap Change once to sync") : "");
        if (savs > 0) return savs + (savs == 1 ? AppLang.t(" perfil · ", " profile · ") : AppLang.t(" perfiles · ", " profiles · ")) + firstSav + suffix;
        if (!files.isEmpty()) return files.size() + AppLang.t(" archivos en userdata", " files in userdata") + suffix;
        return AppLang.t("Sin guardados locales · Importar o respaldar", "No local saves · Import or backup");
    }

    static void showSavesDialog(Activity a, ExecutorService worker, Handler mainHandler,
                                Runnable onBackupZip, Runnable onRestoreZip, Runnable onChanged) {
        LinearLayout root = dialogBody(a);
        File ud = new File(GameDataManager.privateDir(a), "userdata");
        root.addView(Ui.text(a, "Carpeta escribible: " + ud.getAbsolutePath(), 11f, Ui.MUTED, false));
        root.addView(Ui.gap(a, 10));

        TextView listView = Ui.text(a, buildSavesListing(a), 12f, Ui.TEXT, false);
        listView.setTypeface(Typeface.MONOSPACE);
        listView.setBackground(Ui.rounded(a, 0xFF0A0E17, Ui.STROKE, 10));
        listView.setPadding(Ui.dp(a, 12), Ui.dp(a, 10), Ui.dp(a, 12), Ui.dp(a, 10));
        root.addView(listView, Ui.matchWrap());
        root.addView(Ui.gap(a, 12));

        LinearLayout actions = Ui.row(a);
        Button importSaf = Ui.primary(a, "Importar desde carpeta PC");
        importSaf.setTextSize(12.5f);
        importSaf.setOnClickListener(v -> {
            importSaf.setEnabled(false);
            worker.execute(() -> {
                String msg = importSavesFromSaf(a);
                mainHandler.post(() -> {
                    importSaf.setEnabled(true);
                    listView.setText(buildSavesListing(a));
                    Toast.makeText(a, msg, Toast.LENGTH_LONG).show();
                    if (onChanged != null) onChanged.run();
                });
            });
        });

        Button backupBtn = Ui.button(a, "Respaldar .ZIP", 0xFF1A2234, LauncherArtView.NITRO_GREEN, Ui.STROKE);
        backupBtn.setTextSize(12.5f);
        backupBtn.setOnClickListener(v -> {
            if (onBackupZip != null) onBackupZip.run();
        });

        Button restoreBtn = Ui.button(a, "Restaurar .ZIP", 0xFF1A2234, LauncherArtView.FOCUS_CYAN, Ui.STROKE);
        restoreBtn.setTextSize(12.5f);
        restoreBtn.setOnClickListener(v -> {
            if (onRestoreZip != null) onRestoreZip.run();
        });

        actions.addView(importSaf, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1.2f));
        actions.addView(Ui.gap(a, 8));
        actions.addView(backupBtn, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 0.9f));
        actions.addView(Ui.gap(a, 8));
        actions.addView(restoreBtn, new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 0.9f));
        root.addView(actions);

        new AlertDialog.Builder(a)
                .setTitle(AppLang.t("Gestor de Partidas Guardadas", "Save File Manager"))
                .setView(wrapScroll(a, root))
                .setPositiveButton(AppLang.t("Cerrar", "Close"), null)
                .show();
    }

    private static String buildSavesListing(Context c) {
        List<File> files = listLocalUserdata(c);
        if (files.isEmpty()) return "(sin archivos en userdata local todavía)";
        StringBuilder sb = new StringBuilder();
        for (File f : files) {
            sb.append("• ").append(f.getName()).append("  (")
                    .append(GameDataManager.human(f.length())).append(")\n");
        }
        return sb.toString().trim();
    }

    private static String importSavesFromSaf(Context c) {
        Uri tree = GameDataManager.loadTree(c);
        if (tree == null) return "Seleccionar primero la carpeta del juego.";
        GameDataManager.ensureWritableStructure(c);
        File dstDir = new File(GameDataManager.privateDir(c), "userdata");
        List<GameDataManager.Doc> docs = GameDataManager.enumerate(c, tree);
        int copied = 0;
        byte[] buf = new byte[16384];
        for (GameDataManager.Doc doc : docs) {
            String lower = doc.relativePath.toLowerCase(Locale.US);
            if (!lower.startsWith("userdata/")) continue;
            String name = doc.relativePath.substring("userdata/".length());
            if (name.contains("/") || name.isEmpty()) continue;
            if (!name.toLowerCase(Locale.US).endsWith(".sav")
                    && !name.toLowerCase(Locale.US).endsWith(".cfg")) continue;
            File outFile = new File(dstDir, name);
            try (InputStream in = c.getContentResolver().openInputStream(doc.uri);
                 OutputStream out = new FileOutputStream(outFile)) {
                if (in == null) continue;
                int n;
                while ((n = in.read(buf)) > 0) out.write(buf, 0, n);
                copied++;
            } catch (Exception ignored) {
            }
        }
        return copied > 0
                ? ("Importados " + copied + " archivo(s) desde userdata de PC")
                : "No se encontraron archivos .sav/.cfg en userdata de la carpeta PC";
    }

    static String backupSavesToZip(Context c, Uri outUri) {
        List<File> files = listLocalUserdata(c);
        if (files.isEmpty()) return "No hay archivos guardados para respaldar.";
        int count = 0;
        byte[] buf = new byte[16384];
        try (OutputStream os = c.getContentResolver().openOutputStream(outUri);
             ZipOutputStream zos = new ZipOutputStream(os)) {
            for (File f : files) {
                zos.putNextEntry(new ZipEntry(f.getName()));
                try (InputStream in = new FileInputStream(f)) {
                    int n;
                    while ((n = in.read(buf)) > 0) zos.write(buf, 0, n);
                }
                zos.closeEntry();
                count++;
            }
            return "Respaldo guardado (" + count + " archivos)";
        } catch (Exception e) {
            return "Error al respaldar: " + e.getMessage();
        }
    }

    static String restoreSavesFromZip(Context c, Uri inUri) {
        GameDataManager.ensureWritableStructure(c);
        File dstDir = new File(GameDataManager.privateDir(c), "userdata");
        int count = 0;
        byte[] buf = new byte[16384];
        try {
            String canonicalRoot = dstDir.getCanonicalPath() + File.separator;
            try (InputStream is = c.getContentResolver().openInputStream(inUri);
                 ZipInputStream zis = new ZipInputStream(is)) {
                ZipEntry entry;
                while ((entry = zis.getNextEntry()) != null) {
                    if (entry.isDirectory()) continue;
                    String safeName = new File(entry.getName()).getName();
                    if (safeName.isEmpty()) continue;
                    File outFile = new File(dstDir, safeName);
                    if (!outFile.getCanonicalPath().startsWith(canonicalRoot)) continue;
                    try (OutputStream out = new FileOutputStream(outFile)) {
                        int n;
                        while ((n = zis.read(buf)) > 0) out.write(buf, 0, n);
                    }
                    count++;
                    zis.closeEntry();
                }
            }
            return "Restaurados " + count + " archivo(s) en userdata";
        } catch (Exception e) {
            return "Error al restaurar ZIP: " + e.getMessage();
        }
    }

    // --------------------------------------------------------- 4. Consola / Logs

    interface LogExportHandler {
        void export(String content);
    }

    static void showLogsDialog(Activity a, ExecutorService worker, Handler mainHandler,
                               LogExportHandler onExport) {
        LinearLayout root = dialogBody(a);
        TextView logBox = Ui.text(a, "Leyendo registro del runtime...", 10.5f, 0xFFD0E2FF, false);
        logBox.setTypeface(Typeface.MONOSPACE);
        logBox.setBackground(Ui.rounded(a, 0xFF070A11, Ui.STROKE, 10));
        logBox.setPadding(Ui.dp(a, 10), Ui.dp(a, 10), Ui.dp(a, 10), Ui.dp(a, 10));
        logBox.setTextIsSelectable(true);

        ScrollView scroll = new ScrollView(a);
        scroll.addView(logBox, new ScrollView.LayoutParams(
                ScrollView.LayoutParams.MATCH_PARENT, ScrollView.LayoutParams.WRAP_CONTENT));
        root.addView(scroll, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, Ui.dp(a, 210)));

        final String[] latestText = {""};
        Runnable loadLogs = () -> worker.execute(() -> {
            String txt = readRecentLogs(a);
            latestText[0] = txt;
            mainHandler.post(() -> {
                logBox.setText(txt);
                scroll.post(() -> scroll.fullScroll(View.FOCUS_DOWN));
            });
        });
        loadLogs.run();

        new AlertDialog.Builder(a)
                .setTitle("Registro de Consola (Logs)")
                .setView(root)
                .setPositiveButton("Cerrar", null)
                .setNeutralButton("Copiar", (d, w) -> {
                    ClipboardManager cm = (ClipboardManager) a.getSystemService(Context.CLIPBOARD_SERVICE);
                    if (cm != null) {
                        cm.setPrimaryClip(ClipData.newPlainText("MC2 Logs", latestText[0]));
                        Toast.makeText(a, "Logs copiados al portapapeles", Toast.LENGTH_SHORT).show();
                    }
                })
                .setNegativeButton("Exportar .txt", (d, w) -> {
                    if (onExport != null) onExport.export(latestText[0]);
                })
                .show();
    }

    private static String readRecentLogs(Context c) {
        StringBuilder sb = new StringBuilder();
        try {
            Process p = new ProcessBuilder("logcat", "-d", "-t", "200", "-s", "PortDebug", "MC2PC", "MC2RT")
                    .redirectErrorStream(true).start();
            try (BufferedReader br = new BufferedReader(new InputStreamReader(p.getInputStream()))) {
                String line;
                while ((line = br.readLine()) != null) {
                    sb.append(line).append('\n');
                }
            }
            p.waitFor();
        } catch (Exception e) {
            sb.append("No se pudo ejecutar logcat: ").append(e.getMessage()).append('\n');
        }
        File diag = new File(c.getExternalFilesDir(null), "mc2_diag.txt");
        if (diag.isFile()) {
            sb.append("\n--- Último mc2_diag.txt (").append(GameDataManager.human(diag.length())).append(") ---\n");
        }
        return sb.length() == 0 ? "(sin entradas recientes en logcat)" : sb.toString();
    }

    // --------------------------------------------------------- 5. Integridad

    static void showIntegrityDialog(Activity a, GameDataManager.Report report,
                                    Runnable onRevalidate, Runnable onPickFolder) {
        LinearLayout root = dialogBody(a);
        if (report == null) {
            root.addView(Ui.text(a,
                    "No hay ninguna carpeta seleccionada aún. Seleccionar la carpeta de Midnight Club II de PC.",
                    13f, Ui.TEXT, false));
        } else {
            root.addView(Ui.text(a,
                    report.headline + " · " + GameDataManager.human(report.totalBytes),
                    13.5f, report.ready ? LauncherArtView.NITRO_GREEN : Ui.RED, true));
            root.addView(Ui.text(a, report.detail, 11.5f, Ui.MUTED, false));
            root.addView(Ui.gap(a, 10));

            for (GameDataManager.Entry e : report.required) {
                LinearLayout row = Ui.row(a);
                row.setPadding(0, Ui.dp(a, 4), 0, Ui.dp(a, 4));
                TextView status = Ui.text(a, e.ok() ? "OK" : "FALTA", 10.5f,
                        e.ok() ? LauncherArtView.NITRO_GREEN : Ui.RED, true);
                status.setMinWidth(Ui.dp(a, 46));
                row.addView(status);
                TextView name = Ui.text(a, e.name, 12.5f, Ui.TEXT, true);
                LinearLayout.LayoutParams nlp = new LinearLayout.LayoutParams(0, LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
                row.addView(name, nlp);
                TextView note = Ui.text(a, e.note, 11f, Ui.MUTED, false);
                row.addView(note);
                root.addView(row);
            }
        }

        new AlertDialog.Builder(a)
                .setTitle(AppLang.t("Integridad de Datos PC", "PC Data Integrity"))
                .setView(wrapScroll(a, root))
                .setPositiveButton("Cerrar", null)
                .setNeutralButton("Re-validar", (d, w) -> {
                    if (onRevalidate != null) onRevalidate.run();
                })
                .setNegativeButton("Cambiar carpeta", (d, w) -> {
                    if (onPickFolder != null) onPickFolder.run();
                })
                .show();
    }

    // --------------------------------------------------------- 6. Créditos / Salir

    static void showCreditsDialog(Activity a, GameConfig cfg, Runnable onExit) {
        LinearLayout root = dialogBody(a);
        root.addView(Ui.text(a, "PMC2Android · Midnight Club II ARM64", 15.5f, Ui.TEXT, true));
        root.addView(Ui.gap(a, 4));
        root.addView(Ui.text(a, AppLang.t(
                "xGowther2102 - Creador del Proyecto",
                "xGowther2102 - Project Creator"), 13f,
                LauncherArtView.FOCUS_CYAN, true));
        root.addView(Ui.gap(a, 8));
        root.addView(Ui.text(a, AppLang.t(
                "• Versión: v" + BuildConfig.VERSION_TAG + "\n"
                        + "• Paquete: " + BuildConfig.APPLICATION_ID + "\n"
                        + "• Motor: 11.226 funciones PE32 recompiladas a C / ARM64\n"
                        + "• Idioma: Español / English (selector en Configuración)\n"
                        + "• Perfil activo: " + cfg.summary(),
                "• Version: v" + BuildConfig.VERSION_TAG + "\n"
                        + "• Package: " + BuildConfig.APPLICATION_ID + "\n"
                        + "• Engine: 11,226 PE32 functions statically recompiled to C / ARM64\n"
                        + "• Language: Español / English (switchable in Settings)\n"
                        + "• Active profile: " + cfg.summary()),
                12f, Ui.MUTED, false));

        root.addView(Ui.gap(a, 12));
        root.addView(Ui.text(a, AppLang.t(
                "Herramientas y Créditos del Port",
                "Tools & Port Credits"), 13.5f, Ui.TEXT, true));
        root.addView(Ui.gap(a, 4));
        root.addView(Ui.text(a, AppLang.t(
                "• Ghidra: Ingeniería inversa de mc2.exe (PE32), análisis de funciones y relocs.\n"
                        + "• Recompilación estática (disasm, func_id, abi_analysis, recomp): Desensamblado x86, detección de vtables C++, análisis de ABI y traducción a C.\n"
                        + "• Python (pe_to_xbe.py, gen_pc_bridge.py, build_arm64.py): Desencriptado del stub SecuROM, generación de thunks IAT (202 imports) y compilación paralela ARM64.\n"
                        + "• Android NDK 28 (Clang/LLVM), CMake 3.22 y Gradle: Compilación cruzada arm64-v8a (libmc2pc.a + libmc2rt.so).\n"
                        + "• Runtime Nativo: Puente Win32, D3D9 → OpenGL ES 3 / EGL, DirectInput 8, AAudio + DirectMusic, FFmpeg (vídeo Bink), Gestor de Mods y soporte integrado de MC2HOOK (jtxredline/mc2hook).",
                "• Ghidra: Reverse engineering of mc2.exe (PE32), function analysis, and relocations.\n"
                        + "• Static Recompilation (disasm, func_id, abi_analysis, recomp): x86 disassembly, C++ vtable detection, ABI analysis, and static C translation.\n"
                        + "• Python (pe_to_xbe.py, gen_pc_bridge.py, build_arm64.py): SecuROM stub unpacking, IAT thunk generation (202 imports), and parallel ARM64 builds.\n"
                        + "• Android NDK 28 (Clang/LLVM), CMake 3.22 & Gradle: arm64-v8a cross-compilation (libmc2pc.a + libmc2rt.so).\n"
                        + "• Native Runtime: Win32 bridge, D3D9 → OpenGL ES 3 / EGL, DirectInput 8, AAudio + DirectMusic, FFmpeg (Bink video), Mod Manager, and native MC2HOOK integration (jtxredline/mc2hook)."),
                11.8f, Ui.MUTED, false));

        new AlertDialog.Builder(a)
                .setTitle(AppLang.t("INFO · Créditos y Herramientas", "INFO · Credits & Tools"))
                .setView(wrapScroll(a, root))
                .setPositiveButton(AppLang.t("Volver", "Back"), null)
                .setNegativeButton(AppLang.t("Cerrar launcher", "Close launcher"), (d, w) -> {
                    if (onExit != null) onExit.run();
                })
                .show();
    }

    // --------------------------------------------------------- helpers

    private static LinearLayout dialogBody(Context c) {
        LinearLayout l = new LinearLayout(c);
        l.setOrientation(LinearLayout.VERTICAL);
        l.setPadding(Ui.dp(c, 18), Ui.dp(c, 12), Ui.dp(c, 18), Ui.dp(c, 8));
        return l;
    }

    private static ScrollView wrapScroll(Context c, View child) {
        ScrollView sv = new ScrollView(c);
        sv.addView(child, new ScrollView.LayoutParams(
                ScrollView.LayoutParams.MATCH_PARENT, ScrollView.LayoutParams.WRAP_CONTENT));
        return sv;
    }
}
