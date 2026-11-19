package com.pmc2android.xgowther2102;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.os.Build;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;

import java.util.Locale;

/**
 * Componentes táctiles vectoriales con iconografía de Xbox Series
 * (A/B/X/Y, LB/RB, LT/RT, L3/R3, View, Menu y cruceta D-Pad).
 */
final class XboxControls {

    interface ActionSink {
        void set(String source, int dikCode, boolean pressed);
    }

    enum Glyph {
        A, B, X, Y,
        LB, RB,
        LT, RT,
        L3, R3,
        VIEW, MENU
    }

    private XboxControls() {
    }

    /**
     * Filtra dispositivos virtuales internos del sistema (ej. uinput-xiaomi en POCO/Xiaomi,
     * botones laterales, lectores de huellas, etc.) para detectar solo mandos reales.
     */
    static boolean isPhysicalGamepad(InputDevice dev) {
        if (dev == null || dev.isVirtual()) return false;
        if (dev.getVendorId() == 0x0666 && dev.getProductId() == 0x0888) return false;
        String name = dev.getName();
        if (name != null) {
            String low = name.toLowerCase(Locale.US);
            if (low.startsWith("uinput-") || low.startsWith("uinput_")
                    || low.contains("uinput-xiaomi")
                    || low.contains("fingerprint") || low.contains("gpio")
                    || low.contains("qpnp") || low.contains("pwrkey")
                    || low.contains("headset") || low.contains("hall")) {
                return false;
            }
        }
        int src = dev.getSources();
        boolean hasGamepadFlag = (src & InputDevice.SOURCE_GAMEPAD) == InputDevice.SOURCE_GAMEPAD;
        boolean hasJoystickFlag = (src & InputDevice.SOURCE_JOYSTICK) == InputDevice.SOURCE_JOYSTICK;
        if (!hasGamepadFlag && !hasJoystickFlag) return false;

        boolean hasSticks = dev.getMotionRange(MotionEvent.AXIS_X) != null
                && dev.getMotionRange(MotionEvent.AXIS_Y) != null;
        if (Build.VERSION.SDK_INT >= 29 && !dev.isExternal() && !hasSticks) {
            return false;
        }
        if (hasGamepadFlag) return true;
        boolean[] hasBtns = dev.hasKeys(KeyEvent.KEYCODE_BUTTON_A, KeyEvent.KEYCODE_BUTTON_B);
        return hasBtns != null && hasBtns.length > 0
                && (hasBtns[0] || (hasBtns.length > 1 && hasBtns[1]));
    }

    static boolean hasConnectedGamepad() {
        return findConnectedGamepadName() != null;
    }

    static String findConnectedGamepadName() {
        for (int id : InputDevice.getDeviceIds()) {
            InputDevice dev = InputDevice.getDevice(id);
            if (isPhysicalGamepad(dev)) {
                String n = dev.getName();
                return (n != null && n.length() > 16) ? n.substring(0, 16) + "…" : (n != null ? n : "Xbox");
            }
        }
        return null;
    }

    /** Botón táctil individual con icono vectorial estilo Xbox Series. */
    static final class XboxButtonView extends View {
        private final Glyph glyph;
        private final String subLabel;
        private final String source;
        private final int dikPrimary;
        private final int dikSecondary;
        private final ActionSink sink;

        private final Paint fillPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint strokePaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint textPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint subPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Path shapePath = new Path();
        private final RectF workRect = new RectF();

        private int activePointer = -1;
        private boolean pressed;

        XboxButtonView(Context ctx, Glyph glyph, String subLabel, String source,
                       int dikPrimary, int dikSecondary, ActionSink sink) {
            super(ctx);
            this.glyph = glyph;
            this.subLabel = subLabel;
            this.source = source;
            this.dikPrimary = dikPrimary;
            this.dikSecondary = dikSecondary;
            this.sink = sink;

            strokePaint.setStyle(Paint.Style.STROKE);
            textPaint.setTypeface(Typeface.DEFAULT_BOLD);
            textPaint.setTextAlign(Paint.Align.CENTER);
            subPaint.setTypeface(Typeface.DEFAULT_BOLD);
            subPaint.setTextAlign(Paint.Align.CENTER);
        }

