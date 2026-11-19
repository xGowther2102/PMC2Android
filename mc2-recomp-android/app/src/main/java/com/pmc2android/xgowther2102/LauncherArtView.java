package com.pmc2android.xgowther2102;

import android.animation.ValueAnimator;
import android.app.Activity;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RadialGradient;
import android.graphics.Shader;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.os.SystemClock;
import android.util.DisplayMetrics;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.View;
import android.view.WindowInsets;
import android.view.WindowInsetsController;
import android.view.WindowManager;
import android.view.animation.LinearInterpolator;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;

/**
 * Componentes visuales estilo Bento Glassmorphic para el launcher horizontal:
 * fondo animado nocturno MC2, arte del mosaico Hero y tarjetas interactivas con foco híbrido.
 */
final class LauncherArtView {

    static final int GLASS_FILL = 0x7A0E091E;
    static final int GLASS_FILL_ACTIVE = 0xB4191032;
    static final int GLASS_STROKE = 0x3CFFFFFF;
    static final int FOCUS_CYAN = 0xFF00E5FF;
    static final int NEON_PURPLE = 0xFF9D4EDD;
    static final int RACING_ORANGE = 0xFFFF5A3C;
    static final int NITRO_GREEN = 0xFF35D07F;

    private LauncherArtView() {
    }

    /**
     * Fondo animado de cintas sinusoidales neón estilo Menú Principal de Midnight Club II:
     * flujo suave (independiente de 60/120 Hz), fusión aditiva y mayor luminosidad en el lado derecho.
     */
    static final class NeonBackdropView extends View {
        private static final int[][] THEME_WAVES = {
                // 0: MC2 Neón Púrpura
                {0xFFD946EF, 0xFFA855F7, 0xFFE879F9, 0xFF7E22CE, 0xFFC026D3, 0xFFF0ABFC, 0xFF9333EA, 0xFFF5D0FE},
                // 1: Los Ángeles Sunset
                {0xFFFF5A3C, 0xFFFF8A3D, 0xFFF43F5E, 0xFFFB923C, 0xFFE11D48, 0xFFFBBF24, 0xFFEA580C, 0xFFFDA4AF},
                // 2: París Cian Nocturno
                {0xFF00E5FF, 0xFF38BDF8, 0xFF6366F1, 0xFF22D3EE, 0xFF3B82F6, 0xFFA5F3FC, 0xFF818CF8, 0xFF67E8F9},
                // 3: Tokio Nitro Verde
                {0xFF35D07F, 0xFF10B981, 0xFF2DD4BF, 0xFF84CC16, 0xFF059669, 0xFF6EE7B7, 0xFF14B8A6, 0xFFA7F3D0}
        };
        private static final int[][] THEME_BG = {
                {0xFF200638, 0xFF0E031E, 0xFF06010F},
                {0xFF2B0D09, 0xFF160509, 0xFF070206},
                {0xFF061E34, 0xFF050E20, 0xFF03050E},
                {0xFF052418, 0xFF04120D, 0xFF020806}
        };
        private static final int[][] THEME_GLOW = {
                {0x42A855F7, 0x1EE879F9, 0x00000000},
                {0x42FF5A3C, 0x1EFB923C, 0x00000000},
                {0x4200E5FF, 0x1E6366F1, 0x00000000},
                {0x4235D07F, 0x1E2DD4BF, 0x00000000}
        };
        private static final int PARTICLE_COUNT = 34;

        private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint ribbonPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint glowPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint corePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint scanPaint = new Paint();
        private final Path ribbonPath = new Path();
        private final Path corePath = new Path();
        private final PorterDuffXfermode addMode = new PorterDuffXfermode(PorterDuff.Mode.ADD);

        private final float[] px = new float[PARTICLE_COUNT];
        private final float[] py = new float[PARTICLE_COUNT];
        private final float[] pr = new float[PARTICLE_COUNT];
        private final float[] pvx = new float[PARTICLE_COUNT];
        private final float[] pvy = new float[PARTICLE_COUNT];
        private final float[] pAlpha = new float[PARTICLE_COUNT];
        private final float[] pPhase = new float[PARTICLE_COUNT];
        private boolean particlesInit;

        private int themeIdx = GameConfig.BG_THEME_MC2_PURPLE;
        private float speedRate = 0.42f;
        private float intensity = 1.0f;
        private int waveCount = 6;
        private boolean showParticles = true;
        private boolean showScanlines = true;

