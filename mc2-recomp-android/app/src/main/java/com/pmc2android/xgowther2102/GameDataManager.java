package com.pmc2android.xgowther2102;

import android.content.ContentResolver;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.UriPermission;
import android.database.Cursor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.DocumentsContract;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/**
 * Gestor de datos de Midnight Club II (version PC).
 *
 * Arquitectura definitiva:
 *  - El usuario elige con ACTION_OPEN_DOCUMENT_TREE la carpeta donde estan los
 *    datos, FUERA de Android/data (por ejemplo Download/Midnight Club II).
 *  - No se copia nada: se conserva la URI persistente del arbol.
 *  - Los archivos se validan y se abren a traves de ContentResolver. Cada
 *    descriptor se registra en el motor C con Native.registerDataFd(), que
 *    lo usa en lugar de fopen(). Esto es necesario porque con targetSdk 34
 *    fopen("/sdcard/Download/...") devuelve EACCES (errno 13), verificado
 *    en un POCO F3 con Android 16 mediante Native.probePath().
 *  - La carpeta privada de la app se usa SOLO para guardados y cache, que si
 *    son escribibles sin permisos.
 */
public final class GameDataManager {

    private static final String PREFS = "mc2_data";
    private static final String KEY_TREE_URI = "tree_uri";
    private static final String KEY_TREE_ID = "tree_id";
    private static final String KEY_TREE_LABEL = "tree_label";

    private static final long SIZE_MC2_EXE = 3854336L;
    private static final long SIZE_ASSETS = 231985152L;
    private static final long SIZE_STREAMS = 545269760L;
    private static final long MIN_MC2_EXE = 3000000L;
    private static final long MAX_MC2_EXE = 16L * 1024L * 1024L;

    private static final byte[] MAGIC_MZ = {'M', 'Z'};
    private static final byte[] MAGIC_DAVE_LOWER = {'D', 'a', 'v', 'e'};
    private static final byte[] MAGIC_DAVE_UPPER = {'D', 'A', 'V', 'E'};

    /** Todas las carpetas del juego son obligatorias: modelos 3D, texturas 2D,
     *  ciudades, audio DirectMusic y videos Bink. No hay recursos opcionales. */
    private static final String[] REQUIRED_DIRS = {
            "texture_x", "city", "audio", "video", "userdata"
    };

    /** Unicas exclusiones permitidas: wrappers y parches de PC (x86/x64/CHPE)
     *  que no se ejecutan en ARM64. No son datos del juego y no se registran.
     *  Cualquier otro archivo del arbol es obligatorio y debe abrirse. */
    private static final String[] EXCLUDED_DIRS = {
            "dgvoodoo2_87_6", "mc2patch", "mods", "_backup_original"
    };

    private static boolean isExcludedDir(String name) {
        String lower = name.toLowerCase(Locale.US);
        for (String d : EXCLUDED_DIRS) {
            if (lower.equals(d)) return true;
        }
        return false;
    }

    /** Tope de seguridad del enumerador. La instalacion completa ronda 230-270
     *  archivos; 900 deja margen x4 sin agotar RLIMIT_NOFILE (normalmente 1024
     *  descriptores por proceso, compartidos con EGL, AAudio y el runtime). */
    private static final int MAX_ENUMERATED_FILES = 900;

    private GameDataManager() {
    }

    // ------------------------------------------------------------- carpeta privada

    /** Solo para guardados, userdata y cache. NO es la fuente de los datos. */
    public static File privateDir(Context c) {
        File[] external = c.getExternalFilesDirs(null);
        File base = (external != null && external.length > 0 && external[0] != null)
                ? external[0] : c.getFilesDir();
        return new File(base, "Midnight Club II");
    }

    public static void ensureWritableStructure(Context c) {
        File root = privateDir(c);
        if (!root.exists() && !root.mkdirs()) {
            PortDebug.warn("DATA", "No se pudo crear " + root.getAbsolutePath());
        }
        new File(root, "userdata").mkdirs();
        new File(c.getFilesDir(), "mc2/cache").mkdirs();
    }

