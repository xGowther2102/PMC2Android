#ifndef MC2_DMUSIC_H
#define MC2_DMUSIC_H

/*
 * Self-contained DirectMusic RIFF (DLS + DMSG/SGT) software synthesizer & sequencer.
 * Included by pc_runtime.c; mixes into mc2_audio_mix() at 44100 Hz stereo.
 * Supports multiple cached .dls banks and up to MC2_DM_MAX_PLAY_SLOTS concurrent segments
 * (menu theme fe_hard_01..04.sgt + in-game DirectMusic ambients).
 */

#include <math.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef DM_LOGI
#define DM_LOGI(...) ((void)0)
#endif
#ifndef DM_LOGW
#define DM_LOGW(...) ((void)0)
#endif

/* Provided by pc_runtime.c */
static FILE *open_registered_data(const char *rel_path, const char *mode);

#define MC2_DM_MAX_DLS        8
#define MC2_DM_MAX_SEGS       16
#define MC2_DM_MAX_PLAY_SLOTS 4
#define MC2_DM_MAX_VOICES     64
#define MC2_DM_PPQ            768.0

typedef struct {
    int16_t *pcm16;
    uint32_t num_frames;
    uint32_t sample_rate;
    int channels;
    uint16_t unity_note;
    int16_t fine_tune;
    int has_loop;
    uint32_t loop_start;
    uint32_t loop_len;
    uint32_t wvpl_rel_off;
} DmWave;

typedef struct {
    uint8_t key_lo, key_hi;
    uint8_t vel_lo, vel_hi;
    int wave_idx;
    int has_wsmp;
    uint16_t unity_note;
    int16_t fine_tune;
    int has_loop;
    uint32_t loop_start;
    uint32_t loop_len;
    float rgn_gain;
} DmRegion;

typedef struct {
    uint32_t bank;   /* bit 31 = drum flag in DLS insh.ulBank */
    uint32_t patch;  /* 0..127 */
    DmRegion *regions;
    int num_regions;
} DmInstrument;

typedef struct {
    int in_use;
    char name[128];
    DmWave *waves;
    int num_waves;
    uint32_t *ptbl_cues;
    int num_cues;
    DmInstrument *insts;
    int num_insts;
} DmDlsBank;

typedef struct {
    uint32_t mt_time;
    uint32_t mt_dur;
    uint32_t pchannel;
    uint8_t status;
    uint8_t data1;
    uint8_t data2;
} DmSeqEvent;

typedef struct {
    uint32_t mt_time;
    double bpm;
} DmTempoEvent;

typedef struct {
    uint32_t pchannel;
    uint32_t dw_patch;
    uint8_t pan;      /* 0..127, 64 center */
    uint8_t volume;   /* 0..127 */
    int16_t transpose;
    int dls_idx;      /* index in g_dm_dls */
    int inst_idx;     /* cached instrument index inside dls_idx */
} DmBandEntry;

typedef struct {
    int in_use;
    uint32_t guest_va;
    char path[256];
    uint32_t repeats;
    uint32_t mt_length;
    uint32_t mt_play_start;
    uint32_t mt_loop_start;
    uint32_t mt_loop_end;
    uint32_t resolution;
    DmSeqEvent *events;
    int num_events;
    DmTempoEvent *tempos;
    int num_tempos;
    DmBandEntry *band;
    int num_band;
} DmSegment;

typedef struct {
    int in_use;
    int seg_idx;
    uint32_t seg_va;
    uint32_t state_va;
    uint32_t audiopath_va;
    int is_playing;
    double tick_pos;
    double cur_bpm;
    int next_evt_idx;
    int next_tempo_idx;
    uint32_t loops_left;
    float vol_gain;
    uint32_t mt_override_start;
    int has_override_start;
} DmPlaySlot;

typedef struct {
    int active;
    int slot_idx;
    int releasing;
    const DmWave *wave;
    double sample_pos;
    double step;
    double stop_tick;
    float gain_l;
    float gain_r;
    float env;
    float rel_step;
    int has_loop;
    uint32_t loop_start;
    uint32_t loop_end;
} DmVoice;

static pthread_mutex_t g_dm_mutex = PTHREAD_MUTEX_INITIALIZER;
static DmDlsBank g_dm_dls[MC2_DM_MAX_DLS];
static DmSegment g_dm_segs[MC2_DM_MAX_SEGS];
static DmPlaySlot g_dm_slots[MC2_DM_MAX_PLAY_SLOTS];
static DmVoice g_dm_voices[MC2_DM_MAX_VOICES];
static float g_dm_master_gain = 1.0f;

static uint16_t dm_rd16(const uint8_t *p) {
    uint16_t v;
    memcpy(&v, p, 2);
    return v;
}

static int16_t dm_rds16(const uint8_t *p) {
    int16_t v;
    memcpy(&v, p, 2);
    return v;
}

static uint32_t dm_rd32(const uint8_t *p) {
    uint32_t v;
    memcpy(&v, p, 4);
    return v;
}

static int32_t dm_rds32(const uint8_t *p) {
    int32_t v;
    memcpy(&v, p, 4);
    return v;
}

static double dm_rd64d(const uint8_t *p) {
    double v;
    memcpy(&v, p, 8);
    return v;
}

static void dm_norm_basename(const char *in, char *out, size_t out_sz) {
    if (!in) { out[0] = '\0'; return; }
    const char *base = in;
    for (const char *p = in; *p; p++) {
        if (*p == '/' || *p == '\\') base = p + 1;
    }
    snprintf(out, out_sz, "%s", base);
    /* Trim trailing whitespace often present in DirectMusic chunks */
    size_t len = strlen(out);
    while (len > 0 && (out[len - 1] == ' ' || out[len - 1] == '\t' ||
                       out[len - 1] == '\r' || out[len - 1] == '\n')) {
        out[--len] = '\0';
    }
}