        private boolean lifecyclePaused;
        private ValueAnimator anim;
        private long lastTickMs;
        private long lastFadeShaderMs;
        private float simTime;
        private float fadeTime;
        private int lastW, lastH;
        private Shader bgShader;
        private Shader rightGlowShader;
        private final Shader[] ribbonShaders = new Shader[8];
        private final int[] tmpBg = new int[3];
        private final int[] tmpGlow = new int[3];

        NeonBackdropView(Context ctx) {
            super(ctx);
            glowPaint.setStyle(Paint.Style.STROKE);
            glowPaint.setStrokeCap(Paint.Cap.ROUND);
            glowPaint.setXfermode(addMode);
            corePaint.setStyle(Paint.Style.STROKE);
            corePaint.setStrokeCap(Paint.Cap.ROUND);
            corePaint.setXfermode(addMode);
            ribbonPaint.setStyle(Paint.Style.FILL);
            ribbonPaint.setXfermode(addMode);
            int scanStep = Math.max(3, Ui.dp(ctx, 3));
            Bitmap scanBmp = Bitmap.createBitmap(1, scanStep, Bitmap.Config.ARGB_8888);
            scanBmp.setPixel(0, 0, 0x16000000);
            scanPaint.setShader(new BitmapShader(scanBmp, Shader.TileMode.REPEAT, Shader.TileMode.REPEAT));
            applyConfig(GameConfig.load(ctx));
        }

        void setLifecyclePaused(boolean paused) {
            lifecyclePaused = paused;
            if (anim == null) return;
            if (paused || (speedRate <= 0.001f && themeIdx != GameConfig.BG_THEME_MULTICOLOR_FADE)) {
                if (anim.isRunning() && !anim.isPaused()) anim.pause();
            } else if (anim.isPaused()) {
                lastTickMs = SystemClock.uptimeMillis();
                anim.resume();
            }
        }

        void applyConfig(GameConfig cfg) {
            if (cfg == null) return;
            themeIdx = GameConfig.clamp(cfg.bgTheme, 0, THEME_WAVES.length);
            speedRate = (GameConfig.clamp(cfg.bgSpeed, 0, 150) / 45f) * 0.42f;
            intensity = GameConfig.clamp(cfg.bgIntensity, 30, 150) / 100f;
            waveCount = GameConfig.clamp(cfg.bgWaveCount, 3, 8);
            showParticles = cfg.bgParticles;
            showScanlines = cfg.bgScanlines;
            bgShader = null;
            rightGlowShader = null;
            lastFadeShaderMs = 0L;
            for (int i = 0; i < ribbonShaders.length; i++) ribbonShaders[i] = null;
            if (lifecyclePaused || (speedRate <= 0.001f && themeIdx != GameConfig.BG_THEME_MULTICOLOR_FADE)) {
                if (anim != null && anim.isRunning() && !anim.isPaused()) anim.pause();
            } else {
                if (anim != null && anim.isPaused()) {
                    lastTickMs = SystemClock.uptimeMillis();
                    anim.resume();
                } else if (anim == null && isAttachedToWindow()) {
                    startAnimator();
                }
            }
            invalidate();
        }

        private void ensureParticles(int w, int h) {
            if (particlesInit || w <= 0 || h <= 0) return;
            particlesInit = true;
            for (int i = 0; i < PARTICLE_COUNT; i++) {
                float u = (float) Math.sin((i + 1) * 12.9898) * 43758.5453f;
                float f1 = u - (float) Math.floor(u);
                float v = (float) Math.sin((i + 7) * 78.233) * 19341.123f;
                float f2 = v - (float) Math.floor(v);
                px[i] = (i % 3 == 0 ? 0.1f + 0.9f * f1 : 0.36f + 0.64f * f1) * w;
                py[i] = f2 * h;
                pr[i] = Ui.dp(getContext(), 1.0f + (i % 4) * 0.55f);
                pvx[i] = ((f1 - 0.5f) * 10f);
                pvy[i] = -(7f + f2 * 13f);
                pAlpha[i] = 0.22f + 0.45f * f2;
                pPhase[i] = i * 0.85f;
            }
        }

