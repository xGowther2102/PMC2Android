package com.pmc2android.xgowther2102;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ActivityInfo;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.hardware.input.InputManager;
import android.media.AudioAttributes;
import android.media.MediaPlayer;
import android.net.Uri;
import android.net.wifi.WifiManager;
import android.os.BatteryManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.ParcelFileDescriptor;
import android.text.SpannableStringBuilder;
import android.text.Spanned;
import android.text.style.ForegroundColorSpan;
import android.util.Log;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.view.WindowManager;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;

/**
 * Pantalla de juego del port PC -> ARM64.
 *
 * El render y el motor recompilado viven en libmc2rt.so en hilos propios. Esta
 * actividad solo gestiona el ciclo de vida de Android, la Surface, el input y el
 * HUD. Ninguna llamada JNI potencialmente bloqueante se ejecuta en el UI thread.
 */
public class GameActivity extends Activity implements SurfaceHolder.Callback {

    private static final String TAG = "MC2";
    private static final String EXTRA_IMAGE_URI = "image_uri";
    private static final String EXTRA_IMAGE_NAME = "image_name";
    private static final String EXTRA_IMAGE_SIZE = "image_size";
    private static final long HUD_PERIOD_MS = 500L;

    private static final int DIK_ESCAPE = 0x01;
    private static final int DIK_MINUS = 0x0C;
    private static final int DIK_EQUALS = 0x0D;
    private static final int DIK_TAB = 0x0F;
    private static final int DIK_W = 0x11;
    private static final int DIK_R = 0x13;
    private static final int DIK_RETURN = 0x1C;
    private static final int DIK_LCONTROL = 0x1D;
    private static final int DIK_A = 0x1E;
    private static final int DIK_S = 0x1F;
    private static final int DIK_D = 0x20;
    private static final int DIK_F = 0x21;
    private static final int DIK_H = 0x23;
    private static final int DIK_SEMICOLON = 0x27;
    private static final int DIK_APOSTROPHE = 0x28;
    private static final int DIK_LSHIFT = 0x2A;
    private static final int DIK_X = 0x2D;
    private static final int DIK_C = 0x2E;
    private static final int DIK_V = 0x2F;
    private static final int DIK_B = 0x30;
    private static final int DIK_M = 0x32;
    private static final int DIK_SPACE = 0x39;
    private static final int DIK_NUMPAD0 = 0x52;
    private static final int DIK_UP = 0xC8;
    private static final int DIK_LEFT = 0xCB;
    private static final int DIK_RIGHT = 0xCD;
    private static final int DIK_DOWN = 0xD0;
    private static final int DIK_F1 = 0x3B;

    private SurfaceView surfaceView;
    private Surface surface;
    private TextView hudView;
    private TextView logView;
    private TextView fpsBadgeView;
    private View overlayView;
    private View controlsRoot;
    private WifiManager.MulticastLock multicastLock;

    private GameConfig cfg;
    private Uri imageUri;
    private String imageName;
    private long imageSize;
    private File gameDataDir;

    private final Handler mainHandler = new Handler(Looper.getMainLooper());
    private final ExecutorService worker = Executors.newSingleThreadExecutor(new ThreadFactory() {
        @Override
        public Thread newThread(Runnable r) {
            Thread t = new Thread(r, "mc2-worker");
            t.setDaemon(true);
            return t;
        }
    });
    private final StringBuilder logBuffer = new StringBuilder();
    private final InputRouter input = new InputRouter();

    private boolean surfaceReady;
    private boolean booted;
    private boolean bootSucceeded;
    private boolean attached;
    private boolean resumed;
    private boolean hudRunning;
    private boolean firstFrameLogged;
    private boolean gameplayStressLogged;
    private boolean resumeLogged;

    private MediaPlayer musicPlayer;
    private AlertDialog keyboardDialog;
    private AlertDialog exitDialog;
    private Runnable keyboardFocusRunnable;
    private LinearLayout quickMenuPanel;
    private Button quickMenuToggle;
    private Button toggleTouchBtn;
    private Button toggleTouchMouseBtn;
    private Button toggleFpsBtn;
    private FrameLayout touchControlsLayer;
    private TouchCameraPad touchCameraPad;
    private InputManager inputManager;
    private boolean touchControlsVisible = true;
    private boolean touchMouseEnabled = false;
    private Boolean manualTouchOverride;
    private boolean gamepadDetected;
    private volatile boolean exiting;

    /** Puente estático para las llamadas JNI de música, sin retener la Activity. */
    private static final WeakReference<GameActivity> NO_ACTIVITY = new WeakReference<>(null);
    private static volatile WeakReference<GameActivity> activeActivity = NO_ACTIVITY;
    private static final Handler musicHandler = new Handler(Looper.getMainLooper());

    // ------------------------------------------------------------------ música

    private static GameActivity active() {
        return activeActivity.get();
    }

    public static void playMusic(String path, boolean loop) {
        final String safePath = path;
        final boolean safeLoop = loop;
        musicHandler.post(() -> {
            GameActivity a = active();
            if (a != null) a.startMusic(safePath, safeLoop);
        });
    }

    public static void stopMusic() {
        musicHandler.post(() -> {
            GameActivity a = active();
            if (a != null) a.releaseMusic();
        });
    }

    public static void pauseMusic() {
        musicHandler.post(() -> {
            GameActivity a = active();
            if (a != null && a.musicPlayer != null && a.musicPlayer.isPlaying()) {
                try {
                    a.musicPlayer.pause();
                } catch (IllegalStateException ignored) {
                    a.releaseMusic();
                }
            }
        });
    }

    public static void resumeMusic() {
        musicHandler.post(() -> {
            GameActivity a = active();
            if (a != null && a.musicPlayer != null && !a.musicPlayer.isPlaying()) {
                try {
                    a.musicPlayer.start();
                } catch (IllegalStateException ignored) {
                    a.releaseMusic();
                }
            }
        });
    }

    public static void setMusicVolume(float vol) {
        final float safeVol = Math.max(0f, Math.min(1f, vol));
        musicHandler.post(() -> {
            GameActivity a = active();
            if (a != null && a.musicPlayer != null) {
                try {
                    a.musicPlayer.setVolume(safeVol, safeVol);
                } catch (IllegalStateException ignored) {
                    // Reproductor ya liberado.
                }
            }
        });
    }

    private void startMusic(String path, boolean loop) {
        releaseMusic();
        if (path == null || path.isEmpty()) return;
        try {
            MediaPlayer mp = new MediaPlayer();
            mp.setAudioAttributes(new AudioAttributes.Builder()
                    .setUsage(AudioAttributes.USAGE_GAME)
                    .setContentType(AudioAttributes.CONTENT_TYPE_MUSIC)
                    .build());
            if (path.startsWith("dave:")) {
                String[] parts = path.split(":", 4);
                if (parts.length < 3) {
                    releaseMusic();
                    return;
                }
                long offset = Long.parseLong(parts[1]);
                long length = Long.parseLong(parts[2]);
                Uri streamsUri = GameDataManager.documentUri(this, "streams_pc.dat");
                if (streamsUri == null) {
                    PortDebug.warn("AUDIO", "Sin carpeta SAF para streams_pc.dat: " + path);
                    releaseMusic();
                    return;
                }
                try (ParcelFileDescriptor pfd =
                             getContentResolver().openFileDescriptor(streamsUri, "r")) {
                    if (pfd == null) {
                        releaseMusic();
                        return;
                    }
                    mp.setDataSource(pfd.getFileDescriptor(), offset, length);
                }
                PortDebug.audio("Pista DAVE: " + (parts.length > 3 ? parts[3] : path));
            } else if (path.startsWith("saf:")) {
                Uri musicUri = GameDataManager.documentUri(this, path.substring(4));
                if (musicUri == null) {
                    PortDebug.warn("AUDIO", "Sin carpeta SAF para la pista: " + path);
                    releaseMusic();
                    return;
                }
                mp.setDataSource(this, musicUri);
                PortDebug.audio("Pista SAF: " + musicUri);
            } else {
                if (!new File(path).isFile()) {
                    Log.w(TAG, "Music file not found: " + path);
                    PortDebug.warn("AUDIO", "pista no encontrada: " + path);
                    return;
                }
                mp.setDataSource(path);
            }
            mp.setLooping(loop);
            mp.setOnErrorListener((player, what, extra) -> {
                Log.w(TAG, "MediaPlayer error " + what + "/" + extra);
                releaseMusic();
                return true;
            });
            mp.prepare();
            mp.start();
            musicPlayer = mp;
            Log.i(TAG, "Background music started: " + path);
            PortDebug.audio("MediaPlayer iniciado: " + path);
        } catch (Exception e) {
            Log.e(TAG, "Cannot start background music: " + path, e);
            releaseMusic();
        }
    }

    private void releaseMusic() {
        if (musicPlayer == null) return;
        try {
            musicPlayer.reset();
        } catch (Throwable ignored) {
            // Estado inválido: se libera igualmente.
        }
        try {
            musicPlayer.release();
        } catch (Throwable ignored) {
            // Ya liberado.
        }
        musicPlayer = null;
    }

    private void acquireMulticastLock() {
        try {
            if (multicastLock == null) {
                WifiManager wm = (WifiManager) getApplicationContext().getSystemService(Context.WIFI_SERVICE);
                if (wm != null) {
                    multicastLock = wm.createMulticastLock("pmc2-lan");
                    multicastLock.setReferenceCounted(false);
                }
            }
            if (multicastLock != null && !multicastLock.isHeld()) {
                multicastLock.acquire();
            }
        } catch (Throwable t) {
            Log.w(TAG, "MulticastLock acquire failed", t);
        }
    }

    private void releaseMulticastLock() {
        try {
            if (multicastLock != null && multicastLock.isHeld()) {
                multicastLock.release();
            }
        } catch (Throwable ignored) {
        }
    }

    // ------------------------------------------------------------- ciclo vital

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        activeActivity = new WeakReference<>(this);
        PortDebug.life("GameActivity.onCreate");
        PortDebug.test("NIVEL 1 · arranque en frio, validacion de rutas");

        cfg = GameConfig.load(this);
        gameDataDir = resolveGameDataDir();

        if (savedInstanceState != null && savedInstanceState.getString(EXTRA_IMAGE_URI) != null) {
            imageUri = Uri.parse(savedInstanceState.getString(EXTRA_IMAGE_URI));
            imageName = savedInstanceState.getString(EXTRA_IMAGE_NAME);
            imageSize = savedInstanceState.getLong(EXTRA_IMAGE_SIZE, 0L);
        } else {
            Intent in = getIntent();
            imageUri = in.getData();
            imageName = in.getStringExtra(EXTRA_IMAGE_NAME);
            imageSize = in.getLongExtra(EXTRA_IMAGE_SIZE, 0L);
        }
        if (imageUri == null) imageUri = resolveImageUri();
        if (imageName == null) imageName = "Midnight Club II";