static uint8_t *dm_read_asset(const char *rel_or_name, uint32_t *out_len) {
    *out_len = 0;
    if (!rel_or_name || !rel_or_name[0]) return NULL;
    char base[128];
    dm_norm_basename(rel_or_name, base, sizeof(base));
    char try_paths[4][256];
    snprintf(try_paths[0], sizeof(try_paths[0]), "audio/directmusic/pc/%s", base);
    snprintf(try_paths[1], sizeof(try_paths[1]), "audio/directmusic/%s", base);
    snprintf(try_paths[2], sizeof(try_paths[2]), "%s", rel_or_name);
    snprintf(try_paths[3], sizeof(try_paths[3]), "%s", base);
    FILE *fp = NULL;
    for (int i = 0; i < 4 && !fp; i++) {
        fp = open_registered_data(try_paths[i], "rb");
    }
    if (!fp) return NULL;
    fseek(fp, 0, SEEK_END);
    long sz = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (sz <= 12 || sz > 32 * 1024 * 1024) {
        fclose(fp);
        return NULL;
    }
    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
    if (!buf) { fclose(fp); return NULL; }
    size_t got = fread(buf, 1, (size_t)sz, fp);
    fclose(fp);
    if (got != (size_t)sz) { free(buf); return NULL; }
    *out_len = (uint32_t)sz;
    return buf;
}

static void dm_parse_wsmp(const uint8_t *p, uint32_t sz,
                          uint16_t *unity, int16_t *fine,
                          int *has_loop, uint32_t *lstart, uint32_t *llen) {
    if (sz < 20) return;
    *unity = dm_rd16(p + 4);
    *fine = dm_rds16(p + 6);
    uint32_t cLoops = dm_rd32(p + 16);
    if (cLoops > 0 && sz >= 36) {
        *has_loop = 1;
        *lstart = dm_rd32(p + 28);
        *llen = dm_rd32(p + 32);
    }
}

static void dm_parse_dls_rgn(const uint8_t *d, uint32_t s, uint32_t e,
                             DmRegion *r) {
    memset(r, 0, sizeof(*r));
    r->key_hi = 127;
    r->vel_hi = 127;
    r->wave_idx = -1;
    r->rgn_gain = 1.0f;
    uint32_t off = s;
    while (off + 8 <= e) {
        uint32_t sz = dm_rd32(d + off + 4);
        uint32_t ce = off + 8 + sz;
        if (ce > e) ce = e;
        if (memcmp(d + off, "rgnh", 4) == 0 && sz >= 8) {
            uint16_t kl = dm_rd16(d + off + 8);
            uint16_t kh = dm_rd16(d + off + 10);
            uint16_t vl = dm_rd16(d + off + 12);
            uint16_t vh = dm_rd16(d + off + 14);
            r->key_lo = (uint8_t)(kl > 127 ? 127 : kl);
            r->key_hi = (uint8_t)(kh > 127 ? 127 : kh);
            r->vel_lo = (uint8_t)(vl > 127 ? 127 : vl);
            r->vel_hi = (uint8_t)(vh > 127 ? 127 : vh);
            if (r->vel_hi == 0 && r->vel_lo == 0) r->vel_hi = 127;
        } else if (memcmp(d + off, "wlnk", 4) == 0 && sz >= 12) {
            r->wave_idx = (int)dm_rd32(d + off + 16); /* ulTableIndex */
        } else if (memcmp(d + off, "wsmp", 4) == 0 && sz >= 20) {
            r->has_wsmp = 1;
            r->unity_note = 60;
            dm_parse_wsmp(d + off + 8, ce - (off + 8),
                          &r->unity_note, &r->fine_tune,
                          &r->has_loop, &r->loop_start, &r->loop_len);
        }
        off += 8 + sz + (sz & 1u);
    }
}

static void dm_parse_dls_wave(const uint8_t *d, uint32_t s, uint32_t e,
                              uint32_t rel_off, DmWave *w) {
    memset(w, 0, sizeof(*w));
    w->unity_note = 60;
    w->sample_rate = 22050;
    w->channels = 1;
    w->wvpl_rel_off = rel_off;
    int bits = 16;
    const uint8_t *pcm_ptr = NULL;
    uint32_t pcm_bytes = 0;
    uint32_t off = s;
    while (off + 8 <= e) {
        uint32_t sz = dm_rd32(d + off + 4);
        uint32_t ce = off + 8 + sz;
        if (ce > e) ce = e;
        if (memcmp(d + off, "fmt ", 4) == 0 && sz >= 16) {
            uint16_t tag = dm_rd16(d + off + 8);
            w->channels = dm_rd16(d + off + 10);
            w->sample_rate = dm_rd32(d + off + 12);
            bits = dm_rd16(d + off + 22);
            if (tag != 1) pcm_bytes = 0;
        } else if (memcmp(d + off, "wsmp", 4) == 0 && sz >= 20) {
            dm_parse_wsmp(d + off + 8, ce - (off + 8),
                          &w->unity_note, &w->fine_tune,
                          &w->has_loop, &w->loop_start, &w->loop_len);
        } else if (memcmp(d + off, "data", 4) == 0) {
            pcm_ptr = d + off + 8;
            pcm_bytes = ce - (off + 8);
        }
        off += 8 + sz + (sz & 1u);
    }
    if (pcm_ptr && pcm_bytes > 0 && (w->channels == 1 || w->channels == 2)) {
        if (bits == 16) {
            uint32_t n = pcm_bytes / (uint32_t)(w->channels * 2);
            w->pcm16 = (int16_t *)malloc(n * (uint32_t)w->channels * sizeof(int16_t));
            if (w->pcm16) {
                memcpy(w->pcm16, pcm_ptr, n * (uint32_t)w->channels * 2u);
                w->num_frames = n;
            }
        } else if (bits == 8) {
            uint32_t n = pcm_bytes / (uint32_t)w->channels;
            uint32_t samples = n * (uint32_t)w->channels;
            w->pcm16 = (int16_t *)malloc(samples * sizeof(int16_t));
            if (w->pcm16) {
                for (uint32_t i = 0; i < samples; i++) {
                    w->pcm16[i] = (int16_t)(((int)pcm_ptr[i] - 128) * 256);
                }
                w->num_frames = n;
            }
        }
    }
}

