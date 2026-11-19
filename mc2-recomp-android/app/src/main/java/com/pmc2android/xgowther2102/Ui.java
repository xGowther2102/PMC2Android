package com.pmc2android.xgowther2102;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;

/** Helpers de UI programática: sin AndroidX, sin XML de layouts. */
final class Ui {

    static final int BG = 0xFF0B0E14;
    static final int PANEL = 0xFF141A26;
    static final int STROKE = 0xFF232B3C;
    static final int TEXT = 0xFFE9EDF6;
    static final int MUTED = 0xFF8B95A9;
    static final int BLUE = 0xFF3D7BFF;
    static final int ACCENT = 0xFFFF5A3C;
    static final int GREEN = 0xFF35D07F;
    static final int AMBER = 0xFFF2B33D;
    static final int RED = 0xFFFF5D6C;

    private Ui() {
    }

    static int dp(Context c, float v) {
        return Math.round(TypedValue.applyDimension(
                TypedValue.COMPLEX_UNIT_DIP, v, c.getResources().getDisplayMetrics()));
    }

    static GradientDrawable rounded(Context c, int fill, int stroke, float radiusDp) {
        GradientDrawable d = new GradientDrawable();
        d.setShape(GradientDrawable.RECTANGLE);
        d.setColor(fill);
        d.setCornerRadius(dp(c, radiusDp));
        if (stroke != 0) {
            d.setStroke(dp(c, 1), stroke);
        }
        return d;
    }

    static TextView text(Context c, CharSequence s, float sp, int color, boolean bold) {
        TextView t = new TextView(c);
        t.setText(s);
        t.setTextSize(TypedValue.COMPLEX_UNIT_SP, sp);
        t.setTextColor(color);
        if (bold) t.setTypeface(Typeface.DEFAULT_BOLD);
        t.setLineSpacing(dp(c, 2), 1f);
        return t;
    }

    static TextView label(Context c, String s) {
        TextView t = text(c, s.toUpperCase(), 11f, MUTED, true);
        t.setLetterSpacing(0.12f);
        return t;
    }

    static TextView chip(Context c, String s, int color) {
        TextView t = text(c, s, 11f, color, true);
        t.setLetterSpacing(0.08f);
        int fill = Color.argb(28, Color.red(color), Color.green(color), Color.blue(color));
        int stroke = Color.argb(90, Color.red(color), Color.green(color), Color.blue(color));
        t.setBackground(rounded(c, fill, stroke, 20));
        t.setPadding(dp(c, 10), dp(c, 4), dp(c, 10), dp(c, 4));
        return t;
    }

    static Button button(Context c, String s, int fill, int textColor, int stroke) {
        Button b = new Button(c);
        b.setText(s);
        b.setAllCaps(false);
        b.setTextSize(TypedValue.COMPLEX_UNIT_SP, 15f);
        b.setTextColor(textColor);
        b.setTypeface(Typeface.DEFAULT_BOLD);
        b.setGravity(Gravity.CENTER);
        b.setMinHeight(0);
        b.setMinimumHeight(0);
        b.setPadding(dp(c, 16), dp(c, 14), dp(c, 16), dp(c, 14));
        b.setBackground(rounded(c, fill, stroke, 14));
        b.setStateListAnimator(null);
        b.setElevation(0f);
        return b;
    }

    static Button primary(Context c, String s) {
        return button(c, s, BLUE, 0xFFFFFFFF, 0);
    }

    static Button accent(Context c, String s) {
        return button(c, s, ACCENT, 0xFFFFFFFF, 0);
    }

    static Button ghost(Context c, String s) {
        return button(c, s, 0x00000000, TEXT, STROKE);
    }

    static LinearLayout card(Context c) {
        LinearLayout l = new LinearLayout(c);
        l.setOrientation(LinearLayout.VERTICAL);
        l.setPadding(dp(c, 16), dp(c, 16), dp(c, 16), dp(c, 16));
        l.setBackground(rounded(c, PANEL, STROKE, 18));
        return l;
    }

    static LinearLayout column(Context c) {
        LinearLayout l = new LinearLayout(c);
        l.setOrientation(LinearLayout.VERTICAL);
        return l;
    }

    static LinearLayout row(Context c) {
        LinearLayout l = new LinearLayout(c);
        l.setOrientation(LinearLayout.HORIZONTAL);
        l.setGravity(Gravity.CENTER_VERTICAL);
        return l;
    }

    static View gap(Context c, int dp) {
        View v = new View(c);
        v.setLayoutParams(new LinearLayout.LayoutParams(1, dp(c, dp)));
        return v;
    }

    static View spacer(Context c) {
        View v = new View(c);
        v.setLayoutParams(new LinearLayout.LayoutParams(0, 1, 1f));
        return v;
    }

    static LinearLayout.LayoutParams lp(Context c, int w, int h) {
        return new LinearLayout.LayoutParams(w, h);
    }

    static LinearLayout.LayoutParams matchWrap() {
        return new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT,
                LinearLayout.LayoutParams.WRAP_CONTENT);
    }

    /** Fila "punto de estado + etiqueta + valor". */
    static LinearLayout statusRow(Context c, TextView dot, String label, TextView value) {
        LinearLayout r = row(c);
        r.setPadding(0, dp(c, 7), 0, dp(c, 7));
        LinearLayout.LayoutParams dotLp = new LinearLayout.LayoutParams(dp(c, 10), dp(c, 10));
        dotLp.rightMargin = dp(c, 10);
        r.addView(dot, dotLp);
        TextView l = text(c, label, 13f, MUTED, false);
        LinearLayout.LayoutParams lLp = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.WRAP_CONTENT, 1f);
        lLp.rightMargin = dp(c, 10);
        r.addView(l, lLp);
        value.setGravity(Gravity.END);
        value.setMaxLines(2);
        value.setEllipsize(android.text.TextUtils.TruncateAt.END);
        value.setMaxWidth(dp(c, 200));
        r.addView(value, new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT,
                LinearLayout.LayoutParams.WRAP_CONTENT));
        return r;
    }

    static TextView dot(Context c, int color) {
        TextView t = text(c, "●", 12f, color, true);
        t.setIncludeFontPadding(false);
        return t;
    }

    static void setDot(TextView dot, int color) {
        dot.setTextColor(color);
    }

    static ScrollView page(Context c, LinearLayout content) {
        ScrollView s = new ScrollView(c);
        s.setFillViewport(true);
        s.setBackgroundColor(BG);
        s.addView(content, new ScrollView.LayoutParams(
                ScrollView.LayoutParams.MATCH_PARENT,
                ScrollView.LayoutParams.WRAP_CONTENT));
        return s;
    }
}