    // ------------------------------------------------------------- URI del arbol

    public static void saveTree(Context c, Uri tree) {
        try {
            c.getContentResolver().takePersistableUriPermission(tree,
                    Intent.FLAG_GRANT_READ_URI_PERMISSION | Intent.FLAG_GRANT_WRITE_URI_PERMISSION);
        } catch (Exception e) {
            try {
                c.getContentResolver().takePersistableUriPermission(tree,
                        Intent.FLAG_GRANT_READ_URI_PERMISSION);
                PortDebug.warn("DATA", "Permiso solo lectura (sin escritura SAF): " + e.getMessage());
            } catch (Exception e2) {
                PortDebug.warn("DATA", "Permiso persistente no concedido: " + e2.getMessage());
            }
        }
        String id = DocumentsContract.getTreeDocumentId(tree);
        c.getSharedPreferences(PREFS, Context.MODE_PRIVATE).edit()
                .putString(KEY_TREE_URI, tree.toString())
                .putString(KEY_TREE_ID, id)
                .putString(KEY_TREE_LABEL, friendlyPath(id))
                .apply();
        PortDebug.data("Carpeta SAF guardada · " + friendlyPath(id) + " · write=" + hasTreeWritePermission(c));
    }

    public static boolean hasTreeWritePermission(Context c) {
        Uri tree = loadTree(c);
        if (tree == null) return false;
        try {
            List<UriPermission> perms = c.getContentResolver().getPersistedUriPermissions();
            for (UriPermission p : perms) {
                if (tree.equals(p.getUri()) && p.isWritePermission()) {
                    return true;
                }
            }
        } catch (Exception ignored) {
        }
        return false;
    }

    private static boolean isSaveFileName(String name) {
        if (name == null) return false;
        String lower = name.toLowerCase(Locale.US);
        return lower.endsWith(".sav") || lower.endsWith(".cfg")
                || lower.endsWith(".map") || lower.endsWith(".red");
    }