static int mc2_dm_load_dls_locked(const char *rel_or_name) {
    char base[128];
    dm_norm_basename(rel_or_name, base, sizeof(base));
    if (!base[0]) return -1;
    for (int i = 0; i < MC2_DM_MAX_DLS; i++) {
        if (g_dm_dls[i].in_use && strcasecmp(g_dm_dls[i].name, base) == 0) return i;
    }
    int slot = -1;
    for (int i = 0; i < MC2_DM_MAX_DLS; i++) {
        if (!g_dm_dls[i].in_use) { slot = i; break; }
    }
    if (slot < 0) return -1;

    uint32_t len = 0;
    uint8_t *d = dm_read_asset(base, &len);
    if (!d || len < 16 || memcmp(d, "RIFF", 4) != 0 || memcmp(d + 8, "DLS ", 4) != 0) {
        free(d);
        return -1;
    }

    DmDlsBank *b = &g_dm_dls[slot];
    memset(b, 0, sizeof(*b));
    b->in_use = 1;
    snprintf(b->name, sizeof(b->name), "%s", base);

    uint32_t off = 12;
    while (off + 8 <= len) {
        uint32_t sz = dm_rd32(d + off + 4);
        uint32_t ce = off + 8 + sz;
        if (ce > len) ce = len;
        if (memcmp(d + off, "ptbl", 4) == 0 && sz >= 8) {
            uint32_t cbSize = dm_rd32(d + off + 8);
            uint32_t cCues = dm_rd32(d + off + 12);
            if (cCues > 0 && off + 8 + cbSize + cCues * 4u <= ce) {
                b->ptbl_cues = (uint32_t *)malloc(cCues * sizeof(uint32_t));
                if (b->ptbl_cues) {
                    for (uint32_t k = 0; k < cCues; k++) {
                        b->ptbl_cues[k] = dm_rd32(d + off + 8 + cbSize + k * 4u);
                    }
                    b->num_cues = (int)cCues;
                }
            }
        } else if (memcmp(d + off, "LIST", 4) == 0 && sz >= 4) {
            const uint8_t *ft = d + off + 8;
            if (memcmp(ft, "wvpl", 4) == 0) {
                uint32_t wv_base = off + 12;
                int cap = 64;
                b->waves = (DmWave *)calloc((size_t)cap, sizeof(DmWave));
                uint32_t wo = wv_base;
                while (wo + 12 <= ce && b->waves) {
                    uint32_t wsz = dm_rd32(d + wo + 4);
                    uint32_t wce = wo + 8 + wsz;
                    if (wce > ce) wce = ce;
                    if (memcmp(d + wo, "LIST", 4) == 0 && memcmp(d + wo + 8, "wave", 4) == 0) {
                        if (b->num_waves >= cap) {
                            cap *= 2;
                            b->waves = (DmWave *)realloc(b->waves, (size_t)cap * sizeof(DmWave));
                        }
                        if (b->waves) {
                            dm_parse_dls_wave(d, wo + 12, wce, wo - wv_base, &b->waves[b->num_waves++]);
                        }
                    }
                    wo += 8 + wsz + (wsz & 1u);
                }
            } else if (memcmp(ft, "lins", 4) == 0) {
                int icap = 32;
                b->insts = (DmInstrument *)calloc((size_t)icap, sizeof(DmInstrument));
                uint32_t io = off + 12;
                while (io + 12 <= ce && b->insts) {
                    uint32_t isz = dm_rd32(d + io + 4);
                    uint32_t ice = io + 8 + isz;
                    if (ice > ce) ice = ce;
                    if (memcmp(d + io, "LIST", 4) == 0 && memcmp(d + io + 8, "ins ", 4) == 0) {
                        if (b->num_insts >= icap) {
                            icap *= 2;
                            b->insts = (DmInstrument *)realloc(b->insts, (size_t)icap * sizeof(DmInstrument));
                        }
                        if (b->insts) {
                            DmInstrument *ins = &b->insts[b->num_insts++];
                            memset(ins, 0, sizeof(*ins));
                            uint32_t co = io + 12;
                            while (co + 8 <= ice) {
                                uint32_t csz = dm_rd32(d + co + 4);
                                uint32_t cce = co + 8 + csz;
                                if (cce > ice) cce = ice;
                                if (memcmp(d + co, "insh", 4) == 0 && csz >= 12) {
                                    ins->bank = dm_rd32(d + co + 12);
                                    ins->patch = dm_rd32(d + co + 16);
                                } else if (memcmp(d + co, "LIST", 4) == 0 && csz >= 4 &&
                                           memcmp(d + co + 8, "lrgn", 4) == 0) {
                                    int rcap = 16;
                                    ins->regions = (DmRegion *)calloc((size_t)rcap, sizeof(DmRegion));
                                    uint32_t ro = co + 12;
                                    while (ro + 12 <= cce && ins->regions) {
                                        uint32_t rsz = dm_rd32(d + ro + 4);
                                        uint32_t rce = ro + 8 + rsz;
                                        if (rce > cce) rce = cce;
                                        if (memcmp(d + ro, "LIST", 4) == 0 &&
                                            (memcmp(d + ro + 8, "rgn ", 4) == 0 ||
                                             memcmp(d + ro + 8, "rgn2", 4) == 0)) {
                                            if (ins->num_regions >= rcap) {
                                                rcap *= 2;
                                                ins->regions = (DmRegion *)realloc(
                                                    ins->regions, (size_t)rcap * sizeof(DmRegion));
                                            }
                                            if (ins->regions) {
                                                dm_parse_dls_rgn(d, ro + 12, rce,
                                                                 &ins->regions[ins->num_regions++]);
                                            }
                                        }
                                        ro += 8 + rsz + (rsz & 1u);
                                    }
                                }
                                co += 8 + csz + (csz & 1u);
                            }
                        }
                    }
                    io += 8 + isz + (isz & 1u);
                }
            }
        }
        off += 8 + sz + (sz & 1u);
    }

    /* Remap each region's ptbl table index -> index into b->waves[] via cue offset */
    for (int i = 0; i < b->num_insts; i++) {
        for (int r = 0; r < b->insts[i].num_regions; r++) {
            DmRegion *rg = &b->insts[i].regions[r];
            int tidx = rg->wave_idx;
            if (tidx >= 0 && tidx < b->num_cues && b->ptbl_cues) {
                uint32_t target_off = b->ptbl_cues[tidx];
                int found = -1;
                for (int w = 0; w < b->num_waves; w++) {
                    if (b->waves[w].wvpl_rel_off == target_off) { found = w; break; }
                }
                rg->wave_idx = (found >= 0) ? found : (tidx < b->num_waves ? tidx : -1);
            } else if (tidx >= b->num_waves) {
                rg->wave_idx = -1;
            }
        }
    }

    free(d);
    DM_LOGI("[DMUSIC8] DLS cargado '%s': insts=%d waves=%d cues=%d",
            b->name, b->num_insts, b->num_waves, b->num_cues);
    return slot;
}