        private void startAnimator() {
            if (anim != null) return;
            lastTickMs = SystemClock.uptimeMillis();
            anim = ValueAnimator.ofFloat(0f, 1f);
            anim.setDuration(10000L);
            anim.setRepeatCount(ValueAnimator.INFINITE);
            anim.setInterpolator(new LinearInterpolator());
            anim.addUpdateListener(a -> {
                long now = SystemClock.uptimeMillis();
                float dt = Math.min(0.05f, Math.max(0f, (now - lastTickMs) / 1000f));
                lastTickMs = now;
                boolean isMulti = (themeIdx == GameConfig.BG_THEME_MULTICOLOR_FADE);
                if (speedRate <= 0.001f && !isMulti) return;
                if (isMulti) {
                    fadeTime += dt * (speedRate > 0.001f ? 0.22f * Math.max(0.55f, speedRate / 0.42f) : 0.18f);
                }
                if (speedRate > 0.001f) {
                    simTime += dt * speedRate;
                    int w = getWidth();
                    int h = getHeight();
                    if (showParticles && particlesInit && w > 0 && h > 0) {
                        float moveScale = speedRate / 0.42f;
                        for (int i = 0; i < PARTICLE_COUNT; i++) {
                            px[i] += pvx[i] * dt * moveScale;
                            py[i] += pvy[i] * dt * moveScale;
                            if (py[i] < -12f) {
                                py[i] = h + 12f;
                                px[i] = (0.32f + 0.68f * ((i * 0.37f + simTime * 0.11f) % 1f)) * w;
                            }
                            if (px[i] < -12f) px[i] = w + 12f;
                            else if (px[i] > w + 12f) px[i] = -12f;
                        }
                    }
                }
                invalidate();
            });
            anim.start();
            if (speedRate <= 0.001f && themeIdx != GameConfig.BG_THEME_MULTICOLOR_FADE) anim.pause();
        }

        @Override
        protected void onAttachedToWindow() {
            super.onAttachedToWindow();
            startAnimator();
        }

        @Override
        protected void onDetachedFromWindow() {
            if (anim != null) {
                anim.cancel();
                anim = null;
            }
            super.onDetachedFromWindow();
        }

        private static int scaleAlpha(int argb, float mult) {
            int a = Math.max(0, Math.min(255, Math.round(Color.alpha(argb) * mult)));
            return (a << 24) | (argb & 0x00FFFFFF);
        }

        private static int lerpArgb(int a, int b, float t) {
            float u = t * t * (3f - 2f * t);
            int aa = Math.round(Color.alpha(a) + (Color.alpha(b) - Color.alpha(a)) * u);
            int rr = Math.round(Color.red(a) + (Color.red(b) - Color.red(a)) * u);
            int gg = Math.round(Color.green(a) + (Color.green(b) - Color.green(a)) * u);
            int bb = Math.round(Color.blue(a) + (Color.blue(b) - Color.blue(a)) * u);
            return Color.argb(aa, rr, gg, bb);
        }