        private int accentColor() {
            switch (glyph) {
                case A: return 0xFF38C172;
                case B: return 0xFFE5484D;
                case X: return 0xFF3B82F6;
                case Y: return 0xFFF5C518;
                case RT: return 0xFF42C86A;
                case LT: return 0xFFE05A5A;
                default: return 0xFFE6ECF5;
            }
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            float w = getWidth();
            float h = getHeight();
            if (w <= 0f || h <= 0f) return;

            boolean hasSub = subLabel != null && !subLabel.isEmpty();
            float subH = hasSub ? Math.max(Ui.dp(getContext(), 10), h * 0.20f) : 0f;
            float iconH = h - subH;
            float cx = w * 0.5f;
            float cy = iconH * 0.5f;
            float pad = Ui.dp(getContext(), 2.5f);

            int accent = accentColor();
            fillPaint.setColor(pressed
                    ? withAlpha(accent, glyph == Glyph.A || glyph == Glyph.B
                            || glyph == Glyph.X || glyph == Glyph.Y ? 225 : 95)
                    : 0xAA10141D);
            strokePaint.setColor(pressed ? 0xFFFFFFFF : withAlpha(accent, 230));
            strokePaint.setStrokeWidth(Ui.dp(getContext(), pressed ? 2.2f : 1.8f));

            switch (glyph) {
                case A:
                case B:
                case X:
                case Y: {
                    float r = Math.min(w, iconH) * 0.5f - pad;
                    canvas.drawCircle(cx, cy, r, fillPaint);
                    canvas.drawCircle(cx, cy, r, strokePaint);
                    textPaint.setColor(pressed ? 0xFF0B0E14 : accent);
                    textPaint.setTextSize(r * 1.15f);
                    drawCenteredText(canvas, glyph.name(), cx, cy, textPaint);
                    break;
                }
                case LB:
                case RB: {
                    buildBumperPath(shapePath, pad, pad, w - pad, iconH - pad, glyph == Glyph.RB);
                    canvas.drawPath(shapePath, fillPaint);
                    canvas.drawPath(shapePath, strokePaint);
                    textPaint.setColor(0xFFFFFFFF);
                    textPaint.setTextSize(Math.min(iconH * 0.48f, w * 0.30f));
                    drawCenteredText(canvas, glyph.name(), cx, cy, textPaint);
                    break;
                }
                case LT:
                case RT: {
                    buildTriggerPath(shapePath, pad, pad, w - pad, iconH - pad, glyph == Glyph.RT);
                    canvas.drawPath(shapePath, fillPaint);
                    canvas.drawPath(shapePath, strokePaint);
                    textPaint.setColor(accent);
                    textPaint.setTextSize(Math.min(iconH * 0.44f, w * 0.32f));
                    drawCenteredText(canvas, glyph.name(), cx, cy - iconH * 0.04f, textPaint);
                    break;
                }
                case L3:
                case R3: {
                    float r = Math.min(w, iconH) * 0.46f - pad;
                    canvas.drawCircle(cx, cy, r, fillPaint);
                    canvas.drawCircle(cx, cy, r, strokePaint);
                    strokePaint.setStrokeWidth(Ui.dp(getContext(), 1.1f));
                    canvas.drawCircle(cx, cy, r * 0.72f, strokePaint);
                    textPaint.setColor(0xFFFFFFFF);
                    textPaint.setTextSize(r * 0.88f);
                    drawCenteredText(canvas, glyph == Glyph.L3 ? "L" : "R", cx, cy, textPaint);
                    break;
                }
                case VIEW: {
                    float r = Math.min(w, iconH) * 0.48f - pad;
                    canvas.drawCircle(cx, cy, r, fillPaint);
                    canvas.drawCircle(cx, cy, r, strokePaint);
                    float box = r * 0.58f;
                    strokePaint.setColor(0xFFFFFFFF);
                    strokePaint.setStrokeWidth(Ui.dp(getContext(), 1.5f));
                    workRect.set(cx - box * 0.78f, cy - box * 0.78f,
                            cx + box * 0.26f, cy + box * 0.26f);
                    canvas.drawRoundRect(workRect, Ui.dp(getContext(), 1.5f),
                            Ui.dp(getContext(), 1.5f), strokePaint);
                    workRect.set(cx - box * 0.26f, cy - box * 0.26f,
                            cx + box * 0.78f, cy + box * 0.78f);
                    fillPaint.setColor(0xDD10141D);
                    float rr = Ui.dp(getContext(), 1.5f);
                    canvas.drawRoundRect(workRect, rr, rr, fillPaint);
                    canvas.drawRoundRect(workRect, rr, rr, strokePaint);
                    break;
                }
                case MENU: {
                    float r = Math.min(w, iconH) * 0.48f - pad;
                    canvas.drawCircle(cx, cy, r, fillPaint);
                    canvas.drawCircle(cx, cy, r, strokePaint);
                    float hw = r * 0.50f;
                    float gap = r * 0.34f;
                    strokePaint.setColor(0xFFFFFFFF);
                    strokePaint.setStrokeCap(Paint.Cap.ROUND);
                    strokePaint.setStrokeWidth(Ui.dp(getContext(), 1.9f));
                    canvas.drawLine(cx - hw, cy - gap, cx + hw, cy - gap, strokePaint);
                    canvas.drawLine(cx - hw, cy, cx + hw, cy, strokePaint);
                    canvas.drawLine(cx - hw, cy + gap, cx + hw, cy + gap, strokePaint);
                    strokePaint.setStrokeCap(Paint.Cap.BUTT);
                    break;
                }
            }

            if (hasSub) {
                subPaint.setColor(pressed ? 0xFFFFFFFF : 0xD0DDE6F5);
                subPaint.setTextSize(Math.min(Ui.dp(getContext(), 9.5f), subH * 0.85f));
                canvas.drawText(subLabel, cx, h - Ui.dp(getContext(), 1.5f), subPaint);
            }
        }