static int dm_find_inst(const DmDlsBank *b, uint32_t dw_patch) {
    if (!b || !b->in_use) return -1;
    uint32_t patch = dw_patch & 0x7Fu;
    uint32_t bank_no_drum = (dw_patch >> 8) & 0x7FFFu;
    int drum = (dw_patch & 0x80000000u) ? 1 : 0;
    for (int i = 0; i < b->num_insts; i++) {
        uint32_t ib = b->insts[i].bank & 0x7FFFu;
        int idrum = (b->insts[i].bank & 0x80000000u) ? 1 : 0;
        if (b->insts[i].patch == patch && ib == bank_no_drum && idrum == drum) return i;
    }
    for (int i = 0; i < b->num_insts; i++) {
        uint32_t ib = b->insts[i].bank & 0x7FFFu;
        if (b->insts[i].patch == patch && ib == bank_no_drum) return i;
    }
    for (int i = 0; i < b->num_insts; i++) {
        if (b->insts[i].patch == patch) return i;
    }
    return -1;
}

static void dm_parse_dmbt(const uint8_t *d, uint32_t s, uint32_t e, DmSegment *seg) {
    /* Locate all 'bins' and associated 'DMRF'/'file' chunks inside DMBT */
    int cap = 16;
    seg->band = (DmBandEntry *)calloc((size_t)cap, sizeof(DmBandEntry));
    int default_dls = -1;
    uint32_t off = s;
    /* Iterative stack-free scan for lbin containers via LIST/RIFF chunk traversal */
    /* Inside DMBT -> LIST(lbdl) -> LIST(lbnd) -> RIFF(DMBD) -> LIST(lbil) -> LIST(lbin) */
    while (off + 8 <= e) {
        uint32_t sz = dm_rd32(d + off + 4);
        uint32_t ce = off + 8 + sz;
        if (ce > e) ce = e;
        if (memcmp(d + off, "LIST", 4) == 0 && sz >= 4 && memcmp(d + off + 8, "lbdl", 4) == 0) {
            uint32_t lo = off + 12;
            while (lo + 12 <= ce) {
                uint32_t lsz = dm_rd32(d + lo + 4);
                uint32_t lce = lo + 8 + lsz;
                if (lce > ce) lce = ce;
                if (memcmp(d + lo, "LIST", 4) == 0 && memcmp(d + lo + 8, "lbnd", 4) == 0) {
                    uint32_t bo = lo + 12;
                    while (bo + 12 <= lce) {
                        uint32_t bsz = dm_rd32(d + bo + 4);
                        uint32_t bce = bo + 8 + bsz;
                        if (bce > lce) bce = lce;
                        if (memcmp(d + bo, "RIFF", 4) == 0 && memcmp(d + bo + 8, "DMBD", 4) == 0) {
                            uint32_t doff = bo + 12;
                            while (doff + 12 <= bce) {
                                uint32_t dsz = dm_rd32(d + doff + 4);
                                uint32_t dce = doff + 8 + dsz;
                                if (dce > bce) dce = bce;
                                if (memcmp(d + doff, "LIST", 4) == 0 && memcmp(d + doff + 8, "lbil", 4) == 0) {
                                    uint32_t io = doff + 12;
                                    while (io + 12 <= dce) {
                                        uint32_t isz = dm_rd32(d + io + 4);
                                        uint32_t ice = io + 8 + isz;
                                        if (ice > dce) ice = dce;
                                        if (memcmp(d + io, "LIST", 4) == 0 && memcmp(d + io + 8, "lbin", 4) == 0) {
                                            DmBandEntry be;
                                            memset(&be, 0, sizeof(be));
                                            be.pan = 64;
                                            be.volume = 127;
                                            be.dls_idx = -1;
                                            be.inst_idx = -1;
                                            uint32_t ko = io + 12;
                                            while (ko + 8 <= ice) {
                                                uint32_t ksz = dm_rd32(d + ko + 4);
                                                uint32_t kce = ko + 8 + ksz;
                                                if (kce > ice) kce = ice;
                                                if (memcmp(d + ko, "bins", 4) == 0 && ksz >= 36) {
                                                    const uint8_t *bp = d + ko + 8;
                                                    be.dw_patch = dm_rd32(bp + 0x00);
                                                    be.pchannel = dm_rd32(bp + 0x18);
                                                    be.pan = bp[0x20];
                                                    be.volume = bp[0x21];
                                                    be.transpose = dm_rds16(bp + 0x22);
                                                } else if (memcmp(d + ko, "LIST", 4) == 0 && ksz >= 4 &&
                                                           memcmp(d + ko + 8, "DMRF", 4) == 0) {
                                                    uint32_t ro = ko + 12;
                                                    while (ro + 8 <= kce) {
                                                        uint32_t rsz = dm_rd32(d + ro + 4);
                                                        uint32_t rce = ro + 8 + rsz;
                                                        if (rce > kce) rce = kce;
                                                        if (memcmp(d + ro, "file", 4) == 0 && rsz >= 2) {
                                                            char fname[128];
                                                            uint32_t nch = (rce - (ro + 8)) / 2;
                                                            if (nch >= sizeof(fname)) nch = sizeof(fname) - 1;
                                                            for (uint32_t c = 0; c < nch; c++) {
                                                                uint16_t wc = dm_rd16(d + ro + 8 + c * 2);
                                                                fname[c] = (wc < 128) ? (char)wc : '_';
                                                            }
                                                            fname[nch] = '\0';
                                                            be.dls_idx = mc2_dm_load_dls_locked(fname);
                                                            if (be.dls_idx >= 0 && default_dls < 0) {
                                                                default_dls = be.dls_idx;
                                                            }
                                                        }
                                                        ro += 8 + rsz + (rsz & 1u);
                                                    }
                                                }
                                                ko += 8 + ksz + (ksz & 1u);
                                            }
                                            if (be.dls_idx < 0) be.dls_idx = default_dls;
                                            if (be.dls_idx >= 0) {
                                                be.inst_idx = dm_find_inst(&g_dm_dls[be.dls_idx], be.dw_patch);
                                            }
                                            if (seg->num_band >= cap) {
                                                cap *= 2;
                                                seg->band = (DmBandEntry *)realloc(
                                                    seg->band, (size_t)cap * sizeof(DmBandEntry));
                                            }
                                            if (seg->band) seg->band[seg->num_band++] = be;
                                        }
                                        io += 8 + isz + (isz & 1u);
                                    }
                                }
                                doff += 8 + dsz + (dsz & 1u);
                            }
                        }
                        bo += 8 + bsz + (bsz & 1u);
                    }
                }
                lo += 8 + lsz + (lsz & 1u);
            }
        }
        off += 8 + sz + (sz & 1u);
    }
}