        private int waveColor(int i, float phaseShift) {
            if (themeIdx < THEME_WAVES.length) {
                int[] cols = THEME_WAVES[themeIdx];
                return cols[i % cols.length];
            }
            float t = (fadeTime + phaseShift) % THEME_WAVES.length;
            if (t < 0f) t += THEME_WAVES.length;
            int idxA = ((int) Math.floor(t)) % THEME_WAVES.length;
            int idxB = (idxA + 1) % THEME_WAVES.length;
            float frac = t - (float) Math.floor(t);
            return lerpArgb(THEME_WAVES[idxA][i % 8], THEME_WAVES[idxB][i % 8], frac);
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            int w = getWidth();
            int h = getHeight();
            if (w <= 0 || h <= 0) return;
            ensureParticles(w, h);

            final boolean isMulti = (themeIdx == GameConfig.BG_THEME_MULTICOLOR_FADE);
            long nowMs = SystemClock.uptimeMillis();
            boolean rebuildFade = isMulti && (nowMs - lastFadeShaderMs >= 50L);
            if (bgShader == null || w != lastW || h != lastH || rebuildFade) {
                lastW = w;
                lastH = h;
                if (rebuildFade) lastFadeShaderMs = nowMs;
                int[] bgCols;
                int[] glowCols;
                if (isMulti) {
                    float t = fadeTime % THEME_BG.length;
                    if (t < 0f) t += THEME_BG.length;
                    int idxA = ((int) Math.floor(t)) % THEME_BG.length;
                    int idxB = (idxA + 1) % THEME_BG.length;
                    float frac = t - (float) Math.floor(t);
                    for (int k = 0; k < 3; k++) {
                        tmpBg[k] = lerpArgb(THEME_BG[idxA][k], THEME_BG[idxB][k], frac);
                        tmpGlow[k] = lerpArgb(THEME_GLOW[idxA][k], THEME_GLOW[idxB][k], frac);
                    }
                    bgCols = tmpBg;
                    glowCols = tmpGlow;
                } else {
                    bgCols = THEME_BG[themeIdx];
                    glowCols = THEME_GLOW[themeIdx];
                }
                bgShader = new RadialGradient(
                        w * 0.65f, h * 0.48f, Math.max(w, h) * 0.85f,
                        bgCols,
                        new float[]{0f, 0.55f, 1f}, Shader.TileMode.CLAMP);
                rightGlowShader = new RadialGradient(
                        w * 0.72f, h * 0.50f, w * 0.48f,
                        new int[]{scaleAlpha(glowCols[0], intensity),
                                scaleAlpha(glowCols[1], intensity), 0x00000000},
                        new float[]{0f, 0.45f, 1f}, Shader.TileMode.CLAMP);
                for (int i = 0; i < ribbonShaders.length; i++) {
                    ribbonShaders[i] = null;
                }
            }

            paint.setXfermode(null);
            paint.setShader(bgShader);
            canvas.drawRect(0f, 0f, w, h, paint);

            paint.setXfermode(addMode);
            paint.setShader(rightGlowShader);
            canvas.drawCircle(w * 0.72f, h * 0.50f, w * 0.48f, paint);
            paint.setShader(null);
            paint.setXfermode(null);

            final float amp = h * 0.125f;
            final int total = waveCount;
            final float step = Math.max(12f, w / 46f);
            final float scaleNorm = 1080f / Math.max(480f, w);

            for (int i = 0; i < total; i++) {
                int col = waveColor(i, i * 0.42f);
                float frac = (float) i / Math.max(1, total - 1);
                float baseY = h * (0.20f + frac * 0.58f);
                float freq = (0.0023f + i * 0.00044f) * scaleNorm;
                float phase = simTime * (0.76f + i * 0.13f) + i * 1.15f;
                float bandHalf = Ui.dp(getContext(), 15f + (i % 3) * 9f);

                if (ribbonShaders[i] == null) {
                    int aEdge = Math.max(0, Math.min(255, Math.round(48 * intensity)));
                    int aMid = Math.max(0, Math.min(255, Math.round(130 * intensity)));
                    ribbonShaders[i] = new LinearGradient(
                            0f, baseY - amp - bandHalf * 2f,
                            0f, baseY + amp + bandHalf * 2f,
                            new int[]{0x00000000, withAlpha(col, aEdge), withAlpha(col, aMid),
                                    withAlpha(col, aEdge), 0x00000000},
                            new float[]{0f, 0.30f, 0.50f, 0.70f, 1f},
                            Shader.TileMode.CLAMP);
                }

                ribbonPath.reset();
                corePath.reset();
                boolean first = true;
                for (float x = 0f; x <= w + step; x += step) {
                    float xBoost = 0.85f + 0.32f * Math.min(1f, x / Math.max(1f, w));
                    float y = baseY
                            + (float) Math.sin(x * freq + phase) * (amp * xBoost)
                            + (float) Math.cos(x * freq * 0.55f - phase * 0.70f) * (amp * 0.36f * xBoost);
                    if (first) {
                        ribbonPath.moveTo(x, y - bandHalf);
                        corePath.moveTo(x, y);
                        first = false;
                    } else {
                        ribbonPath.lineTo(x, y - bandHalf);
                        corePath.lineTo(x, y);
                    }
                }
                for (float x = w + step; x >= -step; x -= step) {
                    float xBoost = 0.85f + 0.32f * Math.min(1f, Math.max(0f, x) / Math.max(1f, w));
                    float y = baseY
                            + (float) Math.sin(x * freq + phase) * (amp * xBoost)
                            + (float) Math.cos(x * freq * 0.55f - phase * 0.70f) * (amp * 0.36f * xBoost);
                    ribbonPath.lineTo(x, y + bandHalf);
                }
                ribbonPath.close();

                ribbonPaint.setShader(ribbonShaders[i]);
                canvas.drawPath(ribbonPath, ribbonPaint);

                glowPaint.setColor(withAlpha(col, Math.max(0, Math.min(255, Math.round(58 * intensity)))));
                glowPaint.setStrokeWidth(Ui.dp(getContext(), 6.5f));
                canvas.drawPath(corePath, glowPaint);

                corePaint.setColor(withAlpha(col, Math.max(0, Math.min(255, Math.round(185 * intensity)))));
                corePaint.setStrokeWidth(Ui.dp(getContext(), 1.6f));
                canvas.drawPath(corePath, corePaint);
            }
            ribbonPaint.setShader(null);

            if (showParticles) {
                paint.setXfermode(addMode);
                for (int i = 0; i < PARTICLE_COUNT; i++) {
                    float pulse = 0.58f + 0.42f * (float) Math.sin(simTime * 2.1f + pPhase[i]);
                    int col = waveColor(i, i * 0.19f);
                    int a = (int) (pAlpha[i] * pulse * intensity * 255f);
                    paint.setColor(withAlpha(col, Math.max(10, Math.min(255, a))));
                    canvas.drawCircle(px[i], py[i], pr[i], paint);
                }
                paint.setXfermode(null);
            }

            if (showScanlines) {
                canvas.drawRect(0f, 0f, w, h, scanPaint);
            }
        }
    }