        @Override
        public boolean onTouchEvent(MotionEvent ev) {
            int act = ev.getActionMasked();
            int idx = ev.getActionIndex();
            int pid = ev.getPointerId(idx);
            switch (act) {
                case MotionEvent.ACTION_DOWN:
                case MotionEvent.ACTION_POINTER_DOWN:
                    if (activePointer != -1) return true;
                    activePointer = pid;
                    setPressedState(true);
                    return true;
                case MotionEvent.ACTION_UP:
                case MotionEvent.ACTION_POINTER_UP:
                case MotionEvent.ACTION_CANCEL:
                    if (pid == activePointer || act == MotionEvent.ACTION_CANCEL) {
                        activePointer = -1;
                        setPressedState(false);
                    }
                    return true;
                default:
                    return true;
            }
        }

        private void setPressedState(boolean down) {
            if (pressed == down) return;
            pressed = down;
            sink.set(source, dikPrimary, down);
            if (dikSecondary != 0) sink.set(source, dikSecondary, down);
            invalidate();
        }
    }

    /** Cruceta D-Pad de 4 direcciones estilo Xbox Series. */
    static final class XboxDpadView extends View {
        private final ActionSink sink;
        private final int upPrimary, upSecondary;
        private final int downPrimary, downSecondary;
        private final int leftPrimary, leftSecondary;
        private final int rightPrimary, rightSecondary;

        private final Paint bgPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint armHighlight = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint borderPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Paint labelPaint = new Paint(Paint.ANTI_ALIAS_FLAG);
        private final Path crossPath = new Path();
        private final RectF armRect = new RectF();

        private int activePointer = -1;
        private boolean upOn, downOn, leftOn, rightOn;