static int dm_evt_cmp(const void *a, const void *b) {
    const DmSeqEvent *ea = (const DmSeqEvent *)a;
    const DmSeqEvent *eb = (const DmSeqEvent *)b;
    if (ea->mt_time < eb->mt_time) return -1;
    if (ea->mt_time > eb->mt_time) return 1;
    return 0;
}

static int mc2_dm_load_segment(const char *rel_or_name, uint32_t guest_va) {
    pthread_mutex_lock(&g_dm_mutex);
    for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
        if (g_dm_segs[i].in_use && g_dm_segs[i].guest_va == guest_va) {
            pthread_mutex_unlock(&g_dm_mutex);
            return i;
        }
    }
    int slot = -1;
    for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
        if (!g_dm_segs[i].in_use) { slot = i; break; }
    }
    if (slot < 0) {
        /* Evict an inactive segment slot */
        for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
            int busy = 0;
            for (int s = 0; s < MC2_DM_MAX_PLAY_SLOTS; s++) {
                if (g_dm_slots[s].in_use && g_dm_slots[s].seg_idx == i) busy = 1;
            }
            if (!busy) {
                free(g_dm_segs[i].events);
                free(g_dm_segs[i].tempos);
                free(g_dm_segs[i].band);
                memset(&g_dm_segs[i], 0, sizeof(DmSegment));
                slot = i;
                break;
            }
        }
    }
    if (slot < 0) {
        pthread_mutex_unlock(&g_dm_mutex);
        return -1;
    }

    uint32_t len = 0;
    uint8_t *d = dm_read_asset(rel_or_name, &len);
    if (!d || len < 16 || memcmp(d, "RIFF", 4) != 0 || memcmp(d + 8, "DMSG", 4) != 0) {
        free(d);
        pthread_mutex_unlock(&g_dm_mutex);
        DM_LOGW("[DMUSIC8] No se pudo abrir/parsear segmento '%s'", rel_or_name ? rel_or_name : "(null)");
        return -1;
    }

    DmSegment *seg = &g_dm_segs[slot];
    memset(seg, 0, sizeof(*seg));
    seg->in_use = 1;
    seg->guest_va = guest_va;
    seg->resolution = 768;
    snprintf(seg->path, sizeof(seg->path), "%s", rel_or_name);

    uint32_t off = 12;
    while (off + 8 <= len) {
        uint32_t sz = dm_rd32(d + off + 4);
        uint32_t ce = off + 8 + sz;
        if (ce > len) ce = len;
        if (memcmp(d + off, "segh", 4) == 0 && sz >= 24) {
            const uint8_t *sp = d + off + 8;
            seg->repeats = dm_rd32(sp + 0);
            seg->mt_length = dm_rd32(sp + 4);
            seg->mt_play_start = dm_rd32(sp + 8);
            seg->mt_loop_start = dm_rd32(sp + 12);
            seg->mt_loop_end = dm_rd32(sp + 16);
            seg->resolution = dm_rd32(sp + 20);
            if (seg->resolution == 0) seg->resolution = 768;
        } else if (memcmp(d + off, "LIST", 4) == 0 && sz >= 4 && memcmp(d + off + 8, "trkl", 4) == 0) {
            uint32_t to = off + 12;
            while (to + 12 <= ce) {
                uint32_t tsz = dm_rd32(d + to + 4);
                uint32_t tce = to + 8 + tsz;
                if (tce > ce) tce = ce;
                if (memcmp(d + to, "RIFF", 4) == 0 && memcmp(d + to + 8, "DMTK", 4) == 0) {
                    uint32_t ko = to + 12;
                    while (ko + 8 <= tce) {
                        uint32_t ksz = dm_rd32(d + ko + 4);
                        uint32_t kce = ko + 8 + ksz;
                        if (kce > tce) kce = tce;
                        if (memcmp(d + ko, "tetr", 4) == 0 && ksz >= 20) {
                            uint32_t rec_sz = dm_rd32(d + ko + 8);
                            if (rec_sz >= 16) {
                                int n = (int)((kce - (ko + 12)) / rec_sz);
                                seg->tempos = (DmTempoEvent *)realloc(
                                    seg->tempos, (size_t)(seg->num_tempos + n) * sizeof(DmTempoEvent));
                                if (seg->tempos) {
                                    for (int i = 0; i < n; i++) {
                                        const uint8_t *rp = d + ko + 12 + (uint32_t)i * rec_sz;
                                        uint32_t mt = dm_rd32(rp);
                                        double bpm = dm_rd64d(rp + 8);
                                        if (bpm > 10.0 && bpm < 600.0) {
                                            seg->tempos[seg->num_tempos].mt_time = mt;
                                            seg->tempos[seg->num_tempos].bpm = bpm;
                                            seg->num_tempos++;
                                        }
                                    }
                                }
                            }
                        } else if (memcmp(d + ko, "seqt", 4) == 0 && ksz >= 12) {
                            uint32_t so = ko + 8;
                            while (so + 8 <= kce) {
                                uint32_t ssz = dm_rd32(d + so + 4);
                                uint32_t sce = so + 8 + ssz;
                                if (sce > kce) sce = kce;
                                if (memcmp(d + so, "evtl", 4) == 0 && ssz >= 4) {
                                    uint32_t rec_sz = dm_rd32(d + so + 8);
                                    if (rec_sz >= 17) {
                                        int n = (int)((sce - (so + 12)) / rec_sz);
                                        seg->events = (DmSeqEvent *)realloc(
                                            seg->events, (size_t)(seg->num_events + n) * sizeof(DmSeqEvent));
                                        if (seg->events) {
                                            for (int i = 0; i < n; i++) {
                                                const uint8_t *rp = d + so + 12 + (uint32_t)i * rec_sz;
                                                DmSeqEvent ev;
                                                ev.mt_time = dm_rd32(rp + 0);
                                                ev.mt_dur = dm_rd32(rp + 4);
                                                ev.pchannel = dm_rd32(rp + 8);
                                                ev.status = rp[14];
                                                ev.data1 = rp[15];
                                                ev.data2 = rp[16];
                                                if ((ev.status & 0xF0u) == 0x90u && ev.data2 > 0) {
                                                    seg->events[seg->num_events++] = ev;
                                                }
                                            }
                                        }
                                    }
                                }
                                so += 8 + ssz + (ssz & 1u);
                            }
                        } else if (memcmp(d + ko, "RIFF", 4) == 0 && ksz >= 4 &&
                                   memcmp(d + ko + 8, "DMBT", 4) == 0) {
                            dm_parse_dmbt(d, ko + 12, kce, seg);
                        }
                        ko += 8 + ksz + (ksz & 1u);
                    }
                }
                to += 8 + tsz + (tsz & 1u);
            }
        }
        off += 8 + sz + (sz & 1u);
    }

    if (seg->num_events > 1) {
        qsort(seg->events, (size_t)seg->num_events, sizeof(DmSeqEvent), dm_evt_cmp);
    }
    free(d);
    DM_LOGI("[DMUSIC8] Segmento cargado '%s' (va=0x%08X): len=%u loop=[%u..%u] rep=0x%X notes=%d band=%d bpm=%.1f",
            seg->path, seg->guest_va, seg->mt_length, seg->mt_loop_start, seg->mt_loop_end,
            seg->repeats, seg->num_events, seg->num_band,
            seg->num_tempos > 0 ? seg->tempos[0].bpm : 120.0);
    pthread_mutex_unlock(&g_dm_mutex);
    return slot;
}

