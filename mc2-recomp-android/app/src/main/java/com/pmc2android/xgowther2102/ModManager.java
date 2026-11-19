package com.pmc2android.xgowther2102;

import android.content.ContentResolver;
import android.content.Context;
import android.content.SharedPreferences;
import android.database.Cursor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.DocumentsContract;

import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * Gestor de Mods por Overlay (sin modificar los archivos originales) y
 * Backup/Restauracion del juego original dentro de la carpeta SAF del usuario:
 *
 *  - <Carpeta del Juego>/mods/<NombreMod>/...
 *  - <Carpeta del Juego>/_backup_original/...
 */
public final class ModManager {

    private static final String PREFS = "mc2_mods";
    private static final String KEY_ENABLED = "enabled_mods";
    public static final String MODS_DIR = "mods";
    public static final String BACKUP_DIR = "_backup_original";

    private static final String[] PROJ = {
            DocumentsContract.Document.COLUMN_DOCUMENT_ID,
            DocumentsContract.Document.COLUMN_DISPLAY_NAME,
            DocumentsContract.Document.COLUMN_MIME_TYPE,
            DocumentsContract.Document.COLUMN_SIZE
    };

    private static final String[] BACKUP_CORE_FILES = {
            "assets_p.dat", "streams_pc.dat", "mc2.exe"
    };

    private ModManager() {
    }

    public enum Status {
        COMPATIBLE,
        MIXED_PC_AND_DATA,
        PC_ONLY_UNSUPPORTED,
        EMPTY
    }

    public static final class ModInfo {
        public final String name;
        public final String docId;
        public final int assetFiles;
        public final int pcFiles;
        public final long totalBytes;
        public final Status status;
        public final boolean enabled;
        public final int priority; // 1..N si activo, 0 si desactivado

        ModInfo(String name, String docId, int assetFiles, int pcFiles,
                long totalBytes, Status status, boolean enabled, int priority) {
            this.name = name;
            this.docId = docId;
            this.assetFiles = assetFiles;
            this.pcFiles = pcFiles;
            this.totalBytes = totalBytes;
            this.status = status;
            this.enabled = enabled;
            this.priority = priority;
        }
    }

    public static final class BackupStatus {
        public final boolean exists;
        public final int fileCount;
        public final long totalBytes;
        public final String summary;

        BackupStatus(boolean exists, int fileCount, long totalBytes, String summary) {
            this.exists = exists;
            this.fileCount = fileCount;
            this.totalBytes = totalBytes;
            this.summary = summary;
        }
    }

    public interface ProgressCallback {
        void onProgress(String message);
    }

    // ------------------------------------------------------------- Preferencias

    public static List<String> getEnabledMods(Context c) {
        String raw = c.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .getString(KEY_ENABLED, "");
        List<String> out = new ArrayList<>();
        if (raw == null || raw.isEmpty()) return out;
        for (String line : raw.split("\n")) {
            String s = line.trim();
            if (!s.isEmpty() && !out.contains(s)) out.add(s);
        }
        return out;
    }