    /** Arte estilizado del mosaico Hero de Midnight Club II (cielo nocturno, silueta urbana y neón). */
    static final class HeroArtView extends View {
        private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Path skyline = new Path();
        private final Paint linePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint neonPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private int lastW, lastH;

        HeroArtView(Context ctx) {
            super(ctx);
            linePaint.setStyle(Paint.Style.STROKE);
            neonPaint.setStyle(Paint.Style.STROKE);
            neonPaint.setStrokeCap(Paint.Cap.ROUND);
        }

        private void buildSkyline(int w, int h) {
            skyline.reset();
            float base = h * 0.78f;
            skyline.moveTo(0f, h);
            skyline.lineTo(0f, base);
            float[] heights = {0.58f, 0.44f, 0.52f, 0.34f, 0.48f, 0.30f, 0.42f, 0.36f, 0.50f, 0.40f};
            float step = w / (float) heights.length;
            for (int i = 0; i < heights.length; i++) {
                float x0 = i * step;
                float x1 = (i + 1) * step;
                float top = h * heights[i];
                skyline.lineTo(x0 + step * 0.08f, top);
                skyline.lineTo(x1 - step * 0.06f, top);
                skyline.lineTo(x1, base * 0.96f);
            }
            skyline.lineTo(w, h);
            skyline.close();
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            int w = getWidth();
            int h = getHeight();
            if (w <= 0 || h <= 0) return;

            if (w != lastW || h != lastH) {
                lastW = w;
                lastH = h;
                buildSkyline(w, h);
            }

            paint.setShader(new LinearGradient(0f, 0f, w, h,
                    new int[]{0xFF1A0E36, 0xFF28124D, 0xFF0A1428},
                    new float[]{0f, 0.52f, 1f}, Shader.TileMode.CLAMP));
            canvas.drawRect(0f, 0f, w, h, paint);

            // Halo tras los edificios
            paint.setShader(new RadialGradient(w * 0.62f, h * 0.34f, w * 0.55f,
                    0x77FF5A3C, 0x00000000, Shader.TileMode.CLAMP));
            canvas.drawCircle(w * 0.62f, h * 0.34f, w * 0.55f, paint);
            paint.setShader(new RadialGradient(w * 0.25f, h * 0.24f, w * 0.48f,
                    0x6600E5FF, 0x00000000, Shader.TileMode.CLAMP));
            canvas.drawCircle(w * 0.25f, h * 0.24f, w * 0.48f, paint);
            paint.setShader(null);

            // Silueta nocturna urbana
            paint.setColor(0xBB070912);
            canvas.drawPath(skyline, paint);

            // Ráfagas de velocidad neón estilo portada MC2
            neonPaint.setStrokeWidth(Ui.dp(getContext(), 2.6f));
            neonPaint.setColor(0x9900E5FF);
            canvas.drawLine(-w * 0.1f, h * 0.64f, w * 1.05f, h * 0.40f, neonPaint);

            neonPaint.setStrokeWidth(Ui.dp(getContext(), 1.8f));
            neonPaint.setColor(0x99C77DFF);
            canvas.drawLine(-w * 0.05f, h * 0.70f, w * 1.1f, h * 0.48f, neonPaint);

            neonPaint.setStrokeWidth(Ui.dp(getContext(), 2.2f));
            neonPaint.setColor(0xAAFF5A3C);
            canvas.drawLine(w * 0.12f, h * 0.74f, w * 1.1f, h * 0.54f, neonPaint);

            // Viñeta inferior para legibilidad máxima del título y botón
            paint.setShader(new LinearGradient(0f, h * 0.35f, 0f, h,
                    0x10070912, 0xEE070912, Shader.TileMode.CLAMP));
            canvas.drawRect(0f, h * 0.35f, w, h, paint);
            paint.setShader(null);
        }
    }