static void mc2_dm_play_segment(uint32_t seg_va, uint32_t state_va, uint32_t audiopath_va, uint32_t flags) {
    pthread_mutex_lock(&g_dm_mutex);
    int seg_idx = -1;
    for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
        if (g_dm_segs[i].in_use && g_dm_segs[i].guest_va == seg_va) {
            seg_idx = i;
            break;
        }
    }
    if (seg_idx < 0) {
        pthread_mutex_unlock(&g_dm_mutex);
        return;
    }

    int secondary = (flags & 0x80u) ? 1 : 0; /* DMUS_SEGF_SECONDARY */
    if (!secondary) {
        for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
            g_dm_slots[i].is_playing = 0;
            g_dm_slots[i].in_use = 0;
        }
        for (int v = 0; v < MC2_DM_MAX_VOICES; v++) g_dm_voices[v].active = 0;
    }

    int pslot = -1;
    for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
        if (!g_dm_slots[i].in_use || g_dm_slots[i].seg_va == seg_va) {
            pslot = i;
            break;
        }
    }
    if (pslot < 0) pslot = 0;

    DmPlaySlot *ps = &g_dm_slots[pslot];
    DmSegment *seg = &g_dm_segs[seg_idx];
    uint32_t start_mt = seg->mt_play_start;
    if (ps->has_override_start) start_mt = ps->mt_override_start;
    memset(ps, 0, sizeof(*ps));
    ps->in_use = 1;
    ps->seg_idx = seg_idx;
    ps->seg_va = seg_va;
    ps->state_va = state_va;
    ps->audiopath_va = audiopath_va;
    ps->is_playing = 1;
    ps->tick_pos = (double)start_mt;
    ps->cur_bpm = (seg->num_tempos > 0) ? seg->tempos[0].bpm : 120.0;
    ps->loops_left = seg->repeats;
    ps->vol_gain = 1.0f;

    while (ps->next_evt_idx < seg->num_events && seg->events[ps->next_evt_idx].mt_time < start_mt) {
        ps->next_evt_idx++;
    }
    while (ps->next_tempo_idx < seg->num_tempos && seg->tempos[ps->next_tempo_idx].mt_time <= start_mt) {
        ps->cur_bpm = seg->tempos[ps->next_tempo_idx].bpm;
        ps->next_tempo_idx++;
    }
    DM_LOGI("[DMUSIC8] PlaySegmentEx '%s' flags=0x%X bpm=%.1f notes=%d",
            seg->path, flags, ps->cur_bpm, seg->num_events);
    pthread_mutex_unlock(&g_dm_mutex);
}

static void mc2_dm_stop(uint32_t target_va) {
    pthread_mutex_lock(&g_dm_mutex);
    for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
        if (!g_dm_slots[i].in_use) continue;
        if (target_va == 0u || g_dm_slots[i].seg_va == target_va ||
            g_dm_slots[i].state_va == target_va || g_dm_slots[i].audiopath_va == target_va) {
            g_dm_slots[i].is_playing = 0;
            g_dm_slots[i].in_use = 0;
            for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
                if (g_dm_voices[v].active && g_dm_voices[v].slot_idx == i) {
                    g_dm_voices[v].releasing = 1;
                }
            }
        }
    }
    pthread_mutex_unlock(&g_dm_mutex);
}