        // setContentView DEBE preceder a applyImmersiveMode(): antes de instalar
        // el DecorView, getInsetsController() lanza NullPointerException.
        setContentView(buildUi());
        applyImmersiveMode();
        registerInputListener();
        registerDebugReceiver();
        bootAsync();
    }

    @Override
    protected void onResume() {
        super.onResume();
        resumed = true;
        PortDebug.life("onResume");
        if (resumeLogged) PortDebug.test("NIVEL 4 · resumen tras pausa/apagado");
        applyImmersiveMode();
        cfg = GameConfig.load(this);
        syncGamepadPresence(false);
        if (Native.LOADED && booted) {
            worker.execute(() -> configureNative(gameDataDir.getAbsolutePath()));
        }
        startHud();
        tryAttach();
        resumeMusic();
        acquireMulticastLock();
    }

    @Override
    protected void onPause() {
        resumed = false;
        resumeLogged = true;
        PortDebug.life("onPause · detach no bloqueante");
        PortDebug.test("NIVEL 4 · app minimizada / pantalla apagada");
        releaseMulticastLock();
        stopHud();
        pauseMusic();
        input.releaseAll();
        if (Native.LOADED) Native.resetInput();
        detachNative();
        final Uri syncTree = GameDataManager.loadTree(this);
        if (syncTree != null && !worker.isShutdown()) {
            worker.execute(() -> GameDataManager.syncSavesFromLocalToSaf(getApplicationContext(), syncTree));
        }
        super.onPause();
    }

    @Override
    protected void onDestroy() {
        stopHud();
        PortDebug.life("onDestroy · shutdown nativo en background");
        unregisterDebugReceiver();
        unregisterInputListener();
        dismissKeyboard();
        dismissExitDialog();
        releaseMusic();
        releaseMulticastLock();
        input.releaseAll();
        surfaceReady = false;
        attached = false;
        surface = null;
        if (active() == this) activeActivity = NO_ACTIVITY;

        if (Native.LOADED && !exiting) {
            Native.detach();
            Thread shutdown = new Thread(() -> {
                Native.shutdown();
                Log.i(TAG, "Native shutdown complete");
                PortDebug.life("Native.shutdown completado");
            }, "mc2-shutdown");
            shutdown.setDaemon(true);
            shutdown.start();
        }
        final Uri syncTree = GameDataManager.loadTree(this);
        if (syncTree != null) {
            Thread saveSync = new Thread(() ->
                    GameDataManager.syncSavesFromLocalToSaf(getApplicationContext(), syncTree),
                    "mc2-save-sync");
            saveSync.setDaemon(true);
            saveSync.start();
        }
        worker.shutdownNow();
        mainHandler.removeCallbacksAndMessages(null);
        super.onDestroy();
    }

    @Override
    protected void onSaveInstanceState(Bundle out) {
        super.onSaveInstanceState(out);
        if (imageUri != null) out.putString(EXTRA_IMAGE_URI, imageUri.toString());
        out.putString(EXTRA_IMAGE_NAME, imageName);
        out.putLong(EXTRA_IMAGE_SIZE, imageSize);
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
        applyImmersiveMode();
        if (controlsRoot != null) controlsRoot.requestLayout();
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            applyImmersiveMode();
        } else {
            input.releaseAll();
            if (Native.LOADED) Native.resetInput();
        }
    }

    @Override
    @SuppressWarnings("deprecation")
    public void onBackPressed() {
        confirmAndExit();
    }

    // ------------------------------------------------------------------ UI

    private View buildUi() {
        FrameLayout root = new FrameLayout(this);
        root.setBackgroundColor(Color.BLACK);

        surfaceView = new SurfaceView(this);
        surfaceView.getHolder().addCallback(this);
        root.addView(surfaceView, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        controlsRoot = new FrameLayout(this);
        root.addView(controlsRoot, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        buildHud((FrameLayout) controlsRoot);
        buildTouchControls((FrameLayout) controlsRoot);
        buildShortcutBar((FrameLayout) controlsRoot);
        applyCutoutInsets(root);
        syncGamepadPresence(false);
        return root;
    }

    private void buildHud(FrameLayout parent) {
        LinearLayout overlay = new LinearLayout(this);
        overlay.setOrientation(LinearLayout.VERTICAL);
        overlay.setPadding(Ui.dp(this, 14), Ui.dp(this, 12), Ui.dp(this, 14), Ui.dp(this, 12));
        overlay.setBackground(Ui.rounded(this, 0x99000000, 0x332A3346, 14));
        overlay.setClickable(false);
        overlay.setFocusable(false);
        overlay.setVisibility(cfg.debugOverlay ? View.VISIBLE : View.GONE);
        overlayView = overlay;

        hudView = new TextView(this);
        hudView.setTextColor(0xFFDCE3F2);
        hudView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 11f);
        hudView.setTypeface(Typeface.MONOSPACE);
        hudView.setText("MC2RT · iniciando…");
        hudView.setClickable(false);
        hudView.setFocusable(false);
        overlay.addView(hudView);

        logView = new TextView(this);
        logView.setTextColor(0xFF8B95A9);
        logView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10f);
        logView.setTypeface(Typeface.MONOSPACE);
        logView.setPadding(0, Ui.dp(this, 6), 0, 0);
        logView.setMaxLines(6);
        logView.setClickable(false);
        logView.setFocusable(false);
        overlay.addView(logView);

        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(
                Ui.dp(this, 240), FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.START);
        lp.setMargins(Ui.dp(this, 14), Ui.dp(this, 56), 0, 0);
        parent.addView(overlay, lp);

        fpsBadgeView = new TextView(this);
        fpsBadgeView.setTextColor(0xFF5CE68C);
        fpsBadgeView.setTypeface(Typeface.MONOSPACE, Typeface.BOLD);
        fpsBadgeView.setSingleLine(true);
        fpsBadgeView.setPadding(Ui.dp(this, 10), Ui.dp(this, 4), Ui.dp(this, 10), Ui.dp(this, 4));
        fpsBadgeView.setText("-- FPS");
        fpsBadgeView.setClickable(false);
        fpsBadgeView.setFocusable(false);
        parent.addView(fpsBadgeView);
        applyPerfBadgeStyle();
    }

    private void applyPerfBadgeStyle() {
        if (fpsBadgeView == null) return;
        float spSize = cfg.perfTextSize == 0 ? 9.2f : (cfg.perfTextSize == 2 ? 12.2f : 10.5f);
        fpsBadgeView.setTextSize(TypedValue.COMPLEX_UNIT_SP, spSize);

        int bgAlpha = Math.round(255f * GameConfig.clamp(cfg.perfBgOpacity, 0, 100) / 100f);
        int borderAlpha = Math.round(bgAlpha * 0.35f);
        int fill = (bgAlpha << 24) | 0x080B10;
        int stroke = (borderAlpha << 24) | 0xFFFFFF;
        fpsBadgeView.setBackground(Ui.rounded(this, fill, stroke, 10));
        fpsBadgeView.setShadowLayer(bgAlpha < 60 ? 3f : 0f, 0f, 1f, 0xCC000000);

        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT);
        int topM = Ui.dp(this, 10);
        if (cfg.perfPos == GameConfig.PERF_POS_TOP_LEFT) {
            lp.gravity = Gravity.TOP | Gravity.START;
            lp.setMargins(Ui.dp(this, 104), topM, 0, 0);
        } else if (cfg.perfPos == GameConfig.PERF_POS_TOP_RIGHT) {
            lp.gravity = Gravity.TOP | Gravity.END;
            lp.setMargins(0, topM, Ui.dp(this, 144), 0);
        } else {
            lp.gravity = Gravity.TOP | Gravity.CENTER_HORIZONTAL;
            lp.setMargins(0, topM, 0, 0);
        }
        fpsBadgeView.setLayoutParams(lp);
        fpsBadgeView.setVisibility(cfg.showFpsCounter ? View.VISIBLE : View.GONE);
    }

    private void buildShortcutBar(FrameLayout parent) {
        LinearLayout cornerRoot = new LinearLayout(this);
        cornerRoot.setOrientation(LinearLayout.VERTICAL);
        cornerRoot.setGravity(Gravity.END);

        quickMenuToggle = Ui.button(this, "⚙", 0x88000000, 0xFFFFFFFF, 0x66FFFFFF);
        quickMenuToggle.setTextSize(TypedValue.COMPLEX_UNIT_SP, 15f);
        quickMenuToggle.setPadding(0, 0, 0, 0);
        LinearLayout.LayoutParams togLp = new LinearLayout.LayoutParams(
                Ui.dp(this, 36), Ui.dp(this, 36));
        cornerRoot.addView(quickMenuToggle, togLp);

        quickMenuPanel = new LinearLayout(this);
        quickMenuPanel.setOrientation(LinearLayout.VERTICAL);
        quickMenuPanel.setGravity(Gravity.END);
        quickMenuPanel.setPadding(Ui.dp(this, 6), Ui.dp(this, 6), Ui.dp(this, 6), Ui.dp(this, 6));
        quickMenuPanel.setBackground(Ui.rounded(this, 0xCC0D1119, 0x55FFFFFF, 10));
        quickMenuPanel.setVisibility(View.GONE);

        quickMenuPanel.addView(makeHoldButton("COLOR", DIK_F1, 0x88162B40, 0xAA4A9AE0, 96, 30));
        quickMenuPanel.addView(makeHoldButton("RESPAWN", DIK_R, 0x88221A34, 0xAA785BC2, 96, 30));

        Button keyboardBtn = Ui.button(this, "⌨ TECLADO", 0x99141A24, 0xFFFFFFFF, 0x55FFFFFF);
        keyboardBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        keyboardBtn.setPadding(0, 0, 0, 0);
        keyboardBtn.setOnClickListener(v -> {
            setQuickMenuExpanded(false);
            showKeyboardDialog();
        });
        quickMenuPanel.addView(keyboardBtn, panelBtnLp());

        toggleTouchBtn = Ui.button(this, AppLang.t("TÁCTIL: ON", "TOUCH: ON"), 0x99141A24, 0xFFFFFFFF, 0x55FFFFFF);
        toggleTouchBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        toggleTouchBtn.setPadding(0, 0, 0, 0);
        toggleTouchBtn.setOnClickListener(v -> {
            boolean next = !touchControlsVisible;
            manualTouchOverride = next;
            applyTouchControlsVisibility(next);
        });
        quickMenuPanel.addView(toggleTouchBtn, panelBtnLp());

        toggleTouchMouseBtn = Ui.button(this, AppLang.t("RATÓN: OFF", "MOUSE: OFF"), 0x99141A24, 0xFFFFFFFF, 0x55FFFFFF);
        toggleTouchMouseBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        toggleTouchMouseBtn.setPadding(0, 0, 0, 0);
        toggleTouchMouseBtn.setOnClickListener(v -> {
            touchMouseEnabled = !touchMouseEnabled;
            if (!touchMouseEnabled && touchCameraPad != null) {
                touchCameraPad.cancelTouch();
            }
            if (toggleTouchMouseBtn != null) {
                toggleTouchMouseBtn.setText(touchMouseEnabled
                        ? AppLang.t("RATÓN: ON", "MOUSE: ON")
                        : AppLang.t("RATÓN: OFF", "MOUSE: OFF"));
                toggleTouchMouseBtn.setBackground(Ui.rounded(this,
                        0x99141A24, touchMouseEnabled ? 0xAA5CE68C : 0x55FFFFFF, 7));
            }
        });
        quickMenuPanel.addView(toggleTouchMouseBtn, panelBtnLp());

        toggleFpsBtn = Ui.button(this, cfg.showFpsCounter ? "FPS: ON" : "FPS: OFF",
                0x99141A24, 0xFFFFFFFF, cfg.showFpsCounter ? 0xAA5CE68C : 0x55FFFFFF);
        toggleFpsBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        toggleFpsBtn.setPadding(0, 0, 0, 0);
        toggleFpsBtn.setOnClickListener(v -> {
            boolean show = !cfg.showFpsCounter;
            cfg.showFpsCounter = show;
            cfg.save(this);
            applyPerfBadgeStyle();
            syncFpsButtonLabel();
            updateHud();
        });
        quickMenuPanel.addView(toggleFpsBtn, panelBtnLp());

        Button customFpsBtn = Ui.button(this, AppLang.t("CONF. FPS", "FPS CFG"), 0x99141A24, 0xFFFFFFFF, 0x55FFFFFF);
        customFpsBtn.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        customFpsBtn.setPadding(0, 0, 0, 0);
        customFpsBtn.setOnClickListener(v -> {
            setQuickMenuExpanded(false);
            showPerfCustomizerDialog();
        });
        quickMenuPanel.addView(customFpsBtn, panelBtnLp());

        Button toggleHud = Ui.button(this, "INFO / LOGS", 0x99141A24, 0xFFFFFFFF, 0x55FFFFFF);
        toggleHud.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        toggleHud.setPadding(0, 0, 0, 0);
        toggleHud.setOnClickListener(v -> {
            boolean show = overlayView.getVisibility() != View.VISIBLE;
            overlayView.setVisibility(show ? View.VISIBLE : View.GONE);
            cfg.debugOverlay = show;
            cfg.save(this);
            updateHud();
        });
        quickMenuPanel.addView(toggleHud, panelBtnLp());

        Button exit = Ui.button(this, AppLang.t("✕ SALIR", "✕ EXIT"), 0xAA421818, 0xFFFFFFFF, 0xAAD9534F);
        exit.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10.5f);
        exit.setPadding(0, 0, 0, 0);
        exit.setOnClickListener(v -> {
            setQuickMenuExpanded(false);
            confirmAndExit();
        });
        quickMenuPanel.addView(exit, panelBtnLp());

        LinearLayout.LayoutParams panelLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        panelLp.topMargin = Ui.dp(this, 6);
        cornerRoot.addView(quickMenuPanel, panelLp);

        quickMenuToggle.setOnClickListener(v ->
                setQuickMenuExpanded(quickMenuPanel.getVisibility() != View.VISIBLE));

        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        lp.setMargins(0, Ui.dp(this, 10), Ui.dp(this, 10), 0);
        parent.addView(cornerRoot, lp);
        cornerRoot.bringToFront();
        cornerRoot.setElevation(100f);
    }

    private LinearLayout.LayoutParams panelBtnLp() {
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                Ui.dp(this, 96), Ui.dp(this, 30));
        lp.setMargins(Ui.dp(this, 2), Ui.dp(this, 2), Ui.dp(this, 2), Ui.dp(this, 2));
        return lp;
    }

    private void setQuickMenuExpanded(boolean expanded) {
        if (quickMenuPanel != null) {
            quickMenuPanel.setVisibility(expanded ? View.VISIBLE : View.GONE);
        }
        if (quickMenuToggle != null) {
            quickMenuToggle.setText(expanded ? "✕" : "⚙");
        }
    }

    private LinearLayout.LayoutParams marginLp(int wDp, int hDp, int rightMarginDp) {
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                Ui.dp(this, wDp), Ui.dp(this, hDp));
        lp.rightMargin = Ui.dp(this, rightMarginDp);
        return lp;
    }

    private XboxControls.XboxButtonView makeXboxButton(
            XboxControls.Glyph glyph, String subLabel, int dikPrimary, int dikSecondary,
            int wDp, int hDp) {
        final String source = "touch-xbox-" + glyph.name();
        XboxControls.XboxButtonView v = new XboxControls.XboxButtonView(
                this, glyph, subLabel, source, dikPrimary, dikSecondary, input::set);
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(Ui.dp(this, wDp), Ui.dp(this, hDp));
        lp.setMargins(Ui.dp(this, 2), Ui.dp(this, 2), Ui.dp(this, 2), Ui.dp(this, 2));
        v.setLayoutParams(lp);
        v.setAlpha(0.84f);
        return v;
    }

    private Button makeHoldButton(String label, int dik, int bg, int border, int wDp, int hDp) {
        return makeDualHoldButton(label, dik, 0, bg, border, wDp, hDp);
    }

    private Button makeDualHoldButton(String label, int dikPrimary, int dikSecondary,
                                      int bg, int border, int wDp, int hDp) {
        final String source = "button-" + label;
        Button b = Ui.button(this, label, bg, 0xFFFFFFFF, border);
        b.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12f);
        b.setPadding(0, 0, 0, 0);
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(Ui.dp(this, wDp), Ui.dp(this, hDp));
        lp.setMargins(Ui.dp(this, 3), Ui.dp(this, 3), Ui.dp(this, 3), Ui.dp(this, 3));
        b.setLayoutParams(lp);
        b.setAlpha(0.65f);
        b.setOnTouchListener((v, ev) -> {
            int act = ev.getActionMasked();
            int idx = ev.getActionIndex();
            int pid = ev.getPointerId(idx);
            switch (act) {
                case MotionEvent.ACTION_DOWN:
                case MotionEvent.ACTION_POINTER_DOWN:
                    v.setTag(pid);
                    input.set(source, dikPrimary, true);
                    if (dikSecondary != 0) input.set(source, dikSecondary, true);
                    v.setAlpha(0.95f);
                    return true;
                case MotionEvent.ACTION_UP:
                case MotionEvent.ACTION_POINTER_UP:
                case MotionEvent.ACTION_CANCEL: {
                    Object tag = v.getTag();
                    if (tag instanceof Integer && (Integer) tag == pid) {
                        v.setTag(null);
                        input.set(source, dikPrimary, false);
                        if (dikSecondary != 0) input.set(source, dikSecondary, false);
                        v.setAlpha(0.65f);
                        return true;
                    }
                    return true;
                }
                default:
                    return true;
            }
        });
        return b;
    }

    private void buildTouchControls(FrameLayout parent) {
        touchControlsLayer = new FrameLayout(this);
        parent.addView(touchControlsLayer, 0, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        // Capa táctil de cámara/ratón (desactivada por defecto para evitar interferencias al conducir; activable en ⚙)
        touchCameraPad = new TouchCameraPad(this);
        touchControlsLayer.addView(touchCameraPad, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        // Botones Xbox View y Menu discretos arriba a la derecha junto al engrane (despejan barra de nitro y centro)
        LinearLayout centerBar = new LinearLayout(this);
        centerBar.setOrientation(LinearLayout.HORIZONTAL);
        centerBar.setGravity(Gravity.CENTER_VERTICAL);
        XboxControls.XboxButtonView btnView = makeXboxButton(
                XboxControls.Glyph.VIEW, null, DIK_TAB, 0, 34, 34);
        btnView.setAlpha(0.75f);
        XboxControls.XboxButtonView btnMenu = makeXboxButton(
                XboxControls.Glyph.MENU, null, DIK_ESCAPE, 0, 34, 34);
        btnMenu.setAlpha(0.75f);
        centerBar.addView(btnView, marginLp(34, 34, 8));
        centerBar.addView(btnMenu, marginLp(34, 34, 0));
        FrameLayout.LayoutParams cbLp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        cbLp.setMargins(0, Ui.dp(this, 16), Ui.dp(this, 62), 0);
        touchControlsLayer.addView(centerBar, cbLp);

        // Izquierda: D-Pad arriba a la izquierda + barra LB/LT/L3 + stick encima del minimapa para dejar el mapa 100% libre
        XboxControls.XboxDpadView dpad = new XboxControls.XboxDpadView(this, input::set,
                DIK_SEMICOLON, DIK_UP,
                DIK_APOSTROPHE, DIK_DOWN,
                DIK_MINUS, DIK_LEFT,
                DIK_EQUALS, DIK_RIGHT);
        dpad.setAlpha(0.84f);
        FrameLayout.LayoutParams dpadLp = new FrameLayout.LayoutParams(
                Ui.dp(this, 82), Ui.dp(this, 82), Gravity.TOP | Gravity.START);
        dpadLp.setMargins(Ui.dp(this, 12), Ui.dp(this, 10), 0, 0);
        touchControlsLayer.addView(dpad, dpadLp);

        AnalogStickView joy = new AnalogStickView(this, "stick-left", false);
        FrameLayout.LayoutParams joyLp = new FrameLayout.LayoutParams(
                Ui.dp(this, 122), Ui.dp(this, 122), Gravity.BOTTOM | Gravity.START);
        joyLp.setMargins(Ui.dp(this, 14), 0, 0, Ui.dp(this, 96));
        touchControlsLayer.addView(joy, joyLp);

        LinearLayout leftShoulder = new LinearLayout(this);
        leftShoulder.setOrientation(LinearLayout.HORIZONTAL);
        leftShoulder.setGravity(Gravity.CENTER_VERTICAL);
        leftShoulder.addView(makeXboxButton(XboxControls.Glyph.LB, "PESO", DIK_LSHIFT, 0, 48, 40));
        leftShoulder.addView(makeXboxButton(XboxControls.Glyph.LT, "ATRÁS", DIK_NUMPAD0, 0, 52, 40));
        leftShoulder.addView(makeXboxButton(XboxControls.Glyph.L3, "LUCES", DIK_F, 0, 42, 40));
        FrameLayout.LayoutParams lsLp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.BOTTOM | Gravity.START);
        lsLp.setMargins(Ui.dp(this, 10), 0, 0, Ui.dp(this, 224));
        touchControlsLayer.addView(leftShoulder, lsLp);

        // Derecha: layout Xbox elevado sobre el velocímetro para no tapar el marcador ni el arco de nitro
        LinearLayout rightCluster = new LinearLayout(this);
        rightCluster.setOrientation(LinearLayout.VERTICAL);
        rightCluster.setGravity(Gravity.END);

        LinearLayout rightTopRow = new LinearLayout(this);
        rightTopRow.setOrientation(LinearLayout.HORIZONTAL);
        rightTopRow.setGravity(Gravity.END | Gravity.CENTER_VERTICAL);
        rightTopRow.addView(makeXboxButton(XboxControls.Glyph.R3, "MAPA", DIK_M, 0, 42, 40));
        rightTopRow.addView(makeXboxButton(XboxControls.Glyph.RB, "CLAXON", DIK_H, 0, 48, 40));
        rightTopRow.addView(makeXboxButton(XboxControls.Glyph.RT, "NITRO", DIK_X, 0, 62, 40));
        LinearLayout.LayoutParams rtRowLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        rtRowLp.bottomMargin = Ui.dp(this, 4);
        rightCluster.addView(rightTopRow, rtRowLp);

        FrameLayout diamond = new FrameLayout(this);
        XboxControls.XboxButtonView btnY = makeXboxButton(
                XboxControls.Glyph.Y, "CÁM", DIK_C, 0, 46, 46);
        XboxControls.XboxButtonView btnX = makeXboxButton(
                XboxControls.Glyph.X, "FRENO", DIK_DOWN, 0, 52, 52);
        XboxControls.XboxButtonView btnB = makeXboxButton(
                XboxControls.Glyph.B, "MANO", DIK_SPACE, DIK_B, 52, 52);
        XboxControls.XboxButtonView btnA = makeXboxButton(
                XboxControls.Glyph.A, "GAS", DIK_UP, DIK_RETURN, 58, 58);

        FrameLayout.LayoutParams lpY = new FrameLayout.LayoutParams(
                Ui.dp(this, 46), Ui.dp(this, 46), Gravity.TOP | Gravity.CENTER_HORIZONTAL);
        FrameLayout.LayoutParams lpX = new FrameLayout.LayoutParams(
                Ui.dp(this, 52), Ui.dp(this, 52), Gravity.START | Gravity.CENTER_VERTICAL);
        FrameLayout.LayoutParams lpB = new FrameLayout.LayoutParams(
                Ui.dp(this, 52), Ui.dp(this, 52), Gravity.END | Gravity.CENTER_VERTICAL);
        FrameLayout.LayoutParams lpA = new FrameLayout.LayoutParams(
                Ui.dp(this, 58), Ui.dp(this, 58), Gravity.BOTTOM | Gravity.CENTER_HORIZONTAL);
        diamond.addView(btnY, lpY);
        diamond.addView(btnX, lpX);
        diamond.addView(btnB, lpB);
        diamond.addView(btnA, lpA);

        LinearLayout.LayoutParams diamLp = new LinearLayout.LayoutParams(
                Ui.dp(this, 158), Ui.dp(this, 148));
        rightCluster.addView(diamond, diamLp);

        FrameLayout.LayoutParams clusterLp = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.BOTTOM | Gravity.END);
        clusterLp.setMargins(0, 0, Ui.dp(this, 8), Ui.dp(this, 68));
        touchControlsLayer.addView(rightCluster, clusterLp);
        // Bloquear huecos entre botones para que ningun toque cercano filtre al pad de camara/raton
        final View.OnTouchListener buttonGapShield = (v, ev) -> true;
        for (View zone : new View[]{centerBar, leftShoulder, rightCluster, rightTopRow, diamond}) {
            zone.setOnTouchListener(buttonGapShield);
        }
    }

    private final InputManager.InputDeviceListener inputDeviceListener =
            new InputManager.InputDeviceListener() {
                @Override
                public void onInputDeviceAdded(int deviceId) {
                    syncGamepadPresence(true);
                }

                @Override
                public void onInputDeviceRemoved(int deviceId) {
                    syncGamepadPresence(true);
                }

                @Override
                public void onInputDeviceChanged(int deviceId) {
                    syncGamepadPresence(false);
                }
            };

    private void registerInputListener() {
        inputManager = (InputManager) getSystemService(Context.INPUT_SERVICE);
        if (inputManager != null) {
            inputManager.registerInputDeviceListener(inputDeviceListener, mainHandler);
        }
    }

    private void unregisterInputListener() {
        if (inputManager != null) {
            inputManager.unregisterInputDeviceListener(inputDeviceListener);
            inputManager = null;
        }
    }

    private void syncGamepadPresence(boolean resetManualOnDisconnect) {
        boolean present = XboxControls.hasConnectedGamepad();
        boolean prev = gamepadDetected;
        gamepadDetected = present;
        if (!present && prev && resetManualOnDisconnect) {
            manualTouchOverride = null;
        }
        if (present && !prev) {
            manualTouchOverride = null;
        }
        boolean autoHide = cfg == null || cfg.autoHideTouchOnGamepad;
        boolean desiredVisible = (manualTouchOverride != null)
                ? manualTouchOverride
                : (!autoHide || !present);
        applyTouchControlsVisibility(desiredVisible);
    }

    private void applyTouchControlsVisibility(boolean visible) {
        touchControlsVisible = visible;
        if (!visible) {
            input.releaseAll();
            if (Native.LOADED) Native.resetInput();
        }
        if (touchControlsLayer != null) {
            touchControlsLayer.setVisibility(visible ? View.VISIBLE : View.GONE);
            float alpha = cfg != null ? Math.max(0.4f, Math.min(1.0f, cfg.touchOpacity / 100f)) : 0.85f;
            touchControlsLayer.setAlpha(alpha);
        }
        if (toggleTouchBtn != null) {
            toggleTouchBtn.setText(visible ? "TÁCTIL: ON" : "TÁCTIL: OFF");
        }
    }

    private void applyCutoutInsets(View root) {
        root.setOnApplyWindowInsetsListener((v, insets) -> {
            int left;
            int top;
            int right;
            int bottom;
            if (Build.VERSION.SDK_INT >= 30) {
                android.graphics.Insets bars = insets.getInsets(
                        WindowInsets.Type.systemBars() | WindowInsets.Type.displayCutout());
                left = bars.left;
                top = bars.top;
                right = bars.right;
                bottom = bars.bottom;
            } else if (Build.VERSION.SDK_INT >= 28) {
                android.view.DisplayCutout cutout = insets.getDisplayCutout();
                if (cutout != null) {
                    left = cutout.getSafeInsetLeft();
                    top = cutout.getSafeInsetTop();
                    right = cutout.getSafeInsetRight();
                    bottom = cutout.getSafeInsetBottom();
                } else {
                    left = insets.getSystemWindowInsetLeft();
                    top = insets.getSystemWindowInsetTop();
                    right = insets.getSystemWindowInsetRight();
                    bottom = insets.getSystemWindowInsetBottom();
                }
            } else {
                left = insets.getSystemWindowInsetLeft();
                top = insets.getSystemWindowInsetTop();
                right = insets.getSystemWindowInsetRight();
                bottom = insets.getSystemWindowInsetBottom();
            }
            if (controlsRoot != null) controlsRoot.setPadding(left, top, right, bottom);
            return insets;
        });
    }

    private void applyImmersiveMode() {
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_USER_LANDSCAPE);

        if (Build.VERSION.SDK_INT >= 28) {
            WindowManager.LayoutParams lp = getWindow().getAttributes();
            lp.layoutInDisplayCutoutMode =
                    WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
            getWindow().setAttributes(lp);
        }

        final View decor = getWindow().getDecorView();
        if (decor == null) return;
        final Runnable apply = () -> {
            if (Build.VERSION.SDK_INT >= 30) {
                getWindow().setDecorFitsSystemWindows(false);
                WindowInsetsController c = decor.getWindowInsetsController();
                if (c != null) {
                    c.hide(WindowInsets.Type.systemBars());
                    c.setSystemBarsBehavior(
                            WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
                }
            } else {
                decor.setSystemUiVisibility(
                        View.SYSTEM_UI_FLAG_FULLSCREEN
                                | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                                | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                                | View.SYSTEM_UI_FLAG_LAYOUT_STABLE);
            }
        };
        if (decor.isAttachedToWindow()) apply.run();
        else decor.post(apply);
    }

    // --------------------------------------------------------------- arranque

    /** Raiz para rutas relativas y ESCRITURAS (guardados). Los datos de
     *  lectura llegan por descriptores SAF, no por esta carpeta. */
    private File resolveGameDataDir() {
        return GameDataManager.privateDir(this);
    }

    private Uri resolveImageUri() {
        return GameDataManager.loadTree(this);
    }

    private void failBoot(String reason) {
        PortDebug.error("DATA", "Boot abortado: " + reason);
        mainHandler.post(() -> {
            appendLog("DATOS INVALIDOS - no se arranca el motor");
            appendLog(reason);
            appendLog("Carpeta: " + GameDataManager.selectedFolderLabel(this));
        });
    }

    private void bootAsync() {
        final Uri tree = GameDataManager.loadTree(this);
        appendLog("carpeta: " + GameDataManager.selectedFolderLabel(this));
        PortDebug.data("GameActivity: verificando integridad antes del boot");
        if (tree == null) {
            failBoot("No hay carpeta de datos seleccionada. Volver y seleccionar la carpeta del juego.");
            return;
        }

        worker.execute(() -> {
            final GameDataManager.Report report;
            try {
                report = GameDataManager.validate(GameActivity.this, tree);
            } catch (Exception e) {
                failBoot("No se pudo leer la carpeta SAF: " + e.getMessage());
                return;
            }
            if (!report.ready) {
                StringBuilder sb = new StringBuilder(report.detail);
                for (GameDataManager.Entry e : report.required) {
                    if (!e.ok()) sb.append("\nFALTA ").append(e.name).append(" - ").append(e.note);
                }
                failBoot(sb.toString());
                return;
            }
            PortDebug.data("Validacion OK · " + GameDataManager.human(report.totalBytes)
                    + " · " + report.folderLabel);
            PortDebug.data("NIVEL 1 · rutas y archivos clave verificados");

            if (!Native.LOADED) {
                failBoot("Runtime nativo no cargado: " + Native.loadError());
                return;
            }
            GameDataManager.syncSavesFromSafToLocal(GameActivity.this, tree);
            configureNative(gameDataDir.getAbsolutePath());

            GameDataManager.RegisterResult reg = GameDataManager.registerAll(
                    GameActivity.this, tree, (name, done, total) -> {
                        if (done % 25 == 0 || done == total) {
                            PortDebug.data("SAF registro " + done + "/" + total);
                        }
                    });
            if (!reg.ok()) {
                failBoot("No se pudieron registrar los archivos: " + reg.error);
                return;
            }
            PortDebug.data("SAF: " + reg.files + " descriptores · "
                    + GameDataManager.human(reg.bytes) + " · fdCount=" + Native.dataFdCount());

            String result;
            try (ParcelFileDescriptor pfd =
                         GameDataManager.openExecutable(GameActivity.this, tree)) {
                result = Native.boot(pfd.getFd(), pfd.getStatSize());
            } catch (Exception e) {
                result = "ERR=" + e.getClass().getSimpleName() + ": " + e.getMessage();
            }
            final String r = result;
            mainHandler.post(() -> onBootFinished(r));
        });
    }

    private void configureNative(String dataDir) {
        if (!Native.LOADED) return;
        File work = new File(getFilesDir(), "mc2");
        if (!work.exists() && !work.mkdirs()) {
            Log.w(TAG, "Cannot create work directory " + work);
        }
        Native.setGraphicsEnhancements(cfg.anisoLevel, cfg.depth24, cfg.fogEnabled,
                cfg.msaaSamples, cfg.bloomEnabled, cfg.fxaaEnabled, cfg.nightEnhance);
        Native.setMc2HookConfig(cfg.mc2hEnabled, cfg.mc2hOpenSpy, cfg.mc2hMultiDat,
                cfg.mc2hReflectionRes, cfg.mc2hReflNoSkip, cfg.mc2hAiPlayerModels,
                cfg.mc2hShadowPercent, cfg.mc2hBodyShader, cfg.mc2hDrawDistPercent,
                cfg.mc2hMenuScrollFix, cfg.mc2hBurnoutFpsFix, cfg.mc2hManualReverse,
                cfg.mc2hExpandWorld, cfg.mc2hTimeWarpPercent, cfg.mc2hGravityDeci);
        Native.init(dataDir, work.getAbsolutePath(), cfg.renderer, cfg.scalePercent,
                cfg.fpsCap, cfg.linearFilter, cfg.vsync);
        Native.setLaunchArgs(cfg.launchArgs);
        PortDebug.data("Native.init(dataDir=" + dataDir + ")");
    }

    private void onBootFinished(String result) {
        boolean ok = !result.startsWith("ERR");
        for (String line : result.split("\n")) {
            if (line.isEmpty() || line.equals("OK")) continue;
            if (line.startsWith("ERR=")) appendLog("ERROR: " + line.substring(4));
            else if (line.startsWith("SUGERENCIA=")) appendLog(line.substring(11));
            else appendLog(line);
        }
        booted = true;
        bootSucceeded = ok;
        PortDebug.data("Boot finalizado · ok=" + ok + " · " + result.replace('\n', ' '));
        if (!ok) {
            appendLog("Revisar la carpeta seleccionada: "
                    + GameDataManager.selectedFolderLabel(this));
            PortDebug.error("DATA", "Boot fallido, revisar la ruta indicada en pantalla");
        }
        tryAttach();
    }

    private void tryAttach() {
        if (!bootSucceeded || !surfaceReady || attached || !resumed) return;
        if (surface == null || !surface.isValid() || !Native.LOADED) return;
        Native.attach(surface);
        attached = true;
        PortDebug.gfx("attach(surface) · " + cfg.summary());
        appendLog("EGL/GLES activo · " + cfg.summary());
    }

    private void detachNative() {
        if (!attached) return;
        attached = false;
        Native.detach();
    }

    // ------------------------------------------------------- SurfaceHolder

    @Override
    public void surfaceCreated(SurfaceHolder holder) {
        surface = holder.getSurface();
        surfaceReady = true;
        PortDebug.gfx("surfaceCreated · " + holder.getSurfaceFrame().width() + "x"
                + holder.getSurfaceFrame().height());
        tryAttach();
    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
        surface = holder.getSurface();
        if (surfaceReady && !attached) {
            tryAttach();
        }
    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {
        surfaceReady = false;
        detachNative();
        surface = null;
        PortDebug.gfx("surfaceDestroyed · contexto EGL liberado por el hilo de render");
    }

    // ------------------------------------------------------------------ HUD

    private void startHud() {
        if (hudRunning) return;
        hudRunning = true;
        mainHandler.post(hudTick);
    }

    private void stopHud() {
        hudRunning = false;
        mainHandler.removeCallbacks(hudTick);
    }

    /** Cada 20 ticks (~10 s) se publica el uso real de los archivos del arbol SAF. */
    private int usageTick;

    private final Runnable hudTick = new Runnable() {
        @Override
        public void run() {
            if (!hudRunning || !resumed || isFinishing() || isDestroyed()) return;
            updateHud();
            mainHandler.postDelayed(this, HUD_PERIOD_MS);
        }
    };

    /** Muestreador ligero de CPU, GPU, RAM y temperatura ejecutado fuera del UI thread. */
    private static final class PerfSample {
        int cpuMaxMhz = -1;
        int cpuLoadPct = -1;
        int gpuMhz = -1;
        int gpuLoadPct = -1;
        int appRamMb = -1;
        long sysUsedMb = -1;
        long sysTotalMb = -1;
        float tempC = -1f;
    }

    private long prevProcTicks = -1L;
    private long prevSampleNs = -1L;

    private PerfSample sampleHardwarePerf() {
        PerfSample p = new PerfSample();
        int peakKhz = -1;
        for (int i = 0; i < 16; i++) {
            long khz = readSysLong("/sys/devices/system/cpu/cpu" + i + "/cpufreq/scaling_cur_freq");
            if (khz > peakKhz) peakKhz = (int) khz;
        }
        if (peakKhz > 0) p.cpuMaxMhz = peakKhz / 1000;

        long nowNs = System.nanoTime();
        long procTicks = readSelfCpuTicks();
        if (procTicks >= 0 && prevProcTicks >= 0 && prevSampleNs > 0) {
            double dtSec = (nowNs - prevSampleNs) / 1_000_000_000.0;
            if (dtSec > 0.05) {
                int cores = Math.max(1, Runtime.getRuntime().availableProcessors());
                double pct = ((procTicks - prevProcTicks) / 100.0) / (dtSec * cores) * 100.0;
                p.cpuLoadPct = Math.max(0, Math.min(100, (int) Math.round(pct)));
            }
        }
        if (procTicks >= 0) {
            prevProcTicks = procTicks;
            prevSampleNs = nowNs;
        }

        long gpuClkMhz = readSysLong("/sys/class/kgsl/kgsl-3d0/clock_mhz");
        if (gpuClkMhz > 0) {
            p.gpuMhz = (int) gpuClkMhz;
        } else {
            long hz = readSysLong("/sys/class/kgsl/kgsl-3d0/gpuclk");
            if (hz <= 0) hz = readSysLong("/sys/class/kgsl/kgsl-3d0/devfreq/cur_freq");
            if (hz <= 0) hz = readSysLong("/sys/kernel/gpu/gpu_clock");
            if (hz <= 0) hz = readSysLong("/sys/class/misc/mali0/device/devfreq/devfreq0/cur_freq");
            if (hz > 1_000_000L) p.gpuMhz = (int) (hz / 1_000_000L);
            else if (hz > 10_000L) p.gpuMhz = (int) (hz / 1_000L);
            else if (hz > 0L) p.gpuMhz = (int) hz;
        }
        p.gpuLoadPct = readFirstInt("/sys/class/kgsl/kgsl-3d0/gpu_busy_percentage");

        long rssPages = readSelfRssPages();
        if (rssPages > 0) p.appRamMb = (int) ((rssPages * 4096L) / (1024L * 1024L));
        ActivityManager am = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
        if (am != null) {
            ActivityManager.MemoryInfo mi = new ActivityManager.MemoryInfo();
            am.getMemoryInfo(mi);
            p.sysTotalMb = mi.totalMem / (1024L * 1024L);
            p.sysUsedMb = Math.max(0L, (mi.totalMem - mi.availMem) / (1024L * 1024L));
        }
        Intent bat = registerReceiver(null, new IntentFilter(Intent.ACTION_BATTERY_CHANGED));
        if (bat != null) {
            int tTenths = bat.getIntExtra(BatteryManager.EXTRA_TEMPERATURE, -1);
            if (tTenths > 0) p.tempC = tTenths / 10f;
        }
        return p;
    }

    private static long readSysLong(String path) {
        try (BufferedReader br = new BufferedReader(new FileReader(path))) {
            String line = br.readLine();
            if (line == null) return -1L;
            return Long.parseLong(line.trim());
        } catch (Throwable ignored) {
            return -1L;
        }
    }

    private static int readFirstInt(String path) {
        try (BufferedReader br = new BufferedReader(new FileReader(path))) {
            String line = br.readLine();
            if (line == null) return -1;
            String cleaned = line.replace("%", "").trim();
            return Integer.parseInt(cleaned);
        } catch (Throwable ignored) {
            return -1;
        }
    }

    private static long readSelfCpuTicks() {
        try (BufferedReader br = new BufferedReader(new FileReader("/proc/self/stat"))) {
            String line = br.readLine();
            if (line == null) return -1L;
            int rp = line.lastIndexOf(')');
            if (rp < 0 || rp + 2 >= line.length()) return -1L;
            String[] parts = line.substring(rp + 2).trim().split("\\s+");
            if (parts.length <= 12) return -1L;
            return Long.parseLong(parts[11]) + Long.parseLong(parts[12]);
        } catch (Throwable ignored) {
            return -1L;
        }
    }

    private static long readSelfRssPages() {
        try (BufferedReader br = new BufferedReader(new FileReader("/proc/self/statm"))) {
            String line = br.readLine();
            if (line == null) return -1L;
            String[] parts = line.trim().split("\\s+");
            if (parts.length < 2) return -1L;
            return Long.parseLong(parts[1]);
        } catch (Throwable ignored) {
            return -1L;
        }
    }

    /** Native.stats() se ejecuta en el worker; el UI thread solo pinta el resultado. */
    private void updateHud() {
        final boolean needPerf = cfg.showFpsCounter || cfg.debugOverlay;
        worker.execute(() -> {
            final String stats = Native.LOADED ? Native.stats() : "err=" + Native.loadError();
            final PerfSample perf = needPerf ? sampleHardwarePerf() : null;
            if (Native.LOADED && (usageTick++ % 20 == 0)) {
                PortDebug.data("USO DE ARCHIVOS: " + Native.dataUsage());
                PortDebug.data("DIAG: " + Native.diagSummary());
            }
            mainHandler.post(() -> renderHud(stats, perf));
        });
    }

    private static void appendColored(SpannableStringBuilder sb, String text, int color) {
        int start = sb.length();
        sb.append(text);
        sb.setSpan(new ForegroundColorSpan(color), start, sb.length(), Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
    }

    private void renderHud(String stats, PerfSample perf) {
        if (isFinishing() || isDestroyed() || exiting) return;
        if ("1".equals(value(stats, "pc_exited", "0"))) {
            PortDebug.life("MC2 ExitProcess detectado (Salir a Windows)");
            performFullExit();
            return;
        }
        long renderFps = parseLong(value(stats, "fps", "0"));
        long gameFps = parseLong(value(stats, "game_fps", "0"));
        long pcFramesVal = parseLong(value(stats, "pc_frames", "0"));
        long shownFps = pcFramesVal > 0L ? gameFps : renderFps;
        long frameTenths = parseLong(value(stats, "frame_tenths_ms", "0"));
        String fps = String.valueOf(shownFps);
        if (fpsBadgeView != null) {
            if (cfg.showFpsCounter) {
                int fpsColor = shownFps >= 50L ? 0xFF5CE68C : (shownFps >= 30L ? 0xFFFFC857 : 0xFFFF6B6B);
                SpannableStringBuilder bar = new SpannableStringBuilder();
                if (cfg.perfStyle == GameConfig.PERF_STYLE_DETAILED && pcFramesVal > 0L && renderFps > 0L) {
                    appendColored(bar, shownFps + "/" + renderFps + " FPS", fpsColor);
                } else {
                    appendColored(bar, shownFps + " FPS", fpsColor);
                }
                if (cfg.perfStyle != GameConfig.PERF_STYLE_FPS_ONLY && perf != null) {
                    if (cfg.perfShowCpu && (perf.cpuMaxMhz > 0 || perf.cpuLoadPct >= 0)) {
                        appendColored(bar, " · CPU ", 0xFF8FB4FF);
                        StringBuilder cpuVal = new StringBuilder();
                        if (perf.cpuMaxMhz >= 1000) {
                            cpuVal.append(String.format(Locale.US, "%.2fG", perf.cpuMaxMhz / 1000.0));
                        } else if (perf.cpuMaxMhz > 0) {
                            cpuVal.append(perf.cpuMaxMhz).append("M");
                        }
                        if (perf.cpuLoadPct >= 0 && (cfg.perfStyle == GameConfig.PERF_STYLE_DETAILED || cpuVal.length() == 0 || cfg.perfStyle == GameConfig.PERF_STYLE_BAR)) {
                            if (cpuVal.length() > 0) cpuVal.append(' ');
                            cpuVal.append(perf.cpuLoadPct).append('%');
                        }
                        appendColored(bar, cpuVal.toString(), 0xFFE6EDF7);
                    }
                    if (cfg.perfShowGpu) {
                        appendColored(bar, " · GPU ", 0xFFC59BFF);
                        if (perf.gpuMhz > 0) {
                            String gpuStr = perf.gpuMhz + "M"
                                    + (perf.gpuLoadPct >= 0 ? " " + perf.gpuLoadPct + "%" : "");
                            if (cfg.perfStyle == GameConfig.PERF_STYLE_DETAILED && frameTenths > 0L) {
                                gpuStr += String.format(Locale.US, " %.1fms", frameTenths / 10.0);
                            }
                            appendColored(bar, gpuStr, 0xFFE6EDF7);
                        } else {
                            String ft = String.format(Locale.US, "%.1fms", frameTenths / 10.0);
                            appendColored(bar, ft, 0xFFE6EDF7);
                        }
                    }
                    if (cfg.perfShowRam && (perf.appRamMb > 0 || perf.sysTotalMb > 0)) {
                        appendColored(bar, " · RAM ", 0xFF7CE8D8);
                        String ramStr;
                        if (cfg.perfStyle == GameConfig.PERF_STYLE_DETAILED && perf.appRamMb > 0 && perf.sysTotalMb > 0) {
                            ramStr = perf.appRamMb + "M ("
                                    + String.format(Locale.US, "%.1f/%.1fG", perf.sysUsedMb / 1024.0, perf.sysTotalMb / 1024.0) + ")";
                        } else if (perf.appRamMb > 0 && perf.sysTotalMb > 0) {
                            ramStr = perf.appRamMb + "M/" + String.format(Locale.US, "%.1fG", perf.sysTotalMb / 1024.0);
                        } else if (perf.appRamMb > 0) {
                            ramStr = perf.appRamMb + "M";
                        } else {
                            ramStr = String.format(Locale.US, "%.1f/%.1fG",
                                    perf.sysUsedMb / 1024.0, perf.sysTotalMb / 1024.0);
                        }
                        appendColored(bar, ramStr, 0xFFE6EDF7);
                    }
                    if ((cfg.perfShowTemp || cfg.perfStyle == GameConfig.PERF_STYLE_DETAILED) && perf.tempC > 0f) {
                        int tCol = perf.tempC >= 43f ? 0xFFFF6B6B : (perf.tempC >= 38f ? 0xFFFFC857 : 0xFF9BE7FF);
                        appendColored(bar, String.format(Locale.US, " · %.0f°C", perf.tempC), tCol);
                    }
                }
                fpsBadgeView.setText(bar);
                fpsBadgeView.setVisibility(View.VISIBLE);
            } else {
                fpsBadgeView.setVisibility(View.GONE);
            }
        }
        if (hudView == null) return;
        if (!cfg.debugOverlay) {
            if (overlayView != null) overlayView.setVisibility(View.GONE);
            return;
        }
        if (overlayView != null) overlayView.setVisibility(View.VISIBLE);

        String runtimeTag = Native.LOADED ? Native.version() : "runtime no cargado";
        String w = value(stats, "width", "0");
        String h = value(stats, "height", "0");
        String err = value(stats, "err", "");
        String gl = value(stats, "gl", "");
        String pcLoaded = value(stats, "pc_loaded", "0");
        String pcRunning = value(stats, "pc_running", "0");
        String pcFrames = value(stats, "pc_frames", "0");
        String pcDraws = value(stats, "pc_draws", "0");
        String pcLogs = value(stats, "pc_logs", "");

        long frames = parseLong(pcFrames);
        long draws = parseLong(pcDraws);
        if (!firstFrameLogged && frames > 0) {
            firstFrameLogged = true;
            PortDebug.test("NIVEL 2 · primer frame y frontend · frames=" + frames
                    + " draws=" + draws);
        }
        if (!gameplayStressLogged && draws > 100000L) {
            gameplayStressLogged = true;
            PortDebug.test("NIVEL 3 · estres de draws/inputs · draws=" + draws);
        }
        if (frames > 0 && frames % 600L == 0L) {
            PortDebug.gfx("frame=" + frames + " draws=" + draws + " fps=" + fps);
        }

        StringBuilder sb = new StringBuilder();
        sb.append("MC2 ").append(BuildConfig.VERSION_TAG)
                .append(" · ").append(runtimeTag).append('\n');
        sb.append(cfg.rendererName()).append(" · ").append(cfg.scalePercent).append("%");
        sb.append(" · cap ").append(cfg.fpsCap == 0 ? "off" : cfg.fpsCap + " fps").append('\n');
        sb.append("fps ").append(shownFps).append(" (gl ").append(renderFps).append("Hz)  surface ")
                .append(w).append('x').append(h).append('\n');
        if (perf != null) {
            sb.append("cpu ").append(perf.cpuMaxMhz > 0 ? perf.cpuMaxMhz + "MHz" : "--")
                    .append(perf.cpuLoadPct >= 0 ? " (" + perf.cpuLoadPct + "%)" : "")
                    .append(" · gpu ").append(perf.gpuMhz > 0 ? perf.gpuMhz + "MHz" : String.format(Locale.US, "%.1fms", frameTenths / 10.0));
            if (perf.appRamMb > 0) sb.append(" · ram ").append(perf.appRamMb).append("M");
            sb.append('\n');
        }
        if ("1".equals(pcLoaded)) {
            sb.append("PC OEP 0x61958A: ").append("1".equals(pcRunning) ? "EJECUTANDO" : "FINALIZADO");
            sb.append(" · frames ").append(pcFrames).append(" · draws ").append(pcDraws).append('\n');
        }
        sb.append(attached ? "render ACTIVO" : "render detenido");
        if (!gl.isEmpty()) sb.append(" · ").append(gl);
        if (!err.isEmpty()) sb.append("\nerr: ").append(err);
        if (Native.LOADED) sb.append('\n').append(Native.diagSummary());
        hudView.setText(sb.toString());

        if (!pcLogs.isEmpty() && logView != null) {
            logView.setText(pcLogs.replace('|', '\n'));
        }
    }

    private static long parseLong(String s) {
        try {
            return Long.parseLong(s);
        } catch (NumberFormatException e) {
            return 0L;
        }
    }

    private static String value(String blob, String key, String def) {
        if (blob == null) return def;
        for (String line : blob.split("\n")) {
            if (line.startsWith(key + "=")) return line.substring(key.length() + 1);
        }
        return def;
    }

    /** Solo UI thread. Si se invoca desde otro hilo, se reenvía de forma segura. */
    private void appendLog(String line) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            mainHandler.post(() -> appendLog(line));
            return;
        }
        if (logBuffer.length() > 0) logBuffer.append('\n');
        logBuffer.append(line);
        String[] lines = logBuffer.toString().split("\n");
        if (lines.length > 6) {
            StringBuilder trimmed = new StringBuilder();
            for (int i = lines.length - 6; i < lines.length; i++) {
                if (trimmed.length() > 0) trimmed.append('\n');
                trimmed.append(lines[i]);
            }
            logBuffer.setLength(0);
            logBuffer.append(trimmed);
        }
        if (logView != null) logView.setText(logBuffer.toString());
    }

    private void syncFpsButtonLabel() {
        if (toggleFpsBtn == null) return;
        toggleFpsBtn.setText(cfg.showFpsCounter ? "FPS: ON" : "FPS: OFF");
        toggleFpsBtn.setBackground(Ui.rounded(this, 0x99141A24,
                cfg.showFpsCounter ? 0xAA5CE68C : 0x55FFFFFF, 10));
    }

    private void showPerfCustomizerDialog() {
        if (isFinishing() || isDestroyed()) return;
        LinearLayout box = new LinearLayout(this);
        box.setOrientation(LinearLayout.VERTICAL);
        box.setPadding(Ui.dp(this, 18), Ui.dp(this, 12), Ui.dp(this, 18), Ui.dp(this, 10));

        Switch swOn = new Switch(this);
        swOn.setText("Mostrar barra de rendimiento");
        swOn.setChecked(cfg.showFpsCounter);
        swOn.setOnCheckedChangeListener((b, c) -> {
            cfg.showFpsCounter = c;
            cfg.save(this);
            applyPerfBadgeStyle();
            syncFpsButtonLabel();
            updateHud();
        });
        box.addView(swOn);

        Spinner spStyle = makeDialogSpinner(box, "Modo",
                new String[]{"Solo FPS", "Barra estándar (FPS · CPU · GPU · RAM)", "Detallado (FPS real/Hz + completo)"},
                cfg.perfStyle, pos -> {
                    cfg.perfStyle = pos;
                    cfg.save(this);
                    updateHud();
                });
        Spinner spPos = makeDialogSpinner(box, "Posición",
                new String[]{"Arriba Centro", "Arriba Izquierda", "Arriba Derecha"},
                cfg.perfPos, pos -> {
                    cfg.perfPos = pos;
                    cfg.save(this);
                    applyPerfBadgeStyle();
                });
        Spinner spSize = makeDialogSpinner(box, "Tamaño de texto",
                new String[]{"Pequeño", "Normal", "Grande"},
                cfg.perfTextSize, pos -> {
                    cfg.perfTextSize = pos;
                    cfg.save(this);
                    applyPerfBadgeStyle();
                });
        // Evitar warnings sin uso
        spStyle.setTag(null); spPos.setTag(null); spSize.setTag(null);

        TextView opLbl = Ui.text(this, "Opacidad de fondo: " + cfg.perfBgOpacity + "%", 12.5f, Ui.TEXT, true);
        LinearLayout.LayoutParams opLblLp = Ui.matchWrap();
        opLblLp.topMargin = Ui.dp(this, 10);
        box.addView(opLbl, opLblLp);
        SeekBar sbOp = new SeekBar(this);
        sbOp.setMax(100);
        sbOp.setProgress(GameConfig.clamp(cfg.perfBgOpacity, 0, 100));
        sbOp.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar s, int p, boolean u) {
                int v = GameConfig.clamp(Math.round(p / 5f) * 5, 0, 100);
                cfg.perfBgOpacity = v;
                opLbl.setText("Opacidad de fondo: " + v + "%");
                cfg.save(GameActivity.this);
                applyPerfBadgeStyle();
            }
            @Override public void onStartTrackingTouch(SeekBar s) {}
            @Override public void onStopTrackingTouch(SeekBar s) {}
        });
        box.addView(sbOp);

        LinearLayout checks = new LinearLayout(this);
        checks.setOrientation(LinearLayout.HORIZONTAL);
        LinearLayout.LayoutParams chkLp = Ui.matchWrap();
        chkLp.topMargin = Ui.dp(this, 8);
        checks.addView(makeMetricToggle("CPU", cfg.perfShowCpu, c -> cfg.perfShowCpu = c));
        checks.addView(makeMetricToggle("GPU", cfg.perfShowGpu, c -> cfg.perfShowGpu = c));
        checks.addView(makeMetricToggle("RAM", cfg.perfShowRam, c -> cfg.perfShowRam = c));
        checks.addView(makeMetricToggle("Temp", cfg.perfShowTemp, c -> cfg.perfShowTemp = c));
        box.addView(checks, chkLp);

        ScrollView sc = new ScrollView(this);
        sc.addView(box);

        new AlertDialog.Builder(this)
                .setTitle("Personalizar Medidor FPS")
                .setView(sc)
                .setPositiveButton("LISTO", null)
                .show();
    }

    private interface IntConsumer { void accept(int val); }
    private interface BoolConsumer { void accept(boolean val); }

    private Spinner makeDialogSpinner(LinearLayout parent, String label, String[] items, int sel, IntConsumer onSel) {
        TextView lbl = Ui.text(this, label, 12.5f, Ui.MUTED, true);
        LinearLayout.LayoutParams lLp = Ui.matchWrap();
        lLp.topMargin = Ui.dp(this, 8);
        parent.addView(lbl, lLp);
        Spinner sp = new Spinner(this);
        sp.setAdapter(new ArrayAdapter<>(this, android.R.layout.simple_spinner_dropdown_item, items));
        sp.setSelection(GameConfig.clamp(sel, 0, items.length - 1));
        sp.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> p, View v, int pos, long id) {
                onSel.accept(pos);
            }
            @Override public void onNothingSelected(AdapterView<?> p) {}
        });
        parent.addView(sp);
        return sp;
    }

    private CheckBox makeMetricToggle(String label, boolean initial, BoolConsumer onToggle) {
        CheckBox cb = new CheckBox(this);
        cb.setText(label);
        cb.setChecked(initial);
        cb.setOnCheckedChangeListener((b, c) -> {
            onToggle.accept(c);
            cfg.save(this);
            updateHud();
        });
        return cb;
    }

    // --------------------------------------------------------------- teclado

    private void showKeyboardDialog() {
        dismissKeyboard();
        final EditText inputField = new EditText(this);
        inputField.setSingleLine(true);
        inputField.setTextColor(0xFFFFFFFF);
        inputField.setBackgroundColor(0x332A3346);
        inputField.setPadding(Ui.dp(this, 16), Ui.dp(this, 12), Ui.dp(this, 16), Ui.dp(this, 12));

        keyboardDialog = new AlertDialog.Builder(this)
                .setTitle(AppLang.t("Teclado virtual", "Virtual Keyboard"))
                .setMessage(AppLang.t("Escribir el nombre de la partida y pulsar ENVIAR:", "Enter save name and tap SEND:"))
                .setView(inputField)
                .setPositiveButton(AppLang.t("ENVIAR", "SEND"), (d, w) ->
                        sendStringToGame(inputField.getText().toString()))
                .setNegativeButton(AppLang.t("CANCELAR", "CANCEL"), null)
                .setOnDismissListener(d -> keyboardDialog = null)
                .create();
        keyboardDialog.show();

        keyboardFocusRunnable = () -> {
            inputField.requestFocus();
            InputMethodManager imm = (InputMethodManager) getSystemService(INPUT_METHOD_SERVICE);
            if (imm != null) imm.showSoftInput(inputField, InputMethodManager.SHOW_IMPLICIT);
        };
        inputField.post(keyboardFocusRunnable);
    }

    private void dismissKeyboard() {
        if (keyboardFocusRunnable != null) {
            final View v = keyboardDialog != null ? keyboardDialog.getCurrentFocus() : null;
            if (v != null) v.removeCallbacks(keyboardFocusRunnable);
            keyboardFocusRunnable = null;
        }
        if (keyboardDialog != null) {
            try {
                keyboardDialog.dismiss();
            } catch (Throwable ignored) {
                // Actividad ya destruida.
            }
            keyboardDialog = null;
        }
    }

    private void confirmAndExit() {
        if (exiting || isFinishing() || isDestroyed()) return;
        dismissExitDialog();
        input.releaseAll();
        if (Native.LOADED) Native.resetInput();
        exitDialog = new AlertDialog.Builder(this)
                .setTitle(AppLang.t("Salir del juego", "Exit Game"))
                .setMessage(AppLang.t("¿Cerrar Midnight Club II?", "Close Midnight Club II?"))
                .setPositiveButton(AppLang.t("Salir", "Exit"), (d, w) -> performFullExit())
                .setNegativeButton(AppLang.t("Cancelar", "Cancel"), (d, w) -> applyImmersiveMode())
                .setOnDismissListener(d -> {
                    exitDialog = null;
                    if (!exiting) applyImmersiveMode();
                })
                .create();
        exitDialog.show();
    }

    private void dismissExitDialog() {
        if (exitDialog != null) {
            try {
                exitDialog.dismiss();
            } catch (Throwable ignored) {
                // Actividad ya destruida.
            }
            exitDialog = null;
        }
    }

    /** Cierra el motor nativo y finaliza la app completamente para poder reabrirla limpia. */
    private void performFullExit() {
        if (exiting) return;
        exiting = true;
        dismissExitDialog();
        dismissKeyboard();
        stopHud();
        releaseMusic();
        releaseMulticastLock();
        input.releaseAll();
        if (Native.LOADED) {
            Native.resetInput();
            Native.detach();
        }
        attached = false;

        final java.util.concurrent.CountDownLatch done = new java.util.concurrent.CountDownLatch(1);
        Thread t = new Thread(() -> {
            try {
                if (Native.LOADED) {
                    Native.shutdown();
                }
            } catch (Throwable ignored) {
            } finally {
                done.countDown();
            }
        }, "mc2-exit-shutdown");
        t.setDaemon(true);
        t.start();

        Thread finisher = new Thread(() -> {
            try {
                done.await(1600L, java.util.concurrent.TimeUnit.MILLISECONDS);
            } catch (InterruptedException ignored) {
                Thread.currentThread().interrupt();
            }
            mainHandler.post(() -> {
                try {
                    finishAndRemoveTask();
                } catch (Throwable ignored) {
                    finish();
                }
                finishAffinity();
                System.exit(0);
            });
        }, "mc2-exit-finish");
        finisher.setDaemon(true);
        finisher.start();
    }

    private void sendStringToGame(String str) {
        if (str == null || str.isEmpty() || !Native.LOADED) return;
        PortDebug.input("teclado virtual · " + str.length() + " caracteres");
        worker.execute(() -> {
            for (char ch : str.toCharArray()) {
                int dik = DikMap.fromChar(ch);
                if (dik == 0) continue;
                if (dik == DIK_RETURN) {
                    Native.charEvent(DIK_RETURN);
                    Native.keyEvent(DIK_RETURN, true);
                    sleepQuietly(45L);
                    Native.keyEvent(DIK_RETURN, false);
                    sleepQuietly(35L);
                    continue;
                }
                boolean needShift = Character.isUpperCase(ch) || ch == '_';
                if (needShift) {
                    Native.keyEvent(0x2A, true);
                    sleepQuietly(20L);
                }
                /* Envia evento DirectInput buffered (GetDeviceData) sin alterar GetDeviceState,
                   para que 'b' (DIK_B = POPUP_BACK_KEY) escriba sin cerrar el menu. */
                Native.charEvent(dik);
                sleepQuietly(35L);
                if (needShift) {
                    Native.keyEvent(0x2A, false);
                    sleepQuietly(15L);
                }
            }
            sleepQuietly(70L);
            Native.charEvent(DIK_RETURN);
            Native.keyEvent(DIK_RETURN, true);
            sleepQuietly(45L);
            Native.keyEvent(DIK_RETURN, false);
        });
    }

    private static void sleepQuietly(long ms) {
        try {
            Thread.sleep(ms);
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    // ------------------------------------------------------------ input PC

    private boolean isModernControls() {
        return cfg == null || cfg.controlScheme == GameConfig.SCHEME_MODERN;
    }

    private static boolean isGamepadSource(KeyEvent event) {
        int src = event.getSource();
        return (src & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD
                || (src & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK;
    }

    @Override
    public boolean dispatchKeyEvent(KeyEvent event) {
        int action = event.getAction();
        if (action != KeyEvent.ACTION_DOWN && action != KeyEvent.ACTION_UP) {
            return super.dispatchKeyEvent(event);
        }
        boolean down = action == KeyEvent.ACTION_DOWN;
        if (down && event.getRepeatCount() > 0) {
            return true;
        }
        String src = event.getDeviceId() >= 0 ? "key-" + event.getDeviceId() : "key";
        int keyCode = event.getKeyCode();
        if (isGamepadSource(event)) {
            if (!gamepadDetected && XboxControls.isPhysicalGamepad(event.getDevice())) {
                syncGamepadPresence(false);
            }
            if (applyGamepadButton(src, keyCode, down, isModernControls())) {
                return true;
            }
        }
        int dik = DikMap.fromKeyCode(keyCode);
        if (dik == 0) return super.dispatchKeyEvent(event);
        input.set(src, dik, down);
        return true;
    }

    private boolean applyGamepadButton(String src, int keyCode, boolean down, boolean modern) {
        // Controles comunes a ambos esquemas (sistema y cruceta D-Pad)
        switch (keyCode) {
            case KeyEvent.KEYCODE_BUTTON_SELECT:
            case KeyEvent.KEYCODE_BACK:
                input.set(src, DIK_TAB, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_START:
                input.set(src, DIK_ESCAPE, down);
                return true;
            case KeyEvent.KEYCODE_DPAD_UP:
                input.set(src + "-dp", DIK_SEMICOLON, down);
                input.set(src + "-dp", DIK_UP, down);
                return true;
            case KeyEvent.KEYCODE_DPAD_DOWN:
                input.set(src + "-dp", DIK_APOSTROPHE, down);
                input.set(src + "-dp", DIK_DOWN, down);
                return true;
            case KeyEvent.KEYCODE_DPAD_LEFT:
                input.set(src + "-dp", DIK_MINUS, down);
                input.set(src + "-dp", DIK_LEFT, down);
                return true;
            case KeyEvent.KEYCODE_DPAD_RIGHT:
                input.set(src + "-dp", DIK_EQUALS, down);
                input.set(src + "-dp", DIK_RIGHT, down);
                return true;
            default:
                break;
        }

        if (modern) {
            // Esquema Moderno (imagen Modern Controls)
            switch (keyCode) {
                case KeyEvent.KEYCODE_BUTTON_A:
                    input.set(src, DIK_SPACE, down);
                    input.set(src, DIK_RETURN, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_B:
                    input.set(src, DIK_X, down);
                    input.set(src, DIK_B, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_X:
                    input.set(src, DIK_F, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_Y:
                    input.set(src, DIK_LSHIFT, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_L1:
                    input.set(src, DIK_NUMPAD0, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_R1:
                    input.set(src, DIK_C, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_L2:
                    input.set(src, DIK_DOWN, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_R2:
                    input.set(src, DIK_UP, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_THUMBL:
                    input.set(src, DIK_H, down);
                    return true;
                case KeyEvent.KEYCODE_BUTTON_THUMBR:
                    input.set(src, DIK_M, down);
                    return true;
                default:
                    return false;
            }
        }

        // Esquema Clásico (botones PS2/Xbox mapeados al layout Xbox)
        switch (keyCode) {
            case KeyEvent.KEYCODE_BUTTON_A:
                input.set(src, DIK_UP, down);
                input.set(src, DIK_RETURN, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_X:
                input.set(src, DIK_DOWN, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_B:
                input.set(src, DIK_SPACE, down);
                input.set(src, DIK_B, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_Y:
                input.set(src, DIK_C, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_L1:
                input.set(src, DIK_LSHIFT, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_R1:
                input.set(src, DIK_H, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_L2:
                input.set(src, DIK_NUMPAD0, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_R2:
                input.set(src, DIK_X, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_THUMBL:
                input.set(src, DIK_F, down);
                return true;
            case KeyEvent.KEYCODE_BUTTON_THUMBR:
                input.set(src, DIK_M, down);
                return true;
            default:
                return false;
        }
    }

    @Override
    public boolean dispatchGenericMotionEvent(MotionEvent event) {
        int src = event.getSource();
        boolean isPadMotion = (src & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK
                || (src & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD;
        if (isPadMotion && event.getActionMasked() == MotionEvent.ACTION_MOVE) {
            if (!gamepadDetected && XboxControls.isPhysicalGamepad(event.getDevice())) {
                syncGamepadPresence(false);
            }
            float lx = event.getAxisValue(MotionEvent.AXIS_X);
            float ly = event.getAxisValue(MotionEvent.AXIS_Y);
            float hatX = event.getAxisValue(MotionEvent.AXIS_HAT_X);
            float hatY = event.getAxisValue(MotionEvent.AXIS_HAT_Y);
            float lt = Math.max(event.getAxisValue(MotionEvent.AXIS_LTRIGGER),
                    event.getAxisValue(MotionEvent.AXIS_BRAKE));
            float rt = Math.max(event.getAxisValue(MotionEvent.AXIS_RTRIGGER),
                    event.getAxisValue(MotionEvent.AXIS_GAS));

            final float steerDead = 0.25f;
            final float leanDead = 0.35f;
            final float trigDead = 0.25f;
            final float hatDead = 0.50f;

            input.set("pad-lx", DIK_A, lx < -steerDead);
            input.set("pad-lx", DIK_LEFT, lx < -steerDead);
            input.set("pad-lx", DIK_D, lx > steerDead);
            input.set("pad-lx", DIK_RIGHT, lx > steerDead);

            input.set("pad-ly", DIK_W, ly < -leanDead);
            input.set("pad-ly", DIK_S, ly > leanDead);

            input.set("pad-hat-y", DIK_SEMICOLON, hatY < -hatDead);
            input.set("pad-hat-y", DIK_UP, hatY < -hatDead);
            input.set("pad-hat-y", DIK_APOSTROPHE, hatY > hatDead);
            input.set("pad-hat-y", DIK_DOWN, hatY > hatDead);

            input.set("pad-hat-x", DIK_MINUS, hatX < -hatDead);
            input.set("pad-hat-x", DIK_LEFT, hatX < -hatDead);
            input.set("pad-hat-x", DIK_EQUALS, hatX > hatDead);
            input.set("pad-hat-x", DIK_RIGHT, hatX > hatDead);

            boolean modern = isModernControls();
            // Moderno: RT=Gas / LT=Freno · Clásico PS2/Xbox: RT=Nitro / LT=Mirar atrás
            input.set("pad-rt", modern ? DIK_UP : DIK_X, rt > trigDead);
            input.set("pad-lt", modern ? DIK_DOWN : DIK_NUMPAD0, lt > trigDead);
            return true;
        }
        return super.dispatchGenericMotionEvent(event);
    }

    // -------------------------------------------------------- broadcast debug

    private android.content.BroadcastReceiver debugReceiver;

    private void registerDebugReceiver() {
        if (!BuildConfig.DEBUG) return;
        debugReceiver = new android.content.BroadcastReceiver() {
            @Override
            public void onReceive(Context c, Intent in) {
                String action = in.getAction();
                if ("com.pmc2android.xgowther2102.DIAG_DUMP".equals(action)) {
                    dumpDiagnostics();
                    return;
                }
                if ("com.pmc2android.xgowther2102.DIAG_RESET".equals(action)) {
                    if (Native.LOADED) Native.diagReset();
                    android.util.Log.i("PortDiag", "colector reiniciado");
                    return;
                }
                if ("com.pmc2android.xgowther2102.DEBUG_UI".equals(action)) {
                    boolean expand = in.getBooleanExtra("expand_menu", false);
                    boolean toggleFps = in.getBooleanExtra("toggle_fps", false);
                    if (expand) setQuickMenuExpanded(true);
                    if (toggleFps && toggleFpsBtn != null) toggleFpsBtn.performClick();
                    return;
                }
                final int dik = in.getIntExtra("dik", 0);
                final int holdMs = in.getIntExtra("hold", 90);
                if (dik <= 0 || !Native.LOADED) return;
                worker.execute(() -> {
                    Native.keyEvent(dik, true);
                    sleepQuietly(holdMs);
                    Native.keyEvent(dik, false);
                });
            }
        };
        android.content.IntentFilter f =
                new android.content.IntentFilter("com.pmc2android.xgowther2102.DEBUG_KEY");
        f.addAction("com.pmc2android.xgowther2102.DIAG_DUMP");
        f.addAction("com.pmc2android.xgowther2102.DIAG_RESET");
        f.addAction("com.pmc2android.xgowther2102.DEBUG_UI");
        /* Receptor dinamico EXPORTED solo en builds debug: permite disparar
           DIAG_DUMP/DIAG_RESET desde `adb shell am broadcast`. La accion unica
           que expone es un volcado de diagnostico, sin efectos sobre el juego. */
        if (Build.VERSION.SDK_INT >= 33) {
            registerReceiver(debugReceiver, f, Context.RECEIVER_EXPORTED);
        } else {
            registerReceiver(debugReceiver, f);
        }
    }

    /** Vuelca el informe completo a logcat (tag PortDiag) y a un archivo
     *  descargable con adb pull. Disparado por:
     *  adb shell am broadcast -a com.pmc2android.xgowther2102.DIAG_DUMP -n com.pmc2android.xgowther2102/.GameActivity */
    private void dumpDiagnostics() {
        if (!Native.LOADED) {
            android.util.Log.e("PortDiag", "runtime no cargado");
            return;
        }
        worker.execute(() -> {
            final String report = Native.diagReport();
            final StringBuilder full = new StringBuilder(report);
            full.append("\n--- ESTADO EN VIVO (que esta haciendo el motor) ---\n");
            full.append("version=").append(Native.version()).append('\n');
            full.append("stats=").append(Native.stats().replace('\n', ' ')).append('\n');
            full.append("archivos=").append(Native.dataUsage()).append('\n');
            full.append("diag=").append(Native.diagSummary()).append('\n');
            full.append("--- SONDA DE INTEGRIDAD DE DATOS ---\n");
            for (long o : new long[]{0L, 16L, 1048576L, 231985088L}) {
                full.append("assets_p.dat@").append(o).append('=')
                        .append(Native.dataProbe("assets_p.dat", o, 32)).append('\n');
            }
            full.append("streams_pc.dat@0=")
                    .append(Native.dataProbe("streams_pc.dat", 0, 32)).append('\n');
            final String text = full.toString();
            for (String line : text.split("\n")) {
                android.util.Log.i("PortDiag", line);
            }
            try {
                java.io.File dir = getExternalFilesDir(null);
                if (dir != null) {
                    java.io.File f = new java.io.File(dir, "mc2_diag.txt");
                    try (java.io.FileOutputStream out = new java.io.FileOutputStream(f)) {
                        out.write(text.getBytes("UTF-8"));
                    }
                    android.util.Log.i("PortDiag", "informe guardado en " + f.getAbsolutePath());
                }
            } catch (Exception e) {
                android.util.Log.e("PortDiag", "no se pudo guardar: " + e.getMessage());
            }
        });
    }

    private void unregisterDebugReceiver() {
        if (debugReceiver == null) return;
        try {
            unregisterReceiver(debugReceiver);
        } catch (Throwable ignored) {
            // Ya desregistrado.
        }
        debugReceiver = null;
    }

    // ------------------------------------------------------------ componentes

    /** Árbitro único: varias fuentes pueden pulsar la misma DIK sin apagarse entre sí. */
    private static final class InputRouter {
        private final Map<Integer, HashSet<String>> sources = new HashMap<>();
        private final Map<Integer, Boolean> applied = new HashMap<>();

        synchronized void set(String source, int dik, boolean down) {
            if (dik <= 0 || source == null) return;
            HashSet<String> set = sources.get(dik);
            if (set == null) {
                set = new HashSet<>();
                sources.put(dik, set);
            }
            boolean changed = down ? set.add(source) : set.remove(source);
            if (!changed) return;
            boolean value = !set.isEmpty();
            Boolean previous = applied.get(dik);
            if (previous != null && previous == value) return;
            applied.put(dik, value);
            PortDebug.input("DIK 0x" + Integer.toHexString(dik)
                    + " · " + source + " · " + (value ? "DOWN" : "UP"));
            if (Native.LOADED) Native.keyEvent(dik, value);
        }

        synchronized void releaseAll() {
            for (Map.Entry<Integer, Boolean> e : applied.entrySet()) {
                if (e.getValue() && Native.LOADED) Native.keyEvent(e.getKey(), false);
            }
            sources.clear();
            applied.clear();
        }
    }

    /** Tabla DIK única: antes existía duplicada en charToDik y mapAndroidKeyToDik. */
    private static final class DikMap {
        private static final int[] LETTERS = {
                0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24,
                0x25, 0x26, 0x32, 0x31, 0x18, 0x19, 0x10, 0x13, 0x1F, 0x14,
                0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C
        };

        static int fromChar(char ch) {
            char upper = Character.toUpperCase(ch);
            if (upper >= 'A' && upper <= 'Z') return LETTERS[upper - 'A'];
            if (upper >= '1' && upper <= '9') return 0x02 + (upper - '1');
            if (upper == '0') return 0x0B;
            switch (ch) {
                case ' ': return DIK_SPACE;
                case '\b': return 0x0E;
                case '\n':
                case '\r': return DIK_RETURN;
                case '-': return 0x0C;
                case '.': return 0x34;
                case '_': return 0x0C;
                default: return 0;
            }
        }

        static int fromKeyCode(int key) {
            if (key >= KeyEvent.KEYCODE_A && key <= KeyEvent.KEYCODE_Z) {
                return LETTERS[key - KeyEvent.KEYCODE_A];
            }
            if (key >= KeyEvent.KEYCODE_1 && key <= KeyEvent.KEYCODE_9) {
                return 0x02 + (key - KeyEvent.KEYCODE_1);
            }
            if (key == KeyEvent.KEYCODE_0) return 0x0B;
            switch (key) {
                case KeyEvent.KEYCODE_DPAD_UP: return DIK_UP;
                case KeyEvent.KEYCODE_DPAD_DOWN: return DIK_DOWN;
                case KeyEvent.KEYCODE_DPAD_LEFT: return DIK_LEFT;
                case KeyEvent.KEYCODE_DPAD_RIGHT: return DIK_RIGHT;
                case KeyEvent.KEYCODE_ENTER:
                case KeyEvent.KEYCODE_NUMPAD_ENTER:
                case KeyEvent.KEYCODE_BUTTON_A:
                case KeyEvent.KEYCODE_BUTTON_START: return DIK_RETURN;
                case KeyEvent.KEYCODE_ESCAPE:
                case KeyEvent.KEYCODE_BUTTON_B:
                case KeyEvent.KEYCODE_BUTTON_SELECT: return DIK_ESCAPE;
                case KeyEvent.KEYCODE_SPACE:
                case KeyEvent.KEYCODE_BUTTON_X:
                case KeyEvent.KEYCODE_BUTTON_L2: return DIK_SPACE;
                case KeyEvent.KEYCODE_DEL: return 0x0E;
                case KeyEvent.KEYCODE_FORWARD_DEL: return 0xD3;
                case KeyEvent.KEYCODE_TAB: return DIK_TAB;
                case KeyEvent.KEYCODE_SHIFT_LEFT:
                case KeyEvent.KEYCODE_SHIFT_RIGHT:
                case KeyEvent.KEYCODE_BUTTON_Y: return 0x2A;
                case KeyEvent.KEYCODE_CTRL_LEFT:
                case KeyEvent.KEYCODE_CTRL_RIGHT:
                case KeyEvent.KEYCODE_BUTTON_R1: return DIK_LCONTROL;
                case KeyEvent.KEYCODE_BUTTON_L1: return DIK_V;
                case KeyEvent.KEYCODE_BUTTON_R2: return DIK_R;
                default: return 0;
            }
        }
    }

    /** Joystick unificado con seguimiento de pointerId y multitouch real. */
    private static final class AnalogStickView extends View {
        private static final float DEADZONE = 0.22f;

        private final String source;
        private final boolean floating;
        private final Paint basePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint borderPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint knobPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint textPaint = new Paint(Paint.ANTI_ALIAS_FLAG);

        private int activePointer = -1;
        private float centerX, centerY, knobX, knobY, radius;
        private float touchStartX, touchStartY;
        private boolean touching;

        AnalogStickView(Context ctx, String source, boolean floating) {
            super(ctx);
            this.source = source;
            this.floating = floating;
            basePaint.setStyle(Paint.Style.FILL);
            basePaint.setColor(floating ? 0x18141E30 : 0x55141E30);
            borderPaint.setStyle(Paint.Style.STROKE);
            borderPaint.setStrokeWidth(Ui.dp(ctx, 2f));
            borderPaint.setColor(0x884A88E0);
            knobPaint.setStyle(Paint.Style.FILL);
            knobPaint.setColor(0xCC3070E0);
            textPaint.setColor(0x66B0D0FF);
            textPaint.setTextSize(Ui.dp(ctx, 10f));
            textPaint.setTextAlign(Paint.Align.CENTER);
            textPaint.setTypeface(Typeface.MONOSPACE);
        }

        @Override
        protected void onSizeChanged(int w, int h, int oldw, int oldh) {
            super.onSizeChanged(w, h, oldw, oldh);
            centerX = w * 0.5f;
            centerY = h * 0.5f;
            knobX = centerX;
            knobY = centerY;
            radius = Math.min(w, h) * 0.44f;
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            if (floating) {
                RectF r = new RectF(4, 4, getWidth() - 4, getHeight() - 4);
                float corner = Ui.dp(getContext(), 14);
                canvas.drawRoundRect(r, corner, corner, basePaint);
                canvas.drawRoundRect(r, corner, corner, borderPaint);
                if (!touching) {
                    canvas.drawText("ÁREA TÁCTIL DERECHA", getWidth() / 2f,
                            getHeight() * 0.18f, textPaint);
                    return;
                }
                float maxDist = Ui.dp(getContext(), 45);
                canvas.drawCircle(touchStartX, touchStartY, maxDist, borderPaint);
            } else {
                canvas.drawCircle(centerX, centerY, radius, basePaint);
                canvas.drawCircle(centerX, centerY, radius, borderPaint);
            }
            float knobRadius = floating ? Ui.dp(getContext(), 24) : radius * 0.42f;
            canvas.drawCircle(knobX, knobY, knobRadius, knobPaint);
            canvas.drawCircle(knobX, knobY, knobRadius, borderPaint);
        }

        @Override
        public boolean onTouchEvent(MotionEvent event) {
            int action = event.getActionMasked();
            int index = event.getActionIndex();
            int pid = event.getPointerId(index);

            if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
                if (activePointer != -1) return true;
                activePointer = pid;
                touching = true;
                if (floating) {
                    touchStartX = event.getX(index);
                    touchStartY = event.getY(index);
                    knobX = touchStartX;
                    knobY = touchStartY;
                } else {
                    updateFixed(event, index);
                }
                invalidate();
                return true;
            }

            if (action == MotionEvent.ACTION_MOVE) {
                int slot = event.findPointerIndex(activePointer);
                if (slot < 0) return true;
                if (floating) {
                    float dx = event.getX(slot) - touchStartX;
                    float dy = event.getY(slot) - touchStartY;
                    float maxDist = Ui.dp(getContext(), 45);
                    float dist = (float) Math.hypot(dx, dy);
                    float k = dist > maxDist ? maxDist / dist : 1f;
                    knobX = touchStartX + dx * k;
                    knobY = touchStartY + dy * k;
                    applyDirection(dx / maxDist, dy / maxDist);
                } else {
                    updateFixed(event, slot);
                }
                invalidate();
                return true;
            }

            if (action == MotionEvent.ACTION_UP
                    || action == MotionEvent.ACTION_POINTER_UP
                    || action == MotionEvent.ACTION_CANCEL) {
                if (pid != activePointer && action != MotionEvent.ACTION_CANCEL) return true;
                release();
                return true;
            }
            return super.onTouchEvent(event);
        }

        private void updateFixed(MotionEvent event, int slot) {
            float dx = event.getX(slot) - centerX;
            float dy = event.getY(slot) - centerY;
            float dist = (float) Math.hypot(dx, dy);
            float scale = dist > radius && dist > 0f ? radius / dist : 1f;
            knobX = centerX + dx * scale;
            knobY = centerY + dy * scale;
            applyDirection((knobX - centerX) / radius, (knobY - centerY) / radius);
        }

        private void applyDirection(float nx, float ny) {
            GameActivity a = (GameActivity) getContext();
            a.input.set(source, DIK_LEFT, nx < -DEADZONE);
            a.input.set(source, DIK_A, nx < -DEADZONE);
            a.input.set(source, DIK_RIGHT, nx > DEADZONE);
            a.input.set(source, DIK_D, nx > DEADZONE);
            a.input.set(source, DIK_W, ny < -0.62f);
            a.input.set(source, DIK_S, ny > 0.62f);
        }

        private void release() {
            activePointer = -1;
            touching = false;
            knobX = centerX;
            knobY = centerY;
            GameActivity a = (GameActivity) getContext();
            a.input.set(source, DIK_LEFT, false);
            a.input.set(source, DIK_A, false);
            a.input.set(source, DIK_RIGHT, false);
            a.input.set(source, DIK_D, false);
            a.input.set(source, DIK_UP, false);
            a.input.set(source, DIK_W, false);
            a.input.set(source, DIK_DOWN, false);
            a.input.set(source, DIK_S, false);
            invalidate();
        }
    }

    /** Zona táctil invisible detrás de los botones: arrastre directo para cámara / modelo de coche sin aspecto de botón. */
    private static final class TouchCameraPad extends View {
        private int activePointer = -1;
        private float lastX, lastY;
        private float accumDx, accumDy;
        private int lastGameX = 640, lastGameY = 360;

        TouchCameraPad(Context ctx) {
            super(ctx);
        }

        void cancelTouch() {
            if (activePointer != -1) {
                activePointer = -1;
                accumDx = 0f;
                accumDy = 0f;
                if (Native.LOADED) {
                    Native.mouseEvent(lastGameX, lastGameY, 0, 0, false, 3);
                }
            }
        }

        private void mapToGame(float sx, float sy, int[] out) {
            int w = Math.max(1, getWidth());
            int h = Math.max(1, getHeight());
            int targetW = w;
            int targetH = h;
            if (w * 9 > h * 16) targetW = h * 16 / 9;
            else targetH = w * 9 / 16;
            int vx = (w - targetW) / 2;
            int vy = (h - targetH) / 2;
            int gw = Math.max(1, Native.gameWidth());
            int gh = Math.max(1, Native.gameHeight());
            int gx = Math.round((sx - vx) * (float) gw / Math.max(1, targetW));
            int gy = Math.round((sy - vy) * (float) gh / Math.max(1, targetH));
            out[0] = Math.max(0, Math.min(gw - 1, gx));
            out[1] = Math.max(0, Math.min(gh - 1, gy));
        }

        @Override
        public boolean onTouchEvent(MotionEvent event) {
            GameActivity actHost = (getContext() instanceof GameActivity) ? (GameActivity) getContext() : null;
            if (!Native.LOADED || actHost == null || !actHost.touchMouseEnabled) {
                if (activePointer != -1) cancelTouch();
                return false;
            }
            int act = event.getActionMasked();
            int idx = event.getActionIndex();
            int pid = event.getPointerId(idx);
            int[] pt = new int[2];

            switch (act) {
                case MotionEvent.ACTION_DOWN:
                case MotionEvent.ACTION_POINTER_DOWN:
                    if (activePointer != -1) return false;
                    activePointer = pid;
                    lastX = event.getX(idx);
                    lastY = event.getY(idx);
                    accumDx = 0f;
                    accumDy = 0f;
                    mapToGame(lastX, lastY, pt);
                    lastGameX = pt[0];
                    lastGameY = pt[1];
                    Native.mouseEvent(lastGameX, lastGameY, 0, 0, true, 1);
                    return true;
                case MotionEvent.ACTION_MOVE: {
                    int slot = event.findPointerIndex(activePointer);
                    if (slot < 0) return false;
                    float curX = event.getX(slot);
                    float curY = event.getY(slot);
                    float dxf = curX - lastX;
                    float dyf = curY - lastY;
                    lastX = curX;
                    lastY = curY;
                    int vw = Math.max(1, Math.min(getWidth(), getHeight() * 16 / 9));
                    int vh = Math.max(1, Math.min(getHeight(), getWidth() * 9 / 16));
                    int gw = Math.max(1, Native.gameWidth());
                    int gh = Math.max(1, Native.gameHeight());
                    accumDx += dxf * (float) gw / vw;
                    accumDy += dyf * (float) gh / vh;
                    int dx = (int) accumDx;
                    int dy = (int) accumDy;
                    accumDx -= dx;
                    accumDy -= dy;
                    mapToGame(curX, curY, pt);
                    lastGameX = pt[0];
                    lastGameY = pt[1];
                    if (dx != 0 || dy != 0) {
                        Native.mouseEvent(lastGameX, lastGameY, dx, dy, true, 2);
                    }
                    return true;
                }
                case MotionEvent.ACTION_UP:
                case MotionEvent.ACTION_POINTER_UP:
                case MotionEvent.ACTION_CANCEL:
                    if (pid != activePointer && act != MotionEvent.ACTION_CANCEL) return false;
                    activePointer = -1;
                    accumDx = 0f;
                    accumDy = 0f;
                    Native.mouseEvent(lastGameX, lastGameY, 0, 0, false, 3);
                    return true;
                default:
                    return false;
            }
        }
    }
}