    static boolean isCompactLandscape(Context c) {
        DisplayMetrics dm = c.getResources().getDisplayMetrics();
        float hDp = Math.min(dm.widthPixels, dm.heightPixels) / Math.max(1f, dm.density);
        return hDp < 440f;
    }

    /** Tarjeta Bento enfocable (Touch + D-Pad/Gamepad) con borde iluminado y scale(1.03) al recibir foco. */
    static FrameLayout createBentoTile(Context c, int accentColor, String badge,
                                     String title, TextView subtitleOut, Runnable onActivate) {
        boolean compact = isCompactLandscape(c);
        FrameLayout tile = new FrameLayout(c);
        tile.setFocusable(true);
        tile.setClickable(true);
        tile.setClipToPadding(false);

        final GradientDrawable normalBg = glassDrawable(c, GLASS_FILL, GLASS_STROKE, 1f, 16f);
        final GradientDrawable focusBg = glassDrawable(c, GLASS_FILL_ACTIVE, accentColor, 2.2f, 16f);
        tile.setBackground(normalBg);

        LinearLayout inner = new LinearLayout(c);
        inner.setOrientation(LinearLayout.VERTICAL);
        inner.setPadding(Ui.dp(c, compact ? 10 : 12), Ui.dp(c, compact ? 8 : 10),
                Ui.dp(c, compact ? 10 : 12), Ui.dp(c, compact ? 8 : 10));

        LinearLayout top = Ui.row(c);
        TextView pill = Ui.text(c, badge, compact ? 9.5f : 10.5f, accentColor, true);
        pill.setIncludeFontPadding(false);
        pill.setBackground(glassDrawable(c, withAlpha(accentColor, 34), withAlpha(accentColor, 115), 1f, 9f));
        pill.setPadding(Ui.dp(c, 7), Ui.dp(c, compact ? 2 : 3), Ui.dp(c, 7), Ui.dp(c, compact ? 2 : 3));
        top.addView(pill);
        top.addView(Ui.spacer(c));
        TextView arrow = Ui.text(c, "›", compact ? 14f : 16f, 0x88FFFFFF, true);
        arrow.setIncludeFontPadding(false);
        top.addView(arrow);
        inner.addView(top);

        inner.addView(Ui.spacer(c));

        TextView titleView = Ui.text(c, title, compact ? 13f : 14f, Ui.TEXT, true);
        titleView.setIncludeFontPadding(false);
        titleView.setMaxLines(1);
        titleView.setEllipsize(android.text.TextUtils.TruncateAt.END);
        titleView.setAutoSizeTextTypeUniformWithConfiguration(
                10, compact ? 13 : 14, 1, TypedValue.COMPLEX_UNIT_SP);
        inner.addView(titleView, Ui.matchWrap());

        subtitleOut.setIncludeFontPadding(false);
        subtitleOut.setTextSize(compact ? 10.5f : 11f);
        subtitleOut.setTextColor(Ui.MUTED);
        subtitleOut.setMaxLines(2);
        subtitleOut.setEllipsize(android.text.TextUtils.TruncateAt.END);
        subtitleOut.setAutoSizeTextTypeUniformWithConfiguration(
                9, 11, 1, TypedValue.COMPLEX_UNIT_SP);
        LinearLayout.LayoutParams subLp = Ui.matchWrap();
        subLp.topMargin = Ui.dp(c, 2);
        inner.addView(subtitleOut, subLp);

        tile.addView(inner, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT));