static int mc2_dm_is_playing(uint32_t seg_va, uint32_t state_va) {
    pthread_mutex_lock(&g_dm_mutex);
    int playing = 0;
    for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
        if (!g_dm_slots[i].in_use || !g_dm_slots[i].is_playing) continue;
        if ((seg_va && g_dm_slots[i].seg_va == seg_va) ||
            (state_va && g_dm_slots[i].state_va == state_va) ||
            (!seg_va && !state_va)) {
            playing = 1;
            break;
        }
    }
    pthread_mutex_unlock(&g_dm_mutex);
    return playing;
}

static void mc2_dm_set_audiopath_volume(uint32_t ap_va, int32_t lvol_mb) {
    float g = 1.0f;
    if (lvol_mb <= -9600) g = 0.0f;
    else if (lvol_mb < 0) g = powf(10.0f, (float)lvol_mb / 2000.0f);
    pthread_mutex_lock(&g_dm_mutex);
    for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
        if (g_dm_slots[i].in_use && (ap_va == 0u || g_dm_slots[i].audiopath_va == ap_va)) {
            g_dm_slots[i].vol_gain = g;
        }
    }
    pthread_mutex_unlock(&g_dm_mutex);
}

static uint32_t mc2_dm_get_seek_mt(uint32_t state_va) {
    pthread_mutex_lock(&g_dm_mutex);
    uint32_t mt = 0;
    for (int i = 0; i < MC2_DM_MAX_PLAY_SLOTS; i++) {
        if (g_dm_slots[i].in_use && (state_va == 0u || g_dm_slots[i].state_va == state_va)) {
            mt = (uint32_t)g_dm_slots[i].tick_pos;
            break;
        }
    }
    pthread_mutex_unlock(&g_dm_mutex);
    return mt;
}

static void dm_trigger_note(int slot_idx, const DmSegment *seg, const DmSeqEvent *ev) {
    const DmBandEntry *be = NULL;
    for (int b = 0; b < seg->num_band; b++) {
        if (seg->band[b].pchannel == ev->pchannel) { be = &seg->band[b]; break; }
    }
    if (!be || be->dls_idx < 0 || be->inst_idx < 0) return;
    const DmDlsBank *bank = &g_dm_dls[be->dls_idx];
    const DmInstrument *ins = &bank->insts[be->inst_idx];
    const DmRegion *rgn = NULL;
    for (int r = 0; r < ins->num_regions; r++) {
        const DmRegion *cand = &ins->regions[r];
        if (ev->data1 >= cand->key_lo && ev->data1 <= cand->key_hi &&
            ev->data2 >= cand->vel_lo && ev->data2 <= cand->vel_hi) {
            rgn = cand;
            break;
        }
    }
    if (!rgn || rgn->wave_idx < 0 || rgn->wave_idx >= bank->num_waves) return;
    const DmWave *w = &bank->waves[rgn->wave_idx];
    if (!w->pcm16 || w->num_frames == 0 || w->sample_rate == 0) return;

    int vidx = -1;
    int oldest_rel = -1;
    for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
        if (!g_dm_voices[v].active) { vidx = v; break; }
        if (g_dm_voices[v].releasing && oldest_rel < 0) oldest_rel = v;
    }
    if (vidx < 0) vidx = (oldest_rel >= 0) ? oldest_rel : 0;

    uint16_t unity = rgn->has_wsmp ? rgn->unity_note : w->unity_note;
    int16_t fine = rgn->has_wsmp ? rgn->fine_tune : w->fine_tune;
    int has_loop = rgn->has_wsmp ? rgn->has_loop : w->has_loop;
    uint32_t lstart = rgn->has_wsmp ? rgn->loop_start : w->loop_start;
    uint32_t llen = rgn->has_wsmp ? rgn->loop_len : w->loop_len;
    if (has_loop && (llen == 0 || lstart + llen > w->num_frames)) has_loop = 0;

    double semis = (double)((int)ev->data1 + (int)be->transpose - (int)unity) + (double)fine / 100.0;
    double step = ((double)w->sample_rate / 44100.0) * pow(2.0, semis / 12.0);
    if (step < 0.05) step = 0.05;
    if (step > 8.0) step = 8.0;

    float vel_g = (float)ev->data2 / 127.0f;
    float ch_g = (float)be->volume / 127.0f;
    float amp = vel_g * vel_g * ch_g * 0.80f;
    float pan_norm = (float)be->pan / 127.0f; /* 0=L, 0.5=C, 1=R */

    DmVoice *vc = &g_dm_voices[vidx];
    vc->active = 1;
    vc->slot_idx = slot_idx;
    vc->releasing = 0;
    vc->wave = w;
    vc->sample_pos = 0.0;
    vc->step = step;
    vc->stop_tick = (double)ev->mt_time + (double)(ev->mt_dur ? ev->mt_dur : 24u);
    vc->gain_l = amp * (1.0f - pan_norm * 0.5f);
    vc->gain_r = amp * (0.5f + pan_norm * 0.5f);
    vc->env = 1.0f;
    vc->rel_step = 1.0f / (0.035f * 44100.0f);
    vc->has_loop = has_loop;
    vc->loop_start = lstart;
    vc->loop_end = lstart + llen;
}