    private static void saveEnabledMods(Context c, List<String> list) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < list.size(); i++) {
            if (i > 0) sb.append('\n');
            sb.append(list.get(i));
        }
        c.getSharedPreferences(PREFS, Context.MODE_PRIVATE).edit()
                .putString(KEY_ENABLED, sb.toString())
                .apply();
    }

    public static void setModEnabled(Context c, String modName, boolean enabled) {
        List<String> list = getEnabledMods(c);
        list.remove(modName);
        if (enabled) list.add(modName);
        saveEnabledMods(c, list);
    }

    /** delta = -1 sube prioridad (hacia #1); delta = +1 baja prioridad. */
    public static boolean moveModPriority(Context c, String modName, int delta) {
        List<String> list = getEnabledMods(c);
        int idx = list.indexOf(modName);
        if (idx < 0) return false;
        int target = idx + delta;
        if (target < 0 || target >= list.size()) return false;
        String item = list.remove(idx);
        list.add(target, item);
        saveEnabledMods(c, list);
        return true;
    }

    public static void disableAllMods(Context c) {
        saveEnabledMods(c, new ArrayList<>());
    }

    public static String summary(Context c) {
        List<String> enabled = getEnabledMods(c);
        if (enabled.isEmpty()) return AppLang.t("Sin mods activos", "No active mods");
        if (enabled.size() == 1) return AppLang.t("1 mod activo (", "1 active mod (") + enabled.get(0) + ")";
        return enabled.size() + AppLang.t(" mods activos", " active mods");
    }

    // ------------------------------------------------------------- Clasificacion

    private static boolean isPcBinaryOrConfig(String relPath) {
        String lower = relPath.toLowerCase(Locale.US);
        if (lower.startsWith(".trex/") || lower.startsWith("rtx-remix/")) return true;
        return lower.endsWith(".dll") || lower.endsWith(".exe") || lower.endsWith(".asi")
                || lower.endsWith(".bat") || lower.endsWith(".cmd")
                || lower.equals("dxvk.conf") || lower.equals("rtx.conf")
                || lower.equals("mc2hook.ini");
    }

    private static boolean isIgnoredDocOrMeta(String relPath) {
        String lower = relPath.toLowerCase(Locale.US);
        String base = lower.contains("/") ? lower.substring(lower.lastIndexOf('/') + 1) : lower;
        if (base.startsWith(".")) return true;
        return base.endsWith(".txt") || base.endsWith(".md") || base.equals("license")
                || base.endsWith(".png") || base.endsWith(".jpg") || base.endsWith(".jpeg")
                || base.endsWith(".ini") || base.endsWith(".conf");
    }

    private static boolean isModdableGameAsset(String relPath) {
        String lower = relPath.toLowerCase(Locale.US);
        if (isPcBinaryOrConfig(lower) || isIgnoredDocOrMeta(lower)) return false;
        if (lower.endsWith(".dat")) return true;
        return lower.startsWith("city/") || lower.startsWith("texture_x/")
                || lower.startsWith("audio/") || lower.startsWith("video/")
                || lower.startsWith("tune/") || lower.startsWith("shader/")
                || lower.startsWith("shader_x/") || lower.startsWith("car/")
                || lower.startsWith("anim/") || lower.startsWith("geom/")
                || lower.startsWith("bound/") || lower.startsWith("userdata/");
    }

    // ------------------------------------------------------------- Helpers SAF

    private static String findChildDirId(ContentResolver cr, Uri tree, String parentId,
                                         String dirName, boolean createIfMissing) {
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, parentId);
        try (Cursor c = cr.query(children, PROJ, null, null, null)) {
            if (c != null) {
                while (c.moveToNext()) {
                    String id = c.getString(0);
                    String name = c.getString(1);
                    String mime = c.getString(2);
                    if (id != null && name != null
                            && DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)
                            && name.equalsIgnoreCase(dirName)) {
                        return id;
                    }
                }
            }
        } catch (Exception ignored) {
        }
        if (!createIfMissing) return null;
        try {
            Uri parentUri = DocumentsContract.buildDocumentUriUsingTree(tree, parentId);
            Uri created = DocumentsContract.createDocument(cr, parentUri,
                    DocumentsContract.Document.MIME_TYPE_DIR, dirName);
            if (created != null) return DocumentsContract.getDocumentId(created);
        } catch (Exception e) {
            PortDebug.warn("DATA", "No se pudo crear carpeta SAF " + dirName + ": " + e.getMessage());
        }
        return null;
    }

    private static Map<String, Uri> listChildFiles(ContentResolver cr, Uri tree, String parentId) {
        Map<String, Uri> out = new HashMap<>();
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, parentId);
        try (Cursor c = cr.query(children, PROJ, null, null, null)) {
            if (c == null) return out;
            while (c.moveToNext()) {
                String id = c.getString(0);
                String name = c.getString(1);
                String mime = c.getString(2);
                if (id == null || name == null) continue;
                if (DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) continue;
                out.put(name.toLowerCase(Locale.US), DocumentsContract.buildDocumentUriUsingTree(tree, id));
            }
        } catch (Exception ignored) {
        }
        return out;
    }

    private static final class ModDoc {
        final String relPath;
        final long size;
        final Uri uri;

        ModDoc(String relPath, long size, Uri uri) {
            this.relPath = relPath;
            this.size = size;
            this.uri = uri;
        }
    }

    private static void collectModDocs(ContentResolver cr, Uri tree, String parentId,
                                       String prefix, List<ModDoc> out, int depth) {
        if (depth > 6 || out.size() > 600) return;
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, parentId);
        try (Cursor c = cr.query(children, PROJ, null, null, null)) {
            if (c == null) return;
            while (c.moveToNext()) {
                String id = c.getString(0);
                String name = c.getString(1);
                String mime = c.getString(2);
                long size = c.isNull(3) ? 0L : c.getLong(3);
                if (id == null || name == null) continue;
                String rel = prefix.isEmpty() ? name : prefix + "/" + name;
                if (DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) {
                    collectModDocs(cr, tree, id, rel, out, depth + 1);
                } else {
                    out.add(new ModDoc(rel, size, DocumentsContract.buildDocumentUriUsingTree(tree, id)));
                }
            }
        } catch (Exception ignored) {
        }
    }

    // ------------------------------------------------------------- Escaneo de Mods

    public static List<ModInfo> scanMods(Context c, Uri tree) {
        List<ModInfo> out = new ArrayList<>();
        if (tree == null) return out;
        ContentResolver cr = c.getContentResolver();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        String modsDirId = findChildDirId(cr, tree, rootId, MODS_DIR, false);
        if (modsDirId == null) return out;

        List<String> enabledOrder = getEnabledMods(c);
        Map<String, ModInfo> found = new HashMap<>();
        List<ModInfo> inactive = new ArrayList<>();

        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, modsDirId);
        try (Cursor cur = cr.query(children, PROJ, null, null, null)) {
            if (cur == null) return out;
            while (cur.moveToNext()) {
                String id = cur.getString(0);
                String name = cur.getString(1);
                String mime = cur.getString(2);
                if (id == null || name == null) continue;
                if (!DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) continue;

                List<ModDoc> docs = new ArrayList<>();
                collectModDocs(cr, tree, id, "", docs, 0);
                int assets = 0;
                int pcs = 0;
                long bytes = 0L;
                for (ModDoc d : docs) {
                    if (isPcBinaryOrConfig(d.relPath)) {
                        pcs++;
                    } else if (isModdableGameAsset(d.relPath)) {
                        assets++;
                        bytes += d.size;
                    }
                }
                Status st;
                if (assets > 0 && pcs == 0) st = Status.COMPATIBLE;
                else if (assets > 0) st = Status.MIXED_PC_AND_DATA;
                else if (pcs > 0) st = Status.PC_ONLY_UNSUPPORTED;
                else st = Status.EMPTY;

                int idx = enabledOrder.indexOf(name);
                boolean canEnable = (st == Status.COMPATIBLE || st == Status.MIXED_PC_AND_DATA);
                boolean en = (idx >= 0) && canEnable;
                ModInfo mi = new ModInfo(name, id, assets, pcs, bytes, st, en, en ? (idx + 1) : 0);
                if (en) found.put(name, mi);
                else inactive.add(mi);
            }
        } catch (Exception e) {
            PortDebug.warn("DATA", "Error escaneando mods/: " + e.getMessage());
        }
        int prio = 1;
        for (String name : enabledOrder) {
            ModInfo mi = found.get(name);
            if (mi != null) {
                out.add(new ModInfo(mi.name, mi.docId, mi.assetFiles, mi.pcFiles,
                        mi.totalBytes, mi.status, true, prio++));
            }
        }
        out.addAll(inactive);
        return out;
    }

    /** Aplica en memoria (overlay) los mods activos al arrancar GameActivity.
     *  Se registran en orden inverso para que el mod #1 (arriba) sobreescriba a los inferiores. */
    public static int registerActiveMods(Context c, Uri tree) {
        if (tree == null || !Native.LOADED) return 0;
        List<String> enabledOrder = getEnabledMods(c);
        if (enabledOrder.isEmpty()) return 0;

        List<ModInfo> mods = scanMods(c, tree);
        Map<String, ModInfo> byName = new HashMap<>();
        for (ModInfo m : mods) byName.put(m.name, m);

        ContentResolver cr = c.getContentResolver();
        int totalApplied = 0;
        for (int i = enabledOrder.size() - 1; i >= 0; i--) {
            String name = enabledOrder.get(i);
            ModInfo info = byName.get(name);
            if (info == null || (info.status != Status.COMPATIBLE && info.status != Status.MIXED_PC_AND_DATA)) {
                continue;
            }
            List<ModDoc> docs = new ArrayList<>();
            collectModDocs(cr, tree, info.docId, "", docs, 0);
            int modFiles = 0;
            for (ModDoc d : docs) {
                if (!isModdableGameAsset(d.relPath)) continue;
                try (ParcelFileDescriptor pfd = cr.openFileDescriptor(d.uri, "r")) {
                    if (pfd != null) {
                        Native.registerDataFd(d.relPath, pfd.getFd(), d.size);
                        modFiles++;
                        totalApplied++;
                    }
                } catch (Exception e) {
                    PortDebug.warn("DATA", "Mod " + name + " fallo en " + d.relPath + ": " + e.getMessage());
                }
            }
            PortDebug.data("MOD activo #" + info.priority + " aplicado: " + name + " (" + modFiles + " archivo(s))");
        }
        return totalApplied;
    }

    // ------------------------------------------------------------- Importar / Borrar

    public static String importZipMod(Context c, Uri tree, Uri zipUri, String displayName,
                                      ProgressCallback cb) {
        if (tree == null || !GameDataManager.hasTreeWritePermission(c)) {
            return "Se requiere permiso de escritura en la carpeta del juego (tocar Cambiar una vez).";
        }
        String baseName = (displayName == null || displayName.trim().isEmpty())
                ? "Mod_" + System.currentTimeMillis()
                : displayName.trim();
        if (baseName.toLowerCase(Locale.US).endsWith(".zip")) {
            baseName = baseName.substring(0, baseName.length() - 4);
        }
        baseName = baseName.replaceAll("[\\\\/:*?\"<>|]", "_");

        ContentResolver cr = c.getContentResolver();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        String modsDirId = findChildDirId(cr, tree, rootId, MODS_DIR, true);
        if (modsDirId == null) return "No se pudo crear la carpeta mods/.";
        String targetModId = findChildDirId(cr, tree, modsDirId, baseName, true);
        if (targetModId == null) return "No se pudo crear mods/" + baseName;

        // Primero inspeccionar si todas las rutas del ZIP vienen envueltas en una carpeta raiz unica
        String commonPrefix = null;
        try (InputStream raw = cr.openInputStream(zipUri);
             ZipInputStream zis = new ZipInputStream(new BufferedInputStream(raw))) {
            ZipEntry e;
            while ((e = zis.getNextEntry()) != null) {
                String n = e.getName().replace('\\', '/');
                while (n.startsWith("/")) n = n.substring(1);
                if (n.isEmpty() || n.contains("..")) continue;
                int slash = n.indexOf('/');
                if (slash <= 0) {
                    commonPrefix = "";
                    break;
                }
                String top = n.substring(0, slash);
                if (commonPrefix == null) commonPrefix = top;
                else if (!commonPrefix.equals(top)) {
                    commonPrefix = "";
                    break;
                }
            }
        } catch (Exception e) {
            return "No se pudo leer el ZIP: " + e.getMessage();
        }
        if (commonPrefix != null && !commonPrefix.isEmpty()) {
            String lowTop = commonPrefix.toLowerCase(Locale.US);
            if (lowTop.equals("city") || lowTop.equals("texture_x") || lowTop.equals("audio")
                    || lowTop.equals("video") || lowTop.equals("tune") || lowTop.equals("userdata")) {
                commonPrefix = "";
            }
        }

        int extracted = 0;
        byte[] buf = new byte[32768];
        Map<String, String> dirCache = new HashMap<>();
        dirCache.put("", targetModId);

        try (InputStream raw = cr.openInputStream(zipUri);
             ZipInputStream zis = new ZipInputStream(new BufferedInputStream(raw))) {
            ZipEntry e;
            while ((e = zis.getNextEntry()) != null) {
                if (e.isDirectory()) continue;
                String rel = e.getName().replace('\\', '/');
                while (rel.startsWith("/")) rel = rel.substring(1);
                if (rel.isEmpty() || rel.contains("..")) continue;
                if (commonPrefix != null && !commonPrefix.isEmpty()
                        && rel.startsWith(commonPrefix + "/")) {
                    rel = rel.substring(commonPrefix.length() + 1);
                }
                if (rel.isEmpty()) continue;

                int lastSlash = rel.lastIndexOf('/');
                String parentRel = (lastSlash > 0) ? rel.substring(0, lastSlash) : "";
                String fileName = (lastSlash >= 0) ? rel.substring(lastSlash + 1) : rel;
                if (fileName.isEmpty()) continue;

                String parentId = ensureRelDir(cr, tree, targetModId, parentRel, dirCache);
                if (parentId == null) continue;

                Map<String, Uri> existing = listChildFiles(cr, tree, parentId);
                Uri dst = existing.get(fileName.toLowerCase(Locale.US));
                if (dst == null) {
                    Uri parentUri = DocumentsContract.buildDocumentUriUsingTree(tree, parentId);
                    dst = DocumentsContract.createDocument(cr, parentUri,
                            "application/octet-stream", fileName);
                }
                if (dst == null) continue;

                try (OutputStream out = cr.openOutputStream(dst, "wt")) {
                    if (out == null) continue;
                    int r;
                    while ((r = zis.read(buf)) > 0) out.write(buf, 0, r);
                    out.flush();
                    extracted++;
                    if (cb != null) cb.onProgress("Importando " + fileName + " (" + extracted + ")...");
                }
            }
        } catch (Exception e) {
            return "Error extrayendo ZIP: " + e.getMessage();
        }
        return extracted > 0
                ? "Mod '" + baseName + "' importado (" + extracted + " archivos)."
                : "El archivo ZIP no contenía archivos válidos.";
    }

    private static String ensureRelDir(ContentResolver cr, Uri tree, String rootId,
                                       String relDir, Map<String, String> cache) {
        if (relDir.isEmpty()) return rootId;
        String cached = cache.get(relDir);
        if (cached != null) return cached;

        String curId = rootId;
        StringBuilder acc = new StringBuilder();
        for (String seg : relDir.split("/")) {
            if (seg.isEmpty()) continue;
            if (acc.length() > 0) acc.append('/');
            acc.append(seg);
            String key = acc.toString();
            String hit = cache.get(key);
            if (hit == null) {
                hit = findChildDirId(cr, tree, curId, seg, true);
                if (hit == null) return null;
                cache.put(key, hit);
            }
            curId = hit;
        }
        return curId;
    }

    public static boolean deleteMod(Context c, Uri tree, ModInfo mod) {
        if (tree == null || mod == null || !GameDataManager.hasTreeWritePermission(c)) return false;
        setModEnabled(c, mod.name, false);
        try {
            Uri modUri = DocumentsContract.buildDocumentUriUsingTree(tree, mod.docId);
            return DocumentsContract.deleteDocument(c.getContentResolver(), modUri);
        } catch (Exception e) {
            PortDebug.warn("DATA", "No se pudo borrar mod " + mod.name + ": " + e.getMessage());
            return false;
        }
    }

    // ------------------------------------------------------------- Backup / Restaurar

    public static BackupStatus getBackupStatus(Context c, Uri tree) {
        if (tree == null) return new BackupStatus(false, 0, 0L, "Sin carpeta seleccionada");
        ContentResolver cr = c.getContentResolver();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        String backupId = findChildDirId(cr, tree, rootId, BACKUP_DIR, false);
        if (backupId == null) {
            return new BackupStatus(false, 0, 0L, "Sin respaldo original todavía en _backup_original/");
        }
        List<ModDoc> docs = new ArrayList<>();
        collectModDocs(cr, tree, backupId, "", docs, 0);
        long bytes = 0L;
        for (ModDoc d : docs) bytes += d.size;
        if (docs.isEmpty()) {
            return new BackupStatus(false, 0, 0L, "Carpeta _backup_original/ vacía");
        }
        return new BackupStatus(true, docs.size(), bytes,
                "Respaldo listo: " + docs.size() + " archivos (" + GameDataManager.human(bytes) + ")");
    }

    public static String createOriginalBackup(Context c, Uri tree, ProgressCallback cb) {
        if (tree == null || !GameDataManager.hasTreeWritePermission(c)) {
            return "Se requiere permiso de escritura en la carpeta del juego (tocar Cambiar una vez).";
        }
        ContentResolver cr = c.getContentResolver();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        String backupId = findChildDirId(cr, tree, rootId, BACKUP_DIR, true);
        if (backupId == null) return "No se pudo crear _backup_original/.";

        Map<String, Uri> rootFiles = listChildFiles(cr, tree, rootId);
        Map<String, Uri> backupFiles = listChildFiles(cr, tree, backupId);
        Uri backupDirUri = DocumentsContract.buildDocumentUriUsingTree(tree, backupId);

        int copied = 0;
        for (String name : BACKUP_CORE_FILES) {
            Uri src = rootFiles.get(name.toLowerCase(Locale.US));
            if (src == null) continue;
            if (cb != null) cb.onProgress("Respaldando " + name + "...");
            try {
                Uri dst = backupFiles.get(name.toLowerCase(Locale.US));
                if (dst == null) {
                    dst = DocumentsContract.createDocument(cr, backupDirUri,
                            "application/octet-stream", name);
                }
                if (dst != null) {
                    copyUri(cr, src, dst);
                    copied++;
                }
            } catch (Exception e) {
                return "Error respaldando " + name + ": " + e.getMessage();
            }
        }
        return "Backup original creado (" + copied + " archivos en _backup_original/).";
    }

    public static String restoreOriginalBackup(Context c, Uri tree, ProgressCallback cb) {
        if (tree == null || !GameDataManager.hasTreeWritePermission(c)) {
            return "Se requiere permiso de escritura en la carpeta del juego (tocar Cambiar una vez).";
        }
        disableAllMods(c);
        ContentResolver cr = c.getContentResolver();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        String backupId = findChildDirId(cr, tree, rootId, BACKUP_DIR, false);
        if (backupId == null) {
            return "No existe _backup_original/ todavía. Todos los mods fueron desactivados.";
        }
        Map<String, Uri> backupFiles = listChildFiles(cr, tree, backupId);
        Map<String, Uri> rootFiles = listChildFiles(cr, tree, rootId);
        Uri rootDirUri = DocumentsContract.buildDocumentUriUsingTree(tree, rootId);

        int restored = 0;
        for (String name : BACKUP_CORE_FILES) {
            Uri src = backupFiles.get(name.toLowerCase(Locale.US));
            if (src == null) continue;
            if (cb != null) cb.onProgress("Restaurando " + name + "...");
            try {
                Uri dst = rootFiles.get(name.toLowerCase(Locale.US));
                if (dst == null) {
                    dst = DocumentsContract.createDocument(cr, rootDirUri,
                            "application/octet-stream", name);
                }
                if (dst != null) {
                    copyUri(cr, src, dst);
                    restored++;
                }
            } catch (Exception e) {
                return "Error restaurando " + name + ": " + e.getMessage();
            }
        }
        return restored > 0
                ? "Juego restaurado al original (" + restored + " archivos) y mods desactivados."
                : "No había archivos principales en _backup_original/. Mods desactivados.";
    }

    private static void copyUri(ContentResolver cr, Uri src, Uri dst) throws IOException {
        byte[] buf = new byte[65536];
        try (InputStream in = cr.openInputStream(src);
             OutputStream out = cr.openOutputStream(dst, "wt")) {
            if (in == null || out == null) {
                throw new IOException("No se pudo abrir stream de copia");
            }
            int r;
            while ((r = in.read(buf)) > 0) {
                out.write(buf, 0, r);
            }
            out.flush();
        }
    }
}