        XboxDpadView(Context ctx, ActionSink sink,
                     int upPrimary, int upSecondary,
                     int downPrimary, int downSecondary,
                     int leftPrimary, int leftSecondary,
                     int rightPrimary, int rightSecondary) {
            super(ctx);
            this.sink = sink;
            this.upPrimary = upPrimary;
            this.upSecondary = upSecondary;
            this.downPrimary = downPrimary;
            this.downSecondary = downSecondary;
            this.leftPrimary = leftPrimary;
            this.leftSecondary = leftSecondary;
            this.rightPrimary = rightPrimary;
            this.rightSecondary = rightSecondary;

            bgPaint.setColor(0xAA10141D);
            bgPaint.setStyle(Paint.Style.FILL);
            armHighlight.setColor(0xCC3B82F6);
            armHighlight.setStyle(Paint.Style.FILL);
            borderPaint.setColor(0xDDE6ECF5);
            borderPaint.setStyle(Paint.Style.STROKE);
            borderPaint.setStrokeWidth(Ui.dp(ctx, 1.6f));
            labelPaint.setColor(0xDDFFFFFF);
            labelPaint.setTypeface(Typeface.DEFAULT_BOLD);
            labelPaint.setTextAlign(Paint.Align.CENTER);
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            float w = getWidth();
            float h = getHeight();
            if (w <= 0f || h <= 0f) return;

            float pad = Ui.dp(getContext(), 3f);
            float cx = w * 0.5f;
            float cy = h * 0.5f;
            float size = Math.min(w, h) - pad * 2f;
            float armW = size * 0.34f;
            float halfArm = armW * 0.5f;
            float halfSize = size * 0.5f;
            float r = Ui.dp(getContext(), 5f);

            crossPath.reset();
            armRect.set(cx - halfArm, cy - halfSize, cx + halfArm, cy + halfSize);
            crossPath.addRoundRect(armRect, r, r, Path.Direction.CW);
            armRect.set(cx - halfSize, cy - halfArm, cx + halfSize, cy + halfArm);
            crossPath.addRoundRect(armRect, r, r, Path.Direction.CW);

            canvas.drawPath(crossPath, bgPaint);

            if (upOn) {
                armRect.set(cx - halfArm, cy - halfSize, cx + halfArm, cy - halfArm * 0.3f);
                canvas.drawRoundRect(armRect, r, r, armHighlight);
            }
            if (downOn) {
                armRect.set(cx - halfArm, cy + halfArm * 0.3f, cx + halfArm, cy + halfSize);
                canvas.drawRoundRect(armRect, r, r, armHighlight);
            }
            if (leftOn) {
                armRect.set(cx - halfSize, cy - halfArm, cx - halfArm * 0.3f, cy + halfArm);
                canvas.drawRoundRect(armRect, r, r, armHighlight);
            }
            if (rightOn) {
                armRect.set(cx + halfArm * 0.3f, cy - halfArm, cx + halfSize, cy + halfArm);
                canvas.drawRoundRect(armRect, r, r, armHighlight);
            }

            canvas.drawPath(crossPath, borderPaint);

            labelPaint.setTextSize(armW * 0.45f);
            float off = halfSize - halfArm * 0.65f;
            drawCenteredText(canvas, "▲", cx, cy - off, labelPaint);
            drawCenteredText(canvas, "▼", cx, cy + off, labelPaint);
            drawCenteredText(canvas, "◀", cx - off, cy, labelPaint);
            drawCenteredText(canvas, "▶", cx + off, cy, labelPaint);
        }

        @Override
        public boolean onTouchEvent(MotionEvent ev) {
            int act = ev.getActionMasked();
            int idx = ev.getActionIndex();
            int pid = ev.getPointerId(idx);
            switch (act) {
                case MotionEvent.ACTION_DOWN:
                case MotionEvent.ACTION_POINTER_DOWN:
                    if (activePointer != -1) return true;
                    activePointer = pid;
                    updateDirection(ev.getX(idx), ev.getY(idx));
                    return true;
                case MotionEvent.ACTION_MOVE: {
                    int slot = ev.findPointerIndex(activePointer);
                    if (slot >= 0) updateDirection(ev.getX(slot), ev.getY(slot));
                    return true;
                }
                case MotionEvent.ACTION_UP:
                case MotionEvent.ACTION_POINTER_UP:
                case MotionEvent.ACTION_CANCEL:
                    if (pid == activePointer || act == MotionEvent.ACTION_CANCEL) {
                        activePointer = -1;
                        applyDirections(false, false, false, false);
                    }
                    return true;
                default:
                    return true;
            }
        }