static int mc2_dm_mix(int16_t *out_buffer, int num_frames, int out_rate) {
    if (!out_buffer || num_frames <= 0) return 0;
    if (out_rate <= 0) out_rate = 44100;
    pthread_mutex_lock(&g_dm_mutex);

    int any_active = 0;
    for (int s = 0; s < MC2_DM_MAX_PLAY_SLOTS; s++) {
        if (g_dm_slots[s].in_use && g_dm_slots[s].is_playing) { any_active = 1; break; }
    }
    if (!any_active) {
        for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
            if (g_dm_voices[v].active) { any_active = 1; break; }
        }
    }
    if (!any_active) {
        pthread_mutex_unlock(&g_dm_mutex);
        return 0;
    }

    int mix_peak = 0;
    /* Advance sequencer and synthesize frame-by-frame in chunks of 64 frames for low overhead */
    int pos = 0;
    while (pos < num_frames) {
        int chunk = num_frames - pos;
        if (chunk > 64) chunk = 64;

        /* 1. Advance active play slots and trigger due MIDI notes */
        for (int s = 0; s < MC2_DM_MAX_PLAY_SLOTS; s++) {
            DmPlaySlot *ps = &g_dm_slots[s];
            if (!ps->in_use || !ps->is_playing) continue;
            const DmSegment *seg = &g_dm_segs[ps->seg_idx];
            while (ps->next_tempo_idx < seg->num_tempos &&
                   (double)seg->tempos[ps->next_tempo_idx].mt_time <= ps->tick_pos) {
                ps->cur_bpm = seg->tempos[ps->next_tempo_idx].bpm;
                ps->next_tempo_idx++;
            }
            double ticks_per_frame = (ps->cur_bpm / 60.0) * MC2_DM_PPQ / (double)out_rate;
            double next_tick = ps->tick_pos + ticks_per_frame * (double)chunk;

            while (ps->next_evt_idx < seg->num_events &&
                   (double)seg->events[ps->next_evt_idx].mt_time < next_tick) {
                dm_trigger_note(s, seg, &seg->events[ps->next_evt_idx]);
                ps->next_evt_idx++;
            }

            /* Release voices whose note duration elapsed */
            for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
                DmVoice *vc = &g_dm_voices[v];
                if (vc->active && vc->slot_idx == s && !vc->releasing && next_tick >= vc->stop_tick) {
                    if (vc->has_loop) vc->releasing = 1;
                }
            }

            ps->tick_pos = next_tick;
            uint32_t loop_end = (seg->mt_loop_end > seg->mt_loop_start) ? seg->mt_loop_end : seg->mt_length;
            if (loop_end > 0 && ps->tick_pos >= (double)loop_end) {
                if (ps->loops_left == 0xFFFFFFFFu || ps->loops_left > 0u) {
                    if (ps->loops_left != 0xFFFFFFFFu) ps->loops_left--;
                    double wrap_target = (double)seg->mt_loop_start;
                    double delta = ps->tick_pos - wrap_target;
                    ps->tick_pos = wrap_target;
                    ps->next_evt_idx = 0;
                    ps->next_tempo_idx = 0;
                    while (ps->next_evt_idx < seg->num_events &&
                           (double)seg->events[ps->next_evt_idx].mt_time < wrap_target) {
                        ps->next_evt_idx++;
                    }
                    /* Shift active voice stop_tick back by loop length so sustained notes continue cleanly */
                    for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
                        if (g_dm_voices[v].active && g_dm_voices[v].slot_idx == s) {
                            g_dm_voices[v].stop_tick -= delta;
                        }
                    }
                } else {
                    ps->is_playing = 0;
                }
            }
        }

        /* 2. Render active voices for this chunk */
        for (int i = 0; i < chunk; i++) {
            float acc_l = 0.0f, acc_r = 0.0f;
            for (int v = 0; v < MC2_DM_MAX_VOICES; v++) {
                DmVoice *vc = &g_dm_voices[v];
                if (!vc->active) continue;
                const DmWave *w = vc->wave;
                uint32_t idx = (uint32_t)vc->sample_pos;
                if (vc->has_loop && !vc->releasing && idx >= vc->loop_end) {
                    uint32_t llen = vc->loop_end - vc->loop_start;
                    if (llen > 0) {
                        vc->sample_pos -= (double)llen;
                        idx = (uint32_t)vc->sample_pos;
                    }
                }
                if (idx + 1u >= w->num_frames) {
                    if (vc->has_loop && !vc->releasing) {
                        vc->sample_pos = (double)vc->loop_start;
                        idx = vc->loop_start;
                    } else {
                        vc->active = 0;
                        continue;
                    }
                }
                float frac = (float)(vc->sample_pos - (double)idx);
                float sl, sr;
                if (w->channels == 1) {
                    float s0 = (float)w->pcm16[idx];
                    float s1 = (float)w->pcm16[idx + 1u];
                    sl = sr = s0 + (s1 - s0) * frac;
                } else {
                    float l0 = (float)w->pcm16[idx * 2u];
                    float l1 = (float)w->pcm16[(idx + 1u) * 2u];
                    float r0 = (float)w->pcm16[idx * 2u + 1u];
                    float r1 = (float)w->pcm16[(idx + 1u) * 2u + 1u];
                    sl = l0 + (l1 - l0) * frac;
                    sr = r0 + (r1 - r0) * frac;
                }
                float slot_gain = g_dm_master_gain;
                if (vc->slot_idx >= 0 && vc->slot_idx < MC2_DM_MAX_PLAY_SLOTS) {
                    slot_gain *= g_dm_slots[vc->slot_idx].vol_gain;
                }
                float env_g = vc->env * slot_gain;
                acc_l += sl * vc->gain_l * env_g;
                acc_r += sr * vc->gain_r * env_g;

                vc->sample_pos += vc->step * (44100.0 / (double)out_rate);
                if (vc->has_loop && !vc->releasing && vc->sample_pos >= (double)vc->loop_end) {
                    vc->sample_pos -= (double)(vc->loop_end - vc->loop_start);
                }
                if (vc->releasing) {
                    vc->env -= vc->rel_step;
                    if (vc->env <= 0.0f) vc->active = 0;
                }
            }
            int fidx = (pos + i) * 2;
            int32_t L = (int32_t)out_buffer[fidx] + (int32_t)acc_l;
            int32_t R = (int32_t)out_buffer[fidx + 1] + (int32_t)acc_r;
            if (L > 32767) L = 32767; else if (L < -32768) L = -32768;
            if (R > 32767) R = 32767; else if (R < -32768) R = -32768;
            out_buffer[fidx] = (int16_t)L;
            out_buffer[fidx + 1] = (int16_t)R;
            int ap = (int)fabsf(acc_l);
            if (ap > mix_peak) mix_peak = ap;
        }
        pos += chunk;
    }

    pthread_mutex_unlock(&g_dm_mutex);
    return mix_peak;
}

#endif /* MC2_DMUSIC_H */