        tile.setOnFocusChangeListener((v, hasFocus) -> applyFocusVisual(v, hasFocus, normalBg, focusBg));
        tile.setOnClickListener(v -> {
            if (onActivate != null) onActivate.run();
        });
        return tile;
    }

    static void applyFocusVisual(View v, boolean focused,
                                 GradientDrawable normalBg, GradientDrawable focusBg) {
        v.setBackground(focused ? focusBg : normalBg);
        float scale = focused ? 1.03f : 1.0f;
        v.animate().scaleX(scale).scaleY(scale).setDuration(130L).start();
        v.setElevation(focused ? Ui.dp(v.getContext(), 6f) : 0f);
    }

    static GradientDrawable glassDrawable(Context c, int fill, int stroke, float strokeDp, float radiusDp) {
        GradientDrawable d = new GradientDrawable();
        d.setShape(GradientDrawable.RECTANGLE);
        d.setColor(fill);
        d.setCornerRadius(Ui.dp(c, radiusDp));
        if (stroke != 0 && strokeDp > 0f) {
            d.setStroke(Math.max(1, Ui.dp(c, strokeDp)), stroke);
        }
        return d;
    }

    static int withAlpha(int color, int alpha) {
        return Color.argb(alpha, Color.red(color), Color.green(color), Color.blue(color));
    }

    /** Construye una leyenda de botón estilo consola Xbox para la barra inferior. */
    static LinearLayout consoleHint(Context c, String keyLabel, int keyColor, String action) {
        LinearLayout row = Ui.row(c);
        TextView badge = Ui.text(c, keyLabel, 10.5f, 0xFF0A0D14, true);
        badge.setGravity(Gravity.CENTER);
        badge.setBackground(glassDrawable(c, keyColor, 0, 0f, 10f));
        badge.setPadding(Ui.dp(c, 7), Ui.dp(c, 2), Ui.dp(c, 7), Ui.dp(c, 2));
        row.addView(badge);

        TextView text = Ui.text(c, action, 11.5f, 0xFFD0D8E8, true);
        LinearLayout.LayoutParams tLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        tLp.leftMargin = Ui.dp(c, 6);
        tLp.rightMargin = Ui.dp(c, 16);
        row.addView(text, tLp);
        return row;
    }

    /** Activa modo inmersivo horizontal aprovechando el área del cutout sin ocultar contenido. */
    @SuppressWarnings("deprecation")
    static void applyImmersiveWindow(Activity a) {
        if (a == null) return;
        a.setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_USER_LANDSCAPE);
        if (Build.VERSION.SDK_INT >= 28) {
            WindowManager.LayoutParams lp = a.getWindow().getAttributes();
            lp.layoutInDisplayCutoutMode =
                    WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
            a.getWindow().setAttributes(lp);
        }
        final View decor = a.getWindow().getDecorView();
        if (decor == null) return;
        decor.post(() -> {
            if (Build.VERSION.SDK_INT >= 30) {
                a.getWindow().setDecorFitsSystemWindows(false);
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
                                | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                                | View.SYSTEM_UI_FLAG_LAYOUT_STABLE);
            }
        });
    }

    /** Aplica márgenes seguros laterales (>=24dp) considerando notch / display cutouts y barras del sistema. */
    static void applySafeAreaInsets(Context c, View root, View target) {
        final int minSide = Ui.dp(c, 24);
        final int minVert = Ui.dp(c, isCompactLandscape(c) ? 10 : 14);
        target.setPadding(minSide, minVert, minSide, minVert);
        root.setOnApplyWindowInsetsListener((v, insets) -> {
            int l = 0, t = 0, r = 0, b = 0;
            if (Build.VERSION.SDK_INT >= 30) {
                android.graphics.Insets bars = insets.getInsets(
                        WindowInsets.Type.systemBars() | WindowInsets.Type.displayCutout());
                l = bars.left;
                t = bars.top;
                r = bars.right;
                b = bars.bottom;
            } else if (Build.VERSION.SDK_INT >= 28 && insets.getDisplayCutout() != null) {
                l = insets.getDisplayCutout().getSafeInsetLeft();
                t = insets.getDisplayCutout().getSafeInsetTop();
                r = insets.getDisplayCutout().getSafeInsetRight();
                b = insets.getDisplayCutout().getSafeInsetBottom();
            } else {
                l = insets.getSystemWindowInsetLeft();
                t = insets.getSystemWindowInsetTop();
                r = insets.getSystemWindowInsetRight();
                b = insets.getSystemWindowInsetBottom();
            }
            target.setPadding(Math.max(minSide, l + Ui.dp(c, 10)),
                    Math.max(minVert, t + Ui.dp(c, 6)),
                    Math.max(minSide, r + Ui.dp(c, 10)),
                    Math.max(minVert, b + Ui.dp(c, 6)));
            return insets;
        });
    }
}