        private void updateDirection(float x, float y) {
            float dx = x - getWidth() * 0.5f;
            float dy = y - getHeight() * 0.5f;
            float dead = Math.min(getWidth(), getHeight()) * 0.12f;
            boolean absX = Math.abs(dx) >= Math.abs(dy);
            boolean u = !absX && dy < -dead;
            boolean d = !absX && dy > dead;
            boolean l = absX && dx < -dead;
            boolean r = absX && dx > dead;
            applyDirections(u, d, l, r);
        }

        private void applyDirections(boolean u, boolean d, boolean l, boolean r) {
            if (u == upOn && d == downOn && l == leftOn && r == rightOn) return;
            upOn = u;
            downOn = d;
            leftOn = l;
            rightOn = r;
            emit("xbox-touch-dpad-u", upPrimary, upSecondary, u);
            emit("xbox-touch-dpad-d", downPrimary, downSecondary, d);
            emit("xbox-touch-dpad-l", leftPrimary, leftSecondary, l);
            emit("xbox-touch-dpad-r", rightPrimary, rightSecondary, r);
            invalidate();
        }

        private void emit(String src, int p, int s, boolean down) {
            if (p != 0) sink.set(src, p, down);
            if (s != 0) sink.set(src, s, down);
        }
    }

    private static void buildBumperPath(Path p, float l, float t, float r, float b, boolean right) {
        p.reset();
        float w = r - l;
        float h = b - t;
        if (right) {
            p.moveTo(l, t + h * 0.12f);
            p.quadTo(l + w * 0.55f, t, r - w * 0.08f, t + h * 0.30f);
            p.lineTo(r, b - h * 0.16f);
            p.quadTo(r, b, r - w * 0.14f, b);
            p.lineTo(l + w * 0.08f, b);
            p.quadTo(l, b, l, b - h * 0.18f);
        } else {
            p.moveTo(r, t + h * 0.12f);
            p.quadTo(r - w * 0.55f, t, l + w * 0.08f, t + h * 0.30f);
            p.lineTo(l, b - h * 0.16f);
            p.quadTo(l, b, l + w * 0.14f, b);
            p.lineTo(r - w * 0.08f, b);
            p.quadTo(r, b, r, b - h * 0.18f);
        }
        p.close();
    }

    private static void buildTriggerPath(Path p, float l, float t, float r, float b, boolean right) {
        p.reset();
        float w = r - l;
        float h = b - t;
        if (right) {
            p.moveTo(l + w * 0.06f, t);
            p.lineTo(r - w * 0.18f, t);
            p.quadTo(r, t, r, t + h * 0.24f);
            p.lineTo(r - w * 0.08f, b - h * 0.22f);
            p.quadTo(r - w * 0.25f, b, l + w * 0.10f, b);
            p.quadTo(l, b, l, b - h * 0.22f);
            p.lineTo(l, t + h * 0.12f);
            p.quadTo(l, t, l + w * 0.06f, t);
        } else {
            p.moveTo(r - w * 0.06f, t);
            p.lineTo(l + w * 0.18f, t);
            p.quadTo(l, t, l, t + h * 0.24f);
            p.lineTo(l + w * 0.08f, b - h * 0.22f);
            p.quadTo(l + w * 0.25f, b, r - w * 0.10f, b);
            p.quadTo(r, b, r, b - h * 0.22f);
            p.lineTo(r, t + h * 0.12f);
            p.quadTo(r, t, r - w * 0.06f, t);
        }
        p.close();
    }

    private static void drawCenteredText(Canvas c, String text, float cx, float cy, Paint paint) {
        Paint.FontMetrics fm = paint.getFontMetrics();
        float y = cy - (fm.ascent + fm.descent) * 0.5f;
        c.drawText(text, cx, y, paint);
    }

    private static int withAlpha(int color, int alpha) {
        return (color & 0x00FFFFFF) | ((alpha & 0xFF) << 24);
    }
}