    private static String findUserdataDocId(ContentResolver cr, Uri tree, boolean createIfMissing) {
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, rootId);
        try (Cursor cursor = cr.query(children, DOC_PROJECTION, null, null, null)) {
            if (cursor != null) {
                while (cursor.moveToNext()) {
                    String id = cursor.getString(0);
                    String name = cursor.getString(1);
                    String mime = cursor.getString(2);
                    if (id != null && name != null
                            && DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)
                            && name.equalsIgnoreCase("userdata")) {
                        return id;
                    }
                }
            }
        } catch (Exception ignored) {
        }
        if (!createIfMissing) return null;
        try {
            Uri rootDoc = DocumentsContract.buildDocumentUriUsingTree(tree, rootId);
            Uri created = DocumentsContract.createDocument(cr, rootDoc,
                    DocumentsContract.Document.MIME_TYPE_DIR, "userdata");
            if (created != null) return DocumentsContract.getDocumentId(created);
        } catch (Exception e) {
            PortDebug.warn("DATA", "No se pudo crear userdata en SAF: " + e.getMessage());
        }
        return null;
    }

    private static final String[] SAVE_SYNC_PROJECTION = {
            DocumentsContract.Document.COLUMN_DOCUMENT_ID,
            DocumentsContract.Document.COLUMN_DISPLAY_NAME,
            DocumentsContract.Document.COLUMN_MIME_TYPE,
            DocumentsContract.Document.COLUMN_SIZE,
            DocumentsContract.Document.COLUMN_LAST_MODIFIED
    };

    /** Al iniciar: trae desde la carpeta SAF del juego cualquier .sav/.cfg mas reciente. */
    public static int syncSavesFromSafToLocal(Context c, Uri tree) {
        if (tree == null) return 0;
        ensureWritableStructure(c);
        ContentResolver cr = c.getContentResolver();
        String udId = findUserdataDocId(cr, tree, false);
        if (udId == null) return 0;

        File localDir = new File(privateDir(c), "userdata");
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, udId);
        int copied = 0;
        try (Cursor cursor = cr.query(children, SAVE_SYNC_PROJECTION, null, null, null)) {
            if (cursor == null) return 0;
            byte[] buf = new byte[16384];
            while (cursor.moveToNext()) {
                String id = cursor.getString(0);
                String name = cursor.getString(1);
                String mime = cursor.getString(2);
                long safSize = cursor.isNull(3) ? 0L : cursor.getLong(3);
                long safMod = cursor.isNull(4) ? 0L : cursor.getLong(4);
                if (id == null || name == null || DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) continue;
                if (!isSaveFileName(name) || safSize <= 0L) continue;

                File localFile = new File(localDir, name);
                boolean shouldCopy = !localFile.exists()
                        || (safMod > 0L && safMod > localFile.lastModified() + 1500L);
                if (!shouldCopy) continue;

                Uri docUri = DocumentsContract.buildDocumentUriUsingTree(tree, id);
                try (InputStream in = cr.openInputStream(docUri);
                     OutputStream out = new FileOutputStream(localFile, false)) {
                    if (in == null) continue;
                    int r;
                    while ((r = in.read(buf)) > 0) out.write(buf, 0, r);
                    out.flush();
                    if (safMod > 0L) localFile.setLastModified(safMod);
                    copied++;
                } catch (Exception e) {
                    PortDebug.warn("DATA", "Sync SAF->local fallo en " + name + ": " + e.getMessage());
                }
            }
        } catch (Exception e) {
            PortDebug.warn("DATA", "Error leyendo userdata SAF: " + e.getMessage());
        }
        if (copied > 0) PortDebug.data("Saves sincronizados SAF -> local: " + copied);
        return copied;
    }

    /** Al pausar/salir: respalda hacia la carpeta SAF del juego los .sav/.cfg actualizados. */
    public static synchronized int syncSavesFromLocalToSaf(Context c, Uri tree) {
        if (tree == null || !hasTreeWritePermission(c)) return 0;
        File localDir = new File(privateDir(c), "userdata");
        File[] files = localDir.listFiles();
        if (files == null || files.length == 0) return 0;

        ContentResolver cr = c.getContentResolver();
        String udId = findUserdataDocId(cr, tree, true);
        if (udId == null) return 0;

        Map<String, Uri> safUris = new HashMap<>();
        Map<String, Long> safMods = new HashMap<>();
        Map<String, Long> safSizes = new HashMap<>();
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, udId);
        try (Cursor cursor = cr.query(children, SAVE_SYNC_PROJECTION, null, null, null)) {
            if (cursor != null) {
                while (cursor.moveToNext()) {
                    String id = cursor.getString(0);
                    String name = cursor.getString(1);
                    String mime = cursor.getString(2);
                    long sz = cursor.isNull(3) ? 0L : cursor.getLong(3);
                    long mod = cursor.isNull(4) ? 0L : cursor.getLong(4);
                    if (id == null || name == null || DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) continue;
                    String key = name.toLowerCase(Locale.US);
                    safUris.put(key, DocumentsContract.buildDocumentUriUsingTree(tree, id));
                    safMods.put(key, mod);
                    safSizes.put(key, sz);
                }
            }
        } catch (Exception e) {
            PortDebug.warn("DATA", "No se pudo listar userdata SAF para escribir: " + e.getMessage());
            return 0;
        }

        Uri udDocUri = DocumentsContract.buildDocumentUriUsingTree(tree, udId);
        int copied = 0;
        byte[] buf = new byte[16384];
        for (File f : files) {
            if (!f.isFile() || f.length() <= 0L || !isSaveFileName(f.getName())) continue;
            String key = f.getName().toLowerCase(Locale.US);
            Uri dst = safUris.get(key);
            Long sMod = safMods.get(key);
            Long sSize = safSizes.get(key);
            boolean needWrite = (dst == null)
                    || (sMod != null && f.lastModified() > sMod + 1500L)
                    || (sSize != null && f.length() != sSize);
            if (!needWrite) continue;

            try {
                if (dst == null) {
                    dst = DocumentsContract.createDocument(cr, udDocUri,
                            "application/octet-stream", f.getName());
                }
                if (dst == null) continue;
                try (InputStream in = new FileInputStream(f);
                     OutputStream out = cr.openOutputStream(dst, "wt")) {
                    if (out == null) continue;
                    int r;
                    while ((r = in.read(buf)) > 0) out.write(buf, 0, r);
                    out.flush();
                    copied++;
                }
            } catch (Exception e) {
                PortDebug.warn("DATA", "Sync local->SAF fallo en " + f.getName() + ": " + e.getMessage());
            }
        }
        if (copied > 0) PortDebug.data("Saves respaldados en carpeta del juego (SAF): " + copied);
        return copied;
    }

    public static void clearTree(Context c) {
        c.getSharedPreferences(PREFS, Context.MODE_PRIVATE).edit().clear().apply();
        if (Native.LOADED) Native.clearDataFds();
    }

    public static Uri loadTree(Context c) {
        String raw = c.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .getString(KEY_TREE_URI, null);
        if (raw == null) return null;
        try {
            return Uri.parse(raw);
        } catch (Exception e) {
            return null;
        }
    }

    public static String treeId(Context c) {
        return c.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .getString(KEY_TREE_ID, "");
    }

    /** Etiqueta legible para mostrar al usuario, p. ej. "Download/Midnight Club II". */
    public static String selectedFolderLabel(Context c) {
        String label = c.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .getString(KEY_TREE_LABEL, null);
        return label == null ? "(ninguna carpeta seleccionada)" : label;
    }

    private static String friendlyPath(String documentId) {
        if (documentId == null) return "(desconocida)";
        String s = documentId;
        int colon = s.indexOf(':');
        if (colon >= 0 && colon + 1 < s.length()) s = s.substring(colon + 1);
        return s.isEmpty() ? documentId : s;
    }

    /** URI de un documento dentro del arbol elegido. */
    public static Uri documentUri(Context c, String relativePath) {
        Uri tree = loadTree(c);
        if (tree == null) return null;
        String id = treeId(c);
        String rel = relativePath;
        while (rel.startsWith("/")) rel = rel.substring(1);
        String childId = rel.isEmpty() ? id : id + "/" + rel;
        return DocumentsContract.buildDocumentUriUsingTree(tree, childId);
    }

    // ------------------------------------------------------------- enumeracion

    public static final class Doc {
        public final String relativePath;
        public final long size;
        public final Uri uri;

        Doc(String relativePath, long size, Uri uri) {
            this.relativePath = relativePath;
            this.size = size;
            this.uri = uri;
        }
    }

    private static final String[] DOC_PROJECTION = {
            DocumentsContract.Document.COLUMN_DOCUMENT_ID,
            DocumentsContract.Document.COLUMN_DISPLAY_NAME,
            DocumentsContract.Document.COLUMN_MIME_TYPE,
            DocumentsContract.Document.COLUMN_SIZE
    };

    public static List<Doc> enumerate(Context c, Uri tree) {
        List<Doc> out = new ArrayList<>();
        String rootId = DocumentsContract.getTreeDocumentId(tree);
        collect(c.getContentResolver(), tree, rootId, "", out, 0);
        return out;
    }

    private static void collect(ContentResolver cr, Uri tree, String parentId,
                                String prefix, List<Doc> out, int depth) {
        if (depth > 8 || out.size() > MAX_ENUMERATED_FILES) return;
        Uri children = DocumentsContract.buildChildDocumentsUriUsingTree(tree, parentId);
        try (Cursor cursor = cr.query(children, DOC_PROJECTION, null, null, null)) {
            if (cursor == null) return;
            while (cursor.moveToNext()) {
                String id = cursor.getString(0);
                String name = cursor.getString(1);
                String mime = cursor.getString(2);
                long size = cursor.isNull(3) ? 0L : cursor.getLong(3);
                if (id == null || name == null) continue;
                String path = prefix.isEmpty() ? name : prefix + "/" + name;
                Uri doc = DocumentsContract.buildDocumentUriUsingTree(tree, id);
                if (mime != null && mime.equals(DocumentsContract.Document.MIME_TYPE_DIR)) {
                    if (isExcludedDir(name)) {
                        PortDebug.data("Carpeta de parches de PC excluida: " + path);
                        continue;
                    }
                    collect(cr, tree, id, path, out, depth + 1);
                } else {
                    out.add(new Doc(path, size, doc));
                }
            }
        } catch (Exception e) {
            PortDebug.warn("DATA", "SAF enumeracion: " + e.getMessage());
        }
    }

    // ------------------------------------------------------------- validacion

    public enum State { OK, MISSING, WRONG_SIZE, BAD_MAGIC, UNREADABLE }

    public static final class Entry {
        public final String name;
        public final State state;
        public final long actualSize;
        public final long expectedSize;
        public final String note;

        Entry(String name, State state, long actualSize, long expectedSize, String note) {
            this.name = name;
            this.state = state;
            this.actualSize = actualSize;
            this.expectedSize = expectedSize;
            this.note = note;
        }

        public boolean ok() {
            return state == State.OK;
        }
    }

    public static final class Report {
        public final boolean ready;
        public final String folderLabel;
        /** Incluye los 3 archivos clave Y todas las carpetas de recursos. */
        public final List<Entry> required;
        public final boolean truncated;
        public final long totalBytes;
        public final int fileCount;
        public final String headline;
        public final String detail;

        Report(boolean ready, String folderLabel, List<Entry> required,
               boolean truncated, long totalBytes, int fileCount,
               String headline, String detail) {
            this.ready = ready;
            this.folderLabel = folderLabel;
            this.required = required;
            this.truncated = truncated;
            this.totalBytes = totalBytes;
            this.fileCount = fileCount;
            this.headline = headline;
            this.detail = detail;
        }
    }

    public static Report validate(Context c, Uri tree) {
        String label = friendlyPath(DocumentsContract.getTreeDocumentId(tree));
        List<Doc> docs = enumerate(c, tree);
        List<Entry> required = new ArrayList<>();
        required.add(check(docs, "mc2.exe", MIN_MC2_EXE, MAX_MC2_EXE,
                SIZE_MC2_EXE, c, MAGIC_MZ));
        required.add(check(docs, "assets_p.dat", 10L * 1024L * 1024L, 1024L * 1024L * 1024L,
                SIZE_ASSETS, c, MAGIC_DAVE_LOWER, MAGIC_DAVE_UPPER));
        required.add(check(docs, "streams_pc.dat", 50L * 1024L * 1024L, 2048L * 1024L * 1024L,
                SIZE_STREAMS, c, MAGIC_DAVE_LOWER, MAGIC_DAVE_UPPER));

        /* Todas las carpetas de recursos son obligatorias: sin texture_x/city
           faltan modelos 3D y texturas 2D; sin audio/video faltan sonido y
           cinematicas. No existe la categoria "opcional". */
        for (String dir : REQUIRED_DIRS) {
            int count = 0;
            long bytes = 0L;
            for (Doc d : docs) {
                if (d.relativePath.toLowerCase(Locale.US).startsWith(dir + "/")) {
                    count++;
                    bytes += d.size;
                }
            }
            required.add(new Entry(dir + "/", count > 0 ? State.OK : State.MISSING,
                    bytes, 0L, count > 0
                    ? count + " archivos · " + human(bytes)
                    : "carpeta ausente (obligatoria)"));
        }

        long keyBytes = 0L;
        for (int i = 0; i < 3; i++) keyBytes += required.get(i).actualSize;
        long treeBytes = 0L;
        for (Doc d : docs) treeBytes += Math.max(0L, d.size);

        boolean truncated = docs.size() >= MAX_ENUMERATED_FILES;
        boolean ready = !truncated;
        StringBuilder problems = new StringBuilder();
        for (Entry e : required) {
            if (e.ok()) continue;
            ready = false;
            if (problems.length() > 0) problems.append('\n');
            problems.append("• ").append(e.name).append(": ").append(e.note);
        }
        if (truncated) {
            problems.append("\n• El arbol supera ").append(MAX_ENUMERATED_FILES)
                    .append(" archivos: la validacion no es completa.");
        }

        String headline = ready
                ? "Datos completos · " + human(treeBytes) + " · " + docs.size() + " archivos"
                : "Faltan datos del juego";

        StringBuilder detail = new StringBuilder();
        detail.append("Carpeta seleccionada:\n").append(label).append('\n');
        if (tree.toString().contains("com.android.externalstorage")) {
            detail.append("Ubicacion: /storage/emulated/0/").append(label).append('\n');
        }
        detail.append('\n').append("Archivos clave: ").append(human(keyBytes));
        detail.append(" · Total del arbol: ").append(human(treeBytes));
        detail.append("\nRecursos obligatorios: ");
        for (int i = 0; i < REQUIRED_DIRS.length; i++) {
            if (i > 0) detail.append(", ");
            detail.append(REQUIRED_DIRS[i]).append('/');
        }
        detail.append("\nExcluidos deliberadamente (parches de PC, no ARM64): ");
        for (int i = 0; i < EXCLUDED_DIRS.length; i++) {
            if (i > 0) detail.append(", ");
            detail.append(EXCLUDED_DIRS[i]).append('/');
        }
        detail.append(". Ningun otro archivo se descarta.");
        if (problems.length() > 0) detail.append('\n').append(problems);
        else detail.append('\n').append("Archivos clave verificados por tamano y cabecera; "
                + "todos los recursos obligatorios estan presentes.");
        detail.append("\n\nLos datos NO se copian: se leen directamente desde esta carpeta.");

        return new Report(ready, label, required, truncated, treeBytes,
                docs.size(), headline, detail.toString());
    }

    private static Entry check(List<Doc> docs, String name, long min, long max,
                               long reference, Context c, byte[]... magics) {
        Doc found = null;
        for (Doc d : docs) {
            if (d.relativePath.equalsIgnoreCase(name)) {
                found = d;
                break;
            }
        }
        if (found == null) {
            return new Entry(name, State.MISSING, 0L, reference,
                    "no existe (esperado " + human(reference) + ")");
        }
        long size = found.size;
        if (size <= 0L) size = statSize(c, found.uri);
        if (size < min || size > max) {
            return new Entry(name, State.WRONG_SIZE, size, reference,
                    "tamano " + human(size) + ", se esperaba " + human(reference)
                            + " - archivo incompleto o de otra version");
        }
        byte[] head = new byte[4];
        try (InputStream in = c.getContentResolver().openInputStream(found.uri)) {
            if (in == null || in.read(head) != 4) {
                return new Entry(name, State.UNREADABLE, size, reference,
                        "no se pudieron leer los primeros 4 bytes");
            }
        } catch (IOException e) {
            return new Entry(name, State.UNREADABLE, size, reference,
                    "sin acceso de lectura: " + e.getMessage());
        }
        for (byte[] magic : magics) {
            boolean match = true;
            for (int i = 0; i < magic.length; i++) {
                if (head[i] != magic[i]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return new Entry(name, State.OK, size, reference, "OK · " + human(size));
            }
        }
        return new Entry(name, State.BAD_MAGIC, size, reference,
                "cabecera invalida (" + hex(head) + ") - archivo corrupto");
    }

    private static long statSize(Context c, Uri uri) {
        try (ParcelFileDescriptor pfd = c.getContentResolver().openFileDescriptor(uri, "r")) {
            return pfd == null ? 0L : pfd.getStatSize();
        } catch (Exception e) {
            return 0L;
        }
    }

    // ------------------------------------------------------------- descriptores

    public static final class RegisterResult {
        public final int files;
        public final long bytes;
        public final String error;

        RegisterResult(int files, long bytes, String error) {
            this.files = files;
            this.bytes = bytes;
            this.error = error;
        }

        public boolean ok() {
            return error == null;
        }
    }

    public interface Progress {
        void onProgress(String name, int done, int total);
    }

    /** Registra en el motor C un fd por cada documento del arbol elegido. */
    public static RegisterResult registerAll(Context c, Uri tree, Progress progress) {
        if (!Native.LOADED) return new RegisterResult(0, 0L, "Runtime nativo no cargado");
        Native.clearDataFds();
        List<Doc> docs = enumerate(c, tree);
        int done = 0;
        int rejected = 0;
        long bytes = 0L;
        StringBuilder failures = new StringBuilder();
        for (Doc d : docs) {
            try (ParcelFileDescriptor pfd =
                         c.getContentResolver().openFileDescriptor(d.uri, "r")) {
                if (pfd == null) {
                    rejected++;
                    if (failures.length() < 600) failures.append(d.relativePath).append(" (fd nulo); ");
                    continue;
                }
                long size = d.size > 0L ? d.size : pfd.getStatSize();
                Native.registerDataFd(d.relativePath.toLowerCase(Locale.US),
                        pfd.getFd(), size);
                done++;
                bytes += size;
                if (progress != null) {
                    progress.onProgress(d.relativePath, done, docs.size());
                }
            } catch (Exception e) {
                rejected++;
                if (failures.length() < 600) {
                    failures.append(d.relativePath).append(" (")
                            .append(e.getMessage()).append("); ");
                }
                PortDebug.error("DATA", "ARCHIVO RECHAZADO: " + d.relativePath
                        + " · " + e.getMessage());
            }
        }
        int nativeCount = Native.dataFdCount();
        PortDebug.data("SAF: " + done + " abiertos · " + human(bytes)
                + " · rechazados=" + rejected + " · fdCount=" + nativeCount
                + " · total del arbol=" + docs.size());
        if (done == 0) return new RegisterResult(0, 0L, "No se pudo abrir ningun archivo");
        if (rejected > 0) {
            return new RegisterResult(done, bytes,
                    "No se pudieron abrir " + rejected + " de " + docs.size()
                            + " archivos: " + failures);
        }
        if (nativeCount != done) {
            return new RegisterResult(done, bytes,
                    "El motor registro " + nativeCount + " de " + done
                            + " descriptores: hay archivos que el juego no podra leer");
        }
        ModManager.registerActiveMods(c, tree);
        return new RegisterResult(done, bytes, null);
    }

    /** Abre mc2.exe por SAF para Native.boot(fd, size). */
    public static ParcelFileDescriptor openExecutable(Context c, Uri tree) throws IOException {
        List<Doc> docs = enumerate(c, tree);
        for (Doc d : docs) {
            if (d.relativePath.equalsIgnoreCase("mc2.exe")) {
                ParcelFileDescriptor pfd =
                        c.getContentResolver().openFileDescriptor(d.uri, "r");
                if (pfd == null) throw new IOException("mc2.exe no se pudo abrir por SAF");
                return pfd;
            }
        }
        throw new IOException("mc2.exe no encontrado en la carpeta seleccionada");
    }

    // ------------------------------------------------------------- utilidades

    public static String human(long bytes) {
        if (bytes < 1024L) return bytes + " B";
        if (bytes < 1024L * 1024L) return String.format(Locale.US, "%.1f KB", bytes / 1024.0);
        if (bytes < 1024L * 1024L * 1024L) {
            return String.format(Locale.US, "%.1f MB", bytes / (1024.0 * 1024.0));
        }
        return String.format(Locale.US, "%.2f GB", bytes / (1024.0 * 1024.0 * 1024.0));
    }

    private static String hex(byte[] b) {
        StringBuilder sb = new StringBuilder();
        for (byte v : b) sb.append(String.format(Locale.US, "%02X", v & 0xFF));
        return sb.toString();
    }
}
