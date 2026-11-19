/**
 * Midnight Club II (PC -> Android / Host Static Recompilation)
 * Portable Win32 + D3D9 + DirectInput8 + Miles Sound System + Bink + Offline Winsock Bridge
 */

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdarg.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <setjmp.h>

#if defined(__ANDROID__)
#include <android/log.h>
#include <media/NdkMediaExtractor.h>
#include <media/NdkMediaCodec.h>
#include <media/NdkMediaFormat.h>
#define MC2_HAS_FFMPEG_BINK 1
#include <libavformat/avformat.h>
#include <libavformat/avio.h>
#include <libavcodec/avcodec.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <libavutil/channel_layout.h>
#include <libavutil/imgutils.h>
#include <libavutil/mem.h>
#include <libavutil/opt.h>
#endif

#if defined(_WIN32)
#include <windows.h>
#include <io.h>
#include <direct.h>
#else
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <poll.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <pthread.h>
#include <errno.h>
#endif

static void mc2_streams_pump(void);
static jmp_buf g_exit_jmp;
static int g_exit_jmp_valid = 0;
static char g_log_ring[8][128];
static uint32_t g_log_ring_head = 0;
static volatile int g_stop_requested = 0;

/* El anillo se escribe desde el hilo del juego y se lee desde el hilo JNI
   de stats(). Sin este bloqueo era una carrera de datos real.
   Implementacion portable: el host Windows tambien compila este archivo. */
#if defined(_WIN32)
static CRITICAL_SECTION g_log_cs;
static volatile long g_log_cs_ready = 0;
static void log_lock(void) {
    if (!g_log_cs_ready) {
        InitializeCriticalSection(&g_log_cs);
        g_log_cs_ready = 1;
    }
    EnterCriticalSection(&g_log_cs);
}
static void log_unlock(void) {
    LeaveCriticalSection(&g_log_cs);
}
#else
static pthread_mutex_t g_log_mutex = PTHREAD_MUTEX_INITIALIZER;
static void log_lock(void) {
    pthread_mutex_lock(&g_log_mutex);
}
static void log_unlock(void) {
    pthread_mutex_unlock(&g_log_mutex);
}
#endif

static void pc_record_log(const char *fmt, ...) {
    char tmp[256];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(tmp, sizeof(tmp), fmt, ap);
    va_end(ap);

    log_lock();
    uint32_t slot = g_log_ring_head % 8u;
    memcpy(g_log_ring[slot], tmp, 127);
    g_log_ring[slot][127] = '\0';
    g_log_ring_head++;
    log_unlock();

    /* El destino de diagnostico es logcat. Escribir en /sdcard/Games/... era
       invalido bajo Scoped Storage y dejaba un FILE* abierto para siempre. */
#if defined(__ANDROID__)
    __android_log_print(ANDROID_LOG_INFO, "MC2PC", "%s", tmp);
#endif
}

void mc2_pc_get_recent_logs(char *out_buf, size_t max_len) {
    if (!out_buf || max_len == 0) return;
    out_buf[0] = '\0';
    if (max_len == 1) return;

    char lines[6][128];
    uint32_t count = 0;
    log_lock();
    uint32_t total = g_log_ring_head;
    uint32_t start = (total > 6u) ? (total - 6u) : 0u;
    for (uint32_t i = start; i < total && count < 6u; i++) {
        memcpy(lines[count], g_log_ring[i % 8u], 128);
        lines[count][127] = '\0';
        count++;
    }
    log_unlock();

    size_t used = 0;
    for (uint32_t i = 0; i < count && used + 1 < max_len; i++) {
        size_t remaining = max_len - used - 1;
        int n = snprintf(out_buf + used, remaining + 1, "%s%s",
                         (used > 0 ? "\n" : ""), lines[i]);
        if (n <= 0) break;
        used += (size_t)((n > (int)remaining) ? (int)remaining : n);
    }
    out_buf[used] = '\0';
}

/* Apagado cooperativo. Debe llamarse desde el hilo del juego: un longjmp
   entre hilos es comportamiento indefinido. Se consulta en cada import. */
static void check_stop_request(void) {
    if (g_stop_requested && g_exit_jmp_valid) {
        g_stop_requested = 0;
        longjmp(g_exit_jmp, 1);
    }
}

void mc2_pc_request_stop(void) {
    g_stop_requested = 1;
}

int mc2_pc_is_stop_requested(void) {
    return g_stop_requested;
}

#if defined(__ANDROID__)
#include <android/log.h>
/* pc_record_log ya publica en logcat; no duplicar la salida. */
#define PC_LOGI(...) do { pc_record_log(__VA_ARGS__); } while (0)
#define PC_LOGW(...) do { pc_record_log(__VA_ARGS__); } while (0)
#define PC_LOGE(...) do { pc_record_log(__VA_ARGS__); } while (0)
#ifdef MC2_RELEASE
#define PORTDBG(...) do {} while (0)
#else
#define PORTDBG(...) __android_log_print(ANDROID_LOG_INFO, "PortDebug", __VA_ARGS__)
#endif
#else
#define PC_LOGI(...) do { pc_record_log(__VA_ARGS__); fprintf(stderr, "[MC2PC] " __VA_ARGS__); fprintf(stderr, "\n"); fflush(stderr); } while (0)
#define PC_LOGW(...) do { pc_record_log(__VA_ARGS__); fprintf(stderr, "[MC2PC WARN] " __VA_ARGS__); fprintf(stderr, "\n"); fflush(stderr); } while (0)
#define PC_LOGE(...) do { pc_record_log(__VA_ARGS__); fprintf(stderr, "[MC2PC ERR] " __VA_ARGS__); fprintf(stderr, "\n"); fflush(stderr); } while (0)
#define PORTDBG(...) do {} while (0)
#endif

#include "../recomp/gen/recomp_types.h"
#include "pc_runtime.h"
#include "pc_imports_table.inc"

/* ================================================================
 * Global & Thread-Local Guest Register State
 * ================================================================ */

ptrdiff_t g_xbox_mem_offset = 0;
int g_force_return = 0;
uint32_t g_xbox_code_lo = 0x00401000u;
uint32_t g_xbox_code_hi = 0x0062D000u;
int32_t g_xbox_guest_cpu_preempt = 0;

RECOMP_TLS uint32_t g_eax = 0, g_ecx = 0, g_edx = 0, g_esp = 0;
RECOMP_TLS uint32_t g_ebx = 0, g_esi = 0, g_edi = 0;
RECOMP_TLS uint32_t g_ebp = 0;
RECOMP_TLS uint32_t g_seh_ebp = 0;
RECOMP_TLS uint32_t g_fs_base = 0x00020000u;
RECOMP_TLS int g_df = 0;
RECOMP_TLS uint32_t g_eflags = 0x00000202u;

RECOMP_TLS double g_fp_stack[8] = {0};
RECOMP_TLS int g_fp_top = 0;
RECOMP_TLS uint16_t g_fp_control_word = 0x027Fu;
RECOMP_TLS int g_fp_cmp = 0;
RECOMP_TLS uint16_t g_fp_cc = 0;
RECOMP_TLS uint32_t g_mxcsr = 0x1F80u;

#ifndef RECOMP_MMX_DEFINED
#define RECOMP_MMX_DEFINED
typedef union RecompMmx {
    int8_t   b[8];
    uint8_t  ub[8];
    int16_t  w[4];
    uint16_t uw[4];
    int32_t  d[2];
    uint32_t ud[2];
    uint64_t q;
} RecompMmx;
#endif

RECOMP_TLS RecompXmm g_xmm0 = {{0}}, g_xmm1 = {{0}}, g_xmm2 = {{0}}, g_xmm3 = {{0}};
RECOMP_TLS RecompXmm g_xmm4 = {{0}}, g_xmm5 = {{0}}, g_xmm6 = {{0}}, g_xmm7 = {{0}};
RECOMP_TLS RecompMmx g_mm0 = {{0}}, g_mm1 = {{0}}, g_mm2 = {{0}}, g_mm3 = {{0}};
RECOMP_TLS RecompMmx g_mm4 = {{0}}, g_mm5 = {{0}}, g_mm6 = {{0}}, g_mm7 = {{0}};

volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE] = {0};
volatile uint32_t g_icall_trace_idx = 0;
volatile uint64_t g_icall_count = 0;

/* ================================================================
 * Guest Address Space Layout (512 MB = 0x20000000 bytes)
 *
 * 0x00000000 - 0x0000FFFF : Unmapped / Null page guard
 * 0x00020000 - 0x0002FFFF : TIB (FS segment base) + TLS slots
 * 0x00030000 - 0x0003FFFF : Static strings (CmdLine, EnvA, EnvW, Dummy buffers)
 * 0x00040000 - 0x0007FFFF : Synthetic COM Vtables & Singleton Objects
 * 0x00400000 - 0x009BFFFF : Loaded PE image (mc2.exe headers + sections)
 * 0x01000000 - 0x017FFFFF : Main Thread Stack (8 MB, top at 0x017FF000)
 * 0x01800000 - 0x01FFFFFF : Worker Thread Stacks (8 x 1 MB)
 * 0x02000000 - 0x1F000000 : Guest Dynamic Heap (464 MB)
 * ================================================================ */

#define GUEST_MEM_SIZE       (1024u * 1024u * 1024u)
#define GUEST_TIB_VA         0x00020000u
#define GUEST_TLS_VA         0x00021000u
#define GUEST_CMDLINE_VA     0x00030000u
#define GUEST_ENVA_VA        0x00031000u
#define GUEST_ENVW_VA        0x00032000u
#define GUEST_MODNAME_VA     0x00033000u
#define GUEST_INET_NTOA_VA   0x00033400u
#define GUEST_HOSTENT_VA     0x00033500u
#define GUEST_VERINFO_VA     0x00033800u
#define GUEST_MC2HOOK_DAT_VA 0x00033C00u
#define GUEST_COM_ARENA_VA   0x00040000u
#define GUEST_STACK_TOP      0x017FF000u
#define GUEST_HEAP_START     0x02000000u
#define GUEST_HEAP_END       0x3E000000u

static uint8_t *g_guest_base = NULL;
static uint32_t g_heap_cursor = GUEST_HEAP_START;
static uint32_t g_com_cursor = GUEST_COM_ARENA_VA;
static uint32_t g_last_error = 0;
static char g_game_dir[512] = "C:\\Program Files\\Midnight Club II";
static char g_save_dir[512] = ".";
static char g_cmdline_str[512] = "mc2.exe -skipintro";

static volatile uint32_t g_frame_count = 0;
static volatile uint32_t g_draw_calls = 0;

uint32_t mc2_pc_get_frame_count(void) { return g_frame_count; }
uint32_t mc2_pc_get_draw_calls(void)  { return g_draw_calls; }

/* ================================================================
 * MC2 Diagnostic Collector
 *
 * Registra TODOS los errores, avisos, llamadas no implementadas y eventos
 * del motor, agrupados por clave normalizada (sin direcciones ni contadores
 * volatiles). Se consulta en caliente por JNI y por broadcast adb.
 * ================================================================ */
#define MC2_DIAG_MAX   1024
#define MC2_DIAG_CATS  7
/* Por encima de este numero de claves se dejan de crear entradas INFO:
   las trazas informativas del juego nunca deben desplazar a las anomalias. */
#define MC2_DIAG_INFO_SOFT_CAP 512

enum Mc2DiagCat {
    DIAG_ERROR = 0, DIAG_WARNING, DIAG_UNHANDLED,
    DIAG_DATA, DIAG_AUDIO, DIAG_GFX, DIAG_INFO
};

static const char *kDiagCatName[MC2_DIAG_CATS] = {
    "ERROR", "WARNING", "UNHANDLED", "DATA", "AUDIO", "GFX", "INFO"
};

typedef struct {
    char key[160];
    char sample[200];
    int cat;
    int count;
    uint32_t first_frame;
    uint32_t last_frame;
} Mc2DiagEntry;

static Mc2DiagEntry g_diag[MC2_DIAG_MAX];
static int g_diag_n = 0;
static int g_diag_total = 0;
static int g_diag_overflow = 0;
static int g_diag_cat[MC2_DIAG_CATS] = {0};
static char g_diag_report[16384];
static char g_diag_summary[256];

/* Normaliza 0xXXXX -> 0xX y secuencias de digitos -> N para agrupar. */
static void diag_normalize(const char *in, char *out, size_t sz) {
    size_t i = 0;
    const char *p = in;
    while (*p && i + 1 < sz) {
        if (p[0] == '0' && (p[1] == 'x' || p[1] == 'X')) {
            if (i + 2 < sz) { out[i++] = '0'; out[i++] = 'x'; }
            p += 2;
            while (isxdigit((unsigned char) *p)) {
                if (i + 1 < sz) out[i++] = 'X';
                p++;
            }
            continue;
        }
        if (isdigit((unsigned char) *p)) {
            const char *q = p;
            while (isdigit((unsigned char) *q)) q++;
            if ((size_t)(q - p) >= 2) {
                if (i + 1 < sz) out[i++] = 'N';
                p = q;
                continue;
            }
        }
        out[i++] = *p++;
    }
    out[i] = '\0';
}

/* Clasifica la salida de OutputDebugStringA. El juego prefija con "Warning:"
   tanto condiciones anMalas como simples trazas de carga (Occluder Dataset,
   "road has changed to", separadores de asteriscos). Solo las primeras cuentan
   como WARNING; el resto va a INFO para no inflar el recuento de errores. */
static int diag_game_severity(const char *msg, size_t len) {
    if (len >= 6 && strncmp(msg, "Error:", 6) == 0) return DIAG_ERROR;
    if (len >= 8 && strncmp(msg, "Warning:", 8) == 0) {
        static const char *kAnomalous[] = {
            "not found", "failed", "couldn't", "unable", "not in stringtable",
            "Unrecognized token", "do not match", "disabled", "already playing",
            "hard stop", "more than", "cannot", "invalid", "missing",
            "overflow", "no selectable", "File not found", "cant see"
        };
        for (size_t i = 0; i < sizeof(kAnomalous) / sizeof(kAnomalous[0]); i++) {
            if (strstr(msg, kAnomalous[i]) != NULL) return DIAG_WARNING;
        }
        return DIAG_INFO;
    }
    return DIAG_INFO;
}

void mc2_diag_record(int cat, const char *fmt, ...) {
    char msg[512];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(msg, sizeof(msg), fmt, ap);
    va_end(ap);
    if (cat < 0 || cat >= MC2_DIAG_CATS) cat = DIAG_INFO;

    char key[160];
    diag_normalize(msg, key, sizeof(key));

    log_lock();
    g_diag_total++;
    g_diag_cat[cat]++;
    int idx = -1;
    for (int i = 0; i < g_diag_n; i++) {
        if (g_diag[i].cat == cat && strcmp(g_diag[i].key, key) == 0) {
            idx = i;
            break;
        }
    }
    if (idx < 0) {
        if (cat == DIAG_INFO && g_diag_n >= MC2_DIAG_INFO_SOFT_CAP) {
            /* El contador de INFO ya se incremento mas arriba. Se conserva el
               recuento total sin ocupar una clave: asi ERROR/WARNING/UNHANDLED
               siempre caben, por larga que sea la sesion. */
            log_unlock();
            return;
        }
        if (g_diag_n >= MC2_DIAG_MAX) {
            g_diag_overflow++;
            log_unlock();
            return;
        }
        idx = g_diag_n++;
        memset(&g_diag[idx], 0, sizeof(g_diag[idx]));
        memcpy(g_diag[idx].key, key, sizeof(g_diag[idx].key));
        g_diag[idx].cat = cat;
        strncpy(g_diag[idx].sample, msg, sizeof(g_diag[idx].sample) - 1);
        g_diag[idx].first_frame = g_frame_count;
#if defined(__ANDROID__)
        /* Por el tag PortDiag solo salen las anomalias (ERROR/WARNING/UNHANDLED).
           Los INFO se agrupan en el informe, para no inundar logcat. */
        if (cat <= DIAG_UNHANDLED) {
            __android_log_print(
                    cat == DIAG_ERROR ? ANDROID_LOG_ERROR :
                    cat == DIAG_WARNING ? ANDROID_LOG_WARN : ANDROID_LOG_INFO,
                    "PortDiag", "[%s] NUEVO: %s",
                    kDiagCatName[cat], g_diag[idx].sample);
        }
#endif
    }
    g_diag[idx].count++;
    g_diag[idx].last_frame = g_frame_count;
    log_unlock();
}

const char *mc2_diag_summary(void) {
    log_lock();
    snprintf(g_diag_summary, sizeof(g_diag_summary),
             "E=%d W=%d U=%d D=%d A=%d G=%d I=%d | frame=%u draws=%u",
             g_diag_cat[DIAG_ERROR], g_diag_cat[DIAG_WARNING],
             g_diag_cat[DIAG_UNHANDLED], g_diag_cat[DIAG_DATA],
             g_diag_cat[DIAG_AUDIO], g_diag_cat[DIAG_GFX],
             g_diag_cat[DIAG_INFO], g_frame_count, g_draw_calls);
    log_unlock();
    return g_diag_summary;
}

void mc2_pc_request_frame_dump(void);
const char *mc2_diag_report(void) {
    mc2_pc_request_frame_dump();
    log_lock();
    size_t used = 0;
    size_t cap = sizeof(g_diag_report) - 1;
    g_diag_report[0] = '\0';
#define DIAG_APPEND(...) do {                                                   \
        if (used < cap) {                                                       \
            int n_ = snprintf(g_diag_report + used, cap - used, __VA_ARGS__);  \
            if (n_ > 0) used += (size_t) ((n_ < (int)(cap - used)) ? n_ : (int)(cap - used)); \
        }                                                                       \
        g_diag_report[used < cap ? used : cap] = '\0';                         \
    } while (0)

    DIAG_APPEND("MC2 DIAG | total=%d | distintos=%d | desbordes=%d\n",
                g_diag_total, g_diag_n, g_diag_overflow);
    for (int c = 0; c < MC2_DIAG_CATS; c++) {
        DIAG_APPEND("%s=%d ", kDiagCatName[c], g_diag_cat[c]);
    }
    DIAG_APPEND("\nframe=%u draws=%u\n", g_frame_count, g_draw_calls);
    DIAG_APPEND("--- EVENTOS AGRUPADOS (por severidad) ---\n");
    for (int c = 0; c < MC2_DIAG_CATS; c++) {
        for (int i = 0; i < g_diag_n; i++) {
            if (g_diag[i].cat != c) continue;
            DIAG_APPEND("[%s] %4dx f%u..%u | %s\n",
                        kDiagCatName[c], g_diag[i].count,
                        g_diag[i].first_frame, g_diag[i].last_frame,
                        g_diag[i].sample);
        }
    }
    if (g_diag_overflow > 0) {
        DIAG_APPEND("AVISO: %d ANOMALIAS quedaron fuera de la tabla de %d claves.\n",
                    g_diag_overflow, MC2_DIAG_MAX);
    }
    DIAG_APPEND("NOTA: las trazas INFO se limitan a %d claves; su recuento total "
                "(%d) si es completo.\n", MC2_DIAG_INFO_SOFT_CAP,
                g_diag_cat[DIAG_INFO]);
#undef DIAG_APPEND
    log_unlock();
    return g_diag_report;
}

void mc2_diag_reset(void) {
    log_lock();
    memset(g_diag, 0, sizeof(g_diag));
    g_diag_n = 0;
    g_diag_total = 0;
    g_diag_overflow = 0;
    memset(g_diag_cat, 0, sizeof(g_diag_cat));
    log_unlock();
}

static inline uint8_t *guest_ptr(uint32_t va) {
    return g_guest_base + va;
}

static inline uint32_t guest_read32(uint32_t va) {
    uint32_t v;
    memcpy(&v, g_guest_base + va, 4);
    return v;
}

static inline void guest_write32(uint32_t va, uint32_t v) {
    memcpy(g_guest_base + va, &v, 4);
}

static inline uint16_t guest_read16(uint32_t va) {
    uint16_t v;
    memcpy(&v, g_guest_base + va, 2);
    return v;
}

static inline void guest_write16(uint32_t va, uint16_t v) {
    memcpy(g_guest_base + va, &v, 2);
}

/* ================================================================
 * Guest Heap Allocator
 * ================================================================ */

#define HEAP_MAGIC 0x4D433248u /* 'MC2H' */

#define NUM_FREELISTS 21
/* Buckets for aligned sizes: 16B up to 16MB (powers of two: 16u << idx) */
static uint32_t g_freelists[NUM_FREELISTS] = {0};

static inline int get_freelist_idx(uint32_t aligned) {
    for (int i = 0; i < NUM_FREELISTS; i++) {
        if (aligned <= (16u << i)) return i;
    }
    return -1;
}

#ifndef _WIN32
static pthread_mutex_t g_guest_heap_mutex = PTHREAD_MUTEX_INITIALIZER;
static inline void guest_heap_lock(void) { pthread_mutex_lock(&g_guest_heap_mutex); }
static inline void guest_heap_unlock(void) { pthread_mutex_unlock(&g_guest_heap_mutex); }
#else
static CRITICAL_SECTION g_guest_heap_cs;
static volatile LONG g_guest_heap_cs_init = 0;
static inline void guest_heap_lock(void) {
    if (!g_guest_heap_cs_init) { InitializeCriticalSection(&g_guest_heap_cs); g_guest_heap_cs_init = 1; }
    EnterCriticalSection(&g_guest_heap_cs);
}
static inline void guest_heap_unlock(void) { LeaveCriticalSection(&g_guest_heap_cs); }
#endif

static uint32_t guest_alloc_locked(uint32_t size, int zero_mem) {
    if (size == 0) size = 4;
    if (size > 0x3F000000u) return 0;
    uint32_t aligned = (size + 15u) & ~15u;

    int fl_idx = get_freelist_idx(aligned);
    if (fl_idx >= 0) {
        aligned = 16u << fl_idx;
    }
    if (fl_idx >= 0 && g_freelists[fl_idx] != 0) {
        uint32_t user_va = g_freelists[fl_idx];
        uint32_t hdr_va = user_va - 16u;
        g_freelists[fl_idx] = guest_read32(user_va); /* next free block */
        guest_write32(hdr_va + 0, size);
        guest_write32(hdr_va + 4, aligned);
        guest_write32(hdr_va + 8, HEAP_MAGIC);
        if (zero_mem) {
            memset(guest_ptr(user_va), 0, aligned);
        }
        return user_va;
    }

    if (g_heap_cursor + 16u + aligned > GUEST_HEAP_END) {
        PC_LOGE("OUT OF GUEST HEAP! Requested %u bytes (cursor=0x%08X)", size, g_heap_cursor);
        return 0;
    }
    uint32_t hdr_va = g_heap_cursor;
    uint32_t user_va = hdr_va + 16u;
    g_heap_cursor += 16u + aligned;

    guest_write32(hdr_va + 0, size);
    guest_write32(hdr_va + 4, aligned);
    guest_write32(hdr_va + 8, HEAP_MAGIC);
    guest_write32(hdr_va + 12, 0);

    if (zero_mem) {
        memset(guest_ptr(user_va), 0, aligned);
    }
    return user_va;
}

static int guest_free_locked(uint32_t va) {
    if (va < GUEST_HEAP_START + 16u || va >= GUEST_HEAP_END) return 1;
    uint32_t hdr_va = va - 16u;
    if (guest_read32(hdr_va + 8) != HEAP_MAGIC) return 1;
    uint32_t aligned = guest_read32(hdr_va + 4);
    guest_write32(hdr_va + 8, 0); /* mark as freed */

    if (hdr_va + 16u + aligned == g_heap_cursor) {
        g_heap_cursor = hdr_va;
        return 1;
    }

    int fl_idx = get_freelist_idx(aligned);
    if (fl_idx >= 0) {
        guest_write32(va, g_freelists[fl_idx]);
        g_freelists[fl_idx] = va;
    }
    return 1;
}

uint32_t pc_guest_alloc(uint32_t size, int zero_mem) {
    guest_heap_lock();
    uint32_t va = guest_alloc_locked(size, zero_mem);
    guest_heap_unlock();
    return va;
}

uint32_t pc_guest_size(uint32_t va) {
    if (va < GUEST_HEAP_START + 16u || va >= GUEST_HEAP_END) return 0;
    if (guest_read32(va - 8) != HEAP_MAGIC) return 0;
    return guest_read32(va - 16);
}

int pc_guest_free(uint32_t va) {
    guest_heap_lock();
    int r = guest_free_locked(va);
    guest_heap_unlock();
    return r;
}

uint32_t pc_guest_realloc(uint32_t old_va, uint32_t new_size, int zero_mem) {
    if (old_va == 0) return pc_guest_alloc(new_size, zero_mem);
    guest_heap_lock();
    uint32_t old_size = (old_va >= GUEST_HEAP_START + 16u && old_va < GUEST_HEAP_END && guest_read32(old_va - 8) == HEAP_MAGIC)
                        ? guest_read32(old_va - 16) : 0;
    uint32_t old_cap = (old_va >= GUEST_HEAP_START + 16u && old_va < GUEST_HEAP_END && guest_read32(old_va - 8) == HEAP_MAGIC)
                       ? guest_read32(old_va - 12) : 0;
    if (new_size <= old_cap && old_cap > 0) {
        guest_write32(old_va - 16, new_size);
        guest_heap_unlock();
        return old_va;
    }
    uint32_t new_va = guest_alloc_locked(new_size, zero_mem);
    if (new_va) {
        if (old_size > 0) {
            uint32_t copy_len = old_size < new_size ? old_size : new_size;
            memcpy(guest_ptr(new_va), guest_ptr(old_va), copy_len);
        }
        guest_free_locked(old_va);
    }
    guest_heap_unlock();
    return new_va;
}

/* ================================================================
 * CPUID, setjmp/longjmp, Debug & Unimplemented Helpers
 * ================================================================ */

void xbox_Cpuid(uint32_t leaf, uint32_t subleaf, uint32_t out[4]) {
    (void)subleaf;
    if (leaf == 0) {
        out[0] = 1;
        out[1] = 0x756E6547u; /* "Genu" */
        out[2] = 0x6C65746Eu; /* "ntel" */
        out[3] = 0x49656E69u; /* "ineI" */
    } else if (leaf == 1) {
        /* Pentium III (Coppermine): FPU + MMX + SSE + CMOV, NO SSE2 (bit 26 = 0)
         * Keeping bit 26 = 0 forces MSVC CRT math onto the 100%-supported x87 path! */
        out[0] = 0x00000686u;
        out[1] = 0x00000000u;
        out[2] = 0x00000000u;
        out[3] = 0x0383FBFFu; /* FPU, TSC, CMOV, MMX, FXSR, SSE (no SSE2) */
    } else {
        out[0] = out[1] = out[2] = out[3] = 0;
    }
}

void xbox_GuestCpuPreempt(uint32_t va) {
    (void)va;
    g_xbox_guest_cpu_preempt = 0;
}

uint64_t xbox_ReadTimeStampCounter(void) {
#if defined(_WIN32)
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (uint64_t)li.QuadPart * 1000ull;
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
#endif
}

uint32_t xbox_PortIn(uint32_t port, int width) {
    (void)port;
    (void)width;
    return 0;
}

void xbox_PortOut(uint32_t port, uint32_t val, int width) {
    (void)port;
    (void)val;
    (void)width;
}

typedef struct {
    uint32_t buf_va;
    jmp_buf env;
    int in_use;
} GuestJmpSlot;

static GuestJmpSlot g_jmp_slots[64];

jmp_buf *recomp_setjmp_slot(uint32_t buf_va) {
    for (int i = 0; i < 64; i++) {
        if (g_jmp_slots[i].in_use && g_jmp_slots[i].buf_va == buf_va)
            return &g_jmp_slots[i].env;
    }
    for (int i = 0; i < 64; i++) {
        if (!g_jmp_slots[i].in_use) {
            g_jmp_slots[i].in_use = 1;
            g_jmp_slots[i].buf_va = buf_va;
            return &g_jmp_slots[i].env;
        }
    }
    return &g_jmp_slots[0].env;
}

int recomp_guest_longjmp(uint32_t buf_va, uint32_t value) {
    for (int i = 0; i < 64; i++) {
        if (g_jmp_slots[i].in_use && g_jmp_slots[i].buf_va == buf_va) {
            longjmp(g_jmp_slots[i].env, value ? (int)value : 1);
        }
    }
    return 0;
}

void recomp_debug_service(uint32_t service, uint32_t arg_va) {
    (void)service;
    (void)arg_va;
}

void recomp_unimpl(const char *text, uint32_t va) {
    static uint32_t seen[32];
    static int count = 0;
    for (int i = 0; i < count; i++) {
        if (seen[i] == va) return;
    }
    if (count < 32) seen[count++] = va;
    PC_LOGW("[UNIMPL] 0x%08X: %s", va, text ? text : "?");
}

void recomp_icall_fail_log(uint32_t va) {
    static int logged = 0;
    if (logged < 50) {
        logged++;
        PC_LOGE("[ICALL FAIL] Unresolved target VA=0x%08X (ret=0x%08X, ecx=0x%08X, total=%llu)",
                va, g_esp ? guest_read32(g_esp) : 0, g_ecx, (unsigned long long)g_icall_count);
    }
}

void recomp_icall_not_code_log(uint32_t va) {
    static int logged = 0;
    if (logged < 50) {
        logged++;
        PC_LOGE("[ICALL NOT CODE] Target VA=0x%08X is not code (ret=0x%08X, ecx=0x%08X, total=%llu)",
                va, g_esp ? guest_read32(g_esp) : 0, g_ecx, (unsigned long long)g_icall_count);
    }
}

/* ================================================================
 * Manual Function Overrides (recomp_lookup_manual)
 * ================================================================ */

static void manual_sub_005769D0(void) {
    g_esp += 4;
}

extern void sub_0043B2E0(void);
extern void sub_0043B2EA(void);

/* MC2 Menu transition & City / Race loading entry point (0x0043B2B0) */
static void manual_sub_0043B2B0(void) {
    uint32_t arg1 = guest_read32(g_esp + 4);
    if (!arg1) {
        /* ret 4: clean up callee-cleanup argument (4 bytes) + return address */
        g_esp += 8;
        return;
    }
    uint32_t esi = g_ecx;
    uint32_t edi = guest_read32(esi + 0x7C);
    if (edi == 0) {
        edi = guest_read32(esi + 0x78);
    }
    uint32_t eax = edi - 1u;
    uint32_t ebx = 0;
    uint32_t ebp = arg1;

    /* Push ebx, ebp, esi, edi onto the guest stack as expected by sub_0043B2E0/EA epilogue */
    guest_write32(g_esp - 4, ebx);
    guest_write32(g_esp - 8, ebp);
    guest_write32(g_esp - 12, esi);
    guest_write32(g_esp - 16, edi);
    g_esp -= 16;

    g_esi = esi;
    g_ebx = ebx;
    g_ebp = ebp;
    g_edi = edi;

    if (eax <= 6u && (eax == 0 || eax == 1)) {
        sub_0043B2E0();
    } else {
        sub_0043B2EA();
    }
}

void mc2_log_layer_unload(uint32_t layer, uint32_t caller) {
    PC_LOGI("[MC2_LAYER] StartUnloadLayer(layer=%u) caller=0x%08X", layer, caller);
}

/* MSVC x87 CRT math tail helpers:
 * 0x0061E2E4: fstp st(0); fstp st(0); fldz; ret
 * 0x0061E2EB: fstp st(0); fstp st(0); fld1; ret */
static void manual_sub_0061E2E4(void) {
    g_fp_top = (g_fp_top + 2u) & 7u;
    g_fp_top = (g_fp_top + 7u) & 7u;
    g_fp_stack[g_fp_top] = 0.0;
    g_esp += 4;
}

static void manual_sub_0061E2EB(void) {
    g_fp_top = (g_fp_top + 2u) & 7u;
    g_fp_top = (g_fp_top + 7u) & 7u;
    g_fp_stack[g_fp_top] = 1.0;
    g_esp += 4;
}

recomp_func_t recomp_lookup_manual(uint32_t xbox_va) {
    if (xbox_va == 0x005769D0u) return manual_sub_005769D0;
    if (xbox_va == 0x0043B2B0u) return manual_sub_0043B2B0;
    if (xbox_va == 0x0061E2E4u) return manual_sub_0061E2E4;
    if (xbox_va == 0x0061E2EBu) return manual_sub_0061E2EB;
    return NULL;
}

/* ================================================================
 * Path & File Handle Table
 * ================================================================ */

void mc2_pc_set_paths(const char *game_dir, const char *save_dir) {
    if (game_dir && *game_dir) {
        strncpy(g_game_dir, game_dir, sizeof(g_game_dir) - 1);
        g_game_dir[sizeof(g_game_dir) - 1] = '\0';
    }
    if (save_dir && *save_dir) {
        strncpy(g_save_dir, save_dir, sizeof(g_save_dir) - 1);
        g_save_dir[sizeof(g_save_dir) - 1] = '\0';
    }
    PORTDBG("[DATA] g_game_dir=%s · g_save_dir=%s", g_game_dir, g_save_dir);
}

void mc2_pc_set_cmdline(const char *cmdline) {
    if (cmdline && *cmdline) {
        strncpy(g_cmdline_str, cmdline, sizeof(g_cmdline_str) - 1);
        g_cmdline_str[sizeof(g_cmdline_str) - 1] = '\0';
    }
}

static void translate_guest_path(const char *guest_path, char *out_host, size_t out_sz) {
    if (!guest_path || !*guest_path) {
        snprintf(out_host, out_sz, "%s", g_game_dir);
        return;
    }
    const char *p = guest_path;
#if !defined(_WIN32)
    /* Strip virtual Windows drive / folder prefix on Android (e.g. C:\Midnight Club II\ or C:\) */
    if (isalpha((unsigned char)p[0]) && p[1] == ':' && (p[2] == '\\' || p[2] == '/')) {
        p += 3;
        if (strncasecmp(p, "Midnight Club II\\", 17) == 0 ||
            strncasecmp(p, "Midnight Club II/", 17) == 0) {
            p += 17;
        }
    }
#endif
    /* Strip leading .\ or ./ */
    while (p[0] == '.' && (p[1] == '\\' || p[1] == '/')) {
        p += 2;
    }
    /* Strip leading backslash if relative to root */
    while (p[0] == '\\') p++;

    /* If already a native absolute path */
    if ((isalpha((unsigned char)p[0]) && p[1] == ':') || p[0] == '/') {
        snprintf(out_host, out_sz, "%s", p);
    } else {
        snprintf(out_host, out_sz, "%s/%s", g_game_dir, p);
    }
    for (char *c = out_host; *c; c++) {
#if defined(_WIN32)
        if (*c == '/') *c = '\\';
#else
        if (*c == '\\') *c = '/';
#endif
    }
}

static void lowercase_relative_portion(char *host_path) {
    size_t base_len = strlen(g_game_dir);
    if (strncmp(host_path, g_game_dir, base_len) == 0) {
        for (char *c = host_path + base_len; *c; c++) {
            *c = (char)tolower((unsigned char)*c);
        }
    }
}

/* ================================================================
 * Datos de solo lectura proporcionados por SAF (fuera de Android/data).
 *
 * El usuario elige una carpeta con ACTION_OPEN_DOCUMENT_TREE. La capa Java
 * abre cada documento con ContentResolver y registra aqui su descriptor.
 * El registro se completa ANTES de arrancar el juego y no se modifica
 * durante la ejecucion, por lo que la lectura no necesita bloqueo.
 * Los guardados siguen escribiendose en la carpeta privada de la app.
 * ================================================================ */

#define MC2_MAX_DATA_FDS 2048

typedef struct {
    char path[256];
    int fd;
    long long size;
    int used;       /* el juego abrio este archivo al menos una vez */
    int opens;      /* aperturas acumuladas */
} Mc2DataFd;

static Mc2DataFd g_data_fds[MC2_MAX_DATA_FDS];
static int g_data_fd_count = 0;
static int g_data_fd_log_count = 0;
static int g_data_fd_rejected = 0;

static void normalize_data_path(const char *in, char *out, size_t out_sz) {
    size_t i = 0;
    const char *p = in;
    while (*p == '/' || *p == '\\') p++;
    for (; *p && i + 1 < out_sz; p++, i++) {
        char c = *p;
        if (c == '\\') c = '/';
        out[i] = (char) tolower((unsigned char) c);
    }
    out[i] = '\0';
}

/* Carpetas que NO pertenecen al juego: son wrappers/parches de PC (x86/x64)
   que no se ejecutan en ARM64. Se excluyen de forma explicita y documentada;
   ningun otro archivo del arbol se descarta. */
static int is_pc_patch_path(const char *norm) {
    return strncmp(norm, "dgvoodoo2_87_6/", 15) == 0
        || strncmp(norm, "mc2patch/", 9) == 0;
}

void mc2_pc_register_data_fd(const char *relative_path, int fd, long long size) {
    if (!relative_path || fd < 0) return;
    char norm[256];
    normalize_data_path(relative_path, norm, sizeof(norm));
    if (is_pc_patch_path(norm)) {
        PORTDBG("[DATA] EXCLUIDO deliberadamente (parche de PC): %s", norm);
        return;
    }
    if (!*norm) return;

    for (int i = 0; i < g_data_fd_count; i++) {
        if (strcmp(g_data_fds[i].path, norm) != 0) continue;
#if defined(_WIN32)
        if (g_data_fds[i].fd >= 0) _close(g_data_fds[i].fd);
        g_data_fds[i].fd = _dup(fd);
#else
        if (g_data_fds[i].fd >= 0) close(g_data_fds[i].fd);
        g_data_fds[i].fd = dup(fd);
#endif
        g_data_fds[i].size = size;
        g_data_fds[i].used = 0;
        g_data_fds[i].opens = 0;
        return;
    }

    if (g_data_fd_count >= MC2_MAX_DATA_FDS) {
        g_data_fd_rejected++;
        PORTDBG("[DATA] ERROR limite de %d descriptores SAF alcanzado; "
                "archivo NO disponible: %s", MC2_MAX_DATA_FDS, norm);
        return;
    }
    Mc2DataFd *e = &g_data_fds[g_data_fd_count++];
    memcpy(e->path, norm, sizeof(e->path));
#if defined(_WIN32)
    e->fd = _dup(fd);
#else
    e->fd = dup(fd);
#endif
    if (e->fd < 0) {
        g_data_fd_count--;
        g_data_fd_rejected++;
        PORTDBG("[DATA] ERROR no se pudo duplicar el descriptor de %s (errno=%d)",
                norm, errno);
        return;
    }
    e->size = size;
    e->used = 0;
    e->opens = 0;
}

const char *mc2_pc_data_usage_summary(void) {
    static char summary[256];
    int used = 0;
    long long opens = 0;
    for (int i = 0; i < g_data_fd_count; i++) {
        if (g_data_fds[i].used) used++;
        opens += g_data_fds[i].opens;
    }
    snprintf(summary, sizeof(summary),
             "%d registrados · %d usados · %d sin abrir · %lld aperturas · %d rechazados",
             g_data_fd_count, used, g_data_fd_count - used, opens,
             g_data_fd_rejected);
    return summary;
}

void mc2_pc_dump_data_usage(void) {
    PORTDBG("[DATA] RESUMEN DE USO: %s", mc2_pc_data_usage_summary());
    int shown = 0;
    for (int i = 0; i < g_data_fd_count && shown < 60; i++) {
        if (g_data_fds[i].used) continue;
        shown++;
        PORTDBG("[DATA] SIN ABRIR: %s (%lld bytes)",
                g_data_fds[i].path, g_data_fds[i].size);
    }
}

void mc2_pc_clear_data_fds(void) {
    if (g_data_fd_count > 0) mc2_pc_dump_data_usage();
    for (int i = 0; i < g_data_fd_count; i++) {
        if (g_data_fds[i].fd < 0) continue;
#if defined(_WIN32)
        _close(g_data_fds[i].fd);
#else
        close(g_data_fds[i].fd);
#endif
        g_data_fds[i].fd = -1;
    }
    g_data_fd_count = 0;
    g_data_fd_log_count = 0;
    g_data_fd_rejected = 0;
}

int mc2_pc_data_fd_count(void) {
    return g_data_fd_count;
}

static FILE *open_registered_data(const char *host_path, const char *mode) {
    if (g_data_fd_count <= 0) return NULL;
    /* Los descriptores SAF son de SOLO LECTURA. Una apertura de escritura
       debe ir siempre a la carpeta privada: "wb+" sobre un fd SAF truncaria
       el archivo original del juego. */
    if (mode && (mode[0] == 'w' || mode[0] == 'a' || strchr(mode, '+'))) {
        return NULL;
    }

    const char *rel = host_path;
    size_t base_len = strlen(g_game_dir);
    if (base_len > 0 && strncmp(host_path, g_game_dir, base_len) == 0) {
        rel = host_path + base_len;
    }
    char norm[256];
    normalize_data_path(rel, norm, sizeof(norm));
    if (!*norm) return NULL;

    int idx = -1;
    for (int i = 0; i < g_data_fd_count; i++) {
        if (strcmp(g_data_fds[i].path, norm) == 0) { idx = i; break; }
    }
    if (idx < 0) {
        /* El juego a veces pide "cancion.sgt" o ".\audio\cancion.sgt" mientras
           el arbol lo guarda en "audio/directmusic/pc/cancion.sgt". Se resuelve
           por nombre base SOLO si la coincidencia es unica (evita ambiguedad). */
        const char *base = strrchr(norm, '/');
        base = base ? base + 1 : norm;
        int candidates = 0;
        for (int i = 0; i < g_data_fd_count; i++) {
            const char *b2 = strrchr(g_data_fds[i].path, '/');
            b2 = b2 ? b2 + 1 : g_data_fds[i].path;
            if (strcasecmp(base, b2) == 0) { idx = i; candidates++; }
        }
        if (candidates != 1) idx = -1;
        else PORTDBG("[DATA] SAF resuelto por nombre base: %s -> %s",
                     norm, g_data_fds[idx].path);
    }
    if (idx < 0) return NULL;

    Mc2DataFd *e = &g_data_fds[idx];
    FILE *f = NULL;
#if defined(__ANDROID__) || defined(__linux__)
    /* dup() comparte la open file description y, con ella, el offset. El juego
       abre assets_p.dat y streams_pc.dat varias veces a la vez y los lee por
       offsets: con dup() esas lecturas se pisaban entre si y el indice del
       contenedor salia corrupto. Reabrir /proc/self/fd/N crea una descripcion
       INDEPENDIENTE con su propio puntero. */
    char proc_path[64];
    snprintf(proc_path, sizeof(proc_path), "/proc/self/fd/%d", e->fd);
    f = fopen(proc_path, "rb");
#endif
    if (!f) {
#if defined(_WIN32)
        int copy_fd = _dup(e->fd);
        if (copy_fd >= 0) {
            f = _fdopen(copy_fd, "rb");
            if (!f) _close(copy_fd);
        }
#else
        int copy_fd = dup(e->fd);
        if (copy_fd >= 0) {
            f = fdopen(copy_fd, "rb");
            if (!f) close(copy_fd);
        }
#endif
    }
    if (!f) {
        PORTDBG("[DATA] ERROR no se pudo reabrir el descriptor SAF de %s "
                "(errno=%d)", e->path, errno);
        return NULL;
    }
    rewind(f);
    e->opens++;
    if (!e->used) {
        e->used = 1;
        g_data_fd_log_count++;
        PORTDBG("[DATA] USADO #%d: %s (%lld bytes)",
                g_data_fd_log_count, e->path, e->size);
    }
    return f;
}

/* Comprueba que un archivo pedido por el juego existe en el arbol SAF y lo
   marca como USADO. Devuelve su tamano, o -1 si no esta. Se usa para las
   cargas que no pasan por CreateFileA (Bink, gfxLoadImage, ...). */
static long long probe_registered_data(const char *guest_path) {
    if (!guest_path || !*guest_path) return -1;
    char host_path[1024];
    translate_guest_path(guest_path, host_path, sizeof(host_path));
    FILE *f = open_registered_data(host_path, "rb");
    if (!f) {
        char alt[1024];
        strncpy(alt, host_path, sizeof(alt) - 1);
        alt[sizeof(alt) - 1] = '\0';
        lowercase_relative_portion(alt);
        f = open_registered_data(alt, "rb");
    }
    if (!f) return -1;
    if (fseek(f, 0, SEEK_END) != 0) {
        fclose(f);
        return 1;
    }
    long long size = ftell(f);
    fclose(f);
    return size > 0 ? size : 1;
}

/* ================================================================
 * Integrated MC2HOOK Framework (Native ARM64 adaptation of jtxredline/mc2hook)
 * ================================================================ */

static Mc2HookConfig g_mc2hook = {
    0,      /* enabled */
    1,      /* open_spy */
    1,      /* multi_dat */
    512,    /* reflection_res */
    1,      /* reflection_no_skip */
    1,      /* ai_player_models */
    1.0f,   /* car_shadow_intensity */
    1,      /* body_shader */
    1.2f,   /* draw_dist_mult */
    1,      /* menu_scroll_fix */
    1,      /* burnout_fps_fix */
    1,      /* manual_reverse */
    0,      /* expand_world */
    1.0f,   /* time_warp */
    -9.8f   /* gravity */
};

typedef struct {
    uint32_t va;
    float base190;
    float base194;
    float base198;
} Mc2BurnoutCache;
static Mc2BurnoutCache g_burnout_cache[16];
static int g_burnout_cache_count = 0;

void mc2_pc_set_mc2hook_config(const Mc2HookConfig *cfg) {
    if (!cfg) return;
    g_mc2hook = *cfg;
    if (g_mc2hook.reflection_res != 128 && g_mc2hook.reflection_res != 256 &&
        g_mc2hook.reflection_res != 512 && g_mc2hook.reflection_res != 1024) {
        g_mc2hook.reflection_res = 512;
    }
    if (g_mc2hook.car_shadow_intensity < 0.25f) g_mc2hook.car_shadow_intensity = 0.25f;
    if (g_mc2hook.car_shadow_intensity > 2.0f)  g_mc2hook.car_shadow_intensity = 2.0f;
    if (g_mc2hook.draw_dist_mult < 0.5f)        g_mc2hook.draw_dist_mult = 0.5f;
    if (g_mc2hook.draw_dist_mult > 3.0f)        g_mc2hook.draw_dist_mult = 3.0f;
    if (g_mc2hook.time_warp < 0.25f)            g_mc2hook.time_warp = 0.25f;
    if (g_mc2hook.time_warp > 2.5f)             g_mc2hook.time_warp = 2.5f;
    g_burnout_cache_count = 0;
}

void mc2_pc_get_mc2hook_config(Mc2HookConfig *out) {
    if (out) *out = g_mc2hook;
}

int mc2hook_is_enabled(void) { return g_mc2hook.enabled ? 1 : 0; }
int mc2hook_reflection_res(void) {
    return g_mc2hook.enabled ? g_mc2hook.reflection_res : 128;
}
int mc2hook_reflection_no_skip(void) {
    return (g_mc2hook.enabled && g_mc2hook.reflection_no_skip) ? 1 : 0;
}
int mc2hook_ai_player_models(void) {
    return (g_mc2hook.enabled && g_mc2hook.ai_player_models) ? 1 : 0;
}
float mc2hook_car_shadow_intensity(void) {
    return g_mc2hook.enabled ? g_mc2hook.car_shadow_intensity : 0.5f;
}
int mc2hook_menu_scroll_fix(void) {
    return (g_mc2hook.enabled && g_mc2hook.menu_scroll_fix) ? 1 : 0;
}
int mc2hook_burnout_fps_fix(void) {
    return (g_mc2hook.enabled && g_mc2hook.burnout_fps_fix) ? 1 : 0;
}
int mc2hook_manual_reverse(void) {
    return (g_mc2hook.enabled && g_mc2hook.manual_reverse) ? 1 : 0;
}
int mc2hook_expand_world(void) {
    return (g_mc2hook.enabled && g_mc2hook.expand_world) ? 1 : 0;
}
int mc2hook_multi_dat(void) {
    return (g_mc2hook.enabled && g_mc2hook.multi_dat) ? 1 : 0;
}
float mc2hook_time_warp(void) {
    return g_mc2hook.enabled ? g_mc2hook.time_warp : 1.0f;
}

uint32_t mc2hook_next_extra_dat(int *cursor) {
    if (!cursor || !mc2hook_multi_dat()) return 0u;
    for (int i = *cursor; i < g_data_fd_count; i++) {
        const char *p = g_data_fds[i].path;
        size_t len = strlen(p);
        if (len >= 5 && strcasecmp(p + len - 4, ".dat") == 0 &&
            strcasecmp(p, "assets_p.dat") != 0 &&
            strcasecmp(p, "streams_pc.dat") != 0) {
            *cursor = i + 1;
            snprintf((char *)guest_ptr(GUEST_MC2HOOK_DAT_VA), 256, "%s", p);
            PC_LOGI("[MC2HOOK] Multi-DAT montando archivo adicional: %s", p);
            return GUEST_MC2HOOK_DAT_VA;
        }
    }
    *cursor = g_data_fd_count;
    return 0u;
}

void mc2hook_apply_burnout_fps_fix(uint32_t car_sim_va) {
    if (!mc2hook_burnout_fps_fix() || !car_sim_va) return;
    int idx = -1;
    for (int i = 0; i < g_burnout_cache_count; i++) {
        if (g_burnout_cache[i].va == car_sim_va) { idx = i; break; }
    }
    if (idx < 0) {
        if (g_burnout_cache_count >= 16) return;
        idx = g_burnout_cache_count++;
        g_burnout_cache[idx].va = car_sim_va;
        g_burnout_cache[idx].base190 = MEMF(car_sim_va + 0x190u);
        g_burnout_cache[idx].base194 = MEMF(car_sim_va + 0x194u);
        g_burnout_cache[idx].base198 = MEMF(car_sim_va + 0x198u);
    }
    float dt = MEMF(0x006797CCu);
    if (dt <= 0.0005f || dt > 0.25f) dt = 1.0f / 60.0f;
    float scale = dt * 60.0f;
    MEMF(car_sim_va + 0x190u) = g_burnout_cache[idx].base190 * scale;
    MEMF(car_sim_va + 0x194u) = g_burnout_cache[idx].base194 * scale;
    MEMF(car_sim_va + 0x198u) = g_burnout_cache[idx].base198 * scale;
}

static void mc2hook_apply_boot_patches(void) {
    if (!g_mc2hook.enabled) {
        PC_LOGI("[MC2HOOK] Modulo integrado DESACTIVADO (modo estandar)");
        return;
    }
    PC_LOGI("[MC2HOOK] Modulo integrado ACTIVO (OpenSpy=%d, MultiDat=%d, Refl=%d, NoSkip=%d, AI=%d, Shadow=%.2f, Shader=%d, Dist=%.2fx, Grav=%.2f, TimeWarp=%.2f)",
            g_mc2hook.open_spy, g_mc2hook.multi_dat, g_mc2hook.reflection_res,
            g_mc2hook.reflection_no_skip, g_mc2hook.ai_player_models,
            g_mc2hook.car_shadow_intensity, g_mc2hook.body_shader,
            g_mc2hook.draw_dist_mult, g_mc2hook.gravity, g_mc2hook.time_warp);

    if (g_mc2hook.open_spy) {
        const uint32_t gs_addrs[4] = {
            0x0064F3D4u, /* %s.ms%d.gamespy.com */
            0x0064F45Cu, /* natneg2.gamespy.com */
            0x0064F470u, /* natneg1.gamespy.com */
            0x0064F4AAu  /* %s.master.gamespy.com */
        };
        for (int i = 0; i < 4; i++) {
            char *dst = (char *)guest_ptr(gs_addrs[i]);
            if (memcmp(dst, "gamespy.com", 11) == 0) {
                memcpy(dst, "openspy.net", 11);
            }
        }
        PC_LOGI("[MC2HOOK] OpenSpy habilitado: endpoints GameSpy redirigidos a openspy.net");
    }

    MEMF(0x006449BCu) = g_mc2hook.gravity;
    MEMF(0x00646DC8u) = 200.0f * g_mc2hook.draw_dist_mult;
    MEMF(0x00662C70u) = 25.0f * g_mc2hook.draw_dist_mult;
    MEMF(0x006797F0u) = g_mc2hook.time_warp;
}

#if defined(_WIN32)
#ifndef strcasecmp
#define strcasecmp _stricmp
#endif
#endif
#define DM_LOGI(...) PC_LOGI(__VA_ARGS__)
#define DM_LOGW(...) PC_LOGI(__VA_ARGS__)
#include "mc2_dmusic.h"

int mc2_dm_mix_pcm(int16_t *out_buffer, int num_frames, int sample_rate) {
    return mc2_dm_mix(out_buffer, num_frames, sample_rate);
}

/* MC2 (Miles 6 / mss32.dll) passes IEEE-754 0.0f..1.0f float bits in a1/a2 for volume/pan,
 * whereas older Miles 5 callers pass integer 0..127. Decode both cleanly. */
static float decode_ail_vol_arg(uint32_t raw) {
    if (raw == 0u) return 0.0f;
    if (raw <= 127u) return (float)raw / 127.0f;
    float f = 0.0f;
    memcpy(&f, &raw, 4);
    if (f != f) return 1.0f;
    if (f < 0.0f) f = 0.0f;
    if (f > 1.0f) f = 1.0f;
    return f;
}

/* Sonda de integridad: lee un tramo de un archivo del arbol SAF por la MISMA
   ruta que usa el juego (open_registered_data) y devuelve CRC32 + cabecera hex.
   Permite comparar con el archivo original del PC y descartar corrupcion. */
const char *mc2_pc_probe_data(const char *guest_path, long long offset, int len) {
    static char out[256];
    if (len < 0) len = 0;
    if (len > 64) len = 64;
    char host[1024];
    translate_guest_path(guest_path, host, sizeof(host));
    FILE *f = open_registered_data(host, "rb");
    if (!f) {
        snprintf(out, sizeof(out), "ERR=sin descriptor SAF para %s", guest_path);
        return out;
    }
    if (fseek(f, (long)offset, SEEK_SET) != 0) {
        fclose(f);
        snprintf(out, sizeof(out), "ERR=fseek fallo en offset %lld", offset);
        return out;
    }
    unsigned char buf[64];
    size_t n = fread(buf, 1, (size_t)len, f);
    fclose(f);
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < n; i++) {
        crc ^= buf[i];
        for (int b = 0; b < 8; b++) {
            crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1u)));
        }
    }
    crc ^= 0xFFFFFFFFu;
    char hex[130];
    memset(hex, 0, sizeof(hex));
    for (size_t i = 0; i < n && i < 16; i++) {
        snprintf(hex + i * 2, 3, "%02X", buf[i]);
    }
    snprintf(out, sizeof(out), "off=%lld n=%zu crc32=%08X head=%s",
             offset, n, crc, hex);
    return out;
}

static void ensure_parent_dirs_exist(const char *path) {
    char dir[1024];
    strncpy(dir, path, sizeof(dir) - 1);
    dir[sizeof(dir) - 1] = '\0';
    char *last = strrchr(dir, '/');
    if (!last) return;
    *last = '\0';
    for (char *p = dir + 1; *p; p++) {
        if (*p == '/') {
            *p = '\0';
#if defined(_WIN32)
            _mkdir(dir);
#else
            mkdir(dir, 0777);
#endif
            *p = '/';
        }
    }
#if defined(_WIN32)
    _mkdir(dir);
#else
    mkdir(dir, 0777);
#endif
}

#define MAX_GUEST_FILES 256
#define GUEST_FILE_HANDLE_BASE 0x2000u

typedef struct {
    int in_use;
    FILE *fp;
    char path[512];
} GuestFileSlot;

static GuestFileSlot g_files[MAX_GUEST_FILES];

static uint32_t alloc_file_handle(FILE *fp, const char *path) {
    for (int i = 1; i < MAX_GUEST_FILES; i++) {
        if (!g_files[i].in_use) {
            g_files[i].in_use = 1;
            g_files[i].fp = fp;
            snprintf(g_files[i].path, sizeof(g_files[i].path), "%s", path ? path : "");
            return GUEST_FILE_HANDLE_BASE + (uint32_t)i;
        }
    }
    return 0xFFFFFFFFu;
}

static GuestFileSlot *get_file_slot(uint32_t handle) {
    if (handle < GUEST_FILE_HANDLE_BASE + 1 || handle >= GUEST_FILE_HANDLE_BASE + MAX_GUEST_FILES)
        return NULL;
    GuestFileSlot *s = &g_files[handle - GUEST_FILE_HANDLE_BASE];
    return s->in_use ? s : NULL;
}

#if !defined(_WIN32)
#define MC2_FIND_MAX_ENTRIES 320

typedef struct {
    int in_use;
    char dir_path[512];
    char pattern[256];
    int list_count;
    int list_index;
    char names[MC2_FIND_MAX_ENTRIES][260];
    uint32_t attrs[MC2_FIND_MAX_ENTRIES];
    long long sizes[MC2_FIND_MAX_ENTRIES];
} HostFindHandle;

static HostFindHandle g_find_handles[16];

/* Anade una entrada sin duplicados: una misma ruta puede existir tanto en el
   arbol SAF (datos originales) como en la carpeta privada (guardados). */
static void find_add_entry(HostFindHandle *h, const char *name,
                           uint32_t attr, long long size) {
    if (h->list_count >= MC2_FIND_MAX_ENTRIES) return;
    for (int i = 0; i < h->list_count; i++) {
        if (strcasecmp(h->names[i], name) == 0) return;
    }
    strncpy(h->names[h->list_count], name, 259);
    h->names[h->list_count][259] = '\\0';
    h->attrs[h->list_count] = attr;
    h->sizes[h->list_count] = size;
    h->list_count++;
}

static void find_fill_win32_data(uint32_t guest_struct, const char *name,
                                 uint32_t attr, long long size) {
    if (!guest_struct) return;
    memset(guest_ptr(guest_struct), 0, 320);
    guest_write32(guest_struct + 0, attr);
    guest_write32(guest_struct + 28, (uint32_t)(((uint64_t) size) >> 32));
    guest_write32(guest_struct + 32, (uint32_t)(((uint64_t) size) & 0xFFFFFFFFu));
    strncpy((char *) guest_ptr(guest_struct + 44), name, 259);
}

static int host_match_wildcard(const char *pattern, const char *name) {
    if (!pattern || !*pattern || strcmp(pattern, "*") == 0 || strcmp(pattern, "*.*") == 0) return 1;
    if (pattern[0] == '*' && pattern[1] == '.') {
        const char *ext = strrchr(name, '.');
        if (!ext) return 0;
        return strcasecmp(ext, pattern + 1) == 0;
    }
    const char *star = strchr(pattern, '*');
    if (star) {
        size_t pre_len = (size_t)(star - pattern);
        return strncasecmp(name, pattern, pre_len) == 0;
    }
    return strcasecmp(name, pattern) == 0;
}
#endif

/* ================================================================
 * Direct3D 9 & DirectInput 8 Synthetic COM Emulation
 * ================================================================ */

/* Synthetic VA ranges:
 * 0xFE000000 + i*4 : PE IAT imports (0..201)
 * 0xFE010000 + i*4 : IDirect3D9 methods (0..16)
 * 0xFE010100 + i*4 : IDirect3DDevice9 methods (0..118)
 * 0xFE010300 + i*4 : IDirect3DTexture9 methods (0..21)
 * 0xFE010400 + i*4 : IDirect3DSurface9 methods (0..16)
 * 0xFE010500 + i*4 : IDirect3DVertexBuffer9 methods (0..13)
 * 0xFE010600 + i*4 : IDirect3DIndexBuffer9 methods (0..13)
 * 0xFE010700 + i*4 : IDirect3DVertexDeclaration9 / Shader / StateBlock (0..9)
 * 0xFE010800 + i*4 : IDirectInput8A methods (0..8)
 * 0xFE010900 + i*4 : IDirectInputDevice8A methods (0..31)
 */

#define VA_IAT_BASE       0xFE000000u
#define VA_D3D9_BASE      0xFE010000u
#define VA_D3DDEV9_BASE   0xFE010100u
#define VA_D3DTEX9_BASE   0xFE010300u
#define VA_D3DSURF9_BASE  0xFE010400u
#define VA_D3DVB9_BASE    0xFE010500u
#define VA_D3DIB9_BASE    0xFE010600u
#define VA_D3DSHADER_BASE 0xFE010700u
#define VA_DINPUT8_BASE   0xFE010800u
#define VA_DIDEV8_BASE    0xFE010900u
#define VA_DMLOADER8_BASE 0xFE010A00u
#define VA_DMPERF8_BASE   0xFE010B00u
#define VA_DMSEG8_BASE    0xFE010D00u
#define VA_DMPATH8_BASE   0xFE010E00u
#define VA_DMSTATE8_BASE  0xFE010F00u
#define VA_D3DCUBETEX9_BASE 0xFE011000u
#define VA_D3DSTATEBLOCK9_BASE 0xFE011100u

static uint32_t g_vtbl_d3d9 = 0;
static uint32_t g_vtbl_d3ddev9 = 0;
static uint32_t g_vtbl_d3dtex9 = 0;
static uint32_t g_vtbl_d3dcubetex9 = 0;
static uint32_t g_vtbl_d3dsurf9 = 0;
static uint32_t g_vtbl_d3dvb9 = 0;
static uint32_t g_vtbl_d3dib9 = 0;
static uint32_t g_vtbl_d3dshader = 0;
static uint32_t g_vtbl_d3dstateblock9 = 0;
static uint32_t g_vtbl_dinput8 = 0;
static uint32_t g_vtbl_didev8 = 0;
static uint32_t g_vtbl_dmloader8 = 0;
static uint32_t g_vtbl_dmperf8 = 0;
static uint32_t g_vtbl_dmseg8 = 0;
static uint32_t g_vtbl_dmpath8 = 0;
static uint32_t g_vtbl_dmstate8 = 0;

static uint32_t g_obj_d3d9 = 0;
static uint32_t g_obj_d3ddev9 = 0;
static uint32_t g_obj_backbuffer = 0;
static uint32_t g_obj_depthstencil = 0;
static uint32_t g_obj_dinput8 = 0;
static uint32_t g_obj_dmloader8 = 0;
static uint32_t g_obj_dmperf8 = 0;
static uint32_t g_obj_dmseg8 = 0;
static uint32_t g_obj_dmpath8 = 0;
static uint32_t g_obj_dmstate8 = 0;

/* Guest COM Resource Header (32 bytes):
 * +0x00: vtable_va
 * +0x04: refcount
 * +0x08: type (1=VB, 2=IB, 3=Tex, 4=Surf, 5=Shader/Decl/StateBlock, 6=DIDev)
 * +0x0C: data_va (backing buffer in guest heap)
 * +0x10: byte_size
 * +0x14: width
 * +0x18: height
 * +0x1C: format
 */
static uint32_t create_com_resource(uint32_t vtbl_va, uint32_t type, uint32_t byte_size,
                                    uint32_t width, uint32_t height, uint32_t format) {
    uint32_t obj_va = pc_guest_alloc(64, 1);
    memset(guest_ptr(obj_va), 0, 64);
    uint32_t data_va = byte_size > 0 ? pc_guest_alloc(byte_size, 1) : 0;
    guest_write32(obj_va + 0x00, vtbl_va);
    guest_write32(obj_va + 0x04, 1);
    guest_write32(obj_va + 0x08, type);
    guest_write32(obj_va + 0x0C, data_va);
    guest_write32(obj_va + 0x10, byte_size);
    guest_write32(obj_va + 0x14, width);
    guest_write32(obj_va + 0x18, height);
    guest_write32(obj_va + 0x1C, format);
    return obj_va;
}

/* Argument counts (in DWORDs) for IDirect3D9 (17 methods) */
static const uint8_t k_d3d9_nargs[17] = {
    3, /* 0: QueryInterface */
    1, /* 1: AddRef */
    1, /* 2: Release */
    2, /* 3: RegisterSoftwareDevice */
    1, /* 4: GetAdapterCount */
    4, /* 5: GetAdapterIdentifier */
    3, /* 6: GetAdapterModeCount */
    5, /* 7: EnumAdapterModes */
    3, /* 8: GetAdapterDisplayMode */
    6, /* 9: CheckDeviceType */
    7, /* 10: CheckDeviceFormat */
    7, /* 11: CheckDeviceMultiSampleType */
    6, /* 12: CheckDepthStencilMatch */
    5, /* 13: CheckDeviceFormatConversion */
    4, /* 14: GetDeviceCaps */
    2, /* 15: GetAdapterMonitor */
    7  /* 16: CreateDevice */
};

/* Argument counts (in DWORDs) for IDirect3DDevice9 (119 methods) */
static const uint8_t k_d3ddev9_nargs[119] = {
    3, /* 0: QueryInterface */
    1, /* 1: AddRef */
    1, /* 2: Release */
    1, /* 3: TestCooperativeLevel */
    1, /* 4: GetAvailableTextureMem */
    1, /* 5: EvictManagedResources */
    2, /* 6: GetDirect3D */
    2, /* 7: GetDeviceCaps */
    3, /* 8: GetDisplayMode */
    2, /* 9: GetCreationParameters */
    4, /* 10: SetCursorProperties */
    4, /* 11: SetCursorPosition */
    2, /* 12: ShowCursor */
    3, /* 13: CreateAdditionalSwapChain */
    3, /* 14: GetSwapChain */
    1, /* 15: GetNumberOfSwapChains */
    2, /* 16: Reset */
    5, /* 17: Present */
    5, /* 18: GetBackBuffer */
    3, /* 19: GetRasterStatus */
    2, /* 20: SetDialogBoxMode */
    4, /* 21: SetGammaRamp */
    3, /* 22: GetGammaRamp */
    9, /* 23: CreateTexture */
    10,/* 24: CreateVolumeTexture */
    8, /* 25: CreateCubeTexture */
    7, /* 26: CreateVertexBuffer */
    7, /* 27: CreateIndexBuffer */
    9, /* 28: CreateRenderTarget */
    9, /* 29: CreateDepthStencilSurface */
    5, /* 30: UpdateSurface */
    3, /* 31: UpdateTexture */
    3, /* 32: GetRenderTargetData */
    3, /* 33: GetFrontBufferData */
    6, /* 34: StretchRect */
    4, /* 35: ColorFill */
    7, /* 36: CreateOffscreenPlainSurface */
    3, /* 37: SetRenderTarget */
    3, /* 38: GetRenderTarget */
    2, /* 39: SetDepthStencilSurface */
    2, /* 40: GetDepthStencilSurface */
    1, /* 41: BeginScene */
    1, /* 42: EndScene */
    7, /* 43: Clear */
    3, /* 44: SetTransform */
    3, /* 45: GetTransform */
    3, /* 46: MultiplyTransform */
    2, /* 47: SetViewport */
    2, /* 48: GetViewport */
    2, /* 49: SetMaterial */
    2, /* 50: GetMaterial */
    3, /* 51: SetLight */
    3, /* 52: GetLight */
    3, /* 53: LightEnable */
    3, /* 54: GetLightEnable */
    3, /* 55: SetClipPlane */
    3, /* 56: GetClipPlane */
    3, /* 57: SetRenderState */
    3, /* 58: GetRenderState */
    3, /* 59: CreateStateBlock */
    1, /* 60: BeginStateBlock */
    2, /* 61: EndStateBlock */
    2, /* 62: SetClipStatus */
    2, /* 63: GetClipStatus */
    3, /* 64: GetTexture */
    3, /* 65: SetTexture */
    4, /* 66: GetTextureStageState */
    4, /* 67: SetTextureStageState */
    4, /* 68: GetSamplerState */
    4, /* 69: SetSamplerState */
    2, /* 70: ValidateDevice */
    3, /* 71: SetPaletteEntries */
    3, /* 72: GetPaletteEntries */
    2, /* 73: SetCurrentTexturePalette */
    2, /* 74: GetCurrentTexturePalette */
    2, /* 75: SetScissorRect */
    2, /* 76: GetScissorRect */
    2, /* 77: SetSoftwareVertexProcessing */
    1, /* 78: GetSoftwareVertexProcessing */
    2, /* 79: SetNPatchMode */
    1, /* 80: GetNPatchMode */
    4, /* 81: DrawPrimitive */
    7, /* 82: DrawIndexedPrimitive */
    5, /* 83: DrawPrimitiveUP */
    9, /* 84: DrawIndexedPrimitiveUP */
    7, /* 85: ProcessVertices */
    3, /* 86: CreateVertexDeclaration */
    2, /* 87: SetVertexDeclaration */
    2, /* 88: GetVertexDeclaration */
    2, /* 89: SetFVF */
    2, /* 90: GetFVF */
    3, /* 91: CreateVertexShader */
    2, /* 92: SetVertexShader */
    2, /* 93: GetVertexShader */
    4, /* 94: SetVertexShaderConstantF */
    4, /* 95: GetVertexShaderConstantF */
    4, /* 96: SetVertexShaderConstantI */
    4, /* 97: GetVertexShaderConstantI */
    4, /* 98: SetVertexShaderConstantB */
    4, /* 99: GetVertexShaderConstantB */
    5, /* 100: SetStreamSource */
    5, /* 101: GetStreamSource */
    3, /* 102: SetStreamSourceFreq */
    3, /* 103: GetStreamSourceFreq */
    2, /* 104: SetIndices */
    2, /* 105: GetIndices */
    3, /* 106: CreatePixelShader */
    2, /* 107: SetPixelShader */
    2, /* 108: GetPixelShader */
    4, /* 109: SetPixelShaderConstantF */
    4, /* 110: GetPixelShaderConstantF */
    4, /* 111: SetPixelShaderConstantI */
    4, /* 112: GetPixelShaderConstantI */
    4, /* 113: SetPixelShaderConstantB */
    4, /* 114: GetPixelShaderConstantB */
    4, /* 115: DrawRectPatch */
    4, /* 116: DrawTriPatch */
    2, /* 117: DeletePatch */
    3  /* 118: CreateQuery */
};

/* IDirect3DTexture9 (22 methods) */
static const uint8_t k_d3dtex9_nargs[22] = {
    3, 1, 1, /* 0..2: IUnknown */
    2, 5, 5, 2, 2, 1, 1, 1, /* 3..10: IDirect3DResource9 */
    2, 1, 1, 2, 1, 1, /* 11..16: IDirect3DBaseTexture9 */
    3, /* 17: GetLevelDesc */
    3, /* 18: GetSurfaceLevel */
    5, /* 19: LockRect */
    2, /* 20: UnlockRect */
    2  /* 21: AddDirtyRect */
};

/* IDirect3DCubeTexture9 (22 methods) */
static const uint8_t k_d3dcubetex9_nargs[22] = {
    3, 1, 1, /* 0..2: IUnknown */
    2, 5, 5, 2, 2, 1, 1, 1, /* 3..10: IDirect3DResource9 */
    2, 1, 1, 2, 1, 1, /* 11..16: IDirect3DBaseTexture9 */
    3, /* 17: GetLevelDesc */
    4, /* 18: GetCubeMapSurface(this, FaceType, Level, ppCubeMapSurface) */
    6, /* 19: LockRect(this, FaceType, Level, pLockedRect, pRect, Flags) */
    3, /* 20: UnlockRect(this, FaceType, Level) */
    3  /* 21: AddDirtyBox(this, FaceType, pDirtyBox) */
};

/* IDirect3DStateBlock9 (6 methods) */
static const uint8_t k_d3dstateblock9_nargs[6] = {
    3, 1, 1, /* 0..2: IUnknown */
    2,       /* 3: GetDevice */
    1,       /* 4: Capture(this) */
    1        /* 5: Apply(this) */
};

/* IDirect3DSurface9 (17 methods) */
static const uint8_t k_d3dsurf9_nargs[17] = {
    3, 1, 1, /* 0..2: IUnknown */
    2, 5, 5, 2, 2, 1, 1, 1, /* 3..10: IDirect3DResource9 */
    3, /* 11: GetContainer */
    2, /* 12: GetDesc */
    4, /* 13: LockRect */
    1, /* 14: UnlockRect */
    2, /* 15: GetDC */
    2  /* 16: ReleaseDC */
};

/* IDirect3DVertexBuffer9 / IDirect3DIndexBuffer9 (14 methods) */
static const uint8_t k_d3dbuf9_nargs[14] = {
    3, 1, 1, /* 0..2: IUnknown */
    2, 5, 5, 2, 2, 1, 1, 1, /* 3..10: IDirect3DResource9 */
    5, /* 11: Lock(this, OffsetToLock, SizeToLock, ppbData, Flags) */
    1, /* 12: Unlock(this) */
    2  /* 13: GetDesc(this, pDesc) */
};

/* IDirect3DVertexDeclaration9 / Shader / StateBlock (6 methods) */
static const uint8_t k_d3dshader_nargs[10] = {
    3, 1, 1, /* IUnknown */
    2, /* 3: GetDevice / Capture */
    3, /* 4: GetDeclaration / GetFunction / Apply */
    1, 1, 1, 1, 1
};

/* IDirectInput8A (9 methods) */
static const uint8_t k_dinput8_nargs[9] = {
    3, 1, 1, /* IUnknown */
    4, /* 3: CreateDevice(this, rguid, lplpDirectInputDevice, pUnkOuter) */
    5, /* 4: EnumDevices(this, dwDevType, lpCallback, pvRef, dwFlags) */
    2, /* 5: GetDeviceStatus */
    3, /* 6: RunControlPanel */
    3, /* 7: Initialize */
    4  /* 8: FindDevice */
};

/* IDirectInputDevice8A (32 methods) */
static const uint8_t k_didev8_nargs[32] = {
    3, 1, 1, /* IUnknown */
    2, /* 3: GetCapabilities */
    5, /* 4: EnumObjects */
    3, /* 5: GetProperty */
    3, /* 6: SetProperty */
    1, /* 7: Acquire */
    1, /* 8: Unacquire */
    3, /* 9: GetDeviceState */
    5, /* 10: GetDeviceData */
    2, /* 11: SetDataFormat */
    2, /* 12: SetEventNotification */
    3, /* 13: SetCooperativeLevel */
    4, /* 14: GetObjectInfo */
    2, /* 15: GetDeviceInfo */
    3, /* 16: RunControlPanel */
    4, /* 17: Initialize */
    5, /* 18: CreateEffect */
    4, /* 19: EnumEffects */
    3, /* 20: GetEffectInfo */
    2, /* 21: GetForceFeedbackState */
    2, /* 22: SendForceFeedbackCommand */
    4, /* 23: EnumCreatedEffectObjects */
    2, /* 24: Escape */
    1, /* 25: Poll */
    5, /* 26: SendDeviceData */
    5, /* 27: EnumEffectsInFile */
    5, /* 28: WriteEffectToFile */
    4, /* 29: BuildActionMap */
    4, /* 30: SetActionMap */
    2  /* 31: GetImageInfo */
};

static void fill_d3dcaps9(uint32_t caps_va) {
    if (!caps_va) return;
    memset(guest_ptr(caps_va), 0, 0x130);
    guest_write32(caps_va + 0x00, 1);          /* DeviceType = D3DDEVTYPE_HAL */
    guest_write32(caps_va + 0x04, 0);          /* AdapterOrdinal = 0 */
    guest_write32(caps_va + 0x08, 0x00020000u);/* Caps */
    guest_write32(caps_va + 0x0C, 0x60020000u);/* Caps2 */
    guest_write32(caps_va + 0x10, 0x00000320u);/* Caps3 */
    guest_write32(caps_va + 0x14, 0x8000000Fu);/* PresentationIntervals = ALL */
    guest_write32(caps_va + 0x18, 0x00000001u);/* CursorCaps */
    guest_write32(caps_va + 0x1C, 0x001BBEF0u);/* DevCaps = HWTRANSFORMANDLIGHT | PUREDEVICE */
    guest_write32(caps_va + 0x20, 0x002FAFBFu);/* PrimitiveMiscCaps */
    guest_write32(caps_va + 0x24, 0x07736193u);/* RasterCaps */
    guest_write32(caps_va + 0x28, 0x000000FFu);/* ZCmpCaps */
    guest_write32(caps_va + 0x2C, 0x00001FFFu);/* SrcBlendCaps */
    guest_write32(caps_va + 0x30, 0x00001FFFu);/* DestBlendCaps */
    guest_write32(caps_va + 0x34, 0x000000FFu);/* AlphaCmpCaps */
    guest_write32(caps_va + 0x38, 0x00084208u);/* ShadeCaps */
    guest_write32(caps_va + 0x3C, 0x0001ECDFu);/* TextureCaps */
    guest_write32(caps_va + 0x40, 0x03030700u);/* TextureFilterCaps */
    guest_write32(caps_va + 0x44, 0x03030700u);/* CubeTextureFilterCaps */
    guest_write32(caps_va + 0x48, 0x03030700u);/* VolumeTextureFilterCaps */
    guest_write32(caps_va + 0x4C, 0x0000003Fu);/* TextureAddressCaps */
    guest_write32(caps_va + 0x50, 0x0000003Fu);/* VolumeTextureAddressCaps */
    guest_write32(caps_va + 0x54, 0x0000001Fu);/* LineCaps */
    guest_write32(caps_va + 0x58, 4096);       /* MaxTextureWidth */
    guest_write32(caps_va + 0x5C, 4096);       /* MaxTextureHeight */
    guest_write32(caps_va + 0x60, 256);        /* MaxVolumeExtent */
    guest_write32(caps_va + 0x64, 4096);       /* MaxTextureRepeat */
    guest_write32(caps_va + 0x68, 4096);       /* MaxTextureAspectRatio */
    guest_write32(caps_va + 0x6C, 16);         /* MaxAnisotropy */
    guest_write32(caps_va + 0x70, 0x47C35000u);/* MaxVertexW = 100000.0f */
    guest_write32(caps_va + 0x84, 0x000001FFu);/* StencilCaps */
    guest_write32(caps_va + 0x88, 0x00180008u);/* FVFCaps = 8 texcoords */
    guest_write32(caps_va + 0x8C, 0x03FFFFFFu);/* TextureOpCaps */
    guest_write32(caps_va + 0x90, 8);          /* MaxTextureBlendStages */
    guest_write32(caps_va + 0x94, 8);          /* MaxSimultaneousTextures */
    guest_write32(caps_va + 0x98, 0x0000013Bu);/* VertexProcessingCaps */
    guest_write32(caps_va + 0x9C, 8);          /* MaxActiveLights */
    guest_write32(caps_va + 0xA0, 6);          /* MaxUserClipPlanes */
    guest_write32(caps_va + 0xA4, 4);          /* MaxVertexBlendMatrices */
    guest_write32(caps_va + 0xA8, 255);        /* MaxVertexBlendMatrixIndex */
    guest_write32(caps_va + 0xAC, 0x42800000u);/* MaxPointSize = 64.0f */
    guest_write32(caps_va + 0xB0, 0x00FFFFF0u);/* MaxPrimitiveCount */
    guest_write32(caps_va + 0xB4, 0x00FFFFF0u);/* MaxVertexIndex */
    guest_write32(caps_va + 0xB8, 16);         /* MaxStreams */
    guest_write32(caps_va + 0xBC, 256);        /* MaxStreamStride */
    guest_write32(caps_va + 0xC0, 0xFFFE0101u);/* VertexShaderVersion = vs_1_1 */
    guest_write32(caps_va + 0xC4, 96);         /* MaxVertexShaderConst */
    guest_write32(caps_va + 0xC8, 0xFFFF0104u);/* PixelShaderVersion = ps_1_4 */
    guest_write32(caps_va + 0xCC, 0x41000000u);/* PixelShader1xMaxValue = 8.0f */
    guest_write32(caps_va + 0xD0, 0x000001FFu);/* DevCaps2 */
}

static float g_dev_w = 1280.0f, g_dev_h = 720.0f;
static float g_vp_x = 0.0f, g_vp_y = 0.0f, g_vp_w = 1280.0f, g_vp_h = 720.0f;
static uint32_t g_cur_d3d9_method = 0;
static void init_d3d_default_states(void);
static void dispatch_d3d9_method(uint32_t idx) {
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t a5 = guest_read32(g_esp + 24);
    uint32_t a6 = guest_read32(g_esp + 28);
    uint32_t ret_val = 0; /* D3D_OK */

    switch (idx) {
    case 1: /* AddRef */
    case 2: /* Release */
        ret_val = 1;
        break;
    case 4: /* GetAdapterCount */
        ret_val = 1;
        break;
    case 5: /* GetAdapterIdentifier(this, Adapter, Flags, pIdentifier) */
        if (a3) {
            memset(guest_ptr(a3), 0, 1088);
            strcpy((char *)guest_ptr(a3 + 0), "mc2pc_gles3.dll");
            strcpy((char *)guest_ptr(a3 + 512), "Midnight Club II GLES3 Adapter");
            strcpy((char *)guest_ptr(a3 + 1024), "\\\\.\\DISPLAY1");
            guest_write32(a3 + 1064, 0x10DE); /* VendorId */
            guest_write32(a3 + 1068, 0x0250); /* DeviceId */
        }
        ret_val = 0;
        break;
    case 6: /* GetAdapterModeCount(this, Adapter, Format) */
        ret_val = 4; /* 1280x720 (default), 1024x768, 800x600, 640x480 */
        break;
    case 7: /* EnumAdapterModes(this, Adapter, Format, Mode, pMode) */
        if (a4) {
            static const uint32_t modes[4][2] = {
                {1280, 720}, {1024, 768}, {800, 600}, {640, 480}
            };
            uint32_t m = a3 < 4 ? a3 : 0;
            guest_write32(a4 + 0, modes[m][0]); /* Width */
            guest_write32(a4 + 4, modes[m][1]); /* Height */
            guest_write32(a4 + 8, 60);          /* RefreshRate */
            guest_write32(a4 + 12, a2 ? a2 : 22);/* Format (22 = D3DFMT_X8R8G8B8) */
        }
        ret_val = 0;
        break;
    case 8: /* GetAdapterDisplayMode(this, Adapter, pMode) */
        if (a2) {
            guest_write32(a2 + 0, 1280);
            guest_write32(a2 + 4, 720);
            guest_write32(a2 + 8, 60);
            guest_write32(a2 + 12, 22); /* D3DFMT_X8R8G8B8 */
        }
        ret_val = 0;
        break;
    case 14: /* GetDeviceCaps(this, Adapter, DeviceType, pCaps) */
        fill_d3dcaps9(a3);
        ret_val = 0;
        break;
    case 15: /* GetAdapterMonitor */
        ret_val = 0x00010001u;
        break;
    case 16: /* CreateDevice(this, Adapter, DeviceType, hFocusWindow, BehaviorFlags, pPresentationParams, ppReturnedDeviceInterface) */
        PC_LOGI("[D3D9] CreateDevice(Adapter=%u, DevType=%u, hWnd=0x%X, Flags=0x%X, pPP=0x%08X, ppDev=0x%08X)",
                a1, a2, a3, a4, a5, a6);
        if (a5) {
            uint32_t rw = guest_read32(a5 + 0);
            uint32_t rh = guest_read32(a5 + 4);
            PC_LOGI("[D3D9] CreateDevice pPP=%ux%u (674FAC=%ux%u 858714=%u 66315C=%u)",
                    rw, rh, guest_read32(0x674FAC), guest_read32(0x674FB0),
                    guest_read32(0x858714), guest_read32(0x66315C));
            if (rw > 0 && rh > 0) {
                g_dev_w = (float)rw;
                g_dev_h = (float)rh;
                g_vp_w = (float)rw;
                g_vp_h = (float)rh;
                if (g_obj_d3ddev9) { guest_write32(g_obj_d3ddev9 + 0x14, rw); guest_write32(g_obj_d3ddev9 + 0x18, rh); }
                if (g_obj_backbuffer) { guest_write32(g_obj_backbuffer + 0x14, rw); guest_write32(g_obj_backbuffer + 0x18, rh); }
                if (g_obj_depthstencil) { guest_write32(g_obj_depthstencil + 0x14, rw); guest_write32(g_obj_depthstencil + 0x18, rh); }
            }
        }
        init_d3d_default_states();
        if (a6) {
            guest_write32(a6, g_obj_d3ddev9);
        }
        ret_val = 0;
        break;
    default:
        ret_val = 0;
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3d9_nargs[idx] * 4u;
}

static void dispatch_d3ddev9_method(uint32_t idx);

/* ================================================================
 * Phase 3: D3D9 State Tracker, Texture Decoder & Frame Recorder
 * ================================================================ */

#if defined(_WIN32)
static volatile LONG g_render_spinlock = 0;
static void mc2_render_lock(void) {
    while (InterlockedExchange(&g_render_spinlock, 1) != 0) {
        Sleep(0);
    }
}
static void mc2_render_unlock(void) {
    InterlockedExchange(&g_render_spinlock, 0);
}
static void mc2_frame_swap_lock(void) { mc2_render_lock(); }
static void mc2_frame_swap_unlock(void) { mc2_render_unlock(); }
#else
static pthread_mutex_t g_render_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t g_frame_swap_mutex = PTHREAD_MUTEX_INITIALIZER;
static void mc2_render_lock(void) {
    pthread_mutex_lock(&g_render_mutex);
}
static void mc2_render_unlock(void) {
    pthread_mutex_unlock(&g_render_mutex);
}
static void mc2_frame_swap_lock(void) {
    pthread_mutex_lock(&g_frame_swap_mutex);
}
static void mc2_frame_swap_unlock(void) {
    pthread_mutex_unlock(&g_frame_swap_mutex);
}
#endif

#define MC2_MAX_VERTS   524288u
#define MC2_MAX_INDICES 524288u
#define MC2_MAX_BATCHES 8192u
#define MC2_MAX_HOST_TEX 16384u

typedef struct {
    uint32_t obj_va;
    uint32_t width;
    uint32_t height;
    uint32_t format;
    uint32_t decoded_dirty_ver;
    uint32_t decoded_pal_idx;
    uint32_t decoded_pal_ver;
    uint32_t gl_tex_version;
    uint32_t last_used_frame;
    uint8_t  ever_rendered;
    uint8_t *rgba;
} Mc2HostTex;

static Mc2HostTex g_host_tex[MC2_MAX_HOST_TEX];
static uint32_t g_host_tex_count = 1; /* slot 0 reserved */
static uint32_t g_host_tex_free[MC2_MAX_HOST_TEX];
static uint32_t g_host_tex_free_n = 0;
static uint32_t g_next_tex_serial = 1;
static uint32_t g_mip_scratch_va = 0;

#define MC2_DEFERRED_FREE_CAP 8192u
typedef struct {
    uint32_t obj_va;
    uint32_t data_va;
    uint32_t tex_slot;
    uint32_t retire_frame;
} Mc2DeferredFree;
static Mc2DeferredFree g_deferred_frees[MC2_DEFERRED_FREE_CAP];
static uint32_t g_deferred_free_n = 0;

static void destroy_com_storage(uint32_t obj_va, uint32_t data_va, uint32_t slot) {
    if (slot > 0 && slot <= MC2_MAX_HOST_TEX) {
        Mc2HostTex *ht = &g_host_tex[slot - 1u];
        if (ht->obj_va == obj_va) {
            if (ht->rgba) {
                free(ht->rgba);
                ht->rgba = NULL;
            }
            memset(ht, 0, sizeof(*ht));
            if (g_host_tex_free_n < MC2_MAX_HOST_TEX) {
                g_host_tex_free[g_host_tex_free_n++] = slot - 1u;
            }
        }
    }
    if (data_va) {
        pc_guest_free(data_va);
    }
    if (obj_va) {
        pc_guest_free(obj_va);
    }
}

static void flush_deferred_com_frees(void) {
    uint32_t cur_frame = g_frame_count;
    uint32_t write_i = 0;
    for (uint32_t i = 0; i < g_deferred_free_n; i++) {
        if (cur_frame >= g_deferred_frees[i].retire_frame) {
            destroy_com_storage(g_deferred_frees[i].obj_va,
                                g_deferred_frees[i].data_va,
                                g_deferred_frees[i].tex_slot);
        } else {
            g_deferred_frees[write_i++] = g_deferred_frees[i];
        }
    }
    g_deferred_free_n = write_i;
}

static uint32_t com_addref(uint32_t obj_va) {
    if (!obj_va || obj_va < GUEST_HEAP_START + 16u || obj_va >= GUEST_HEAP_END) return 1;
    if (obj_va == g_obj_backbuffer || obj_va == g_obj_depthstencil) return 1;
    uint32_t ref = guest_read32(obj_va + 0x04) + 1u;
    guest_write32(obj_va + 0x04, ref);
    return ref;
}

static uint32_t com_release(uint32_t obj_va) {
    if (!obj_va || obj_va < GUEST_HEAP_START + 16u || obj_va >= GUEST_HEAP_END) return 0;
    if (obj_va == g_obj_backbuffer || obj_va == g_obj_depthstencil) return 1;
    uint32_t ref = guest_read32(obj_va + 0x04);
    if (ref > 1u) {
        ref--;
        guest_write32(obj_va + 0x04, ref);
        return ref;
    }
    if (ref == 0u) return 0;
    guest_write32(obj_va + 0x04, 0);

    uint32_t obj_type = guest_read32(obj_va + 0x08);
    if (obj_type < 1u || obj_type > 4u) return 1;
    uint32_t is_shared = guest_read32(obj_va + 0x38);
    uint32_t parent_va = guest_read32(obj_va + 0x2C);
    uint32_t data_va = is_shared ? 0u : guest_read32(obj_va + 0x0C);
    uint32_t slot = is_shared ? 0u : guest_read32(obj_va + 0x20);

    if (is_shared && parent_va && parent_va >= GUEST_HEAP_START + 16u && parent_va < GUEST_HEAP_END) {
        if (guest_read32(parent_va + 0x30) == obj_va) {
            guest_write32(parent_va + 0x30, 0);
        }
        com_release(parent_va);
    }

    if (obj_type == 1u || obj_type == 2u) {
        /* VB/IB bytes are copied into Mc2RenderFrame on draw, so freeing immediately is safe */
        destroy_com_storage(obj_va, data_va, 0);
        return 0;
    }

    uint32_t retire_frame = g_frame_count;
    int needs_defer = 0;
    if (slot > 0 && slot <= MC2_MAX_HOST_TEX && g_host_tex[slot - 1u].obj_va == obj_va) {
        if (g_host_tex[slot - 1u].ever_rendered &&
            g_frame_count < g_host_tex[slot - 1u].last_used_frame + 3u) {
            retire_frame = g_host_tex[slot - 1u].last_used_frame + 3u;
            needs_defer = 1;
        }
    }

    if (!needs_defer || g_deferred_free_n >= MC2_DEFERRED_FREE_CAP) {
        if (!needs_defer) {
            destroy_com_storage(obj_va, data_va, slot);
            return 0;
        }
    }
    if (g_deferred_free_n < MC2_DEFERRED_FREE_CAP) {
        g_deferred_frees[g_deferred_free_n++] = (Mc2DeferredFree){
            obj_va, data_va, slot, retire_frame
        };
    }
    return 0;
}

/* 2048 palettes x 256 entries x 4 bytes (R, G, B, A) */
static uint8_t g_d3d_palettes[2048][1024];
static uint32_t g_d3d_pal_ver[2048];
static uint32_t g_cur_tex_palette = 0;

/* D3D9 Device State */
static float g_mat_world[16] = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
static float g_mat_view[16]  = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
static float g_mat_proj[16]  = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
static float g_mat_tex[8][16];
static uint32_t g_render_state[256];
static uint32_t g_tss[8][33];
static uint32_t g_samp[8][16];

typedef struct {
    uint32_t rs[256];
    uint32_t rs_mask[8];
    uint32_t tss[8][33];
    uint32_t tss_mask[8][2];
    uint32_t samp[8][16];
    uint32_t samp_mask[8];
} Mc2StateBlockData;

static int g_sb_recording = 0;
static Mc2StateBlockData g_sb_rec;

static void sb_init_by_type(Mc2StateBlockData *sb, uint32_t sb_type) {
    memset(sb, 0, sizeof(*sb));
    if (sb_type == 1u) { /* D3DSBT_ALL */
        for (int i = 0; i < 256; i++) {
            sb->rs[i] = g_render_state[i];
            sb->rs_mask[i >> 5] |= (1u << (i & 31));
        }
        for (int s = 0; s < 8; s++) {
            for (int t = 0; t < 33; t++) {
                sb->tss[s][t] = g_tss[s][t];
                sb->tss_mask[s][t >> 5] |= (1u << (t & 31));
            }
            for (int p = 0; p < 16; p++) {
                sb->samp[s][p] = g_samp[s][p];
                sb->samp_mask[s] |= (1u << p);
            }
        }
    } else if (sb_type == 2u) { /* D3DSBT_PIXELSTATE */
        static const uint16_t kPixelRS[] = {
            7, 8, 14, 15, 19, 20, 23, 24, 25, 26, 27, 34, 35, 36,
            52, 53, 54, 55, 56, 57, 58, 59, 60, 168, 171
        };
        for (size_t k = 0; k < sizeof(kPixelRS) / sizeof(kPixelRS[0]); k++) {
            uint32_t idx = kPixelRS[k];
            sb->rs[idx] = g_render_state[idx];
            sb->rs_mask[idx >> 5] |= (1u << (idx & 31));
        }
        for (int s = 0; s < 8; s++) {
            for (int t = 0; t < 33; t++) {
                sb->tss[s][t] = g_tss[s][t];
                sb->tss_mask[s][t >> 5] |= (1u << (t & 31));
            }
            for (int p = 0; p < 16; p++) {
                sb->samp[s][p] = g_samp[s][p];
                sb->samp_mask[s] |= (1u << p);
            }
        }
    } else if (sb_type == 3u) { /* D3DSBT_VERTEXSTATE */
        static const uint16_t kVertexRS[] = {
            9, 22, 28, 29, 36, 37, 38, 48, 128, 136, 137, 139, 140,
            141, 142, 145, 146, 147, 148, 151, 152, 154
        };
        for (size_t k = 0; k < sizeof(kVertexRS) / sizeof(kVertexRS[0]); k++) {
            uint32_t idx = kVertexRS[k];
            sb->rs[idx] = g_render_state[idx];
            sb->rs_mask[idx >> 5] |= (1u << (idx & 31));
        }
    }
}

static void sb_capture_masked(Mc2StateBlockData *sb) {
    for (int i = 0; i < 256; i++) {
        if (sb->rs_mask[i >> 5] & (1u << (i & 31))) sb->rs[i] = g_render_state[i];
    }
    for (int s = 0; s < 8; s++) {
        for (int t = 0; t < 33; t++) {
            if (sb->tss_mask[s][t >> 5] & (1u << (t & 31))) sb->tss[s][t] = g_tss[s][t];
        }
        for (int p = 0; p < 16; p++) {
            if (sb->samp_mask[s] & (1u << p)) sb->samp[s][p] = g_samp[s][p];
        }
    }
}

static void sb_apply_masked(const Mc2StateBlockData *sb) {
    for (int i = 0; i < 256; i++) {
        if (sb->rs_mask[i >> 5] & (1u << (i & 31))) g_render_state[i] = sb->rs[i];
    }
    for (int s = 0; s < 8; s++) {
        for (int t = 0; t < 33; t++) {
            if (sb->tss_mask[s][t >> 5] & (1u << (t & 31))) g_tss[s][t] = sb->tss[s][t];
        }
        for (int p = 0; p < 16; p++) {
            if (sb->samp_mask[s] & (1u << p)) g_samp[s][p] = sb->samp[s][p];
        }
    }
}
static uint32_t g_cur_rt = 0; /* 0 = backbuffer */
static uint32_t g_cur_rt_tex_va = 0;
static uint32_t g_cur_rt_w = 0;
static uint32_t g_cur_rt_h = 0;
static uint8_t  g_cur_rt_cube_face = 0;
static uint32_t g_bound_tex[8];
static uint32_t g_cur_fvf = 0;
static uint32_t g_cur_vdecl = 0;
static uint32_t g_cur_vshader = 0;
static int g_use_vdecl = 0;
static float g_vs_const[96][4];
static int g_vs_has_c4_wvp = 0;
static uint32_t g_stream_vb[4];
static uint32_t g_stream_offset[4];
static uint32_t g_stream_stride[4];
static uint32_t g_cur_ib = 0;

static Mc2RenderFrame g_render_frames[2];
static int g_write_frame_idx = 0;
static int g_read_frame_idx = 1;
static int g_render_buffers_initialized = 0;
static int g_d3d_states_initialized = 0;

static void init_d3d_default_states(void) {
    if (g_d3d_states_initialized) return;
    g_d3d_states_initialized = 1;
    /* Default D3D9 render states */
    g_render_state[7]  = 1; /* D3DRS_ZENABLE = TRUE */
    g_render_state[14] = 1; /* D3DRS_ZWRITEENABLE = TRUE */
    g_render_state[19] = 5; /* D3DRS_SRCBLEND = SRCALPHA */
    g_render_state[20] = 6; /* D3DRS_DESTBLEND = INVSRCALPHA */
    g_render_state[22] = 3; /* D3DRS_CULLMODE = CCW */
    g_render_state[23] = 4; /* D3DRS_ZFUNC = D3DCMP_LESSEQUAL */
    g_render_state[15] = 0; /* D3DRS_ALPHATESTENABLE = FALSE */
    g_render_state[24] = 0; /* D3DRS_ALPHAREF = 0 */
    g_render_state[25] = 8; /* D3DRS_ALPHAFUNC = ALWAYS */
    g_render_state[27] = 0; /* D3DRS_ALPHABLENDENABLE = FALSE */
    g_render_state[52] = 0; /* D3DRS_STENCILENABLE = FALSE */
    g_render_state[53] = 1; /* D3DRS_STENCILFAIL = KEEP */
    g_render_state[54] = 1; /* D3DRS_STENCILZFAIL = KEEP */
    g_render_state[55] = 1; /* D3DRS_STENCILPASS = KEEP */
    g_render_state[56] = 8; /* D3DRS_STENCILFUNC = ALWAYS */
    g_render_state[57] = 0; /* D3DRS_STENCILREF = 0 */
    g_render_state[58] = 0xFFFFFFFFu; /* D3DRS_STENCILMASK */
    g_render_state[59] = 0xFFFFFFFFu; /* D3DRS_STENCILWRITEMASK */
    g_render_state[60] = 0xFFFFFFFFu; /* D3DRS_TEXTUREFACTOR */
    g_render_state[137] = 1u;         /* D3DRS_LIGHTING = TRUE */
    g_render_state[28] = 0u;          /* D3DRS_FOGENABLE = FALSE */
    g_render_state[34] = 0u;          /* D3DRS_FOGCOLOR */
    g_render_state[35] = 0u;          /* D3DRS_FOGTABLEMODE = NONE */
    g_render_state[36] = 0u;          /* D3DRS_FOGSTART = 0.0f */
    g_render_state[37] = 0x3F800000u; /* D3DRS_FOGEND = 1.0f */
    g_render_state[38] = 0x3F800000u; /* D3DRS_FOGDENSITY = 1.0f */
    g_render_state[140] = 0u;         /* D3DRS_FOGVERTEXMODE = NONE */
    g_render_state[168] = 0x0Fu;      /* D3DRS_COLORWRITEENABLE = RGBA */
    g_render_state[171] = 1u;         /* D3DRS_BLENDOP = D3DBLENDOP_ADD */
    for (int s = 0; s < 8; s++) {
        memset(g_mat_tex[s], 0, sizeof(g_mat_tex[s]));
        g_mat_tex[s][0] = g_mat_tex[s][5] = g_mat_tex[s][10] = g_mat_tex[s][15] = 1.0f;
        g_tss[s][1] = (s == 0) ? 4u : 1u; /* COLOROP: MODULATE / DISABLE */
        g_tss[s][2] = 2u;                 /* COLORARG1: TEXTURE */
        g_tss[s][3] = 1u;                 /* COLORARG2: CURRENT */
        g_tss[s][4] = (s == 0) ? 2u : 1u; /* ALPHAOP: SELECTARG1 / DISABLE */
        g_tss[s][5] = 2u;                 /* ALPHAARG1: TEXTURE */
        g_tss[s][6] = 1u;                 /* ALPHAARG2: CURRENT */
        g_samp[s][1] = 1u;                /* D3DSAMP_ADDRESSU = WRAP */
        g_samp[s][2] = 1u;                /* D3DSAMP_ADDRESSV = WRAP */
    }
}

static void init_render_buffers_if_needed(void) {
    if (g_render_buffers_initialized) return;
    init_d3d_default_states();
    for (int i = 0; i < 2; i++) {
        g_render_frames[i].verts = (Mc2Vertex *)calloc(MC2_MAX_VERTS, sizeof(Mc2Vertex));
        g_render_frames[i].indices = (uint32_t *)calloc(MC2_MAX_INDICES, sizeof(uint32_t));
        g_render_frames[i].batches = (Mc2DrawBatch *)calloc(MC2_MAX_BATCHES, sizeof(Mc2DrawBatch));
        g_render_frames[i].vert_count = 0;
        g_render_frames[i].idx_count = 0;
        g_render_frames[i].batch_count = 0;
        g_render_frames[i].clear_color = 0xFF000000u;
    }
    g_render_buffers_initialized = 1;
}

const Mc2RenderFrame *mc2_pc_acquire_render_frame(void) {
    mc2_frame_swap_lock();
    if (!g_render_buffers_initialized) {
        mc2_frame_swap_unlock();
        return NULL;
    }
    return &g_render_frames[g_read_frame_idx];
}

void mc2_pc_release_render_frame(void) {
    mc2_frame_swap_unlock();
}

static void decode_dxt_color_block(const uint8_t *block, uint8_t colors[4][4], int is_dxt1) {
    uint16_t c0 = (uint16_t)(block[0] | (block[1] << 8));
    uint16_t c1 = (uint16_t)(block[2] | (block[3] << 8));
    uint8_t r0 = (uint8_t)(((c0 >> 11) & 31) * 255 / 31);
    uint8_t g0 = (uint8_t)(((c0 >> 5) & 63) * 255 / 63);
    uint8_t b0 = (uint8_t)((c0 & 31) * 255 / 31);
    uint8_t r1 = (uint8_t)(((c1 >> 11) & 31) * 255 / 31);
    uint8_t g1 = (uint8_t)(((c1 >> 5) & 63) * 255 / 63);
    uint8_t b1 = (uint8_t)((c1 & 31) * 255 / 31);

    colors[0][0] = r0; colors[0][1] = g0; colors[0][2] = b0; colors[0][3] = 255;
    colors[1][0] = r1; colors[1][1] = g1; colors[1][2] = b1; colors[1][3] = 255;
    if (!is_dxt1 || c0 > c1) {
        colors[2][0] = (uint8_t)((2 * r0 + r1) / 3);
        colors[2][1] = (uint8_t)((2 * g0 + g1) / 3);
        colors[2][2] = (uint8_t)((2 * b0 + b1) / 3);
        colors[2][3] = 255;
        colors[3][0] = (uint8_t)((r0 + 2 * r1) / 3);
        colors[3][1] = (uint8_t)((g0 + 2 * g1) / 3);
        colors[3][2] = (uint8_t)((b0 + 2 * b1) / 3);
        colors[3][3] = 255;
    } else {
        colors[2][0] = (uint8_t)((r0 + r1) / 2);
        colors[2][1] = (uint8_t)((g0 + g1) / 2);
        colors[2][2] = (uint8_t)((b0 + b1) / 2);
        colors[2][3] = 255;
        colors[3][0] = colors[2][0];
        colors[3][1] = colors[2][1];
        colors[3][2] = colors[2][2];
        colors[3][3] = 0;
    }
}

static void bleed_transparent_rgb(uint8_t *rgba, uint32_t w, uint32_t h) {
    uint32_t npix = w * h;
    int has_zero = 0, has_opaque = 0;
    for (uint32_t i = 0; i < npix; i++) {
        if (rgba[i * 4u + 3u] == 0u) has_zero = 1;
        else has_opaque = 1;
        if (has_zero && has_opaque) break;
    }
    if (!has_zero || !has_opaque) return;
    for (uint32_t y = 0; y < h; y++) {
        for (uint32_t x = 0; x < w; x++) {
            uint32_t idx = (y * w + x) * 4u;
            if (rgba[idx + 3u] != 0u) continue;
            uint32_t rs = 0, gs = 0, bs = 0, cnt = 0;
            for (int dy = -1; dy <= 1; dy++) {
                int ny = (int)y + dy;
                if (ny < 0 || ny >= (int)h) continue;
                for (int dx = -1; dx <= 1; dx++) {
                    if (dx == 0 && dy == 0) continue;
                    int nx = (int)x + dx;
                    if (nx < 0 || nx >= (int)w) continue;
                    uint32_t nidx = ((uint32_t)ny * w + (uint32_t)nx) * 4u;
                    if (rgba[nidx + 3u] > 0u) {
                        rs += rgba[nidx + 0u];
                        gs += rgba[nidx + 1u];
                        bs += rgba[nidx + 2u];
                        cnt++;
                    }
                }
            }
            if (cnt > 0u) {
                rgba[idx + 0u] = (uint8_t)(rs / cnt);
                rgba[idx + 1u] = (uint8_t)(gs / cnt);
                rgba[idx + 2u] = (uint8_t)(bs / cnt);
            }
        }
    }
}

static Mc2HostTex *ensure_host_texture_rgba(uint32_t tex_va) {
    if (!tex_va || tex_va >= GUEST_MEM_SIZE) return NULL;
    uint32_t w = guest_read32(tex_va + 0x14);
    uint32_t h = guest_read32(tex_va + 0x18);
    uint32_t fmt = guest_read32(tex_va + 0x1C);
    uint32_t data_va = guest_read32(tex_va + 0x0C);
    uint32_t dirty_ver = guest_read32(tex_va + 0x24);
    if (!w || !h || w > 4096 || h > 4096 || !data_va || data_va >= GUEST_MEM_SIZE) return NULL;

    uint32_t slot = guest_read32(tex_va + 0x20);
    if (slot == 0 || slot > MC2_MAX_HOST_TEX || g_host_tex[slot - 1].obj_va != tex_va) {
        uint32_t idx = 0;
        if (g_host_tex_free_n > 0) {
            idx = g_host_tex_free[--g_host_tex_free_n];
        } else {
            if (g_host_tex_count >= MC2_MAX_HOST_TEX) return NULL;
            idx = g_host_tex_count++;
        }
        slot = idx + 1;
        memset(&g_host_tex[idx], 0, sizeof(Mc2HostTex));
        g_host_tex[idx].obj_va = tex_va;
        guest_write32(tex_va + 0x20, slot);
    }

    Mc2HostTex *ht = &g_host_tex[slot - 1];
    uint32_t pal_idx = g_cur_tex_palette < 2048u ? g_cur_tex_palette : 0u;
    uint32_t pal_ver = (fmt == 41u) ? g_d3d_pal_ver[pal_idx] : 0u;

    if (ht->rgba && ht->width == w && ht->height == h && ht->format == fmt &&
        ht->decoded_dirty_ver == dirty_ver &&
        (fmt != 41u || (ht->decoded_pal_idx == pal_idx && ht->decoded_pal_ver == pal_ver))) {
        return ht;
    }

    if (!ht->rgba || ht->width != w || ht->height != h) {
        free(ht->rgba);
        ht->rgba = (uint8_t *)malloc((size_t)w * (size_t)h * 4u);
        if (!ht->rgba) return NULL;
        ht->width = w;
        ht->height = h;
    }
    ht->format = fmt;
    ht->decoded_dirty_ver = dirty_ver;
    ht->decoded_pal_idx = pal_idx;
    ht->decoded_pal_ver = pal_ver;
    ht->gl_tex_version = g_next_tex_serial++;
    if (ht->gl_tex_version == 0) ht->gl_tex_version = g_next_tex_serial++;

    const uint8_t *src = guest_ptr(data_va);
    uint8_t *dst = ht->rgba;
    uint32_t npix = w * h;

    if (fmt == 41u) { /* D3DFMT_P8 */
        const uint8_t *pal = g_d3d_palettes[pal_idx];
        int has_alpha = 0;
        for (int i = 0; i < 256; i++) {
            if (pal[i * 4 + 3] < 255) {
                has_alpha = 1;
                break;
            }
        }
        for (uint32_t i = 0; i < npix; i++) {
            uint8_t idx = src[i];
            dst[i * 4 + 0] = pal[idx * 4 + 0];
            dst[i * 4 + 1] = pal[idx * 4 + 1];
            dst[i * 4 + 2] = pal[idx * 4 + 2];
            dst[i * 4 + 3] = has_alpha ? pal[idx * 4 + 3] : 255u;
        }
    } else if (fmt == 21u || fmt == 22u) { /* A8R8G8B8 (21) or X8R8G8B8 (22) */
        for (uint32_t i = 0; i < npix; i++) {
            dst[i * 4 + 0] = src[i * 4 + 2]; /* R */
            dst[i * 4 + 1] = src[i * 4 + 1]; /* G */
            dst[i * 4 + 2] = src[i * 4 + 0]; /* B */
            if (fmt == 21u) {
                dst[i * 4 + 3] = src[i * 4 + 3];
            } else {
                /* Format 22 (X8R8G8B8) is strictly opaque RGB in Direct3D 9 */
                dst[i * 4 + 3] = 255u;
            }
        }
    } else if (fmt == 20u) { /* R8G8B8 (3 bytes B,G,R) */
        for (uint32_t i = 0; i < npix; i++) {
            dst[i * 4 + 0] = src[i * 3 + 2];
            dst[i * 4 + 1] = src[i * 3 + 1];
            dst[i * 4 + 2] = src[i * 3 + 0];
            dst[i * 4 + 3] = 255u;
        }
    } else if (fmt == 23u) { /* R5G6B5 */
        for (uint32_t i = 0; i < npix; i++) {
            uint16_t p = (uint16_t)(src[i * 2] | (src[i * 2 + 1] << 8));
            dst[i * 4 + 0] = (uint8_t)(((p >> 11) & 31) * 255 / 31);
            dst[i * 4 + 1] = (uint8_t)(((p >> 5) & 63) * 255 / 63);
            dst[i * 4 + 2] = (uint8_t)((p & 31) * 255 / 31);
            dst[i * 4 + 3] = 255u;
        }
    } else if (fmt == 24u || fmt == 25u) { /* X1R5G5B5 (24) or A1R5G5B5 (25) */
        for (uint32_t i = 0; i < npix; i++) {
            uint16_t p = (uint16_t)(src[i * 2] | (src[i * 2 + 1] << 8));
            dst[i * 4 + 0] = (uint8_t)(((p >> 10) & 31) * 255 / 31);
            dst[i * 4 + 1] = (uint8_t)(((p >> 5) & 31) * 255 / 31);
            dst[i * 4 + 2] = (uint8_t)((p & 31) * 255 / 31);
            dst[i * 4 + 3] = (fmt == 24u) ? 255u : ((p & 0x8000u) ? 255u : 0u);
        }
    } else if (fmt == 26u) { /* A4R4G4B4 */
        for (uint32_t i = 0; i < npix; i++) {
            uint16_t p = (uint16_t)(src[i * 2] | (src[i * 2 + 1] << 8));
            dst[i * 4 + 0] = (uint8_t)(((p >> 8) & 15) * 17);
            dst[i * 4 + 1] = (uint8_t)(((p >> 4) & 15) * 17);
            dst[i * 4 + 2] = (uint8_t)((p & 15) * 17);
            dst[i * 4 + 3] = (uint8_t)(((p >> 12) & 15) * 17);
        }
    } else if (fmt == 0x31545844u || fmt == 0x33545844u || fmt == 0x35545844u) {
        /* DXT1 / DXT3 / DXT5 */
        int is_dxt1 = (fmt == 0x31545844u);
        int is_dxt3 = (fmt == 0x33545844u);
        uint32_t bw = (w + 3u) / 4u;
        uint32_t bh = (h + 3u) / 4u;
        uint32_t block_bytes = is_dxt1 ? 8u : 16u;
        for (uint32_t by = 0; by < bh; by++) {
            for (uint32_t bx = 0; bx < bw; bx++) {
                const uint8_t *blk = src + (by * bw + bx) * block_bytes;
                const uint8_t *cblk = is_dxt1 ? blk : (blk + 8);
                uint8_t colors[4][4];
                decode_dxt_color_block(cblk, colors, is_dxt1);
                uint32_t lut = (uint32_t)cblk[4] | ((uint32_t)cblk[5] << 8) |
                               ((uint32_t)cblk[6] << 16) | ((uint32_t)cblk[7] << 24);
                uint8_t a_pal[8];
                uint64_t a_bits = 0;
                if (!is_dxt1 && !is_dxt3) {
                    a_pal[0] = blk[0];
                    a_pal[1] = blk[1];
                    if (a_pal[0] > a_pal[1]) {
                        for (int k = 1; k <= 6; k++)
                            a_pal[k + 1] = (uint8_t)(((7 - k) * a_pal[0] + k * a_pal[1]) / 7);
                    } else {
                        for (int k = 1; k <= 4; k++)
                            a_pal[k + 1] = (uint8_t)(((5 - k) * a_pal[0] + k * a_pal[1]) / 5);
                        a_pal[6] = 0;
                        a_pal[7] = 255;
                    }
                    for (int k = 0; k < 6; k++)
                        a_bits |= ((uint64_t)blk[2 + k]) << (8 * k);
                }
                for (uint32_t py = 0; py < 4; py++) {
                    uint32_t y = by * 4 + py;
                    if (y >= h) continue;
                    for (uint32_t px = 0; px < 4; px++) {
                        uint32_t x = bx * 4 + px;
                        if (x >= w) continue;
                        uint32_t pidx = py * 4 + px;
                        uint32_t ci = (lut >> (pidx * 2)) & 3u;
                        uint8_t *out_p = dst + (y * w + x) * 4u;
                        out_p[0] = colors[ci][0];
                        out_p[1] = colors[ci][1];
                        out_p[2] = colors[ci][2];
                        if (is_dxt1) {
                            out_p[3] = colors[ci][3];
                        } else if (is_dxt3) {
                            uint8_t ab = blk[pidx >> 1];
                            uint8_t a4 = (pidx & 1) ? (ab >> 4) : (ab & 0x0F);
                            out_p[3] = (uint8_t)(a4 * 17);
                        } else {
                            uint32_t ai = (uint32_t)((a_bits >> (pidx * 3)) & 7u);
                            out_p[3] = a_pal[ai];
                        }
                    }
                }
            }
        }
    } else if (fmt == 28u) { /* D3DFMT_A8 */
        for (uint32_t i = 0; i < npix; i++) {
            dst[i * 4 + 0] = 255u;
            dst[i * 4 + 1] = 255u;
            dst[i * 4 + 2] = 255u;
            dst[i * 4 + 3] = src[i];
        }
    } else if (fmt == 50u) { /* D3DFMT_L8 */
        for (uint32_t i = 0; i < npix; i++) {
            dst[i * 4 + 0] = src[i];
            dst[i * 4 + 1] = src[i];
            dst[i * 4 + 2] = src[i];
            dst[i * 4 + 3] = 255u;
        }
    } else if (fmt == 51u) { /* D3DFMT_A8L8 */
        for (uint32_t i = 0; i < npix; i++) {
            dst[i * 4 + 0] = src[i * 2 + 0];
            dst[i * 4 + 1] = src[i * 2 + 0];
            dst[i * 4 + 2] = src[i * 2 + 0];
            dst[i * 4 + 3] = src[i * 2 + 1];
        }
    } else {
        static uint32_t s_bad_fmt[16];
        int seen = 0;
        for (int k = 0; k < 16; k++) { if (s_bad_fmt[k] == fmt) { seen = 1; break; } }
        if (!seen) {
            for (int k = 0; k < 16; k++) { if (!s_bad_fmt[k]) { s_bad_fmt[k] = fmt; break; } }
            PC_LOGI("[D3D9] unsupported texture format %u (0x%08X) %ux%u -> white", fmt, fmt, w, h);
        }
        memset(dst, 255, (size_t)npix * 4u);
    }

    if (fmt == 41u || fmt == 21u || fmt == 25u || fmt == 26u ||
        fmt == 0x31545844u || fmt == 0x33545844u || fmt == 0x35545844u) {
        bleed_transparent_rgb(dst, w, h);
    }

    return ht;
}

static uint32_t calc_d3d_pitch(uint32_t fmt, uint32_t w) {
    if (w == 0) w = 1;
    switch (fmt) {
    case 41u: /* D3DFMT_P8 */
    case 28u: /* D3DFMT_A8 */
    case 50u: /* D3DFMT_L8 */
        return w;
    case 51u: /* D3DFMT_A8L8 */
    case 23u: /* D3DFMT_R5G6B5 */
    case 24u: /* D3DFMT_X1R5G5B5 */
    case 25u: /* D3DFMT_A1R5G5B5 */
    case 26u: /* D3DFMT_A4R4G4B4 */
        return w * 2u;
    case 20u: /* D3DFMT_R8G8B8 */
        return w * 3u;
    case 0x31545844u: /* DXT1 */
        return ((w + 3u) / 4u) * 8u;
    case 0x33545844u: /* DXT3 */
    case 0x35545844u: /* DXT5 */
        return ((w + 3u) / 4u) * 16u;
    default:
        return w * 4u;
    }
}

static int is_small_offscreen_rt(uint32_t rt_va) {
    if (rt_va == 0) return 0;
    uint32_t rt_w = guest_read32(rt_va + 0x14);
    uint32_t rt_h = guest_read32(rt_va + 0x18);
    /* Keep main backbuffer-sized scene RT (e.g. 1024x512 >= 640x480), skip small blur/glow/shadow RTs (e.g. 256x128) */
    return (rt_w > 0 && rt_w < 640u) || (rt_h > 0 && rt_h < 480u);
}

/* ---- Volcado de diagnostico de un frame (se pide con DIAG_DUMP) ---- */
typedef struct {
    uint32_t fmt, fvf, vdecl, pal;
    uint32_t c_op, c_a1, c_a2, a_op, a_a1, a_a2, c1_op, a1_op, c1_a1, c1_a2;
    uint32_t minf, magf, mipf, tex1;
    uint32_t diffuse0;
    float minx, miny, maxx, maxy, minz, maxz;
} Mc2BatchDbg;
static Mc2BatchDbg g_fdbg[MC2_MAX_BATCHES];
static volatile int g_fdump_req = 0;
void mc2_pc_request_frame_dump(void) { if (g_fdump_req == 0) g_fdump_req = 1; }

static void fdbg_note(uint32_t bi, uint32_t diffuse0, const Mc2Vertex *v, uint32_t n) {
    if (bi >= MC2_MAX_BATCHES) return;
    Mc2BatchDbg *d = &g_fdbg[bi];
    memset(d, 0, sizeof(*d));
    d->fmt = g_bound_tex[0] ? guest_read32(g_bound_tex[0] + 0x1C) : 0u;
    d->fvf = g_use_vdecl ? 0u : g_cur_fvf;
    d->vdecl = g_use_vdecl ? g_cur_vdecl : 0u;
    d->pal = g_cur_tex_palette;
    d->c_op = g_tss[0][1]; d->c_a1 = g_tss[0][2]; d->c_a2 = g_tss[0][3];
    d->a_op = g_tss[0][4]; d->a_a1 = g_tss[0][5]; d->a_a2 = g_tss[0][6];
    d->c1_op = g_tss[1][1]; d->a1_op = g_tss[1][4]; d->c1_a1 = g_tss[1][2]; d->c1_a2 = g_tss[1][3];
    d->minf = g_samp[0][6]; d->magf = g_samp[0][5]; d->mipf = g_samp[0][7];
    d->tex1 = g_bound_tex[1];
    d->diffuse0 = diffuse0;
    d->minx = d->miny = d->minz = 1e9f; d->maxx = d->maxy = d->maxz = -1e9f;
    for (uint32_t i = 0; v && i < n; i++) {
        float w = (v[i].w != 0.0f) ? v[i].w : 1.0f;
        float x = v[i].x / w, y = v[i].y / w, z = v[i].z / w;
        if (x < d->minx) d->minx = x;
        if (y < d->miny) d->miny = y;
        if (z < d->minz) d->minz = z;
        if (x > d->maxx) d->maxx = x;
        if (y > d->maxy) d->maxy = y;
        if (z > d->maxz) d->maxz = z;
    }
}

static void fdbg_write_frame(const Mc2RenderFrame *f) {
    char path[600];
    snprintf(path, sizeof(path), "%s/../mc2_framedump.txt", g_game_dir);
    FILE *fp = fopen(path, "w");
    if (!fp) {
        snprintf(path, sizeof(path), "%s/mc2_framedump.txt", g_save_dir);
        fp = fopen(path, "w");
    }
    if (!fp) { PC_LOGI("[FDUMP] no se pudo abrir %s", path); return; }
    fprintf(fp, "frame=%u batches=%u verts=%u dev=%.0fx%.0f rs27=%u rs15=%u c10=%u c14=%u b0=%u b4=%u\n",
            g_frame_count, f->batch_count, f->vert_count, g_dev_w, g_dev_h,
            g_render_state[27], g_render_state[15],
            (unsigned)*guest_ptr(0x859C10u), guest_read32(0x859C14u),
            (unsigned)*guest_ptr(0x859BB0u), guest_read32(0x859BB4u));
    for (uint32_t i = 0; i < f->batch_count && i < MC2_MAX_BATCHES; i++) {
        const Mc2DrawBatch *b = &f->batches[i];
        const Mc2BatchDbg *d = &g_fdbg[i];
        if (b->is_clear) {
            fprintf(fp, "#%u CLEAR fl=%u col=%08X tgt=%08X %ux%u\n", i, b->clear_flags,
                    b->clear_color, b->target_va, b->target_w, b->target_h);
            continue;
        }
        const Mc2Vertex *v0 = (b->idx_count && f->indices) ? &f->verts[f->indices[b->first_idx]] : NULL;
        float cross = 0.0f;
        if (b->idx_count >= 3u && f->indices) {
            const Mc2Vertex *va = &f->verts[f->indices[b->first_idx + 0]];
            const Mc2Vertex *vb = &f->verts[f->indices[b->first_idx + 1]];
            const Mc2Vertex *vc = &f->verts[f->indices[b->first_idx + 2]];
            float wa = va->w != 0.0f ? va->w : 1.0f;
            float wb = vb->w != 0.0f ? vb->w : 1.0f;
            float wc = vc->w != 0.0f ? vc->w : 1.0f;
            float ax = va->x / wa, ay = va->y / wa;
            float bx = vb->x / wb, by = vb->y / wb;
            float cx = vc->x / wc, cy = vc->y / wc;
            cross = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
        }
        const uint8_t *t1p = b->tex1_rgba;
        uint32_t t1mid = (t1p && b->tex1_w > 1u && b->tex1_h > 1u)
                ? (((uint32_t)b->tex1_h / 2u) * (uint32_t)b->tex1_w + ((uint32_t)b->tex1_w / 2u)) * 4u : 0u;
        fprintf(fp, "#%u pt=%u n=%u tgt=%08X tex=%08X fmt=%X %ux%u rt=%u pal=%u fvf=%X vd=%X "
                    "c0=%u(%X,%X) a0=%u(%X,%X) c1=%u(%X,%X) a1=%u t1=%08X(%ux%u %02X%02X%02X%02X/%02X%02X%02X%02X) "
                    "wr=%u/%u,%u/%u ab=%u %u/%u at=%u ref=%u fn=%u cw=%X z=%u/%u zf=%u cm=%u zr=%.2f..%.2f cr=%.2f ut=%u/%u st=%u "
                    "flt=%u/%u/%u dif=%08X vc=%02X%02X%02X%02X uv=%.3f,%.3f uv1=%.3f,%.3f "
                    "bb=[%.2f,%.2f..%.2f,%.2f] vp=%.0f,%.0f,%.0f,%.0f\n",
                i, b->prim_type, b->idx_count, b->target_va, b->tex_va, d->fmt, b->tex_w, b->tex_h,
                b->src_is_rt, d->pal, d->fvf, d->vdecl,
                d->c_op, d->c_a1, d->c_a2, d->a_op, d->a_a1, d->a_a2,
                d->c1_op, d->c1_a1, d->c1_a2, d->a1_op, d->tex1,
                b->tex1_w, b->tex1_h,
                t1p ? t1p[0] : 0, t1p ? t1p[1] : 0, t1p ? t1p[2] : 0, t1p ? t1p[3] : 0,
                t1p ? t1p[t1mid + 0] : 0, t1p ? t1p[t1mid + 1] : 0, t1p ? t1p[t1mid + 2] : 0, t1p ? t1p[t1mid + 3] : 0,
                b->wrap_u, b->wrap_v, b->wrap_u1, b->wrap_v1,
                b->alpha_blend, b->src_blend, b->dst_blend, b->alpha_test, b->alpha_ref, b->alpha_func,
                b->cwrite_mask, b->z_enable, b->z_write, b->z_func, b->cull_mode, d->minz, d->maxz, cross,
                b->use_tex_rgb, b->use_tex_alpha, b->stencil_en,
                d->minf, d->magf, d->mipf, d->diffuse0,
                v0 ? v0->a : 0, v0 ? v0->r : 0, v0 ? v0->g : 0, v0 ? v0->b : 0,
                v0 ? v0->u : 0.0f, v0 ? v0->v : 0.0f,
                v0 ? v0->u1 : 0.0f, v0 ? v0->v1 : 0.0f,
                d->minx, d->miny, d->maxx, d->maxy, b->vp_x, b->vp_y, b->vp_w, b->vp_h);
    }
    fclose(fp);
    PC_LOGI("[FDUMP] frame %u volcado en %s (%u batches)", g_frame_count, path, f->batch_count);
}

static void record_clear_batch(uint32_t flags, uint32_t color) {
    if (g_cur_rt != 0 && g_cur_rt_tex_va == 0) {
        return;
    }
    init_render_buffers_if_needed();
    Mc2RenderFrame *f = &g_render_frames[g_write_frame_idx];
    if (g_cur_rt == 0 && (flags & 1u)) {
        f->clear_color = color;
    }
    if (f->batch_count >= MC2_MAX_BATCHES) return;
    Mc2DrawBatch *b = &f->batches[f->batch_count++];
    memset(b, 0, sizeof(*b));
    b->is_clear = 1;
    b->clear_flags = (uint8_t)(flags & 7u);
    b->clear_color = color;
    b->cwrite_mask = 0x0Fu;
    b->target_va = g_cur_rt_tex_va;
    b->target_w = (uint16_t)g_cur_rt_w;
    b->target_h = (uint16_t)g_cur_rt_h;
    b->target_cube_face = g_cur_rt_cube_face;
    if (g_cur_rt_tex_va && g_cur_rt_w > 0 && g_cur_rt_h > 0) {
        b->vp_x = 0.0f;
        b->vp_y = 0.0f;
        b->vp_w = (float)g_cur_rt_w;
        b->vp_h = (float)g_cur_rt_h;
    } else {
        b->vp_x = g_vp_x;
        b->vp_y = g_vp_y;
        b->vp_w = g_vp_w;
        b->vp_h = g_vp_h;
    }
}

static void decode_pixel_rgba(const uint8_t *p, uint32_t fmt, uint8_t *r, uint8_t *g, uint8_t *b, uint8_t *a) {
    switch (fmt) {
    case 21u: /* A8R8G8B8 */
        *b = p[0]; *g = p[1]; *r = p[2]; *a = p[3];
        break;
    case 22u: /* X8R8G8B8 */
        *b = p[0]; *g = p[1]; *r = p[2]; *a = 255u;
        break;
    case 20u: /* R8G8B8 */
        *b = p[0]; *g = p[1]; *r = p[2]; *a = 255u;
        break;
    case 23u: { /* R5G6B5 */
        uint16_t v = (uint16_t)(p[0] | (p[1] << 8));
        *r = (uint8_t)(((v >> 11) & 31) * 255 / 31);
        *g = (uint8_t)(((v >> 5) & 63) * 255 / 63);
        *b = (uint8_t)((v & 31) * 255 / 31);
        *a = 255u;
        break;
    }
    case 24u: /* X1R5G5B5 */
    case 25u: { /* A1R5G5B5 */
        uint16_t v = (uint16_t)(p[0] | (p[1] << 8));
        *r = (uint8_t)(((v >> 10) & 31) * 255 / 31);
        *g = (uint8_t)(((v >> 5) & 31) * 255 / 31);
        *b = (uint8_t)((v & 31) * 255 / 31);
        *a = (fmt == 25u) ? ((v & 0x8000u) ? 255u : 0u) : 255u;
        break;
    }
    case 26u: { /* A4R4G4B4 */
        uint16_t v = (uint16_t)(p[0] | (p[1] << 8));
        *r = (uint8_t)(((v >> 8) & 15) * 17);
        *g = (uint8_t)(((v >> 4) & 15) * 17);
        *b = (uint8_t)((v & 15) * 17);
        *a = (uint8_t)(((v >> 12) & 15) * 17);
        break;
    }
    case 28u: /* A8 */
        *r = 255u; *g = 255u; *b = 255u; *a = p[0];
        break;
    case 50u: /* L8 */
        *r = p[0]; *g = p[0]; *b = p[0]; *a = 255u;
        break;
    default:
        *r = p[2]; *g = p[1]; *b = p[0]; *a = 255u;
        break;
    }
}

static void encode_pixel_rgba(uint8_t *p, uint32_t fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    switch (fmt) {
    case 21u: /* A8R8G8B8 */
        p[0] = b; p[1] = g; p[2] = r; p[3] = a;
        break;
    case 22u: /* X8R8G8B8 */
        p[0] = b; p[1] = g; p[2] = r; p[3] = 255u;
        break;
    case 20u: /* R8G8B8 */
        p[0] = b; p[1] = g; p[2] = r;
        break;
    case 23u: { /* R5G6B5 */
        uint16_t v = (uint16_t)(((r >> 3) << 11) | ((g >> 2) << 5) | (b >> 3));
        p[0] = (uint8_t)(v & 0xFFu); p[1] = (uint8_t)(v >> 8);
        break;
    }
    case 24u: /* X1R5G5B5 */
    case 25u: { /* A1R5G5B5 */
        uint16_t v = (uint16_t)(((a >= 128u && fmt == 25u) ? 0x8000u : 0u) |
                                ((r >> 3) << 10) | ((g >> 3) << 5) | (b >> 3));
        p[0] = (uint8_t)(v & 0xFFu); p[1] = (uint8_t)(v >> 8);
        break;
    }
    case 26u: { /* A4R4G4B4 */
        uint16_t v = (uint16_t)(((a >> 4) << 12) | ((r >> 4) << 8) | ((g >> 4) << 4) | (b >> 4));
        p[0] = (uint8_t)(v & 0xFFu); p[1] = (uint8_t)(v >> 8);
        break;
    }
    case 28u:
        p[0] = a;
        break;
    case 50u:
        p[0] = r;
        break;
    default:
        p[0] = b; p[1] = g; p[2] = r; p[3] = a;
        break;
    }
}

static void copy_surface_pixels(uint32_t src_va, uint32_t src_rect_va,
                                uint32_t dst_va, uint32_t dst_pt_or_rect_va, int is_stretch) {
    if (!src_va || !dst_va || src_va >= GUEST_MEM_SIZE || dst_va >= GUEST_MEM_SIZE) return;
    uint32_t sw = guest_read32(src_va + 0x14), sh = guest_read32(src_va + 0x18);
    uint32_t sfmt = guest_read32(src_va + 0x1C), sdata = guest_read32(src_va + 0x0C);
    uint32_t ssize = guest_read32(src_va + 0x10);
    uint32_t dw = guest_read32(dst_va + 0x14), dh = guest_read32(dst_va + 0x18);
    uint32_t dfmt = guest_read32(dst_va + 0x1C), ddata = guest_read32(dst_va + 0x0C);
    uint32_t dsize = guest_read32(dst_va + 0x10);
    if (!sw || !sh || !dw || !dh || !sdata || !ddata) return;

    int32_t sx0 = 0, sy0 = 0, sx1 = (int32_t)sw, sy1 = (int32_t)sh;
    if (src_rect_va && src_rect_va < GUEST_MEM_SIZE) {
        sx0 = (int32_t)guest_read32(src_rect_va + 0);
        sy0 = (int32_t)guest_read32(src_rect_va + 4);
        sx1 = (int32_t)guest_read32(src_rect_va + 8);
        sy1 = (int32_t)guest_read32(src_rect_va + 12);
    }
    if (sx0 < 0) sx0 = 0; if (sy0 < 0) sy0 = 0;
    if (sx1 > (int32_t)sw) sx1 = (int32_t)sw;
    if (sy1 > (int32_t)sh) sy1 = (int32_t)sh;
    if (sx1 <= sx0 || sy1 <= sy0) return;
    int32_t cw = sx1 - sx0, ch = sy1 - sy0;

    int32_t dx0 = 0, dy0 = 0, dx1 = is_stretch ? (int32_t)dw : cw, dy1 = is_stretch ? (int32_t)dh : ch;
    if (dst_pt_or_rect_va && dst_pt_or_rect_va < GUEST_MEM_SIZE) {
        dx0 = (int32_t)guest_read32(dst_pt_or_rect_va + 0);
        dy0 = (int32_t)guest_read32(dst_pt_or_rect_va + 4);
        if (is_stretch) {
            dx1 = (int32_t)guest_read32(dst_pt_or_rect_va + 8);
            dy1 = (int32_t)guest_read32(dst_pt_or_rect_va + 12);
        } else {
            dx1 = dx0 + cw;
            dy1 = dy0 + ch;
        }
    }
    if (dx0 < 0) dx0 = 0; if (dy0 < 0) dy0 = 0;
    if (dx1 > (int32_t)dw) dx1 = (int32_t)dw;
    if (dy1 > (int32_t)dh) dy1 = (int32_t)dh;
    if (dx1 <= dx0 || dy1 <= dy0) return;
    int32_t rw = dx1 - dx0, rh = dy1 - dy0;

    const uint8_t *src = guest_ptr(sdata);
    uint8_t *dst = guest_ptr(ddata);
    uint32_t spitch = calc_d3d_pitch(sfmt, sw);
    uint32_t dpitch = calc_d3d_pitch(dfmt, dw);

    int is_dxt_src = (sfmt == 0x31545844u || sfmt == 0x33545844u || sfmt == 0x35545844u);
    if (sfmt == dfmt && cw == rw && ch == rh) {
        if (is_dxt_src) {
            uint32_t cp = (ssize && ssize < dsize) ? ssize : dsize;
            if (cp > 0) memcpy(dst, src, cp);
        } else {
            uint32_t bpp = spitch / sw;
            if (bpp > 0) {
                for (int32_t y = 0; y < ch; y++) {
                    memcpy(dst + (size_t)(dy0 + y) * dpitch + (size_t)dx0 * bpp,
                           src + (size_t)(sy0 + y) * spitch + (size_t)sx0 * bpp,
                           (size_t)cw * bpp);
                }
            }
        }
    } else if (!is_dxt_src && dfmt != 0x31545844u && dfmt != 0x33545844u && dfmt != 0x35545844u) {
        uint32_t sbpp = spitch / sw;
        uint32_t dbpp = dpitch / dw;
        if (sbpp > 0 && dbpp > 0) {
            for (int32_t y = 0; y < rh; y++) {
                int32_t sy = sy0 + (y * ch) / rh;
                if (sy >= sy1) sy = sy1 - 1;
                const uint8_t *srow = src + (size_t)sy * spitch;
                uint8_t *drow = dst + (size_t)(dy0 + y) * dpitch;
                for (int32_t x = 0; x < rw; x++) {
                    int32_t sx = sx0 + (x * cw) / rw;
                    if (sx >= sx1) sx = sx1 - 1;
                    uint8_t r, g, b, a;
                    decode_pixel_rgba(srow + (size_t)sx * sbpp, sfmt, &r, &g, &b, &a);
                    encode_pixel_rgba(drow + (size_t)(dx0 + x) * dbpp, dfmt, r, g, b, a);
                }
            }
        }
    }

    guest_write32(dst_va + 0x24, guest_read32(dst_va + 0x24) + 1u);
    uint32_t parent_tex = guest_read32(dst_va + 0x2C);
    if (parent_tex && parent_tex < GUEST_MEM_SIZE) {
        guest_write32(parent_tex + 0x24, guest_read32(parent_tex + 0x24) + 1u);
        uint32_t cached_surf = guest_read32(parent_tex + 0x30);
        if (cached_surf && cached_surf != dst_va && cached_surf < GUEST_MEM_SIZE) {
            guest_write32(cached_surf + 0x24, guest_read32(cached_surf + 0x24) + 1u);
        }
    }
}

static void record_surface_blit_rect(uint32_t src_surf_va, uint32_t src_rect_va,
                                     uint32_t dst_pt_or_rect_va, int is_stretch) {
    init_render_buffers_if_needed();
    Mc2HostTex *ht = ensure_host_texture_rgba(src_surf_va);
    if (!ht || !ht->rgba) return;
    ht->ever_rendered = 1;
    ht->last_used_frame = g_frame_count;

    Mc2RenderFrame *f = &g_render_frames[g_write_frame_idx];
    if (f->vert_count + 4 > MC2_MAX_VERTS ||
        f->idx_count + 6 > MC2_MAX_INDICES ||
        f->batch_count >= MC2_MAX_BATCHES) {
        return;
    }

    float sw = (float)(ht->width ? ht->width : 1u);
    float sh = (float)(ht->height ? ht->height : 1u);
    float sx0 = 0.0f, sy0 = 0.0f, sx1 = sw, sy1 = sh;
    if (src_rect_va && src_rect_va < GUEST_MEM_SIZE) {
        sx0 = (float)(int32_t)guest_read32(src_rect_va + 0);
        sy0 = (float)(int32_t)guest_read32(src_rect_va + 4);
        sx1 = (float)(int32_t)guest_read32(src_rect_va + 8);
        sy1 = (float)(int32_t)guest_read32(src_rect_va + 12);
    }
    float u0 = sx0 / sw, v0 = sy0 / sh;
    float u1 = sx1 / sw, v1 = sy1 / sh;

    float devW = (g_cur_rt_tex_va && g_cur_rt_w > 1u) ? (float)g_cur_rt_w : ((g_dev_w > 1.0f) ? g_dev_w : 640.0f);
    float devH = (g_cur_rt_tex_va && g_cur_rt_h > 1u) ? (float)g_cur_rt_h : ((g_dev_h > 1.0f) ? g_dev_h : 480.0f);
    float dx0 = 0.0f, dy0 = 0.0f;
    float dx1 = is_stretch ? devW : (sx1 - sx0);
    float dy1 = is_stretch ? devH : (sy1 - sy0);
    if (dst_pt_or_rect_va && dst_pt_or_rect_va < GUEST_MEM_SIZE) {
        dx0 = (float)(int32_t)guest_read32(dst_pt_or_rect_va + 0);
        dy0 = (float)(int32_t)guest_read32(dst_pt_or_rect_va + 4);
        if (is_stretch) {
            dx1 = (float)(int32_t)guest_read32(dst_pt_or_rect_va + 8);
            dy1 = (float)(int32_t)guest_read32(dst_pt_or_rect_va + 12);
        } else {
            dx1 = dx0 + (sx1 - sx0);
            dy1 = dy0 + (sy1 - sy0);
        }
    }

    float nx0 = (dx0 / devW) * 2.0f - 1.0f;
    float ny0 = 1.0f - (dy0 / devH) * 2.0f;
    float nx1 = (dx1 / devW) * 2.0f - 1.0f;
    float ny1 = 1.0f - (dy1 / devH) * 2.0f;

    uint32_t base_v = f->vert_count;
    Mc2Vertex *v = &f->verts[base_v];
    v[0].x = nx0; v[0].y = ny0; v[0].z = 0.0f; v[0].w = 1.0f;
    v[0].r = 255; v[0].g = 255; v[0].b = 255;  v[0].a = 255;
    v[0].u = u0;  v[0].v = v0;  v[0].u1 = u0;  v[0].v1 = v0;

    v[1].x = nx1; v[1].y = ny0; v[1].z = 0.0f; v[1].w = 1.0f;
    v[1].r = 255; v[1].g = 255; v[1].b = 255;  v[1].a = 255;
    v[1].u = u1;  v[1].v = v0;  v[1].u1 = u1;  v[1].v1 = v0;

    v[2].x = nx0; v[2].y = ny1; v[2].z = 0.0f; v[2].w = 1.0f;
    v[2].r = 255; v[2].g = 255; v[2].b = 255;  v[2].a = 255;
    v[2].u = u0;  v[2].v = v1;  v[2].u1 = u0;  v[2].v1 = v1;

    v[3].x = nx1; v[3].y = ny1; v[3].z = 0.0f; v[3].w = 1.0f;
    v[3].r = 255; v[3].g = 255; v[3].b = 255;  v[3].a = 255;
    v[3].u = u1;  v[3].v = v1;  v[3].u1 = u1;  v[3].v1 = v1;
    f->vert_count += 4;

    uint32_t first_i = f->idx_count;
    uint32_t *idx = &f->indices[first_i];
    idx[0] = (uint32_t)(base_v + 0);
    idx[1] = (uint32_t)(base_v + 2);
    idx[2] = (uint32_t)(base_v + 1);
    idx[3] = (uint32_t)(base_v + 1);
    idx[4] = (uint32_t)(base_v + 2);
    idx[5] = (uint32_t)(base_v + 3);
    f->idx_count += 6;

    Mc2DrawBatch *b = &f->batches[f->batch_count++];
    memset(b, 0, sizeof(*b));
    b->target_va = g_cur_rt_tex_va;
    b->target_w = (uint16_t)g_cur_rt_w;
    b->target_h = (uint16_t)g_cur_rt_h;
    b->target_cube_face = g_cur_rt_cube_face;
    b->tex_va = src_surf_va;
    b->tex_w = ht->width;
    b->tex_h = ht->height;
    b->tex_version = ht->gl_tex_version;
    b->tex_rgba = ht->rgba;
    b->prim_type = 4; /* D3DPT_TRIANGLELIST */
    b->first_idx = first_i;
    b->idx_count = 6;
    b->alpha_blend = 0;
    b->z_enable = 0;
    b->z_write = 0;
    b->z_func = 8;
    b->cull_mode = 1;
    b->alpha_func = 8;
    b->cwrite_mask = 0x0Fu;
    b->use_tex_rgb = 1;
    b->use_tex_alpha = 1;
    b->wrap_u = 3;
    b->wrap_v = 3;
    b->color_op1 = 1;
    b->alpha_op1 = 1;
    b->vp_x = 0.0f;
    b->vp_y = 0.0f;
    b->vp_w = devW;
    b->vp_h = devH;
}

static void record_surface_blit(uint32_t src_surf_va) {
    record_surface_blit_rect(src_surf_va, 0, 0, 1);
}

static void mat4_mul_d3d(float out[16], const float a[16], const float b[16]) {
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            out[r * 4 + c] = a[r * 4 + 0] * b[0 * 4 + c] +
                             a[r * 4 + 1] * b[1 * 4 + c] +
                             a[r * 4 + 2] * b[2 * 4 + c] +
                             a[r * 4 + 3] * b[3 * 4 + c];
        }
    }
}

static void get_current_wvp_rows(float r0[4], float r1[4], float r2[4], float r3[4]) {
    /* Prefer c4..c7 if uploaded via SetVertexShaderConstantF or 0x8585C8 from sub_005EDB60 */
    if (g_cur_vshader != 0 && g_vs_has_c4_wvp) {
        memcpy(r0, g_vs_const[4], 16);
        memcpy(r1, g_vs_const[5], 16);
        memcpy(r2, g_vs_const[6], 16);
        memcpy(r3, g_vs_const[7], 16);
        return;
    }
    /* Check if guest global 0x8585C8 has a valid transposed WVP matrix */
    const float *guest_wvp = (const float *)guest_ptr(0x8585C8u);
    if (*guest_ptr(0x858418u) == 0 &&
        (guest_wvp[0] != 0.0f || guest_wvp[5] != 0.0f || guest_wvp[15] != 0.0f)) {
        memcpy(r0, guest_wvp + 0, 16);
        memcpy(r1, guest_wvp + 4, 16);
        memcpy(r2, guest_wvp + 8, 16);
        memcpy(r3, guest_wvp + 12, 16);
        return;
    }
    /* Otherwise multiply World * View * Projection and transpose into rows */
    float wv[16], wvp[16];
    mat4_mul_d3d(wv, g_mat_world, g_mat_view);
    mat4_mul_d3d(wvp, wv, g_mat_proj);
    for (int i = 0; i < 4; i++) {
        r0[i] = wvp[i * 4 + 0];
        r1[i] = wvp[i * 4 + 1];
        r2[i] = wvp[i * 4 + 2];
        r3[i] = wvp[i * 4 + 3];
    }
}

static uint32_t prim_to_vert_count(uint32_t prim_type, uint32_t prim_count) {
    switch (prim_type) {
    case 1: return prim_count;          /* D3DPT_POINTLIST */
    case 2: return prim_count * 2u;     /* D3DPT_LINELIST */
    case 3: return prim_count + 1u;     /* D3DPT_LINESTRIP */
    case 4: return prim_count * 3u;     /* D3DPT_TRIANGLELIST */
    case 5: return prim_count + 2u;     /* D3DPT_TRIANGLESTRIP */
    case 6: return prim_count + 2u;     /* D3DPT_TRIANGLEFAN */
    default: return 0;
    }
}

static uint8_t eval_tss_chan(uint32_t op, uint32_t a1, uint32_t a2,
                             uint8_t d_val, uint8_t tf_val, int has_tex, uint8_t *out_use_tex) {
    uint32_t s1 = a1 & 0xFu;
    uint32_t s2 = a2 & 0xFu;
    if (op == 1u) { /* D3DTOP_DISABLE */
        *out_use_tex = 0;
        return d_val;
    }
    if (op == 2u || op == 3u) { /* SELECTARG1 / SELECTARG2 */
        uint32_t arg = (op == 2u) ? s1 : s2;
        if (arg == 2u) { /* D3DTA_TEXTURE */
            if (has_tex) {
                *out_use_tex = 1;
                return 255u;
            }
            arg = (op == 2u) ? s2 : s1;
        }
        *out_use_tex = 0;
        if (arg == 3u) return tf_val; /* D3DTA_TFACTOR */
        return d_val;                 /* D3DTA_DIFFUSE / CURRENT */
    }
    /* MODULATE or fallback binary op */
    int has_t1 = (s1 == 2u), has_t2 = (s2 == 2u);
    int has_f1 = (s1 == 3u), has_f2 = (s2 == 3u);
    if (has_t1 || has_t2) {
        *out_use_tex = (uint8_t)(has_tex ? 1 : 0);
        if (has_t1 && has_t2) return 255u;
        if (has_f1 || has_f2) return tf_val;
        return d_val;
    }
    *out_use_tex = 0;
    if (has_f1 && has_f2) return tf_val;
    if (has_f1 || has_f2) return (uint8_t)(((uint32_t)d_val * (uint32_t)tf_val) / 255u);
    return d_val;
}

static void apply_stage0_color(Mc2Vertex *out_v, uint32_t diffuse, int is_cpv_stream1,
                               int has_tex, uint8_t *out_utex_rgb, uint8_t *out_utex_a) {
    uint32_t tf = g_render_state[60];
    uint8_t d_r = (uint8_t)((diffuse >> 16) & 0xFFu);
    uint8_t d_g = (uint8_t)((diffuse >> 8) & 0xFFu);
    uint8_t d_b = (uint8_t)(diffuse & 0xFFu);
    uint8_t d_a = (uint8_t)((diffuse >> 24) & 0xFFu);
    /* AgeEngine CPV stream 1 often leaves vertex diffuse alpha as 0 when unused by fixed-function alpha;
       default only stream1 CPV alpha==0 to 255 so TFACTOR/XYZRHW/FVF alphas remain exact. */
    if (is_cpv_stream1 && d_a == 0) {
        d_a = 255u;
    }
    uint8_t tf_r = (uint8_t)((tf >> 16) & 0xFFu);
    uint8_t tf_g = (uint8_t)((tf >> 8) & 0xFFu);
    uint8_t tf_b = (uint8_t)(tf & 0xFFu);
    uint8_t tf_a = (uint8_t)((tf >> 24) & 0xFFu);

    uint8_t dummy = 0;
    out_v->r = eval_tss_chan(g_tss[0][1], g_tss[0][2], g_tss[0][3], d_r, tf_r, has_tex, out_utex_rgb);
    out_v->g = eval_tss_chan(g_tss[0][1], g_tss[0][2], g_tss[0][3], d_g, tf_g, has_tex, &dummy);
    out_v->b = eval_tss_chan(g_tss[0][1], g_tss[0][2], g_tss[0][3], d_b, tf_b, has_tex, &dummy);
    out_v->a = eval_tss_chan(g_tss[0][4], g_tss[0][5], g_tss[0][6], d_a, tf_a, has_tex, out_utex_a);
}

/* Compute MC2 directional (c0..c2 diffuse, c12..c14 -dir) + ambient (c3) * material (c11) vertex color. */
static uint32_t compute_mc2_lighting(float wnx, float wny, float wnz) {
    float mat_r = g_vs_const[11][0];
    float mat_g = g_vs_const[11][1];
    float mat_b = g_vs_const[11][2];
    float mat_a = g_vs_const[11][3];
    if (mat_r == 0.0f && mat_g == 0.0f && mat_b == 0.0f && mat_a == 0.0f) {
        return 0xFFFFFFFFu;
    }
    float len2 = wnx * wnx + wny * wny + wnz * wnz;
    if (len2 > 1e-6f) {
        float inv = 1.0f / sqrtf(len2);
        wnx *= inv;
        wny *= inv;
        wnz *= inv;
    }
    float d0 = wnx * g_vs_const[12][0] + wny * g_vs_const[12][1] + wnz * g_vs_const[12][2];
    float d1 = wnx * g_vs_const[13][0] + wny * g_vs_const[13][1] + wnz * g_vs_const[13][2];
    float d2 = wnx * g_vs_const[14][0] + wny * g_vs_const[14][1] + wnz * g_vs_const[14][2];
    if (d0 < 0.0f) d0 = 0.0f;
    if (d1 < 0.0f) d1 = 0.0f;
    if (d2 < 0.0f) d2 = 0.0f;
    float lr = (g_vs_const[3][0] + d0 * g_vs_const[0][0] + d1 * g_vs_const[1][0] + d2 * g_vs_const[2][0]) * mat_r;
    float lg = (g_vs_const[3][1] + d0 * g_vs_const[0][1] + d1 * g_vs_const[1][1] + d2 * g_vs_const[2][1]) * mat_g;
    float lb = (g_vs_const[3][2] + d0 * g_vs_const[0][2] + d1 * g_vs_const[1][2] + d2 * g_vs_const[2][2]) * mat_b;
    float la = mat_a;
    if (lr < 0.0f) lr = 0.0f; else if (lr > 1.0f) lr = 1.0f;
    if (lg < 0.0f) lg = 0.0f; else if (lg > 1.0f) lg = 1.0f;
    if (lb < 0.0f) lb = 0.0f; else if (lb > 1.0f) lb = 1.0f;
    if (la < 0.0f) la = 0.0f; else if (la > 1.0f) la = 1.0f;
    uint32_t cr = (uint32_t)(lr * 255.0f + 0.5f);
    uint32_t cg = (uint32_t)(lg * 255.0f + 0.5f);
    uint32_t cb = (uint32_t)(lb * 255.0f + 0.5f);
    uint32_t ca = (uint32_t)(la * 255.0f + 0.5f);
    return (ca << 24) | (cr << 16) | (cg << 8) | cb;
}

static int transform_pos_by_vs3x4(uint32_t reg, float px, float py, float pz, float out_p[3]) {
    if (reg < 16u || reg + 2u >= 96u) return 0;
    out_p[0] = px * g_vs_const[reg + 0][0] + py * g_vs_const[reg + 0][1] + pz * g_vs_const[reg + 0][2] + g_vs_const[reg + 0][3];
    out_p[1] = px * g_vs_const[reg + 1][0] + py * g_vs_const[reg + 1][1] + pz * g_vs_const[reg + 1][2] + g_vs_const[reg + 1][3];
    out_p[2] = px * g_vs_const[reg + 2][0] + py * g_vs_const[reg + 2][1] + pz * g_vs_const[reg + 2][2] + g_vs_const[reg + 2][3];
    return 1;
}

static void rotate_norm_by_vs3x3(uint32_t reg, float nx, float ny, float nz, float out_n[3]) {
    if (reg < 16u || reg + 2u >= 96u) {
        out_n[0] = nx; out_n[1] = ny; out_n[2] = nz;
        return;
    }
    out_n[0] = nx * g_vs_const[reg + 0][0] + ny * g_vs_const[reg + 0][1] + nz * g_vs_const[reg + 0][2];
    out_n[1] = nx * g_vs_const[reg + 1][0] + ny * g_vs_const[reg + 1][1] + nz * g_vs_const[reg + 1][2];
    out_n[2] = nx * g_vs_const[reg + 2][0] + ny * g_vs_const[reg + 2][1] + nz * g_vs_const[reg + 2][2];
}

static void extract_one_vertex(Mc2Vertex *out_v, const uint8_t *v0_ptr, const uint8_t *v1_ptr,
                               uint32_t stride0, const float r0[4], const float r1[4],
                               const float r2[4], const float r3[4], int has_tex,
                               uint8_t *out_utex_rgb, uint8_t *out_utex_a) {
    float px = 0.0f, py = 0.0f, pz = 0.0f;
    uint32_t diffuse = 0xFFFFFFFFu;
    float u = 0.0f, v = 0.0f;
    float u1 = 0.0f, v1 = 0.0f;
    int has_uv1 = 0;
    int used_stream1_cpv = 0;
    float wpx = 0.0f, wpy = 0.0f, wpz = 0.0f;
    float wnx = 0.0f, wny = 0.0f, wnz = 1.0f;
    int have_world_norm = 0;

    if (!g_use_vdecl && (g_cur_fvf & 0x0Eu) == 0x04u) {
        /* Pre-transformed screen-space FVF (D3DFVF_XYZRHW) */
        float sx = 0.0f, sy = 0.0f, sz = 0.0f;
        memcpy(&sx, v0_ptr + 0, 4);
        memcpy(&sy, v0_ptr + 4, 4);
        memcpy(&sz, v0_ptr + 8, 4);
        uint32_t off = 16;
        if (g_cur_fvf & 0x40u) {
            memcpy(&diffuse, v0_ptr + off, 4);
            off += 4;
        }
        if (g_cur_fvf & 0x80u) {
            off += 4;
        }
        if ((g_cur_fvf & 0xF00u) >= 0x100u) {
            memcpy(&u, v0_ptr + off, 4);
            memcpy(&v, v0_ptr + off + 4, 4);
            if ((g_cur_fvf & 0xF00u) >= 0x200u) {
                memcpy(&u1, v0_ptr + off + 8, 4);
                memcpy(&v1, v0_ptr + off + 12, 4);
                has_uv1 = 1;
            } else {
                u1 = u; v1 = v;
            }
        }
        float devW = (g_cur_rt_tex_va && g_cur_rt_w > 1u) ? (float)g_cur_rt_w : ((g_dev_w > 1.0f) ? g_dev_w : 640.0f);
        float devH = (g_cur_rt_tex_va && g_cur_rt_h > 1u) ? (float)g_cur_rt_h : ((g_dev_h > 1.0f) ? g_dev_h : 480.0f);
        if (sz < 0.0f) sz = 0.0f;
        if (sz > 1.0f) sz = 1.0f;
        /* D3D9 XYZRHW places pixel centers at (x - 0.5, y - 0.5); shift by +0.5 before NDC mapping
           so 0..devW-1 spans [-1, +1] cleanly without leaving a 1px gap on the right/bottom edge. */
        out_v->x = ((sx + 0.5f) / devW) * 2.0f - 1.0f;
        out_v->y = 1.0f - ((sy + 0.5f) / devH) * 2.0f;
        out_v->z = sz * 2.0f - 1.0f;
        out_v->w = 1.0f;
        apply_stage0_color(out_v, diffuse, 0, has_tex, out_utex_rgb, out_utex_a);
        out_v->u = u;
        out_v->v = v;
        out_v->u1 = ((g_tss[1][11] & 0xFFFFu) == 1u && has_uv1) ? u1 : u;
        out_v->v1 = ((g_tss[1][11] & 0xFFFFu) == 1u && has_uv1) ? v1 : v;
        return;
    }

    memcpy(&px, v0_ptr + 0, 4);
    memcpy(&py, v0_ptr + 4, 4);
    memcpy(&pz, v0_ptr + 8, 4);

    if (!g_use_vdecl && g_cur_fvf != 0) {
        uint32_t off = 12;
        float nx = 0.0f, ny = 0.0f, nz = 1.0f;
        int has_normal = 0;
        if (g_cur_fvf & 0x10u) { /* D3DFVF_NORMAL */
            memcpy(&nx, v0_ptr + off + 0, 4);
            memcpy(&ny, v0_ptr + off + 4, 4);
            memcpy(&nz, v0_ptr + off + 8, 4);
            has_normal = 1;
            off += 12;
        }
        wpx = px * g_mat_world[0] + py * g_mat_world[4] + pz * g_mat_world[8] + g_mat_world[12];
        wpy = px * g_mat_world[1] + py * g_mat_world[5] + pz * g_mat_world[9] + g_mat_world[13];
        wpz = px * g_mat_world[2] + py * g_mat_world[6] + pz * g_mat_world[10] + g_mat_world[14];
        if (has_normal) {
            wnx = nx * g_mat_world[0] + ny * g_mat_world[4] + nz * g_mat_world[8];
            wny = nx * g_mat_world[1] + ny * g_mat_world[5] + nz * g_mat_world[9];
            wnz = nx * g_mat_world[2] + ny * g_mat_world[6] + nz * g_mat_world[10];
            have_world_norm = 1;
        }
        if (g_cur_fvf & 0x40u) {
            memcpy(&diffuse, v0_ptr + off, 4);
            off += 4;
        } else if (has_normal && g_render_state[137]) {
            diffuse = compute_mc2_lighting(wnx, wny, wnz);
        }
        if (g_cur_fvf & 0x80u) off += 4;  /* D3DFVF_SPECULAR */
        if ((g_cur_fvf & 0xF00u) >= 0x100u) {
            memcpy(&u, v0_ptr + off, 4);
            memcpy(&v, v0_ptr + off + 4, 4);
            if ((g_cur_fvf & 0xF00u) >= 0x200u) {
                memcpy(&u1, v0_ptr + off + 8, 4);
                memcpy(&v1, v0_ptr + off + 12, 4);
                has_uv1 = 1;
            }
        }
    } else {
        /* MC2 D3DVERTEXELEMENT9 declarations (created in sub_005FC170) */
        uint32_t decl2 = guest_read32(0x85CCE0u); /* stride 36: pos(0), bone_idx(12), norm(16), uv0(28) */
        uint32_t decl3 = guest_read32(0x85CCE4u); /* stride 44: pos(0), bone_idx(12), weights2(16), norm(24), uv0(36) */
        uint32_t decl4 = guest_read32(0x85CCE8u); /* stride 32: pos(0), norm(12), uv0(24) */
        if ((decl3 && g_cur_vdecl == decl3) || stride0 == 44u) {
            uint32_t regs[3] = { v0_ptr[14], v0_ptr[13], v0_ptr[12] };
            float w0 = 0.0f, w1 = 0.0f;
            memcpy(&w0, v0_ptr + 16, 4);
            memcpy(&w1, v0_ptr + 20, 4);
            float ws[3] = { w0, w1, 1.0f - w0 - w1 };
            float nx = 0.0f, ny = 0.0f, nz = 1.0f;
            memcpy(&nx, v0_ptr + 24, 4);
            memcpy(&ny, v0_ptr + 28, 4);
            memcpy(&nz, v0_ptr + 32, 4);
            memcpy(&u, v0_ptr + 36, 4);
            memcpy(&v, v0_ptr + 40, 4);
            float acc[3] = { 0.0f, 0.0f, 0.0f };
            float w_sum = 0.0f;
            for (int k = 0; k < 3; k++) {
                float tp[3];
                if (ws[k] != 0.0f && transform_pos_by_vs3x4(regs[k], px, py, pz, tp)) {
                    acc[0] += tp[0] * ws[k];
                    acc[1] += tp[1] * ws[k];
                    acc[2] += tp[2] * ws[k];
                    w_sum += ws[k];
                }
            }
            if (w_sum > 0.001f) {
                px = acc[0]; py = acc[1]; pz = acc[2];
            }
            float wn[3];
            rotate_norm_by_vs3x3(regs[0], nx, ny, nz, wn);
            wpx = px; wpy = py; wpz = pz;
            wnx = wn[0]; wny = wn[1]; wnz = wn[2];
            have_world_norm = 1;
            diffuse = compute_mc2_lighting(wn[0], wn[1], wn[2]);
        } else if ((decl2 && g_cur_vdecl == decl2) || stride0 == 36u) {
            uint32_t reg = v0_ptr[14];
            float nx = 0.0f, ny = 0.0f, nz = 1.0f;
            memcpy(&nx, v0_ptr + 16, 4);
            memcpy(&ny, v0_ptr + 20, 4);
            memcpy(&nz, v0_ptr + 24, 4);
            memcpy(&u, v0_ptr + 28, 4);
            memcpy(&v, v0_ptr + 32, 4);
            float tp[3];
            if (transform_pos_by_vs3x4(reg, px, py, pz, tp)) {
                px = tp[0]; py = tp[1]; pz = tp[2];
            }
            float wn[3];
            rotate_norm_by_vs3x3(reg, nx, ny, nz, wn);
            wpx = px; wpy = py; wpz = pz;
            wnx = wn[0]; wny = wn[1]; wnz = wn[2];
            have_world_norm = 1;
            diffuse = compute_mc2_lighting(wn[0], wn[1], wn[2]);
        } else if ((decl4 && g_cur_vdecl == decl4) || stride0 == 32u) {
            float nx = 0.0f, ny = 0.0f, nz = 1.0f;
            memcpy(&nx, v0_ptr + 12, 4);
            memcpy(&ny, v0_ptr + 16, 4);
            memcpy(&nz, v0_ptr + 20, 4);
            memcpy(&u, v0_ptr + 24, 4);
            memcpy(&v, v0_ptr + 28, 4);
            float wn[3];
            if (g_cur_vshader != 0) {
                float tp[3];
                if (transform_pos_by_vs3x4(16u, px, py, pz, tp)) {
                    px = tp[0]; py = tp[1]; pz = tp[2];
                }
                rotate_norm_by_vs3x3(16u, nx, ny, nz, wn);
                wpx = px; wpy = py; wpz = pz;
            } else {
                wpx = px * g_mat_world[0] + py * g_mat_world[4] + pz * g_mat_world[8] + g_mat_world[12];
                wpy = px * g_mat_world[1] + py * g_mat_world[5] + pz * g_mat_world[9] + g_mat_world[13];
                wpz = px * g_mat_world[2] + py * g_mat_world[6] + pz * g_mat_world[10] + g_mat_world[14];
                wn[0] = nx * g_mat_world[0] + ny * g_mat_world[4] + nz * g_mat_world[8];
                wn[1] = nx * g_mat_world[1] + ny * g_mat_world[5] + nz * g_mat_world[9];
                wn[2] = nx * g_mat_world[2] + ny * g_mat_world[6] + nz * g_mat_world[10];
            }
            wnx = wn[0]; wny = wn[1]; wnz = wn[2];
            have_world_norm = 1;
            diffuse = compute_mc2_lighting(wn[0], wn[1], wn[2]);
        } else {
            /* decl0 (20B: pos(0), uv0(12)) or decl1 (28B: pos(0), uv0(12), uv1(20)) + stream1 CPV */
            if (stride0 >= 20u) {
                memcpy(&u, v0_ptr + 12, 4);
                memcpy(&v, v0_ptr + 16, 4);
            }
            if (stride0 >= 28u) {
                memcpy(&u1, v0_ptr + 20, 4);
                memcpy(&v1, v0_ptr + 24, 4);
                has_uv1 = 1;
            }
            if (v1_ptr) {
                memcpy(&diffuse, v1_ptr, 4);
                used_stream1_cpv = 1;
            }
        }
    }

    float cx = px * r0[0] + py * r0[1] + pz * r0[2] + r0[3];
    float cy = px * r1[0] + py * r1[1] + pz * r1[2] + r1[3];
    float cz = px * r2[0] + py * r2[1] + pz * r2[2] + r2[3];
    float cw = px * r3[0] + py * r3[1] + pz * r3[2] + r3[3];

    out_v->x = cx;
    out_v->y = cy;
    out_v->z = cz * 2.0f - cw; /* D3D [0..w] -> GL [-w..w] */
    out_v->w = cw;
    apply_stage0_color(out_v, diffuse, used_stream1_cpv, has_tex, out_utex_rgb, out_utex_a);
    out_v->u = u;
    out_v->v = v;

    /* Compute Stage 1 texcoords (explicit uv1, TCI camera-space reflection/normal, or tex matrix) */
    uint32_t tss1_tci = g_tss[1][11];
    uint32_t tci1 = tss1_tci & 0xFFFF0000u;
    uint32_t idx1 = tss1_tci & 0xFFFFu;
    uint32_t ttf1 = g_tss[1][24];
    uint32_t ttf1_cnt = ttf1 & 0xFFu;
    if ((tci1 != 0u && have_world_norm) ||
        (g_cur_vshader != 0 && have_world_norm && !has_uv1 && g_tss[1][1] != 1u && g_bound_tex[1] != 0u)) {
        float cpx = wpx * g_mat_view[0] + wpy * g_mat_view[4] + wpz * g_mat_view[8] + g_mat_view[12];
        float cpy = wpx * g_mat_view[1] + wpy * g_mat_view[5] + wpz * g_mat_view[9] + g_mat_view[13];
        float cpz = wpx * g_mat_view[2] + wpy * g_mat_view[6] + wpz * g_mat_view[10] + g_mat_view[14];
        float cnx = wnx * g_mat_view[0] + wny * g_mat_view[4] + wnz * g_mat_view[8];
        float cny = wnx * g_mat_view[1] + wny * g_mat_view[5] + wnz * g_mat_view[9];
        float cnz = wnx * g_mat_view[2] + wny * g_mat_view[6] + wnz * g_mat_view[10];
        float nlen = sqrtf(cnx * cnx + cny * cny + cnz * cnz);
        if (nlen > 1e-6f) { cnx /= nlen; cny /= nlen; cnz /= nlen; }

        float tx = 0.0f, ty = 0.0f, tz = 0.0f, tw = 1.0f;
        if (tci1 == 0x10000u) { /* CAMERASPACENORMAL */
            tx = cnx; ty = cny; tz = cnz; tw = 1.0f;
        } else if (tci1 == 0x20000u) { /* CAMERASPACEPOSITION */
            tx = cpx; ty = cpy; tz = cpz; tw = 1.0f;
        } else {
            float plen = sqrtf(cpx * cpx + cpy * cpy + cpz * cpz);
            float ex = (plen > 1e-6f) ? (cpx / plen) : 0.0f;
            float ey = (plen > 1e-6f) ? (cpy / plen) : 0.0f;
            float ez = (plen > 1e-6f) ? (cpz / plen) : 1.0f;
            float ndote = cnx * ex + cny * ey + cnz * ez;
            float rx = ex - 2.0f * ndote * cnx;
            float ry = ey - 2.0f * ndote * cny;
            float rz = ez - 2.0f * ndote * cnz;
            if (ttf1_cnt >= 2u) {
                tx = rx; ty = ry; tz = rz; tw = 1.0f;
            } else {
                tx = 0.5f + 0.5f * rx;
                ty = 0.5f - 0.5f * ry;
            }
        }
        if (ttf1_cnt >= 2u) {
            const float *m = g_mat_tex[1];
            float ox = tx * m[0] + ty * m[4] + tz * m[8] + tw * m[12];
            float oy = tx * m[1] + ty * m[5] + tz * m[9] + tw * m[13];
            float oz = tx * m[2] + ty * m[6] + tz * m[10] + tw * m[14];
            float ow = tx * m[3] + ty * m[7] + tz * m[11] + tw * m[15];
            if (ttf1 & 256u) {
                float div = (ttf1_cnt == 3u) ? oz : ow;
                if (fabsf(div) > 1e-6f) { ox /= div; oy /= div; }
            }
            out_v->u1 = ox;
            out_v->v1 = oy;
        } else {
            out_v->u1 = tx;
            out_v->v1 = ty;
        }
    } else {
        float tx = (has_uv1 && (idx1 == 1u || stride0 >= 28u)) ? u1 : u;
        float ty = (has_uv1 && (idx1 == 1u || stride0 >= 28u)) ? v1 : v;
        if (ttf1_cnt >= 2u) {
            const float *m = g_mat_tex[1];
            float ox = tx * m[0] + ty * m[4] + m[8] + m[12];
            float oy = tx * m[1] + ty * m[5] + m[9] + m[13];
            float oz = tx * m[2] + ty * m[6] + m[10] + m[14];
            if ((ttf1 & 256u) && fabsf(oz) > 1e-6f) { ox /= oz; oy /= oz; }
            tx = ox; ty = oy;
        }
        out_v->u1 = tx;
        out_v->v1 = ty;
    }
}

static int d3d_stage_op_needs_tex(uint32_t op, uint32_t a1, uint32_t a2) {
    if (op <= 1u) return 0; /* D3DTOP_DISABLE */
    uint32_t c1 = a1 & 0xFu;
    uint32_t c2 = a2 & 0xFu;
    if (op == 2u) return (c1 == 2u); /* D3DTOP_SELECTARG1 */
    if (op == 3u) return (c2 == 2u); /* D3DTOP_SELECTARG2 */
    if (op == 13u) return 1;         /* D3DTOP_BLENDTEXTUREALPHA */
    return (c1 == 2u || c2 == 2u);
}

static void record_draw_call(uint32_t prim_type, uint32_t prim_count,
                             const uint8_t *stream0_base, uint32_t stride0,
                             const uint8_t *stream1_base, uint32_t stride1,
                             const uint8_t *idx_base, int idx_is_32bit,
                             int32_t base_vertex_idx, uint32_t start_vert_or_idx) {
    if (g_cur_rt != 0 && g_cur_rt_tex_va == 0) return;
    if (!stream0_base || !stride0 || !prim_count) return;

    uint8_t src_is_rt = 0;
    if (g_bound_tex[0] && g_bound_tex[0] < GUEST_MEM_SIZE) {
        src_is_rt = (guest_read32(g_bound_tex[0] + 0x34) == 1u) ? 1u : 0u;
    }
    uint8_t src1_is_rt = 0;
    if (g_bound_tex[1] && g_bound_tex[1] < GUEST_MEM_SIZE) {
        src1_is_rt = (guest_read32(g_bound_tex[1] + 0x34) == 1u) ? 1u : 0u;
    }
    init_render_buffers_if_needed();

    uint32_t n_indices = prim_to_vert_count(prim_type, prim_count);
    if (n_indices == 0 || n_indices > 65535u) return;

    Mc2RenderFrame *f = &g_render_frames[g_write_frame_idx];
    if (f->vert_count + n_indices > MC2_MAX_VERTS ||
        f->idx_count + n_indices > MC2_MAX_INDICES ||
        f->batch_count >= MC2_MAX_BATCHES) {
        return;
    }

    float r0[4], r1[4], r2[4], r3[4];
    get_current_wvp_rows(r0, r1, r2, r3);

    Mc2HostTex *ht = (!src_is_rt && g_bound_tex[0]) ? ensure_host_texture_rgba(g_bound_tex[0]) : NULL;
    if (!src_is_rt && g_bound_tex[0] && !ht) {
        static uint32_t s_null_ht_logged = 0;
        if (s_null_ht_logged < 8u) {
            s_null_ht_logged++;
            uint32_t tw = guest_read32(g_bound_tex[0] + 0x14);
            uint32_t th = guest_read32(g_bound_tex[0] + 0x18);
            uint32_t td = guest_read32(g_bound_tex[0] + 0x0C);
            uint32_t ts = guest_read32(g_bound_tex[0] + 0x20);
            PC_LOGI("[D3D9] tex0 0x%08X ensure_host_texture=NULL (w=%u h=%u data=0x%08X slot=%u count=%u)",
                    g_bound_tex[0], tw, th, td, ts, g_host_tex_count);
        }
    }
    if (ht) { ht->ever_rendered = 1; ht->last_used_frame = g_frame_count; }
    Mc2HostTex *ht1 = (!src1_is_rt && g_bound_tex[1]) ? ensure_host_texture_rgba(g_bound_tex[1]) : NULL;
    if (ht1) { ht1->ever_rendered = 1; ht1->last_used_frame = g_frame_count; }
    int has_tex = src_is_rt ? 1 : ((ht && ht->rgba) ? 1 : 0);
    uint8_t use_tex_rgb = 0;
    uint8_t use_tex_alpha = 0;

    uint32_t first_idx = f->idx_count;
    uint32_t first_dif = 0xFFFFFFFFu;
    for (uint32_t i = 0; i < n_indices; i++) {
        uint32_t v_idx = 0;
        if (idx_base) {
            uint32_t raw_i = start_vert_or_idx + i;
            if (idx_is_32bit) {
                uint32_t v32 = 0;
                memcpy(&v32, idx_base + raw_i * 4u, 4);
                v_idx = (uint32_t)((int32_t)v32 + base_vertex_idx);
            } else {
                uint16_t v16 = 0;
                memcpy(&v16, idx_base + raw_i * 2u, 2);
                v_idx = (uint32_t)((int32_t)v16 + base_vertex_idx);
            }
        } else {
            v_idx = start_vert_or_idx + i;
        }

        const uint8_t *v0_ptr = stream0_base + v_idx * stride0;
        const uint8_t *v1_ptr = (stream1_base && stride1) ? (stream1_base + v_idx * stride1) : NULL;
        uint32_t out_vi = f->vert_count++;
        extract_one_vertex(&f->verts[out_vi], v0_ptr, v1_ptr, stride0, r0, r1, r2, r3,
                           has_tex, &use_tex_rgb, &use_tex_alpha);
        f->indices[f->idx_count++] = out_vi;
        if (i == 0) {
            uint32_t dif0 = 0xFFFFFFFFu;
            if (!g_use_vdecl && (g_cur_fvf & 0x40u)) {
                uint32_t off = ((g_cur_fvf & 0x0Eu) == 0x04u) ? 16u : ((g_cur_fvf & 0x10u) ? 24u : 12u);
                memcpy(&dif0, v0_ptr + off, 4);
            } else if (v1_ptr) {
                memcpy(&dif0, v1_ptr, 4);
            }
            first_dif = dif0;
        }
    }
    if (g_fdump_req == 2) {
        fdbg_note(f->batch_count, first_dif, &f->verts[f->vert_count - n_indices], n_indices);
    }

    int is_rhw = (!g_use_vdecl && (g_cur_fvf & 0x0Eu) == 0x04u);
    Mc2DrawBatch *b = &f->batches[f->batch_count++];
    memset(b, 0, sizeof(*b));
    b->target_va = g_cur_rt_tex_va;
    b->target_w = (uint16_t)g_cur_rt_w;
    b->target_h = (uint16_t)g_cur_rt_h;
    b->target_cube_face = g_cur_rt_cube_face;
    b->tex1_is_cube = (g_bound_tex[1] && g_bound_tex[1] < GUEST_MEM_SIZE &&
                       guest_read32(g_bound_tex[1]) == g_vtbl_d3dcubetex9) ? 1u : 0u;
    b->src_is_rt = src_is_rt;
    if (src_is_rt) {
        b->tex_va = g_bound_tex[0];
        b->tex_w = guest_read32(g_bound_tex[0] + 0x14);
        b->tex_h = guest_read32(g_bound_tex[0] + 0x18);
        b->tex_version = 1;
        b->tex_rgba = NULL;
    } else if (has_tex) {
        b->tex_va = g_bound_tex[0];
        b->tex_w = ht->width;
        b->tex_h = ht->height;
        b->tex_version = ht->gl_tex_version;
        b->tex_rgba = ht->rgba;
    }
    b->src1_is_rt = src1_is_rt;
    if (src1_is_rt) {
        b->tex1_va = g_bound_tex[1];
        b->tex1_w = (uint16_t)guest_read32(g_bound_tex[1] + 0x14);
        b->tex1_h = (uint16_t)guest_read32(g_bound_tex[1] + 0x18);
        b->tex1_version = 1;
        b->tex1_rgba = NULL;
    } else if (ht1 && ht1->rgba) {
        b->tex1_va = g_bound_tex[1];
        b->tex1_w = (uint16_t)ht1->width;
        b->tex1_h = (uint16_t)ht1->height;
        b->tex1_version = ht1->gl_tex_version;
        b->tex1_rgba = ht1->rgba;
    }
    b->wrap_u1 = (uint8_t)g_samp[1][1];
    b->wrap_v1 = (uint8_t)g_samp[1][2];
    {
        int has_tex1 = (src1_is_rt || (ht1 && ht1->rgba)) ? 1 : 0;
        uint8_t cop1 = (uint8_t)(g_tss[1][1] ? g_tss[1][1] : 1u);
        uint8_t aop1 = (uint8_t)(g_tss[1][4] ? g_tss[1][4] : 1u);
        uint8_t c1a1 = (uint8_t)(g_tss[1][2] & 0xFFu);
        uint8_t c1a2 = (uint8_t)(g_tss[1][3] & 0xFFu);
        uint8_t a1a1 = (uint8_t)(g_tss[1][5] & 0xFFu);
        uint8_t a1a2 = (uint8_t)(g_tss[1][6] & 0xFFu);
        /* D3D9 terminates fixed-function texture stage cascading whenever a stage references
           D3DTA_TEXTURE without a bound texture on that stage. */
        if (!has_tex1) {
            if (d3d_stage_op_needs_tex(cop1, c1a1, c1a2)) {
                cop1 = 1u;
                aop1 = 1u;
            } else if (d3d_stage_op_needs_tex(aop1, a1a1, a1a2)) {
                aop1 = 1u;
            }
        }
        b->color_op1 = cop1;
        b->alpha_op1 = aop1;
        b->color1_arg1 = c1a1;
        b->color1_arg2 = c1a2;
        b->alpha1_arg1 = a1a1;
        b->alpha1_arg2 = a1a2;
    }
    b->texture_factor = g_render_state[60];
    b->blend_op = (uint8_t)(g_render_state[171] ? (g_render_state[171] & 0xFFu) : 1u);
    b->has_scissor = 0;
    b->prim_type = prim_type;
    b->first_idx = first_idx;
    b->idx_count = n_indices;
    b->alpha_blend = (uint8_t)(g_render_state[27] ? 1 : 0);
    b->src_blend = (uint8_t)g_render_state[19];
    b->dst_blend = (uint8_t)g_render_state[20];
    b->z_enable = (uint8_t)(g_render_state[7] ? 1 : 0);
    b->z_write = (uint8_t)(g_render_state[14] ? 1 : 0);
    b->z_func = (uint8_t)((g_render_state[23] >= 1u && g_render_state[23] <= 8u) ? g_render_state[23] : 4u);
    /* D3DFVF_XYZRHW quads (menus, text, HUD, RT blits) are emitted in CCW screen order even when cull_mode=CCW */
    b->cull_mode = is_rhw ? 1u : (uint8_t)g_render_state[22];
    b->alpha_test = (uint8_t)(g_render_state[15] ? 1 : 0);
    b->alpha_ref = (uint8_t)(g_render_state[24] & 0xFFu);
    b->alpha_func = (uint8_t)(g_render_state[25] & 0xFFu);
    if (g_use_vdecl && b->z_enable && b->z_write &&
        b->alpha_func == 8u && b->src_blend == 2u && b->dst_blend == 5u) {
        /* City pass 0 (decl0/decl1) leaves additive-alpha blend (2/5) enabled with z_write=1
           and alpha_func=ALWAYS; render it opaque so the sky doesn't bleed through roads. */
        b->alpha_blend = 0;
    }
    b->cwrite_mask = (uint8_t)(g_render_state[168] & 0x0Fu);
    b->use_tex_rgb = use_tex_rgb;
    b->use_tex_alpha = use_tex_alpha;
    b->wrap_u = (uint8_t)(is_rhw ? 3u : g_samp[0][1]);
    b->wrap_v = (uint8_t)(is_rhw ? 3u : g_samp[0][2]);
    b->stencil_en = (uint8_t)(g_render_state[52] ? 1 : 0);
    b->stencil_fail = (uint8_t)(g_render_state[53] & 0xFFu);
    b->stencil_zfail = (uint8_t)(g_render_state[54] & 0xFFu);
    b->stencil_pass = (uint8_t)(g_render_state[55] & 0xFFu);
    b->stencil_func = (uint8_t)(g_render_state[56] & 0xFFu);
    b->stencil_ref = (uint8_t)(g_render_state[57] & 0xFFu);
    b->stencil_mask = (uint8_t)(g_render_state[58] & 0xFFu);
    b->stencil_wmask = (uint8_t)(g_render_state[59] & 0xFFu);
    {
        uint32_t fmode = g_render_state[35] ? g_render_state[35] : g_render_state[140];
        b->fog_enable = (!is_rhw && g_render_state[28] && fmode > 0u) ? 1u : 0u;
        b->fog_mode = (uint8_t)(fmode & 0xFFu);
        b->fog_color = g_render_state[34];
        memcpy(&b->fog_start, &g_render_state[36], 4);
        memcpy(&b->fog_end, &g_render_state[37], 4);
        memcpy(&b->fog_density, &g_render_state[38], 4);
    }
    if (is_rhw) {
        b->vp_x = 0.0f;
        b->vp_y = 0.0f;
        b->vp_w = (g_cur_rt_tex_va && g_cur_rt_w > 1u) ? (float)g_cur_rt_w : ((g_dev_w > 1.0f) ? g_dev_w : 640.0f);
        b->vp_h = (g_cur_rt_tex_va && g_cur_rt_h > 1u) ? (float)g_cur_rt_h : ((g_dev_h > 1.0f) ? g_dev_h : 480.0f);
    } else {
        b->vp_x = g_vp_x;
        b->vp_y = g_vp_y;
        b->vp_w = g_vp_w;
        b->vp_h = g_vp_h;
    }
}

/* ================================================================
 * DirectInput8 Keyboard State & Event Queue
 * ================================================================ */

typedef struct {
    uint32_t dwOfs;
    uint32_t dwData;
    uint32_t dwTimeStamp;
    uint32_t dwSequence;
} Mc2DIObjectData;

static volatile uint8_t g_dik_state[256];
static Mc2DIObjectData g_di_events[64];
static volatile uint32_t g_di_ev_head = 0;
static volatile uint32_t g_di_ev_tail = 0;
static uint32_t g_di_seq = 1;

void mc2_pc_set_key_state(int dik_code, int pressed) {
    if (dik_code <= 0 || dik_code >= 256) return;
    static uint32_t s_input_count = 0;
    if ((++s_input_count & 0x1FFu) == 1u) {
        PORTDBG("[INPUT] tabla DIK actualizada · eventos=%u", s_input_count);
    }
    uint8_t new_val = pressed ? 0x80u : 0x00u;
    mc2_render_lock();
    uint8_t old_val = g_dik_state[dik_code];
    g_dik_state[dik_code] = new_val;
    if (dik_code == 0x1C) {
        g_dik_state[0x9C] = new_val; /* DIK_NUMPADENTER */
    } else if (dik_code == 0x9C) {
        g_dik_state[0x1C] = new_val; /* DIK_RETURN */
    }
    if (old_val != new_val) {
        uint32_t next_head = (g_di_ev_head + 1u) & 63u;
        if (next_head != g_di_ev_tail) {
            g_di_events[g_di_ev_head].dwOfs = (uint32_t)dik_code;
            g_di_events[g_di_ev_head].dwData = new_val;
            g_di_events[g_di_ev_head].dwTimeStamp = g_frame_count * 16u;
            g_di_events[g_di_ev_head].dwSequence = g_di_seq++;
            g_di_ev_head = next_head;
        }
    }
    mc2_render_unlock();
}

void mc2_pc_push_char(int dik_code) {
    /* Envia tanto pulsacion (0x80) como liberacion (0x00) al buffer GetDeviceData (texto UI),
       evitando que DIK_B (0x30 = POPUP_BACK_KEY) cierre el menu de trucos y asegurando
       que la tecla no quede atascada. */
    if (dik_code <= 0 || dik_code >= 256) return;
    mc2_render_lock();
    uint32_t next1 = (g_di_ev_head + 1u) & 63u;
    uint32_t next2 = (next1 + 1u) & 63u;
    if (next1 != g_di_ev_tail && next2 != g_di_ev_tail) {
        g_di_events[g_di_ev_head].dwOfs = (uint32_t)dik_code;
        g_di_events[g_di_ev_head].dwData = 0x80u;
        g_di_events[g_di_ev_head].dwTimeStamp = g_frame_count * 16u;
        g_di_events[g_di_ev_head].dwSequence = g_di_seq++;
        g_di_ev_head = next1;

        g_di_events[next1].dwOfs = (uint32_t)dik_code;
        g_di_events[next1].dwData = 0x00u;
        g_di_events[next1].dwTimeStamp = g_frame_count * 16u + 1u;
        g_di_events[next1].dwSequence = g_di_seq++;
        g_di_ev_head = next2;
    }
    mc2_render_unlock();
    static int s_buf_logs = 0;
    if (s_buf_logs < 32) {
        s_buf_logs++;
        PC_LOGI("[DINPUT8] buffered text key press+release dik=0x%02X", dik_code);
    }
}

typedef struct {
    uint32_t msg;
    uint32_t wparam;
    uint32_t lparam;
    uint32_t x;
    uint32_t y;
} Mc2Win32Msg;

static Mc2Win32Msg g_win32_msgs[64];
static volatile uint32_t g_win32_msg_head = 0;
static volatile uint32_t g_win32_msg_tail = 0;
static volatile int32_t g_mouse_dx = 0;
static volatile int32_t g_mouse_dy = 0;
static volatile uint8_t g_mouse_left = 0;

int mc2_pc_get_dev_w(void) {
    return (g_dev_w > 1.0f) ? (int)g_dev_w : 1280;
}

int mc2_pc_get_dev_h(void) {
    return (g_dev_h > 1.0f) ? (int)g_dev_h : 720;
}

void mc2_pc_set_mouse_state(int x, int y, int dx, int dy, int left_down, int msg_type) {
    int max_x = mc2_pc_get_dev_w() - 1;
    int max_y = mc2_pc_get_dev_h() - 1;
    if (x < 0) x = 0;
    if (x > max_x) x = max_x;
    if (y < 0) y = 0;
    if (y > max_y) y = max_y;
    mc2_render_lock();
    g_mouse_dx += dx;
    g_mouse_dy += dy;
    g_mouse_left = left_down ? 1u : 0u;
    if (msg_type >= 1 && msg_type <= 3) {
        static const uint32_t k_wm[4] = { 0u, 0x0201u, 0x0200u, 0x0202u }; /* DOWN, MOVE, UP */
        uint32_t next_head = (g_win32_msg_head + 1u) & 63u;
        /* Coalesce consecutive WM_MOUSEMOVE events if queue has pending moves */
        if (msg_type == 2 && g_win32_msg_head != g_win32_msg_tail) {
            uint32_t prev = (g_win32_msg_head + 63u) & 63u;
            if (g_win32_msgs[prev].msg == 0x0200u) {
                g_win32_msgs[prev].wparam = left_down ? 1u : 0u;
                g_win32_msgs[prev].lparam = (((uint32_t)y & 0xFFFFu) << 16) | ((uint32_t)x & 0xFFFFu);
                g_win32_msgs[prev].x = (uint32_t)x;
                g_win32_msgs[prev].y = (uint32_t)y;
                next_head = g_win32_msg_head; /* updated in place */
            }
        }
        if (next_head != g_win32_msg_head && next_head != g_win32_msg_tail) {
            g_win32_msgs[g_win32_msg_head].msg = k_wm[msg_type];
            g_win32_msgs[g_win32_msg_head].wparam = left_down ? 1u : 0u;
            g_win32_msgs[g_win32_msg_head].lparam = (((uint32_t)y & 0xFFFFu) << 16) | ((uint32_t)x & 0xFFFFu);
            g_win32_msgs[g_win32_msg_head].x = (uint32_t)x;
            g_win32_msgs[g_win32_msg_head].y = (uint32_t)y;
            g_win32_msg_head = next_head;
        }
    }
    mc2_render_unlock();
}

/* Nombres de la vtable IDirect3DDevice9 (orden COM, despues de IUnknown).
   Se usan para que el depurador informe QUE metodo se esta ignorando. */
static const char *d3ddev9_method_name(uint32_t idx) {
    switch (idx) {
    case 3:  return "TestCooperativeLevel";
    case 4:  return "GetAvailableTextureMem";
    case 5:  return "EvictManagedResources";
    case 10: return "SetCursorProperties";
    case 11: return "SetCursorPosition";
    case 12: return "ShowCursor";
    case 16: return "Reset";
    case 19: return "GetRasterStatus";
    case 20: return "SetDialogBoxMode";
    case 21: return "SetGammaRamp";
    case 22: return "GetGammaRamp";
    case 30: return "UpdateSurface";
    case 31: return "UpdateTexture";
    case 32: return "GetRenderTargetData";
    case 33: return "GetFrontBufferData";
    case 34: return "StretchRect";
    case 35: return "ColorFill";
    case 39: return "SetDepthStencilSurface";
    case 40: return "GetDepthStencilSurface";
    case 41: return "BeginScene";
    case 42: return "EndScene";
    case 44: return "SetTransform";
    case 45: return "GetTransform";
    case 46: return "MultiplyTransform";
    case 47: return "SetViewport";
    case 48: return "GetViewport";
    case 49: return "SetMaterial";
    case 50: return "GetMaterial";
    case 51: return "SetLight";
    case 52: return "GetLight";
    case 53: return "LightEnable";
    case 54: return "GetLightEnable";
    case 55: return "SetClipPlane";
    case 56: return "GetClipPlane";
    case 62: return "SetClipStatus";
    case 63: return "GetClipStatus";
    case 68: return "GetSamplerState";
    case 69: return "SetSamplerState";
    case 70: return "ValidateDevice";
    case 71: return "SetPaletteEntries";
    case 72: return "GetPaletteEntries";
    case 73: return "SetCurrentTexturePalette";
    case 74: return "GetCurrentTexturePalette";
    case 75: return "SetScissorRect";
    case 76: return "GetScissorRect";
    case 77: return "SetSoftwareVertexProcessing";
    case 78: return "GetSoftwareVertexProcessing";
    case 79: return "SetNPatchMode";
    case 80: return "GetNPatchMode";
    case 81: return "DrawPrimitive";
    case 82: return "DrawIndexedPrimitive";
    case 83: return "DrawPrimitiveUP";
    case 84: return "DrawIndexedPrimitiveUP";
    case 85: return "ProcessVertices";
    case 86: return "CreateVertexDeclaration";
    case 87: return "SetVertexDeclaration";
    case 88: return "GetVertexDeclaration";
    case 89: return "SetFVF";
    case 90: return "GetFVF";
    case 91: return "CreateVertexShader";
    case 92: return "SetVertexShader";
    case 93: return "GetVertexShader";
    case 94: return "SetVertexShaderConstantF";
    case 95: return "GetVertexShaderConstantF";
    case 96: return "SetVertexShaderConstantI";
    case 97: return "SetVertexShaderConstantB";
    case 98: return "SetStreamSource";
    case 99: return "GetStreamSource";
    case 100: return "SetStreamSourceFreq";
    case 103: return "CreateIndexBuffer";
    case 104: return "SetIndices";
    case 105: return "GetIndices";
    case 106: return "CreatePixelShader";
    case 107: return "SetPixelShader";
    case 111: return "SetPixelShaderConstantF";
    case 115: return "GetPixelShaderConstantF";
    case 117: return "GetRenderTarget";
    default: return NULL;
    }
}

static void dispatch_d3ddev9_method(uint32_t idx) {
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t a5 = guest_read32(g_esp + 24);
    uint32_t a6 = guest_read32(g_esp + 28);
    uint32_t a7 = guest_read32(g_esp + 32);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1: /* AddRef */
    case 2: /* Release */
        ret_val = 1;
        break;
    case 3: /* TestCooperativeLevel */
        ret_val = 0;
        break;
    case 4: /* GetAvailableTextureMem */
        ret_val = 256u * 1024u * 1024u;
        break;
    case 6: /* GetDirect3D */
        if (a1) guest_write32(a1, g_obj_d3d9);
        break;
    case 7: /* GetDeviceCaps */
        fill_d3dcaps9(a1);
        break;
    case 8: /* GetDisplayMode */
        if (a2) {
            guest_write32(a2 + 0, (uint32_t)((g_vp_w > 1.0f) ? g_vp_w : 640.0f));
            guest_write32(a2 + 4, (uint32_t)((g_vp_h > 1.0f) ? g_vp_h : 480.0f));
            guest_write32(a2 + 8, 60);
            guest_write32(a2 + 12, 22);
        }
        break;
    case 16: /* Reset(this, pPresentationParameters) */
        if (g_cur_rt) {
            com_release(g_cur_rt);
            g_cur_rt = 0;
            g_cur_rt_tex_va = 0;
            g_cur_rt_w = 0;
            g_cur_rt_h = 0;
            g_cur_rt_cube_face = 0;
        }
        for (uint32_t s = 0; s < 8u; s++) {
            if (g_bound_tex[s]) {
                com_release(g_bound_tex[s]);
                g_bound_tex[s] = 0;
            }
        }
        if (a1) {
            uint32_t rw = guest_read32(a1 + 0);
            uint32_t rh = guest_read32(a1 + 4);
            if (rw > 0 && rh > 0) {
                g_dev_w = (float)rw;
                g_dev_h = (float)rh;
                g_vp_w = (float)rw;
                g_vp_h = (float)rh;
                if (g_obj_d3ddev9) { guest_write32(g_obj_d3ddev9 + 0x14, rw); guest_write32(g_obj_d3ddev9 + 0x18, rh); }
                if (g_obj_backbuffer) { guest_write32(g_obj_backbuffer + 0x14, rw); guest_write32(g_obj_backbuffer + 0x18, rh); }
                if (g_obj_depthstencil) { guest_write32(g_obj_depthstencil + 0x14, rw); guest_write32(g_obj_depthstencil + 0x18, rh); }
            }
            PC_LOGI("[D3D9] Reset(pPP) -> %ux%u", (uint32_t)g_dev_w, (uint32_t)g_dev_h);
        }
        ret_val = 0; /* D3D_OK */
        break;
    case 17: /* Present */
        g_frame_count++;
        init_render_buffers_if_needed();
        mc2_frame_swap_lock();
        g_render_frames[g_write_frame_idx].frame_id = g_frame_count;
        g_render_frames[g_write_frame_idx].dev_w = (uint16_t)mc2_pc_get_dev_w();
        g_render_frames[g_write_frame_idx].dev_h = (uint16_t)mc2_pc_get_dev_h();
        if (g_fdump_req == 2) {
            fdbg_write_frame(&g_render_frames[g_write_frame_idx]);
            g_fdump_req = 0;
        } else if (g_fdump_req == 1) {
            g_fdump_req = 2;
        }
        {
            int tmp = g_write_frame_idx;
            g_write_frame_idx = g_read_frame_idx;
            g_read_frame_idx = tmp;
        }
        g_render_frames[g_write_frame_idx].vert_count = 0;
        g_render_frames[g_write_frame_idx].idx_count = 0;
        g_render_frames[g_write_frame_idx].batch_count = 0;
        flush_deferred_com_frees();
        mc2_frame_swap_unlock();
        mc2_streams_pump();
        if (g_frame_count == 1 || (g_frame_count % 60) == 0) {
            PC_LOGI("[D3D9] Present() frame #%u (draw_calls=%u, batches=%u, verts=%u)",
                    g_frame_count, g_draw_calls,
                    g_render_frames[g_read_frame_idx].batch_count,
                    g_render_frames[g_read_frame_idx].vert_count);
        }
        /* Drift-free 60.0 FPS frame rate pacing (16.666 ms / frame) */
        {
            static struct timespec s_next_tp = {0, 0};
            struct timespec now_tp;
            clock_gettime(CLOCK_MONOTONIC, &now_tp);
            const int64_t target_ns = 16666667LL; /* 60.0 FPS */
            if (s_next_tp.tv_sec == 0 && s_next_tp.tv_nsec == 0) {
                s_next_tp = now_tp;
            }
            s_next_tp.tv_nsec += (long)target_ns;
            if (s_next_tp.tv_nsec >= 1000000000L) {
                s_next_tp.tv_sec += 1;
                s_next_tp.tv_nsec -= 1000000000L;
            }
            int64_t rem_ns = (int64_t)(s_next_tp.tv_sec - now_tp.tv_sec) * 1000000000LL +
                             (int64_t)(s_next_tp.tv_nsec - now_tp.tv_nsec);
            if (rem_ns > 0 && rem_ns <= target_ns) {
#if !defined(_WIN32) && defined(TIMER_ABSTIME)
                clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &s_next_tp, NULL);
#else
                struct timespec req;
                req.tv_sec = 0;
                req.tv_nsec = (long)rem_ns;
                nanosleep(&req, NULL);
#endif
            } else if (rem_ns < -target_ns * 2) {
                s_next_tp = now_tp;
            }
        }
        break;
    case 18: /* GetBackBuffer(this, iSwapChain, iBackBuffer, Type, ppBackBuffer) */
        if (a4) guest_write32(a4, g_obj_backbuffer);
        break;
    case 23: /* CreateTexture(this, Width, Height, Levels, Usage, Format, Pool, ppTexture, pSharedHandle) */
        if (a7) {
            uint32_t w = a1 ? a1 : 4;
            uint32_t h = a2 ? a2 : 4;
            uint32_t bytes = w * h * 4u;
            if (bytes < 64) bytes = 64;
            uint32_t tex_va = create_com_resource(g_vtbl_d3dtex9, 3, bytes, w, h, a5);
            guest_write32(a7, tex_va);
        }
        break;
    case 25: /* CreateCubeTexture(this, EdgeLength, Levels, Usage, Format, Pool, ppCubeTexture, pSharedHandle) */
        if (a6) {
            uint32_t edge = a1 ? a1 : 64;
            uint32_t bytes = edge * edge * 4u;
            if (bytes < 64) bytes = 64;
            uint32_t tex_va = create_com_resource(g_vtbl_d3dcubetex9, 3, bytes, edge, edge, a4);
            guest_write32(a6, tex_va);
        }
        break;
    case 26: /* CreateVertexBuffer(this, Length, Usage, FVF, Pool, ppVertexBuffer, pSharedHandle) */
        if (a5) {
            uint32_t vb_va = create_com_resource(g_vtbl_d3dvb9, 1, a1 ? a1 : 256, a1, 1, a3);
            guest_write32(a5, vb_va);
        }
        break;
    case 27: /* CreateIndexBuffer(this, Length, Usage, Format, Pool, ppIndexBuffer, pSharedHandle) */
        if (a5) {
            uint32_t ib_va = create_com_resource(g_vtbl_d3dib9, 2, a1 ? a1 : 256, a1, 1, a3);
            guest_write32(a5, ib_va);
        }
        break;
    case 28: /* CreateRenderTarget(this, Width, Height, Format, MultiSample, MultisampleQuality, Lockable, ppSurface, pSharedHandle) */
        if (a7) {
            uint32_t w = a1 ? a1 : 640;
            uint32_t h = a2 ? a2 : 480;
            uint32_t surf_va = create_com_resource(g_vtbl_d3dsurf9, 4, w * h * 4u, w, h, a3);
            guest_write32(a7, surf_va);
        }
        break;
    case 29: /* CreateDepthStencilSurface */
        if (a7) {
            uint32_t w = a1 ? a1 : 640;
            uint32_t h = a2 ? a2 : 480;
            uint32_t surf_va = create_com_resource(g_vtbl_d3dsurf9, 4, w * h * 4u, w, h, a3);
            guest_write32(a7, surf_va);
        }
        break;
    case 30: /* UpdateSurface(this, pSourceSurface, pSourceRect, pDestinationSurface, pDestPoint) */
        if (a1 && a3) {
            if (a3 == g_obj_backbuffer) {
                record_surface_blit_rect(a1, a2, a4, 0);
                g_draw_calls++;
            } else {
                copy_surface_pixels(a1, a2, a3, a4, 0);
            }
        }
        break;
    case 31: /* UpdateTexture(this, pSourceTexture, pDestinationTexture) */
        if (a1 && a2) {
            uint32_t src_data = guest_read32(a1 + 0x0C);
            uint32_t dst_data = guest_read32(a2 + 0x0C);
            uint32_t src_size = guest_read32(a1 + 0x10);
            uint32_t dst_size = guest_read32(a2 + 0x10);
            if (src_data && dst_data && src_size > 0 && dst_size > 0) {
                uint32_t cp_sz = src_size < dst_size ? src_size : dst_size;
                memcpy(guest_ptr(dst_data), guest_ptr(src_data), cp_sz);
                guest_write32(a2 + 0x24, guest_read32(a2 + 0x24) + 1u);
                uint32_t cached_surf = guest_read32(a2 + 0x30);
                if (cached_surf) guest_write32(cached_surf + 0x24, guest_read32(cached_surf + 0x24) + 1u);
            }
        }
        break;
    case 34: /* StretchRect(this, pSourceSurface, pSourceRect, pDestSurface, pDestRect, Filter) */
        if (a1 && a3) {
            if (a3 == g_obj_backbuffer) {
                record_surface_blit_rect(a1, a2, a4, 1);
                g_draw_calls++;
            } else {
                copy_surface_pixels(a1, a2, a3, a4, 1);
            }
        }
        break;
    case 36: /* CreateOffscreenPlainSurface(this, Width, Height, Format, Pool, ppSurface, pSharedHandle) */
        if (a5) {
            uint32_t w = a1 ? a1 : 640;
            uint32_t h = a2 ? a2 : 480;
            uint32_t surf_va = create_com_resource(g_vtbl_d3dsurf9, 4, w * h * 4u, w, h, a3);
            guest_write32(a5, surf_va);
        }
        break;
    case 38: /* GetRenderTarget(this, RenderTargetIndex, ppRenderTarget) */
        if (a2) {
            uint32_t out_rt = (a1 == 0 && g_cur_rt) ? g_cur_rt : g_obj_backbuffer;
            if (out_rt && out_rt != g_obj_backbuffer) com_addref(out_rt);
            guest_write32(a2, out_rt);
        }
        break;
    case 40: /* GetDepthStencilSurface(this, ppZStencilSurface) */
        if (a1) guest_write32(a1, g_obj_depthstencil);
        break;
    case 43: /* Clear(this, Count, pRects, Flags, Color, Z, Stencil) */
        if (a1 > 0u && a2 != 0u && a2 < GUEST_MEM_SIZE) {
            uint32_t dev_w = (g_cur_rt_tex_va && g_cur_rt_w > 1u) ? g_cur_rt_w : ((g_dev_w > 1.0f) ? (uint32_t)g_dev_w : 640u);
            uint32_t dev_h = (g_cur_rt_tex_va && g_cur_rt_h > 1u) ? g_cur_rt_h : ((g_dev_h > 1.0f) ? (uint32_t)g_dev_h : 480u);
            uint32_t cnt = (a1 > 8u) ? 8u : a1;
            for (uint32_t ri = 0; ri < cnt; ri++) {
                int32_t rx1 = (int32_t)guest_read32(a2 + ri * 16u + 0u);
                int32_t ry1 = (int32_t)guest_read32(a2 + ri * 16u + 4u);
                int32_t rx2 = (int32_t)guest_read32(a2 + ri * 16u + 8u);
                int32_t ry2 = (int32_t)guest_read32(a2 + ri * 16u + 12u);
                if (rx2 > rx1 && ry2 > ry1) {
                    int is_partial = !(rx1 <= 0 && ry1 <= 0 && rx2 >= (int32_t)dev_w && ry2 >= (int32_t)dev_h);
                    uint32_t prev_clear = g_render_frames[g_write_frame_idx].clear_color;
                    record_clear_batch(a3, a4);
                    Mc2RenderFrame *cf = &g_render_frames[g_write_frame_idx];
                    if (is_partial && cf->batch_count > 0) {
                        cf->clear_color = prev_clear;
                        Mc2DrawBatch *cb = &cf->batches[cf->batch_count - 1u];
                        cb->has_scissor = 1;
                        cb->scissor_x = (int16_t)rx1;
                        cb->scissor_y = (int16_t)ry1;
                        cb->scissor_w = (uint16_t)(rx2 - rx1);
                        cb->scissor_h = (uint16_t)(ry2 - ry1);
                    }
                }
            }
        } else {
            record_clear_batch(a3, a4);
        }
        break;
    case 44: /* SetTransform(this, State, pMatrix) */
        if (a2) {
            if (a1 == 2u) {
                memcpy(g_mat_view, guest_ptr(a2), 64);
            } else if (a1 == 3u) {
                memcpy(g_mat_proj, guest_ptr(a2), 64);
            } else if (a1 == 256u || a1 == 0u) {
                memcpy(g_mat_world, guest_ptr(a2), 64);
            } else if (a1 >= 16u && a1 < 24u) {
                memcpy(g_mat_tex[a1 - 16u], guest_ptr(a2), 64);
            }
            g_vs_has_c4_wvp = 0;
        }
        break;
    case 45: /* GetTransform(this, State, pMatrix) */
        if (a2) {
            if (a1 == 2u) memcpy(guest_ptr(a2), g_mat_view, 64);
            else if (a1 == 3u) memcpy(guest_ptr(a2), g_mat_proj, 64);
            else if (a1 >= 16u && a1 < 24u) memcpy(guest_ptr(a2), g_mat_tex[a1 - 16u], 64);
            else memcpy(guest_ptr(a2), g_mat_world, 64);
        }
        break;
    case 46: /* MultiplyTransform(this, State, pMatrix) */
        if (a2) {
            float m[16], tmp[16];
            memcpy(m, guest_ptr(a2), 64);
            if (a1 == 2u) {
                mat4_mul_d3d(tmp, g_mat_view, m);
                memcpy(g_mat_view, tmp, 64);
            } else if (a1 == 3u) {
                mat4_mul_d3d(tmp, g_mat_proj, m);
                memcpy(g_mat_proj, tmp, 64);
            } else if (a1 >= 16u && a1 < 24u) {
                mat4_mul_d3d(tmp, g_mat_tex[a1 - 16u], m);
                memcpy(g_mat_tex[a1 - 16u], tmp, 64);
            } else if (a1 == 256u || a1 == 0u) {
                mat4_mul_d3d(tmp, g_mat_world, m);
                memcpy(g_mat_world, tmp, 64);
            }
            g_vs_has_c4_wvp = 0;
        }
        break;
    case 47: /* SetViewport(this, pViewport) */
        if (a1) {
            g_vp_x = (float)(int32_t)guest_read32(a1 + 0);
            g_vp_y = (float)(int32_t)guest_read32(a1 + 4);
            g_vp_w = (float)guest_read32(a1 + 8);
            g_vp_h = (float)guest_read32(a1 + 12);
        }
        break;
    case 48: /* GetViewport(this, pViewport) */
        if (a1) {
            guest_write32(a1 + 0, (uint32_t)(int32_t)g_vp_x);
            guest_write32(a1 + 4, (uint32_t)(int32_t)g_vp_y);
            guest_write32(a1 + 8, (uint32_t)g_vp_w);
            guest_write32(a1 + 12, (uint32_t)g_vp_h);
            guest_write32(a1 + 16, 0);
            guest_write32(a1 + 20, 0x3F800000u); /* 1.0f */
        }
        break;
    case 57: /* SetRenderState(this, State, Value) */
        if (a1 < 256u) {
            if (g_sb_recording) {
                g_sb_rec.rs[a1] = a2;
                g_sb_rec.rs_mask[a1 >> 5] |= (1u << (a1 & 31));
            } else {
                g_render_state[a1] = a2;
            }
        }
        break;
    case 58: /* GetRenderState(this, State, pValue) */
        if (a2 && a1 < 256u) {
            guest_write32(a2, g_render_state[a1]);
        }
        break;
    case 59: /* CreateStateBlock(this, Type, ppSB) */
    case 60: /* BeginStateBlock(this) */
    case 61: /* EndStateBlock(this, ppSB) */
        if (idx == 59 && a2) {
            uint32_t sb = create_com_resource(g_vtbl_d3dstateblock9, 5, sizeof(Mc2StateBlockData), 0, 0, 0);
            Mc2StateBlockData *sbd = (Mc2StateBlockData *)guest_ptr(guest_read32(sb + 0x0C));
            sb_init_by_type(sbd, a1);
            guest_write32(a2, sb);
        } else if (idx == 60) {
            memset(&g_sb_rec, 0, sizeof(g_sb_rec));
            g_sb_recording = 1;
        } else if (idx == 61 && a1) {
            uint32_t sb = create_com_resource(g_vtbl_d3dstateblock9, 5, sizeof(Mc2StateBlockData), 0, 0, 0);
            Mc2StateBlockData *sbd = (Mc2StateBlockData *)guest_ptr(guest_read32(sb + 0x0C));
            if (g_sb_recording) {
                memcpy(sbd, &g_sb_rec, sizeof(Mc2StateBlockData));
                g_sb_recording = 0;
            } else {
                memset(sbd, 0, sizeof(Mc2StateBlockData));
            }
            guest_write32(a1, sb);
        }
        break;
    case 64: /* GetTexture(this, Stage, ppTexture) */
        if (a2) {
            uint32_t out_tex = (a1 < 8u) ? g_bound_tex[a1] : 0u;
            if (out_tex) com_addref(out_tex);
            guest_write32(a2, out_tex);
        }
        break;
    case 65: /* SetTexture(this, Stage, pTexture) */
        if (a1 < 8u && a2 != g_bound_tex[a1]) {
            if (a2) com_addref(a2);
            if (g_bound_tex[a1]) com_release(g_bound_tex[a1]);
            g_bound_tex[a1] = a2;
        }
        break;
    case 71: /* SetPaletteEntries(this, PaletteNumber, pEntries) */
        if (a1 < 2048u && a2) {
            memcpy(g_d3d_palettes[a1], guest_ptr(a2), 1024);
            g_d3d_pal_ver[a1]++;
        }
        break;
    case 72: /* GetPaletteEntries(this, PaletteNumber, pEntries) */
        if (a1 < 2048u && a2) {
            memcpy(guest_ptr(a2), g_d3d_palettes[a1], 1024);
        }
        break;
    case 73: /* SetCurrentTexturePalette(this, PaletteNumber) */
        if (a1 < 2048u) {
            g_cur_tex_palette = a1;
        }
        break;
    case 74: /* GetCurrentTexturePalette(this, pPaletteNumber) */
        if (a1) {
            guest_write32(a1, g_cur_tex_palette);
        }
        break;
    case 81: /* DrawPrimitive(this, PrimitiveType, StartVertex, PrimitiveCount) */
        g_draw_calls++;
        if (g_stream_vb[0]) {
            uint32_t vb0_data = guest_read32(g_stream_vb[0] + 0x0C) + g_stream_offset[0];
            uint32_t vb1_data = g_stream_vb[1] ? (guest_read32(g_stream_vb[1] + 0x0C) + g_stream_offset[1]) : 0u;
            record_draw_call(a1, a3,
                             vb0_data ? guest_ptr(vb0_data) : NULL, g_stream_stride[0],
                             vb1_data ? guest_ptr(vb1_data) : NULL, g_stream_stride[1],
                             NULL, 0, 0, a2);
        }
        break;
    case 82: /* DrawIndexedPrimitive(this, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount) */
        g_draw_calls++;
        if (g_stream_vb[0] && g_cur_ib) {
            uint32_t vb0_data = guest_read32(g_stream_vb[0] + 0x0C) + g_stream_offset[0];
            uint32_t vb1_data = g_stream_vb[1] ? (guest_read32(g_stream_vb[1] + 0x0C) + g_stream_offset[1]) : 0u;
            uint32_t ib_data = guest_read32(g_cur_ib + 0x0C);
            uint32_t ib_fmt = guest_read32(g_cur_ib + 0x1C);
            record_draw_call(a1, a6,
                             vb0_data ? guest_ptr(vb0_data) : NULL, g_stream_stride[0],
                             vb1_data ? guest_ptr(vb1_data) : NULL, g_stream_stride[1],
                             ib_data ? guest_ptr(ib_data) : NULL, (ib_fmt == 102u) ? 1 : 0,
                             (int32_t)a2, a5);
        }
        break;
    case 83: /* DrawPrimitiveUP(this, PrimitiveType, PrimitiveCount, pVertexStreamZeroData, VertexStreamZeroStride) */
        g_draw_calls++;
        if (a3 && a4) {
            record_draw_call(a1, a2, guest_ptr(a3), a4, NULL, 0, NULL, 0, 0, 0);
        }
        break;
    case 84: /* DrawIndexedPrimitiveUP(this, PrimitiveType, MinVertexIndex, NumVertices, PrimitiveCount, pIndexData, IndexDataFormat, pVertexStreamZeroData, VertexStreamZeroStride) */
        g_draw_calls++;
        {
            uint32_t a8 = guest_read32(g_esp + 36);
            if (a5 && a7 && a8) {
                record_draw_call(a1, a4, guest_ptr(a7), a8, NULL, 0,
                                 guest_ptr(a5), (a6 == 102u) ? 1 : 0, 0, 0);
            }
        }
        break;
    case 86: /* CreateVertexDeclaration(this, pVertexElements, ppDecl) */
        if (a2) guest_write32(a2, create_com_resource(g_vtbl_d3dshader, 5, 64, 0, 0, 0));
        break;
    case 87: /* SetVertexDeclaration(this, pDecl) */
        g_cur_vdecl = a1;
        if (a1 != 0) g_use_vdecl = 1;
        break;
    case 89: /* SetFVF(this, FVF) */
        g_cur_fvf = a1;
        if (a1 != 0) g_use_vdecl = 0;
        break;
    case 90: /* GetFVF(this, pFVF) */
        if (a1) guest_write32(a1, g_cur_fvf);
        break;
    case 91: /* CreateVertexShader(this, pFunction, ppShader) */
        if (a2) guest_write32(a2, create_com_resource(g_vtbl_d3dshader, 5, 64, 0, 0, 0));
        break;
    case 92: /* SetVertexShader(this, pShader) */
        g_cur_vshader = a1;
        break;
    case 94: /* SetVertexShaderConstantF(this, StartRegister, pConstantData, Vector4fCount) */
        if (a2 && a3 > 0 && a1 < 96u) {
            uint32_t count = a3;
            if (a1 + count > 96u) count = 96u - a1;
            memcpy(g_vs_const[a1], guest_ptr(a2), count * 16u);
            if (a1 <= 4u && a1 + count >= 8u) {
                g_vs_has_c4_wvp = 1;
            }
        }
        break;
    case 95: /* GetVertexShaderConstantF(this, StartRegister, pConstantData, Vector4fCount) */
        if (a2 && a3 > 0 && a1 < 96u) {
            uint32_t count = a3;
            if (a1 + count > 96u) count = 96u - a1;
            memcpy(guest_ptr(a2), g_vs_const[a1], count * 16u);
        }
        break;
    case 100: /* SetStreamSource(this, StreamNumber, pStreamData, OffsetInBytes, Stride) */
        if (a1 < 4u) {
            g_stream_vb[a1] = a2;
            g_stream_offset[a1] = a3;
            g_stream_stride[a1] = a4;
        }
        break;
    case 104: /* SetIndices(this, pIndexData) */
        g_cur_ib = a1;
        break;
    case 106: /* CreatePixelShader(this, pFunction, ppShader) */
        if (a2) guest_write32(a2, create_com_resource(g_vtbl_d3dshader, 5, 64, 0, 0, 0));
        break;
    case 37: /* SetRenderTarget(this, RenderTargetIndex, pRenderTarget) */
        if (a1 == 0) {
            uint32_t rt = (a2 == 0 || a2 == g_obj_backbuffer) ? 0u : a2;
            uint32_t parent = 0u;
            uint32_t rt_w = 0u, rt_h = 0u;
            if (rt) {
                parent = guest_read32(rt + 0x2C);
                if (parent) {
                    guest_write32(parent + 0x34, 1u); /* Mark parent texture as render target (without clobbering +0x20 slot!) */
                    rt_w = guest_read32(parent + 0x14);
                    rt_h = guest_read32(parent + 0x18);
                } else {
                    guest_write32(rt + 0x34, 1u);
                    parent = rt;
                    rt_w = guest_read32(rt + 0x14);
                    rt_h = guest_read32(rt + 0x18);
                }
            }
            if (rt != g_cur_rt) {
                static int s_rt_logs = 0;
                if (s_rt_logs < 40) {
                    s_rt_logs++;
                    PC_LOGI("[D3D9] SetRenderTarget(0x%08X) %ux%u fmt=%u parent=0x%08X",
                            a2, a2 ? guest_read32(a2 + 0x14) : 0, a2 ? guest_read32(a2 + 0x18) : 0,
                            a2 ? guest_read32(a2 + 0x1C) : 0, a2 ? guest_read32(a2 + 0x2C) : 0);
                }
                if (rt) com_addref(rt);
                if (g_cur_rt) com_release(g_cur_rt);
            }
            g_cur_rt = rt;
            g_cur_rt_tex_va = parent;
            g_cur_rt_w = rt_w;
            g_cur_rt_h = rt_h;
            g_cur_rt_cube_face = rt ? (uint8_t)(guest_read32(rt + 0x3C) & 0xFFu) : 0u;
        }
        break;
    case 67: /* SetTextureStageState(this, Stage, Type, Value) */
        if (a1 < 8u && a2 < 33u) {
            if (g_sb_recording) {
                g_sb_rec.tss[a1][a2] = a3;
                g_sb_rec.tss_mask[a1][a2 >> 5] |= (1u << (a2 & 31));
            } else {
                g_tss[a1][a2] = a3;
            }
        }
        break;
    case 66: /* GetTextureStageState(this, Stage, Type, pValue) */
        if (a3 && a1 < 8u && a2 < 33u) guest_write32(a3, g_tss[a1][a2]);
        break;
    case 69: /* SetSamplerState(this, Sampler, Type, Value) */
        if (a1 < 8u && a2 < 16u) {
            if (g_sb_recording) {
                g_sb_rec.samp[a1][a2] = a3;
                g_sb_rec.samp_mask[a1] |= (1u << a2);
            } else {
                g_samp[a1][a2] = a3;
            }
        }
        break;
    case 68: /* GetSamplerState(this, Sampler, Type, pValue) */
        if (a3 && a1 < 8u && a2 < 16u) guest_write32(a3, g_samp[a1][a2]);
        break;
    default: {
        static uint8_t s_unhandled_seen[119];
        const char *name = d3ddev9_method_name(idx);
        int known = (name != NULL);
        if (idx < 119u && !s_unhandled_seen[idx]) {
            s_unhandled_seen[idx] = 1;
            PC_LOGI("[D3D9] %s (#%u) -> %s (a1=0x%X a2=0x%X a3=0x%X)",
                    known ? name : "metodo desconocido", idx,
                    known ? "no-op D3D_OK" : "SIN IMPLEMENTAR", a1, a2, a3);
            mc2_diag_record(known ? DIAG_GFX : DIAG_UNHANDLED,
                            "IDirect3DDevice9::%s (#%u) -> %s",
                            known ? name : "metodo desconocido", idx,
                            known ? "no-op deliberado D3D_OK" : "SIN IMPLEMENTAR");
        }
        /* D3D_OK: estos metodos son de gestion de estado que el traductor
           GLES resuelve por otra via, o consultas inocuas. Devolver error
           aqui haria que el juego abandonase el frame. */
        ret_val = 0;
        break;
    }
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3ddev9_nargs[idx] * 4u;
}

static void dispatch_d3dtex9_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1: /* AddRef */
        ret_val = com_addref(self);
        break;
    case 2: /* Release */
        ret_val = com_release(self);
        break;
    case 13: /* GetLevelCount */
        ret_val = 1;
        break;
    case 17: /* GetLevelDesc(this, Level, pDesc) */
        if (a2 && self) {
            uint32_t w = guest_read32(self + 0x14) >> a1;
            uint32_t h = guest_read32(self + 0x18) >> a1;
            if (!w) w = 1;
            if (!h) h = 1;
            memset(guest_ptr(a2), 0, 32);
            guest_write32(a2 + 0, guest_read32(self + 0x1C)); /* Format */
            guest_write32(a2 + 4, 1); /* Type */
            guest_write32(a2 + 24, w); /* Width */
            guest_write32(a2 + 28, h); /* Height */
        }
        break;
    case 18: /* GetSurfaceLevel(this, Level, ppSurfaceLevel) */
        if (a2 && self) {
            uint32_t surf_va = (a1 == 0) ? guest_read32(self + 0x30) : 0u;
            if (surf_va) {
                com_addref(surf_va);
            } else {
                uint32_t w = guest_read32(self + 0x14) >> a1;
                uint32_t h = guest_read32(self + 0x18) >> a1;
                if (!w) w = 1;
                if (!h) h = 1;
                uint32_t fmt = guest_read32(self + 0x1C);
                surf_va = create_com_resource(g_vtbl_d3dsurf9, 4, 0, w, h, fmt);
                guest_write32(surf_va + 0x0C, guest_read32(self + 0x0C)); /* share data_va */
                guest_write32(surf_va + 0x10, guest_read32(self + 0x10)); /* share byte_size */
                guest_write32(surf_va + 0x20, guest_read32(self + 0x20)); /* copy slot/usage */
                guest_write32(surf_va + 0x2C, self); /* parent texture */
                guest_write32(surf_va + 0x34, guest_read32(self + 0x34)); /* copy is_rt flag */
                guest_write32(surf_va + 0x38, 1); /* shared ownership with parent */
                com_addref(self);
                if (a1 == 0) guest_write32(self + 0x30, surf_va);
            }
            guest_write32(a2, surf_va);
        }
        break;
    case 19: /* LockRect(this, Level, pLockedRect, pRect, Flags) */
        if (a2 && self) {
            uint32_t w = guest_read32(self + 0x14) >> a1;
            if (!w) w = 1;
            uint32_t fmt = guest_read32(self + 0x1C);
            uint32_t pitch = calc_d3d_pitch(fmt, w);
            uint32_t bits_va = 0;
            if (a1 == 0) {
                bits_va = guest_read32(self + 0x0C);
                guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
            } else {
                if (!g_mip_scratch_va) {
                    g_mip_scratch_va = pc_guest_alloc(4u * 1024u * 1024u, 1);
                }
                bits_va = g_mip_scratch_va;
            }
            guest_write32(a2 + 0, pitch);   /* Pitch */
            guest_write32(a2 + 4, bits_va); /* pBits */
        }
        break;
    case 20: /* UnlockRect(this, Level) */
        if (self && a1 == 0) {
            guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
        }
        break;
    default:
        break;
    }
    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3dtex9_nargs[idx] * 4u;
}

static void dispatch_d3dcubetex9_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1: /* AddRef */
        ret_val = com_addref(self);
        break;
    case 2: /* Release */
        ret_val = com_release(self);
        break;
    case 13: /* GetLevelCount */
        ret_val = 1;
        break;
    case 17: /* GetLevelDesc(this, Level, pDesc) */
        if (a2 && self) {
            uint32_t edge = guest_read32(self + 0x14) >> a1;
            if (!edge) edge = 1;
            memset(guest_ptr(a2), 0, 32);
            guest_write32(a2 + 0, guest_read32(self + 0x1C)); /* Format */
            guest_write32(a2 + 4, 1); /* Type */
            guest_write32(a2 + 24, edge); /* Width */
            guest_write32(a2 + 28, edge); /* Height */
        }
        break;
    case 18: /* GetCubeMapSurface(this, FaceType, Level, ppCubeMapSurface) */
        if (a3 && self) {
            uint32_t edge = guest_read32(self + 0x14);
            uint32_t fmt = guest_read32(self + 0x1C);
            uint32_t surf_va = create_com_resource(g_vtbl_d3dsurf9, 4, 0, edge, edge, fmt);
            guest_write32(surf_va + 0x0C, guest_read32(self + 0x0C));
            guest_write32(surf_va + 0x10, guest_read32(self + 0x10));
            guest_write32(surf_va + 0x20, guest_read32(self + 0x20));
            guest_write32(surf_va + 0x2C, self);
            guest_write32(surf_va + 0x38, 1);
            guest_write32(surf_va + 0x3C, (a1 < 6u) ? (a1 + 1u) : 1u);
            com_addref(self);
            guest_write32(a3, surf_va);
        }
        break;
    case 19: /* LockRect(this, FaceType, Level, pLockedRect, pRect, Flags) */
        if (a3 && self) {
            uint32_t edge = guest_read32(self + 0x14) >> a2;
            if (!edge) edge = 1;
            uint32_t fmt = guest_read32(self + 0x1C);
            uint32_t pitch = calc_d3d_pitch(fmt, edge);
            guest_write32(a3 + 0, pitch);
            guest_write32(a3 + 4, guest_read32(self + 0x0C));
            guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
        }
        break;
    case 20: /* UnlockRect(this, FaceType, Level) */
        if (self) {
            guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
        }
        break;
    default:
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3dcubetex9_nargs[idx] * 4u;
}

static void dispatch_d3dsurf9_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1: /* AddRef */
        ret_val = com_addref(self);
        break;
    case 2: /* Release */
        ret_val = com_release(self);
        break;
    case 12: /* GetDesc(this, pDesc) */
        if (a1 && self) {
            memset(guest_ptr(a1), 0, 32);
            guest_write32(a1 + 0, guest_read32(self + 0x1C));
            guest_write32(a1 + 4, 1);
            guest_write32(a1 + 24, guest_read32(self + 0x14));
            guest_write32(a1 + 28, guest_read32(self + 0x18));
        }
        break;
    case 13: /* LockRect(this, pLockedRect, pRect, Flags) */
        if (a1 && self) {
            uint32_t w = guest_read32(self + 0x14);
            uint32_t fmt = guest_read32(self + 0x1C);
            uint32_t pitch = calc_d3d_pitch(fmt, w ? w : 640);
            uint32_t data_va = guest_read32(self + 0x0C);
            guest_write32(a1 + 0, pitch);
            guest_write32(a1 + 4, data_va);
            guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
            uint32_t parent_tex = guest_read32(self + 0x2C);
            if (parent_tex) {
                guest_write32(parent_tex + 0x24, guest_read32(parent_tex + 0x24) + 1u);
            }
        }
        break;
    case 14: /* UnlockRect(this) */
        if (self) {
            guest_write32(self + 0x24, guest_read32(self + 0x24) + 1u);
            uint32_t parent_tex = guest_read32(self + 0x2C);
            if (parent_tex) {
                guest_write32(parent_tex + 0x24, guest_read32(parent_tex + 0x24) + 1u);
            }
            if (self == g_obj_backbuffer) {
                record_surface_blit_rect(g_obj_backbuffer, 0, 0, 1);
                g_draw_calls++;
            }
        }
        break;
    default:
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3dsurf9_nargs[idx] * 4u;
}

static void dispatch_d3dbuf9_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1: /* AddRef */
        ret_val = com_addref(self);
        break;
    case 2: /* Release */
        ret_val = com_release(self);
        break;
    case 11: /* Lock(this, OffsetToLock, SizeToLock, ppbData, Flags) */
        if (a3 && self) {
            uint32_t data_va = guest_read32(self + 0x0C);
            guest_write32(a3, data_va + a1);
        }
        break;
    case 13: /* GetDesc(this, pDesc) */
        if (a1 && self) {
            memset(guest_ptr(a1), 0, 20);
            guest_write32(a1 + 0, guest_read32(self + 0x1C)); /* Format */
            guest_write32(a1 + 12, guest_read32(self + 0x10));/* Size */
        }
        break;
    default:
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_d3dbuf9_nargs[idx] * 4u;
}

static void dispatch_d3dshader_method(uint32_t idx) {
    g_eax = (idx == 1 || idx == 2) ? 1 : 0;
    g_esp += 4 + (uint32_t)k_d3dshader_nargs[idx] * 4u;
}

static void dispatch_d3dstateblock9_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t data_va = self ? guest_read32(self + 0x0C) : 0;
    if (idx == 4 && data_va) { /* Capture */
        sb_capture_masked((Mc2StateBlockData *)guest_ptr(data_va));
    } else if (idx == 5 && data_va) { /* Apply */
        sb_apply_masked((const Mc2StateBlockData *)guest_ptr(data_va));
    }
    g_eax = (idx == 1 || idx == 2) ? 1 : 0;
    g_esp += 4 + (uint32_t)k_d3dstateblock9_nargs[idx] * 4u;
}

static void dispatch_dinput8_method(uint32_t idx) {
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1:
    case 2:
        ret_val = 1;
        break;
    case 3: /* CreateDevice(this, rguid, lplpDirectInputDevice, pUnkOuter) */
        if (a2) {
            uint32_t dev_type = 1; /* 1=Keyboard, 2=Mouse */
            if (a1) {
                uint32_t g0 = guest_read32(a1);
                if (g0 == 0x6F1D2B60u) dev_type = 2; /* GUID_SysMouse */
            }
            uint32_t dev_va = create_com_resource(g_vtbl_didev8, 6, 0, dev_type, 0, 0);
            guest_write32(a2, dev_va);
            PC_LOGI("[DINPUT8] CreateDevice(guid=0x%08X, type=%s) -> 0x%08X",
                    a1 ? guest_read32(a1) : 0, dev_type == 1 ? "Keyboard" : "Mouse", dev_va);
        }
        break;
    case 4: /* EnumDevices(this, dwDevType, lpCallback, pvRef, dwFlags) */
        ret_val = 0;
        break;
    default:
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_dinput8_nargs[idx] * 4u;
}

static void dispatch_didev8_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t ret_val = 0;

    switch (idx) {
    case 1:
    case 2:
        ret_val = 1;
        break;
    case 3: /* GetCapabilities(this, lpDIDevCaps) */
        if (a1) {
            uint32_t sz = guest_read32(a1);
            if (sz >= 44) {
                memset(guest_ptr(a1 + 4), 0, sz - 4);
                guest_write32(a1 + 4, 1); /* DIDC_ATTACHED */
            }
        }
        break;
    case 9: /* GetDeviceState(this, cbData, lpvData) */
        if (a2 && a1 > 0 && a1 <= 1024) {
            memset(guest_ptr(a2), 0, a1);
            uint32_t dev_type = self ? guest_read32(self + 0x14) : 1u;
            if (a1 >= 256u && dev_type != 2u) {
                mc2_render_lock();
                memcpy(guest_ptr(a2), (const void *)g_dik_state, 256);
                mc2_render_unlock();
            } else if (dev_type == 2u && a1 >= 16u) {
                mc2_render_lock();
                int32_t mdx = g_mouse_dx;
                int32_t mdy = g_mouse_dy;
                uint8_t ml = g_mouse_left;
                g_mouse_dx = 0;
                g_mouse_dy = 0;
                mc2_render_unlock();
                guest_write32(a2 + 0, (uint32_t)mdx);
                guest_write32(a2 + 4, (uint32_t)mdy);
                guest_write32(a2 + 8, 0u);
                *guest_ptr(a2 + 12) = ml ? 0x80u : 0x00u;
            }
        }
        break;
    case 10: /* GetDeviceData(this, cbObjectData, rgdod, pdwInOut, dwFlags) */
        if (a3) {
            uint32_t max_out = guest_read32(a3);
            uint32_t written = 0;
            uint32_t dev_type = self ? guest_read32(self + 0x14) : 1u;
            if (dev_type != 2u && a1 >= 16u) {
                mc2_render_lock();
                uint32_t tail = g_di_ev_tail;
                while (tail != g_di_ev_head && written < max_out) {
                    if (a2) {
                        uint32_t dst = a2 + written * a1;
                        guest_write32(dst + 0, g_di_events[tail].dwOfs);
                        guest_write32(dst + 4, g_di_events[tail].dwData);
                        guest_write32(dst + 8, g_di_events[tail].dwTimeStamp);
                        guest_write32(dst + 12, g_di_events[tail].dwSequence);
                    }
                    tail = (tail + 1u) & 63u;
                    written++;
                }
                if (!(a4 & 1u)) { /* DIGDD_PEEK = 1 */
                    g_di_ev_tail = tail;
                }
                mc2_render_unlock();
            }
            guest_write32(a3, written);
        }
        break;
    default:
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)k_didev8_nargs[idx] * 4u;
}

/* ================================================================
 * DirectMusic8 Synthetic COM Emulation
 * ================================================================ */

static void dispatch_dmloader8_method(uint32_t idx) {
    static const uint8_t k_nargs[16] = {
        3, /* 0: QueryInterface */
        1, /* 1: AddRef */
        1, /* 2: Release */
        3, /* 3: GetObject */
        2, /* 4: SetObject */
        4, /* 5: SetSearchDirectory */
        4, /* 6: ScanDirectory */
        2, /* 7: CacheObject */
        2, /* 8: ReleaseObject */
        2, /* 9: ClearCache */
        3, /* 10: EnableCache */
        4, /* 11: EnumObject */
        1, /* 12: CollectGarbage */
        2, /* 13: ReleaseObjectByUnknown */
        5, /* 14: LoadObjectFromFile */
        1  /* 15: fallback */
    };
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t ret_val = 0;

    if (idx == 0) {
        if (a2) guest_write32(a2, self);
    } else if (idx == 1 || idx == 2) {
        ret_val = 1;
    } else if (idx == 14) { /* LoadObjectFromFile(this, rguidClassID, iidInterfaceID, pwzFilePath, ppv) */
        if (a4) guest_write32(a4, g_obj_dmseg8);
    }

    g_eax = ret_val;
    g_esp += 4 + (uint32_t)(idx < 16 ? k_nargs[idx] : 1u) * 4u;
}

static void dispatch_dmperf8_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t a7 = guest_read32(g_esp + 32);
    uint32_t nargs = 1;
    uint32_t ret_val = 0;

    switch (idx) {
    case 0: /* QueryInterface */
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2: /* AddRef / Release */
        nargs = 1;
        ret_val = 1;
        break;
    case 5: /* Stop(this, pSegment, pSegmentState, mtTime, dwFlags) */
        nargs = 5;
        break;
    case 14: /* IsPlaying(this, pSegment, pSegState) */
        nargs = 3;
        ret_val = 0; /* S_OK = playing */
        break;
    case 15: /* GetTime(this, prtNow, pmtNow) */
        nargs = 3;
        if (a2) guest_write32(a2, 0);
        break;
    case 34: /* SetGlobalParam(this, rguidType, pData, dwSize) */
        nargs = 4;
        break;
    case 38: /* CloseDown(this) */
        nargs = 1;
        break;
    case 44: /* InitAudio(this, ppDirectMusic, ppDirectSound, hWnd, dwDefaultPathType, dwPChannelCount, dwFlags, pParams) */
        nargs = 8;
        PC_LOGI("[DMUSIC8] IDirectMusicPerformance8::InitAudio -> S_OK");
        break;
    case 45: /* PlaySegmentEx(this, pSource, pzWaveTrack, pTransition, dwFlags, i64Start_lo, i64Start_hi, ppSegmentState, pFrom, pAudioPath) */
        nargs = 10;
        if (a7) guest_write32(a7, g_obj_dmstate8);
        break;
    case 46: /* StopEx(this, pObjectToStop, i64Stop_lo, i64Stop_hi, dwFlags) */
        nargs = 5;
        break;
    case 49: /* CreateStandardAudioPath(this, dwType, dwPChannelCount, fActivate, ppPath) */
        nargs = 5;
        if (a4) guest_write32(a4, g_obj_dmpath8);
        break;
    default:
        nargs = 1;
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void dispatch_dmseg8_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t nargs = 1;
    uint32_t ret_val = 0;

    switch (idx) {
    case 0:
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2:
        nargs = 1;
        ret_val = 1;
        break;
    case 3: /* GetLength(this, pmtLength) */
        nargs = 2;
        if (a1) guest_write32(a1, 1000); /* Non-zero length to prevent div-by-zero in sub_005DC160 */
        break;
    case 21: /* SetStartPoint(this, mtStart) */
    case 29: /* Download(this, pAudioPath) */
    case 30: /* Unload(this, pAudioPath) */
        nargs = 2;
        break;
    default:
        nargs = 1;
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void dispatch_dmpath8_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t nargs = 1;
    uint32_t ret_val = 0;

    switch (idx) {
    case 0:
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2:
        nargs = 1;
        ret_val = 1;
        break;
    case 5: /* SetVolume(this, lVolume, dwDuration) */
        nargs = 3;
        break;
    default:
        nargs = 1;
        break;
    }

    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void dispatch_dmstate8_method(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t nargs = 1;
    uint32_t ret_val = 0;

    if (idx == 0) {
        nargs = 3;
        if (a2) guest_write32(a2, self);
    } else if (idx == 1 || idx == 2) {
        nargs = 1;
        ret_val = 1;
    }

    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

/* ================================================================
 * Win32 / DLL Import Dispatcher (202 PE Imports)
 * ================================================================ */

static uint64_t get_host_ticks_ms(void) {
#if defined(_WIN32)
    return (uint64_t)GetTickCount64();
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000ull + (uint64_t)(ts.tv_nsec / 1000000ull);
#endif
}

static uint64_t get_host_qpc_us(void) {
#if defined(_WIN32)
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (uint64_t)li.QuadPart;
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)(ts.tv_nsec / 1000ull);
#endif
}

static uint64_t get_host_qpf(void) {
#if defined(_WIN32)
    LARGE_INTEGER li;
    QueryPerformanceFrequency(&li);
    return (uint64_t)li.QuadPart;
#else
    return 1000000ull;
#endif
}

/* ================================================================
 * Miles Sound System (MSS32) Audio Engine & Mixer
 * ================================================================ */
#define MAX_AUDIO_VOICES 256
#define SMP_FREE    1
#define SMP_DONE    2
#define SMP_PLAYING 4
#define SMP_STOPPED 8

typedef struct {
    int in_use;
    uint32_t handle;
    const uint8_t *raw_data;
    uint32_t raw_len;
    const int16_t *pcm16;
    const uint8_t *pcm8;
    uint32_t pcm_frames;
    uint32_t sample_rate;
    int channels;
    int bits;
    float vol_l;
    float vol_r;
    int loop_count;
    uint32_t loop_start;
    uint32_t loop_end;
    uint32_t cursor_frames;
    double cursor_pos;
    int status;
} Mc2AudioVoice;

static Mc2AudioVoice g_voices[MAX_AUDIO_VOICES];
static uint32_t g_next_sample_h = 0x5001u;
static uint32_t g_next_stream_h = 0x6001u;

#if defined(_WIN32)
static CRITICAL_SECTION g_audio_cs;
static int g_audio_cs_init = 0;
static void audio_lock(void) { if (!g_audio_cs_init) { InitializeCriticalSection(&g_audio_cs); g_audio_cs_init = 1; } EnterCriticalSection(&g_audio_cs); }
static void audio_unlock(void) { LeaveCriticalSection(&g_audio_cs); }
#else
static pthread_mutex_t g_audio_mutex = PTHREAD_MUTEX_INITIALIZER;
static void audio_lock(void) { pthread_mutex_lock(&g_audio_mutex); }
static void audio_unlock(void) { pthread_mutex_unlock(&g_audio_mutex); }
#endif

static Mc2AudioVoice *find_voice(uint32_t h) {
    if (!h) return NULL;
    for (int i = 0; i < MAX_AUDIO_VOICES; i++) {
        if (g_voices[i].in_use && g_voices[i].handle == h) return &g_voices[i];
    }
    return NULL;
}

static Mc2AudioVoice *alloc_voice(uint32_t *out_h) {
    audio_lock();
    int slot = -1;
    for (int i = 0; i < MAX_AUDIO_VOICES; i++) {
        if (!g_voices[i].in_use) { slot = i; break; }
    }
    if (slot < 0) {
        for (int i = 0; i < MAX_AUDIO_VOICES; i++) {
            if (g_voices[i].status == SMP_DONE) { slot = i; break; }
        }
    }
    if (slot >= 0) {
        memset(&g_voices[slot], 0, sizeof(Mc2AudioVoice));
        g_voices[slot].in_use = 1;
        g_voices[slot].handle = g_next_sample_h++;
        g_voices[slot].sample_rate = 44100;
        g_voices[slot].channels = 2;
        g_voices[slot].bits = 16;
        g_voices[slot].vol_l = 1.0f;
        g_voices[slot].vol_r = 1.0f;
        g_voices[slot].loop_count = 1;
        g_voices[slot].loop_start = 0;
        g_voices[slot].loop_end = 0;
        g_voices[slot].status = SMP_STOPPED;
        if (out_h) *out_h = g_voices[slot].handle;
        audio_unlock();
        return &g_voices[slot];
    }
    audio_unlock();
    return NULL;
}

static void parse_riff_wave(Mc2AudioVoice *voc, const uint8_t *data, uint32_t len) {
    voc->raw_data = data;
    voc->raw_len = len;
    voc->pcm16 = NULL;
    voc->pcm8 = NULL;
    voc->pcm_frames = 0;
    voc->sample_rate = 22050;
    voc->channels = 1;
    voc->bits = 16;

    if (!data || len < 44) return;
    if (memcmp(data, "RIFF", 4) == 0 && memcmp(data + 8, "WAVE", 4) == 0) {
        uint32_t off = 12;
        while (off + 8 <= len) {
            char chunk_id[5] = {0};
            memcpy(chunk_id, data + off, 4);
            uint32_t chunk_size = 0;
            memcpy(&chunk_size, data + off + 4, 4);
            off += 8;
            if (memcmp(chunk_id, "fmt ", 4) == 0 && off + 16 <= len) {
                uint16_t chans = 1, bits = 16;
                uint32_t srate = 22050;
                memcpy(&chans, data + off + 2, 2);
                memcpy(&srate, data + off + 4, 4);
                memcpy(&bits, data + off + 14, 2);
                voc->channels = (int)chans;
                voc->sample_rate = srate;
                voc->bits = (int)bits;
            } else if (memcmp(chunk_id, "data", 4) == 0) {
                if (voc->bits == 16) {
                    voc->pcm16 = (const int16_t *)(data + off);
                    voc->pcm_frames = chunk_size / (uint32_t)(voc->channels * 2);
                } else if (voc->bits == 8) {
                    voc->pcm8 = data + off;
                    voc->pcm_frames = chunk_size / (uint32_t)voc->channels;
                }
                break;
            }
            off += (chunk_size + 1u) & ~1u;
        }
    } else {
        voc->pcm16 = (const int16_t *)data;
        voc->pcm_frames = len / 2u;
        voc->channels = 1;
        voc->bits = 16;
    }
}

static int g_bink_out_rate = 44100;

#if defined(MC2_HAS_FFMPEG_BINK)
#define MC2_MAX_BINK_SLOTS 8
#define MC2_BINK_RING_FRAMES (48000u * 4u)

typedef struct {
    int in_use;
    uint32_t hbink_va;
    uint32_t width;
    uint32_t height;
    uint32_t frames;
    uint32_t frame_num;
    int64_t frame_interval_us;
    int64_t next_frame_us;
    float volume;
    int audio_rate;
    int has_frame;
    int eof_reached;
    FILE *fp;
    AVFormatContext *fmt_ctx;
    AVIOContext *avio_ctx;
    AVCodecContext *v_dec;
    AVCodecContext *a_dec;
    int v_stream;
    int a_stream;
    AVFrame *v_frame;
    AVFrame *a_frame;
    AVPacket *pkt;
    struct SwsContext *sws;
    uint8_t *conv_buf;
    size_t conv_buf_size;
    SwrContext *swr;
    int16_t *ring;
    uint32_t ring_r;
    uint32_t ring_w;
    uint32_t ring_avail;
} Mc2BinkSlot;

static Mc2BinkSlot g_bink_slots[MC2_MAX_BINK_SLOTS];
static uint32_t g_bink_hbink_pool[MC2_MAX_BINK_SLOTS];

static int64_t mc2_bink_now_us(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (int64_t)ts.tv_sec * 1000000LL + (int64_t)(ts.tv_nsec / 1000L);
}

static int bink_avio_read(void *opaque, uint8_t *buf, int buf_size) {
    FILE *fp = (FILE *)opaque;
    if (!fp || buf_size <= 0) return AVERROR_EOF;
    size_t n = fread(buf, 1, (size_t)buf_size, fp);
    return (n > 0) ? (int)n : AVERROR_EOF;
}

static int64_t bink_avio_seek(void *opaque, int64_t offset, int whence) {
    FILE *fp = (FILE *)opaque;
    if (!fp) return -1;
    if (whence == AVSEEK_SIZE) {
        off_t cur = ftello(fp);
        if (fseeko(fp, 0, SEEK_END) != 0) return -1;
        off_t sz = ftello(fp);
        fseeko(fp, cur, SEEK_SET);
        return (int64_t)sz;
    }
    int w = (whence == SEEK_CUR) ? SEEK_CUR : ((whence == SEEK_END) ? SEEK_END : SEEK_SET);
    if (fseeko(fp, (off_t)offset, w) != 0) return -1;
    return (int64_t)ftello(fp);
}

static Mc2BinkSlot *bink_find_slot(uint32_t hbink_va) {
    if (!hbink_va) return NULL;
    for (int i = 0; i < MC2_MAX_BINK_SLOTS; i++) {
        if (g_bink_slots[i].in_use && g_bink_slots[i].hbink_va == hbink_va) {
            return &g_bink_slots[i];
        }
    }
    return NULL;
}

static void bink_close_slot(Mc2BinkSlot *p) {
    if (!p) return;
    audio_lock();
    int16_t *ring_to_free = p->ring;
    p->ring = NULL;
    p->ring_r = p->ring_w = p->ring_avail = 0;
    p->in_use = 0;
    audio_unlock();
    free(ring_to_free);
    free(p->conv_buf);
    p->conv_buf = NULL;
    p->conv_buf_size = 0;
    if (p->sws) { sws_freeContext(p->sws); p->sws = NULL; }
    if (p->swr) { swr_free(&p->swr); }
    if (p->pkt) { av_packet_free(&p->pkt); }
    if (p->a_frame) { av_frame_free(&p->a_frame); }
    if (p->v_frame) { av_frame_free(&p->v_frame); }
    if (p->a_dec) { avcodec_free_context(&p->a_dec); }
    if (p->v_dec) { avcodec_free_context(&p->v_dec); }
    if (p->fmt_ctx) { avformat_close_input(&p->fmt_ctx); }
    if (p->avio_ctx) {
        av_freep(&p->avio_ctx->buffer);
        avio_context_free(&p->avio_ctx);
    }
    if (p->fp) { fclose(p->fp); p->fp = NULL; }
    p->hbink_va = 0;
}

static void bink_push_audio_frame(Mc2BinkSlot *p) {
    if (!p->swr || !p->a_dec || !p->ring || p->a_frame->nb_samples <= 0) return;
    int out_samples = (int)av_rescale_rnd(
        swr_get_delay(p->swr, p->a_dec->sample_rate) + p->a_frame->nb_samples,
        p->audio_rate, p->a_dec->sample_rate, AV_ROUND_UP);
    if (out_samples <= 0) return;
    int16_t stack_pcm[4096 * 2];
    int16_t *dst = (out_samples <= 4096) ? stack_pcm : (int16_t *)malloc((size_t)out_samples * 4u);
    if (!dst) return;
    uint8_t *out_planes[1] = { (uint8_t *)dst };
    int conv = swr_convert(p->swr, out_planes, out_samples,
                           (const uint8_t **)p->a_frame->extended_data, p->a_frame->nb_samples);
    if (conv > 0) {
        audio_lock();
        if (p->ring) {
            for (int i = 0; i < conv; i++) {
                if (p->ring_avail >= MC2_BINK_RING_FRAMES) {
                    p->ring_r = (p->ring_r + 1u) % MC2_BINK_RING_FRAMES;
                    p->ring_avail--;
                }
                uint32_t wi = p->ring_w * 2u;
                p->ring[wi + 0] = dst[i * 2 + 0];
                p->ring[wi + 1] = dst[i * 2 + 1];
                p->ring_w = (p->ring_w + 1u) % MC2_BINK_RING_FRAMES;
                p->ring_avail++;
            }
        }
        audio_unlock();
    }
    if (dst != stack_pcm) free(dst);
}

static int bink_decode_next_video_frame(Mc2BinkSlot *p) {
    if (!p || !p->in_use || !p->v_dec || p->eof_reached) return 0;
    if (avcodec_receive_frame(p->v_dec, p->v_frame) == 0) {
        p->has_frame = 1;
        return 1;
    }
    while (av_read_frame(p->fmt_ctx, p->pkt) >= 0) {
        if (p->pkt->stream_index == p->a_stream && p->a_dec) {
            if (avcodec_send_packet(p->a_dec, p->pkt) >= 0) {
                while (avcodec_receive_frame(p->a_dec, p->a_frame) == 0) {
                    bink_push_audio_frame(p);
                }
            }
            av_packet_unref(p->pkt);
        } else if (p->pkt->stream_index == p->v_stream) {
            int sret = avcodec_send_packet(p->v_dec, p->pkt);
            av_packet_unref(p->pkt);
            if (sret >= 0 && avcodec_receive_frame(p->v_dec, p->v_frame) == 0) {
                p->has_frame = 1;
                return 1;
            }
        } else {
            av_packet_unref(p->pkt);
        }
    }
    avcodec_send_packet(p->v_dec, NULL);
    if (avcodec_receive_frame(p->v_dec, p->v_frame) == 0) {
        p->has_frame = 1;
        return 1;
    }
    p->eof_reached = 1;
    if (p->hbink_va) {
        p->frames = p->frame_num;
        guest_write32(p->hbink_va + 0x08, p->frames);
    }
    return 0;
}

static uint32_t bink_open_guest(const char *bname, uint32_t flags) {
    if (!bname || !*bname) return 0;
    int free_idx = -1;
    for (int i = 0; i < MC2_MAX_BINK_SLOTS; i++) {
        if (!g_bink_slots[i].in_use) { free_idx = i; break; }
    }
    if (free_idx < 0) {
        bink_close_slot(&g_bink_slots[0]);
        free_idx = 0;
    }

    char host_path[1024];
    translate_guest_path(bname, host_path, sizeof(host_path));
    FILE *fp = open_registered_data(host_path, "rb");
    if (!fp) {
        char alt[1024];
        strncpy(alt, host_path, sizeof(alt) - 1);
        alt[sizeof(alt) - 1] = '\0';
        lowercase_relative_portion(alt);
        fp = open_registered_data(alt, "rb");
    }
    if (!fp) {
        fp = fopen(host_path, "rb");
    }
    if (!fp) {
        PC_LOGW("[BINK] BinkOpen(\"%s\") -> NO ENCONTRADO en SAF", bname);
        mc2_diag_record(DIAG_ERROR, "Bink: archivo no encontrado: %s", bname);
        return 0;
    }

    Mc2BinkSlot *p = &g_bink_slots[free_idx];
    memset(p, 0, sizeof(*p));
    p->fp = fp;
    p->v_stream = -1;
    p->a_stream = -1;
    p->volume = 1.0f;
    p->audio_rate = (g_bink_out_rate > 0) ? g_bink_out_rate : 44100;

    uint8_t *avio_buf = (uint8_t *)av_malloc(32768);
    if (!avio_buf) { bink_close_slot(p); return 0; }
    p->avio_ctx = avio_alloc_context(avio_buf, 32768, 0, fp, bink_avio_read, NULL, bink_avio_seek);
    if (!p->avio_ctx) { av_free(avio_buf); bink_close_slot(p); return 0; }

    p->fmt_ctx = avformat_alloc_context();
    if (!p->fmt_ctx) { bink_close_slot(p); return 0; }
    p->fmt_ctx->pb = p->avio_ctx;
    p->fmt_ctx->flags |= AVFMT_FLAG_CUSTOM_IO;

    const AVInputFormat *bink_ifmt = av_find_input_format("bink");
    if (avformat_open_input(&p->fmt_ctx, bname, bink_ifmt, NULL) < 0) {
        PC_LOGW("[BINK] BinkOpen(\"%s\") -> avformat_open_input fallo", bname);
        bink_close_slot(p);
        return 0;
    }
    if (avformat_find_stream_info(p->fmt_ctx, NULL) < 0) {
        PC_LOGW("[BINK] BinkOpen(\"%s\") -> avformat_find_stream_info fallo", bname);
        bink_close_slot(p);
        return 0;
    }

    for (unsigned i = 0; i < p->fmt_ctx->nb_streams; i++) {
        enum AVMediaType mt = p->fmt_ctx->streams[i]->codecpar->codec_type;
        if (mt == AVMEDIA_TYPE_VIDEO && p->v_stream < 0) p->v_stream = (int)i;
        else if (mt == AVMEDIA_TYPE_AUDIO && p->a_stream < 0) p->a_stream = (int)i;
    }
    if (p->v_stream < 0) {
        PC_LOGW("[BINK] BinkOpen(\"%s\") -> sin pista de video", bname);
        bink_close_slot(p);
        return 0;
    }

    AVStream *vs = p->fmt_ctx->streams[p->v_stream];
    const AVCodec *vc = avcodec_find_decoder(vs->codecpar->codec_id);
    if (!vc || !(p->v_dec = avcodec_alloc_context3(vc)) ||
        avcodec_parameters_to_context(p->v_dec, vs->codecpar) < 0 ||
        avcodec_open2(p->v_dec, vc, NULL) < 0) {
        PC_LOGW("[BINK] BinkOpen(\"%s\") -> fallo decodificador video", bname);
        bink_close_slot(p);
        return 0;
    }

    if (p->a_stream >= 0) {
        AVStream *as = p->fmt_ctx->streams[p->a_stream];
        const AVCodec *ac = avcodec_find_decoder(as->codecpar->codec_id);
        if (ac && (p->a_dec = avcodec_alloc_context3(ac)) != NULL &&
            avcodec_parameters_to_context(p->a_dec, as->codecpar) >= 0 &&
            avcodec_open2(p->a_dec, ac, NULL) >= 0) {
            AVChannelLayout out_layout = AV_CHANNEL_LAYOUT_STEREO;
            if (swr_alloc_set_opts2(&p->swr, &out_layout, AV_SAMPLE_FMT_S16, p->audio_rate,
                                    &p->a_dec->ch_layout, p->a_dec->sample_fmt, p->a_dec->sample_rate,
                                    0, NULL) >= 0 && swr_init(p->swr) >= 0) {
                int16_t *ring = (int16_t *)calloc(MC2_BINK_RING_FRAMES * 2u, sizeof(int16_t));
                audio_lock();
                p->ring = ring;
                p->ring_r = p->ring_w = p->ring_avail = 0;
                audio_unlock();
            } else {
                swr_free(&p->swr);
            }
        }
    }

    p->v_frame = av_frame_alloc();
    p->a_frame = av_frame_alloc();
    p->pkt = av_packet_alloc();
    if (!p->v_frame || !p->a_frame || !p->pkt) {
        bink_close_slot(p);
        return 0;
    }

    p->width = (uint32_t)(p->v_dec->width > 0 ? p->v_dec->width : vs->codecpar->width);
    p->height = (uint32_t)(p->v_dec->height > 0 ? p->v_dec->height : vs->codecpar->height);
    if (vs->duration > 0 && vs->duration != AV_NOPTS_VALUE) {
        p->frames = (uint32_t)vs->duration;
    } else if (vs->nb_frames > 0) {
        p->frames = (uint32_t)vs->nb_frames;
    } else {
        p->frames = 1;
    }
    p->frame_num = 1;

    AVRational fr = vs->r_frame_rate.num > 0 ? vs->r_frame_rate : vs->avg_frame_rate;
    int64_t interval = 33333LL;
    if (fr.num > 0 && fr.den > 0) {
        interval = (1000000LL * (int64_t)fr.den) / (int64_t)fr.num;
        if (interval < 10000LL) interval = 10000LL;
        if (interval > 100000LL) interval = 100000LL;
    }
    p->frame_interval_us = interval;
    p->next_frame_us = 0;

    if (!g_bink_hbink_pool[free_idx]) {
        g_bink_hbink_pool[free_idx] = pc_guest_alloc(0x120, 1);
    }
    uint32_t hbink = g_bink_hbink_pool[free_idx];
    memset(guest_ptr(hbink), 0, 0x120);
    guest_write32(hbink + 0x00, p->width);
    guest_write32(hbink + 0x04, p->height);
    guest_write32(hbink + 0x08, p->frames);
    guest_write32(hbink + 0x0C, p->frame_num);
    guest_write32(hbink + 0x10, 0);
    guest_write32(hbink + 0x14, (uint32_t)(fr.num > 0 ? fr.num : 30));
    guest_write32(hbink + 0x18, (uint32_t)(fr.den > 0 ? fr.den : 1));
    guest_write32(hbink + 0x20, flags);
    guest_write32(hbink + 0xF0, (p->a_stream >= 0) ? 1u : 0u);

    p->hbink_va = hbink;
    p->in_use = 1;

    PC_LOGI("[BINK] BinkOpen(\"%s\") -> %ux%u frames=%u audio=%s interval=%lldus hbink=0x%08X",
            bname, p->width, p->height, p->frames, p->ring ? "SI" : "NO",
            (long long)p->frame_interval_us, hbink);
    mc2_diag_record(DIAG_INFO, "Bink abierto: %s (%ux%u, %u frames, audio=%s)",
                    bname, p->width, p->height, p->frames, p->ring ? "SI" : "NO");
    return hbink;
}

static void mc2_bink_mix_audio(int16_t *out_buffer, int num_frames, int out_rate) {
    for (int s = 0; s < MC2_MAX_BINK_SLOTS; s++) {
        Mc2BinkSlot *p = &g_bink_slots[s];
        if (!p->in_use || !p->ring || p->ring_avail == 0) continue;
        double step = (out_rate > 0 && p->audio_rate > 0) ? ((double)p->audio_rate / (double)out_rate) : 1.0;
        double pos = 0.0;
        float vol = p->volume;
        for (int i = 0; i < num_frames; i++) {
            uint32_t off = (uint32_t)pos;
            if (off >= p->ring_avail) break;
            uint32_t idx = (p->ring_r + off) % MC2_BINK_RING_FRAMES;
            int32_t l = (int32_t)out_buffer[i * 2 + 0] + (int32_t)(p->ring[idx * 2u + 0] * vol);
            int32_t r = (int32_t)out_buffer[i * 2 + 1] + (int32_t)(p->ring[idx * 2u + 1] * vol);
            if (l > 32767) l = 32767; else if (l < -32768) l = -32768;
            if (r > 32767) r = 32767; else if (r < -32768) r = -32768;
            out_buffer[i * 2 + 0] = (int16_t)l;
            out_buffer[i * 2 + 1] = (int16_t)r;
            pos += step;
        }
        uint32_t consumed = (uint32_t)pos;
        if (consumed > p->ring_avail) consumed = p->ring_avail;
        p->ring_r = (p->ring_r + consumed) % MC2_BINK_RING_FRAMES;
        p->ring_avail -= consumed;
    }
}
#else
static void mc2_bink_mix_audio(int16_t *out_buffer, int num_frames, int out_rate) {
    (void)out_buffer; (void)num_frames; (void)out_rate;
}
#endif

static void mc2_bink_mix_audio(int16_t *out_buffer, int num_frames, int out_rate);

static void mc2_stream_mix_audio(int16_t *out_buffer, int num_frames, int out_rate);
static void mc2_streams_pump(void);

void mc2_audio_mix(int16_t *out_buffer, int num_frames, int out_rate) {
    if (!out_buffer || num_frames <= 0) return;
    if (out_rate > 0) g_bink_out_rate = out_rate;
    memset(out_buffer, 0, (size_t)num_frames * 2u * sizeof(int16_t));

    audio_lock();
    for (int v = 0; v < MAX_AUDIO_VOICES; v++) {
        Mc2AudioVoice *voc = &g_voices[v];
        if (!voc->in_use || voc->status != SMP_PLAYING || (!voc->pcm16 && !voc->pcm8) || voc->pcm_frames == 0) continue;

        double rate_ratio = (double)voc->sample_rate / (double)(out_rate > 0 ? out_rate : 44100);
        if (rate_ratio <= 0.0001) rate_ratio = 1.0;

        uint32_t l_start = voc->loop_start;
        uint32_t l_end = (voc->loop_end > l_start && voc->loop_end <= voc->pcm_frames) ? voc->loop_end : voc->pcm_frames;
        if (l_start >= l_end) {
            l_start = 0;
            l_end = voc->pcm_frames;
        }
        uint32_t l_len = (l_end > l_start) ? (l_end - l_start) : 1u;

        double pos = voc->cursor_pos;
        if (pos < 0.0) pos = 0.0;
        int infinite_loop = (voc->loop_count == 0 || voc->loop_count == -1);

        for (int i = 0; i < num_frames; i++) {
            if (pos >= (double)l_end) {
                if (infinite_loop) {
                    uint32_t wraps = (uint32_t)((pos - (double)l_start) / (double)l_len);
                    pos -= (double)wraps * (double)l_len;
                    while (pos >= (double)l_end) pos -= (double)l_len;
                } else if (voc->loop_count > 1) {
                    while (pos >= (double)l_end && voc->loop_count > 1) {
                        pos -= (double)l_len;
                        voc->loop_count--;
                    }
                    if (pos >= (double)l_end) {
                        voc->status = SMP_DONE;
                        pos = (double)l_end;
                        break;
                    }
                } else {
                    voc->status = SMP_DONE;
                    pos = (double)l_end;
                    break;
                }
            }

            uint32_t f0 = (uint32_t)pos;
            if (f0 >= voc->pcm_frames) f0 = voc->pcm_frames - 1u;
            double frac = pos - (double)f0;
            uint32_t f1 = f0 + 1u;
            if (f1 >= l_end) {
                if (infinite_loop || voc->loop_count > 1) {
                    f1 = l_start;
                } else {
                    f1 = (f1 < voc->pcm_frames) ? f1 : f0;
                }
            }

            float sl_f = 0.0f, sr_f = 0.0f;
            if (voc->pcm16) {
                if (voc->channels == 1) {
                    float s0 = (float)voc->pcm16[f0];
                    float s1 = (float)voc->pcm16[f1];
                    float s = s0 + (s1 - s0) * (float)frac;
                    sl_f = s * voc->vol_l;
                    sr_f = s * voc->vol_r;
                } else {
                    float l0 = (float)voc->pcm16[f0 * 2u];
                    float l1 = (float)voc->pcm16[f1 * 2u];
                    float r0 = (float)voc->pcm16[f0 * 2u + 1u];
                    float r1 = (float)voc->pcm16[f1 * 2u + 1u];
                    sl_f = (l0 + (l1 - l0) * (float)frac) * voc->vol_l;
                    sr_f = (r0 + (r1 - r0) * (float)frac) * voc->vol_r;
                }
            } else if (voc->pcm8) {
                if (voc->channels == 1) {
                    float s0 = (float)(((int)voc->pcm8[f0] - 128) * 256);
                    float s1 = (float)(((int)voc->pcm8[f1] - 128) * 256);
                    float s = s0 + (s1 - s0) * (float)frac;
                    sl_f = s * voc->vol_l;
                    sr_f = s * voc->vol_r;
                } else {
                    float l0 = (float)(((int)voc->pcm8[f0 * 2u] - 128) * 256);
                    float l1 = (float)(((int)voc->pcm8[f1 * 2u] - 128) * 256);
                    float r0 = (float)(((int)voc->pcm8[f0 * 2u + 1u] - 128) * 256);
                    float r1 = (float)(((int)voc->pcm8[f1 * 2u + 1u] - 128) * 256);
                    sl_f = (l0 + (l1 - l0) * (float)frac) * voc->vol_l;
                    sr_f = (r0 + (r1 - r0) * (float)frac) * voc->vol_r;
                }
            }

            int32_t mix_l = (int32_t)out_buffer[i * 2 + 0] + (int32_t)sl_f;
            int32_t mix_r = (int32_t)out_buffer[i * 2 + 1] + (int32_t)sr_f;
            if (mix_l > 32767) mix_l = 32767; else if (mix_l < -32768) mix_l = -32768;
            if (mix_r > 32767) mix_r = 32767; else if (mix_r < -32768) mix_r = -32768;
            out_buffer[i * 2 + 0] = (int16_t)mix_l;
            out_buffer[i * 2 + 1] = (int16_t)mix_r;

            pos += rate_ratio;
        }

        voc->cursor_pos = pos;
        voc->cursor_frames = (uint32_t)pos;
    }
    mc2_bink_mix_audio(out_buffer, num_frames, out_rate);
    mc2_stream_mix_audio(out_buffer, num_frames, out_rate);
    audio_unlock();
}

static uint32_t g_wndproc_va = 0;
static uint32_t g_hwnd_main = 0x00010010u;
static RECOMP_TLS uint32_t g_tls_kernel_va = 0;

__attribute__((weak)) void mc2_platform_play_music(const char *path, int loop) { (void)path; (void)loop; }
__attribute__((weak)) void mc2_platform_stop_music(void) {}
__attribute__((weak)) void mc2_platform_pause_music(void) {}
__attribute__((weak)) void mc2_platform_resume_music(void) {}
__attribute__((weak)) void mc2_platform_set_music_volume(float vol) { (void)vol; }

#define MAX_AUDIO_STREAMS 32
#define MC2_STREAM_RING_FRAMES 65536u
static uint32_t g_active_music_stream = 0;
typedef struct {
    int in_use;
    int is_music;
    int playing;
    int paused;
    int eof_reached;
    uint32_t handle;
    uint64_t start_ms;
    float vol;
    char path[512];
#if MC2_HAS_FFMPEG_BINK
    FILE *fp;
    uint32_t data_off;
    uint32_t data_len;
    uint32_t cur_pos;
    AVIOContext *avio;
    AVFormatContext *fmt;
    AVCodecContext *dec;
    SwrContext *swr;
    int a_idx;
    int dec_rate;
    AMediaExtractor *mex;
    AMediaCodec *mcodec;
    int m_in_eos;
    int m_rate;
    int m_ch;
    int16_t *ring;
    uint32_t ring_r, ring_w, ring_avail;
#endif
} Mc2StreamSlot;

static Mc2StreamSlot g_streams[MAX_AUDIO_STREAMS];

#if MC2_HAS_FFMPEG_BINK
static pthread_mutex_t g_stream_dec_mutex = PTHREAD_MUTEX_INITIALIZER;

static int stream_avio_read(void *opaque, uint8_t *buf, int buf_size) {
    Mc2StreamSlot *s = (Mc2StreamSlot *)opaque;
    if (!s || !s->fp || buf_size <= 0) return AVERROR_EOF;
    if (s->cur_pos >= s->data_len) return AVERROR_EOF;
    uint32_t rem = s->data_len - s->cur_pos;
    uint32_t want = ((uint32_t)buf_size < rem) ? (uint32_t)buf_size : rem;
    size_t n = fread(buf, 1, want, s->fp);
    s->cur_pos += (uint32_t)n;
    return (n > 0) ? (int)n : AVERROR_EOF;
}

static int64_t stream_avio_seek(void *opaque, int64_t offset, int whence) {
    Mc2StreamSlot *s = (Mc2StreamSlot *)opaque;
    if (!s || !s->fp) return -1;
    if (whence == AVSEEK_SIZE) return (int64_t)s->data_len;
    int64_t np = 0;
    if (whence == SEEK_SET) np = offset;
    else if (whence == SEEK_CUR) np = (int64_t)s->cur_pos + offset;
    else if (whence == SEEK_END) np = (int64_t)s->data_len + offset;
    else return -1;
    if (np < 0) np = 0;
    if (np > (int64_t)s->data_len) np = (int64_t)s->data_len;
    if (fseeko(s->fp, (off_t)(s->data_off + (uint32_t)np), SEEK_SET) != 0) return -1;
    s->cur_pos = (uint32_t)np;
    return np;
}

static int stream_update_resampler(Mc2StreamSlot *s, int src_ch, int src_rate) {
    if (!s || src_ch <= 0 || src_rate <= 0) return 0;
    AVChannelLayout out_layout = AV_CHANNEL_LAYOUT_STEREO;
    AVChannelLayout in_layout;
    av_channel_layout_default(&in_layout, src_ch);
    SwrContext *swr = NULL;
    int rc = swr_alloc_set_opts2(&swr, &out_layout, AV_SAMPLE_FMT_S16, s->dec_rate,
                                 &in_layout, AV_SAMPLE_FMT_S16, src_rate, 0, NULL);
    av_channel_layout_uninit(&in_layout);
    if (rc < 0 || !swr || swr_init(swr) < 0) {
        if (swr) swr_free(&swr);
        return 0;
    }
    if (s->swr) swr_free(&s->swr);
    s->swr = swr;
    s->m_ch = src_ch;
    s->m_rate = src_rate;
    return 1;
}

static void stream_push_stereo_pcm(Mc2StreamSlot *s, const int16_t *dst, int conv) {
    if (!s || !dst || conv <= 0) return;
    audio_lock();
    if (s->ring) {
        for (int i = 0; i < conv; i++) {
            if (s->ring_avail >= MC2_STREAM_RING_FRAMES) {
                s->ring_r = (s->ring_r + 1u) % MC2_STREAM_RING_FRAMES;
                s->ring_avail--;
            }
            uint32_t wi = s->ring_w * 2u;
            s->ring[wi + 0] = dst[i * 2 + 0];
            s->ring[wi + 1] = dst[i * 2 + 1];
            s->ring_w = (s->ring_w + 1u) % MC2_STREAM_RING_FRAMES;
            s->ring_avail++;
        }
    }
    audio_unlock();
}

static void stream_convert_and_push(Mc2StreamSlot *s, const uint8_t **in_data, int nb_samples) {
    if (!s || !s->swr || !s->ring || !in_data || nb_samples <= 0) return;
    int max_out = swr_get_out_samples(s->swr, nb_samples) + 32;
    if (max_out <= 0) return;
    int16_t stack_buf[4096 * 2];
    int16_t *dst = (max_out <= 4096) ? stack_buf : (int16_t *)malloc((size_t)max_out * 2u * sizeof(int16_t));
    if (!dst) return;
    uint8_t *out_ptr[1] = { (uint8_t *)dst };
    int conv = swr_convert(s->swr, out_ptr, max_out, in_data, nb_samples);
    stream_push_stereo_pcm(s, dst, conv);
    if (dst != stack_buf) free(dst);
}

static void stream_push_decoded_frame(Mc2StreamSlot *s, const AVFrame *fr) {
    if (!fr) return;
    stream_convert_and_push(s, (const uint8_t **)fr->extended_data, fr->nb_samples);
}

static void stream_decode_until(Mc2StreamSlot *s, uint32_t min_frames) {
    if (!s || !s->ring || s->eof_reached) return;
    if (s->mcodec && s->mex) {
        int idle_spins = 0;
        while (s->ring_avail < min_frames && !s->eof_reached && idle_spins < 40) {
            int progressed = 0;
            if (!s->m_in_eos) {
                ssize_t in_idx = AMediaCodec_dequeueInputBuffer(s->mcodec, 1000);
                if (in_idx >= 0) {
                    size_t in_sz = 0;
                    uint8_t *in_buf = AMediaCodec_getInputBuffer(s->mcodec, (size_t)in_idx, &in_sz);
                    ssize_t rsz = (in_buf && in_sz > 0) ? AMediaExtractor_readSampleData(s->mex, in_buf, in_sz) : -1;
                    if (rsz <= 0) {
                        AMediaCodec_queueInputBuffer(s->mcodec, (size_t)in_idx, 0, 0, 0,
                                                     AMEDIACODEC_BUFFER_FLAG_END_OF_STREAM);
                        s->m_in_eos = 1;
                    } else {
                        int64_t pts = AMediaExtractor_getSampleTime(s->mex);
                        AMediaCodec_queueInputBuffer(s->mcodec, (size_t)in_idx, 0, (size_t)rsz,
                                                     pts > 0 ? (uint64_t)pts : 0ULL, 0);
                        AMediaExtractor_advance(s->mex);
                    }
                    progressed = 1;
                }
            }
            AMediaCodecBufferInfo info;
            for (;;) {
                ssize_t out_idx = AMediaCodec_dequeueOutputBuffer(s->mcodec, &info, 1000);
                if (out_idx == AMEDIACODEC_INFO_OUTPUT_FORMAT_CHANGED) {
                    AMediaFormat *ofmt = AMediaCodec_getOutputFormat(s->mcodec);
                    if (ofmt) {
                        int32_t nr = s->m_rate > 0 ? s->m_rate : 44100;
                        int32_t nc = s->m_ch > 0 ? s->m_ch : 2;
                        AMediaFormat_getInt32(ofmt, AMEDIAFORMAT_KEY_SAMPLE_RATE, &nr);
                        AMediaFormat_getInt32(ofmt, AMEDIAFORMAT_KEY_CHANNEL_COUNT, &nc);
                        AMediaFormat_delete(ofmt);
                        stream_update_resampler(s, nc, nr);
                    }
                    progressed = 1;
                    continue;
                }
                if (out_idx == AMEDIACODEC_INFO_OUTPUT_BUFFERS_CHANGED) {
                    progressed = 1;
                    continue;
                }
                if (out_idx < 0) break;
                size_t out_sz = 0;
                uint8_t *out_buf = AMediaCodec_getOutputBuffer(s->mcodec, (size_t)out_idx, &out_sz);
                if (out_buf && info.size > 0 && s->m_ch > 0 && s->swr) {
                    int nb_frames = (int)info.size / (2 * s->m_ch);
                    if (nb_frames > 0) {
                        const uint8_t *in_ptr[1] = { out_buf + info.offset };
                        stream_convert_and_push(s, in_ptr, nb_frames);
                    }
                }
                AMediaCodec_releaseOutputBuffer(s->mcodec, (size_t)out_idx, false);
                progressed = 1;
                if (info.flags & AMEDIACODEC_BUFFER_FLAG_END_OF_STREAM) {
                    s->eof_reached = 1;
                    break;
                }
                if (s->ring_avail >= min_frames) break;
            }
            if (!progressed) idle_spins++;
            else idle_spins = 0;
        }
        return;
    }
    if (!s->fmt || !s->dec) return;
    AVPacket *pkt = av_packet_alloc();
    AVFrame *fr = av_frame_alloc();
    if (!pkt || !fr) {
        if (pkt) av_packet_free(&pkt);
        if (fr) av_frame_free(&fr);
        return;
    }
    while (s->ring_avail < min_frames) {
        int rr = av_read_frame(s->fmt, pkt);
        if (rr < 0) {
            avcodec_send_packet(s->dec, NULL);
            while (avcodec_receive_frame(s->dec, fr) == 0) {
                stream_push_decoded_frame(s, fr);
                av_frame_unref(fr);
            }
            s->eof_reached = 1;
            break;
        }
        if (pkt->stream_index == s->a_idx) {
            if (avcodec_send_packet(s->dec, pkt) == 0) {
                while (avcodec_receive_frame(s->dec, fr) == 0) {
                    stream_push_decoded_frame(s, fr);
                    av_frame_unref(fr);
                }
            }
        }
        av_packet_unref(pkt);
    }
    av_packet_free(&pkt);
    av_frame_free(&fr);
}

static void stream_close_decoder_locked(Mc2StreamSlot *s) {
    if (!s) return;
    audio_lock();
    int16_t *ring = s->ring;
    s->ring = NULL;
    s->ring_r = s->ring_w = s->ring_avail = 0;
    s->playing = 0;
    AMediaCodec *mcodec = s->mcodec; s->mcodec = NULL;
    AMediaExtractor *mex = s->mex; s->mex = NULL;
    AVFormatContext *fmt = s->fmt; s->fmt = NULL;
    AVCodecContext *dec = s->dec; s->dec = NULL;
    SwrContext *swr = s->swr; s->swr = NULL;
    AVIOContext *avio = s->avio; s->avio = NULL;
    FILE *fp = s->fp; s->fp = NULL;
    audio_unlock();
    if (ring) free(ring);
    if (mcodec) { AMediaCodec_stop(mcodec); AMediaCodec_delete(mcodec); }
    if (mex) AMediaExtractor_delete(mex);
    if (swr) swr_free(&swr);
    if (dec) avcodec_free_context(&dec);
    if (fmt) avformat_close_input(&fmt);
    if (avio) {
        av_freep(&avio->buffer);
        avio_context_free(&avio);
    }
    if (fp) fclose(fp);
}

static void stream_close_decoder(Mc2StreamSlot *s) {
    pthread_mutex_lock(&g_stream_dec_mutex);
    stream_close_decoder_locked(s);
    pthread_mutex_unlock(&g_stream_dec_mutex);
}

static int stream_open_mediacodec(Mc2StreamSlot *s, FILE *fp, uint32_t d_off, uint32_t d_len) {
    if (!s || !fp || d_len == 0) return 0;
    AMediaExtractor *mex = AMediaExtractor_new();
    if (!mex) return 0;
    media_status_t st = AMediaExtractor_setDataSourceFd(mex, fileno(fp), (off64_t)d_off, (off64_t)d_len);
    if (st != AMEDIA_OK) {
        AMediaExtractor_delete(mex);
        return 0;
    }
    size_t ntracks = AMediaExtractor_getTrackCount(mex);
    int sel = -1;
    const char *mime = NULL;
    char mime_buf[128] = {0};
    int32_t rate = 44100, ch = 2;
    AMediaFormat *sel_fmt = NULL;
    for (size_t t = 0; t < ntracks; t++) {
        AMediaFormat *tf = AMediaExtractor_getTrackFormat(mex, t);
        if (!tf) continue;
        const char *m = NULL;
        if (AMediaFormat_getString(tf, AMEDIAFORMAT_KEY_MIME, &m) && m && strncmp(m, "audio/", 6) == 0) {
            snprintf(mime_buf, sizeof(mime_buf), "%s", m);
            mime = mime_buf;
            AMediaFormat_getInt32(tf, AMEDIAFORMAT_KEY_SAMPLE_RATE, &rate);
            AMediaFormat_getInt32(tf, AMEDIAFORMAT_KEY_CHANNEL_COUNT, &ch);
            sel = (int)t;
            sel_fmt = tf;
            break;
        }
        AMediaFormat_delete(tf);
    }
    if (sel < 0 || !sel_fmt || !mime) {
        if (sel_fmt) AMediaFormat_delete(sel_fmt);
        AMediaExtractor_delete(mex);
        return 0;
    }
    AMediaExtractor_selectTrack(mex, (size_t)sel);
    AMediaCodec *mc = AMediaCodec_createDecoderByType(mime);
    if (!mc ||
        AMediaCodec_configure(mc, sel_fmt, NULL, NULL, 0) != AMEDIA_OK ||
        AMediaCodec_start(mc) != AMEDIA_OK) {
        if (mc) AMediaCodec_delete(mc);
        AMediaFormat_delete(sel_fmt);
        AMediaExtractor_delete(mex);
        return 0;
    }
    AMediaFormat_delete(sel_fmt);
    if (!stream_update_resampler(s, ch > 0 ? ch : 2, rate > 0 ? rate : 44100)) {
        AMediaCodec_stop(mc);
        AMediaCodec_delete(mc);
        AMediaExtractor_delete(mex);
        return 0;
    }
    int16_t *ring = (int16_t *)calloc(MC2_STREAM_RING_FRAMES * 2u, sizeof(int16_t));
    if (!ring) {
        AMediaCodec_stop(mc);
        AMediaCodec_delete(mc);
        AMediaExtractor_delete(mex);
        if (s->swr) swr_free(&s->swr);
        return 0;
    }
    audio_lock();
    s->mex = mex;
    s->mcodec = mc;
    s->m_in_eos = 0;
    s->eof_reached = 0;
    s->ring = ring;
    s->ring_r = s->ring_w = s->ring_avail = 0;
    audio_unlock();
    stream_decode_until(s, 16384u);
    return 1;
}

static int stream_open_decoder(Mc2StreamSlot *s, int out_rate) {
    if (!s || !s->path[0]) return 0;
    pthread_mutex_lock(&g_stream_dec_mutex);
    stream_close_decoder_locked(s);
    FILE *fp = NULL;
    uint32_t d_off = 0, d_len = 0;
    if (strncmp(s->path, "dave:", 5) == 0) {
        if (sscanf(s->path + 5, "%u:%u:", &d_off, &d_len) != 2 || d_len == 0) {
            pthread_mutex_unlock(&g_stream_dec_mutex);
            return 0;
        }
        fp = open_registered_data("streams_pc.dat", "rb");
        if (!fp && g_game_dir[0]) {
            char p[1024];
            snprintf(p, sizeof(p), "%s/streams_pc.dat", g_game_dir);
            fp = fopen(p, "rb");
        }
        if (!fp || fseeko(fp, (off_t)d_off, SEEK_SET) != 0) {
            if (fp) fclose(fp);
            pthread_mutex_unlock(&g_stream_dec_mutex);
            return 0;
        }
    } else {
        const char *rel = (strncmp(s->path, "saf:", 4) == 0) ? (s->path + 4) : s->path;
        fp = open_registered_data(rel, "rb");
        if (!fp) fp = fopen(rel, "rb");
        if (!fp) {
            pthread_mutex_unlock(&g_stream_dec_mutex);
            return 0;
        }
        fseeko(fp, 0, SEEK_END);
        off_t sz = ftello(fp);
        fseeko(fp, 0, SEEK_SET);
        if (sz <= 0) {
            fclose(fp);
            pthread_mutex_unlock(&g_stream_dec_mutex);
            return 0;
        }
        d_off = 0;
        d_len = (uint32_t)sz;
    }

    s->dec_rate = (out_rate > 0) ? out_rate : 44100;
    s->eof_reached = 0;

    /* En Android, MediaExtractor+MediaCodec decodifica MP3/WAV/OGG nativamente
       cuando FFmpeg fue compilado solo para Bink. */
    if (stream_open_mediacodec(s, fp, d_off, d_len)) {
        fclose(fp);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 1;
    }

    uint8_t *avio_buf = (uint8_t *)av_malloc(16384);
    if (!avio_buf) {
        fclose(fp);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }

    audio_lock();
    s->fp = fp;
    s->data_off = d_off;
    s->data_len = d_len;
    s->cur_pos = 0;
    s->avio = avio_alloc_context(avio_buf, 16384, 0, s, stream_avio_read, NULL, stream_avio_seek);
    if (!s->avio) {
        audio_unlock();
        av_free(avio_buf);
        s->fp = NULL;
        fclose(fp);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    s->fmt = avformat_alloc_context();
    if (!s->fmt) {
        audio_unlock();
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    s->fmt->pb = s->avio;
    s->fmt->flags |= AVFMT_FLAG_CUSTOM_IO;
    audio_unlock();

    if (avformat_open_input(&s->fmt, s->path, NULL, NULL) < 0 ||
        avformat_find_stream_info(s->fmt, NULL) < 0) {
        PC_LOGW("[MSS32] Stream FFmpeg open fallo: %s", s->path);
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    int aidx = av_find_best_stream(s->fmt, AVMEDIA_TYPE_AUDIO, -1, -1, NULL, 0);
    if (aidx < 0) {
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    AVCodecParameters *cp = s->fmt->streams[aidx]->codecpar;
    const AVCodec *ac = avcodec_find_decoder(cp->codec_id);
    AVCodecContext *dec = ac ? avcodec_alloc_context3(ac) : NULL;
    if (!dec || avcodec_parameters_to_context(dec, cp) < 0 || avcodec_open2(dec, ac, NULL) < 0) {
        if (dec) avcodec_free_context(&dec);
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    AVChannelLayout out_layout = AV_CHANNEL_LAYOUT_STEREO;
    SwrContext *swr = NULL;
    if (swr_alloc_set_opts2(&swr, &out_layout, AV_SAMPLE_FMT_S16, s->dec_rate,
                            &dec->ch_layout, dec->sample_fmt, dec->sample_rate, 0, NULL) < 0 ||
        swr_init(swr) < 0) {
        if (swr) swr_free(&swr);
        avcodec_free_context(&dec);
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    int16_t *ring = (int16_t *)calloc(MC2_STREAM_RING_FRAMES * 2u, sizeof(int16_t));
    if (!ring) {
        swr_free(&swr);
        avcodec_free_context(&dec);
        stream_close_decoder_locked(s);
        pthread_mutex_unlock(&g_stream_dec_mutex);
        return 0;
    }
    audio_lock();
    s->a_idx = aidx;
    s->dec = dec;
    s->swr = swr;
    s->ring = ring;
    s->ring_r = s->ring_w = s->ring_avail = 0;
    audio_unlock();
    stream_decode_until(s, 16384u);
    pthread_mutex_unlock(&g_stream_dec_mutex);
    return 1;
}
#endif

static void mc2_streams_pump(void) {
#if MC2_HAS_FFMPEG_BINK
    if (pthread_mutex_trylock(&g_stream_dec_mutex) != 0) return;
    for (int i = 0; i < MAX_AUDIO_STREAMS; i++) {
        Mc2StreamSlot *s = &g_streams[i];
        if (!s->in_use || s->is_music || !s->playing || s->paused || s->eof_reached || !s->ring) continue;
        if (s->ring_avail < 32768u) {
            stream_decode_until(s, 49152u);
        }
    }
    pthread_mutex_unlock(&g_stream_dec_mutex);
#endif
}

static void mc2_stream_mix_audio(int16_t *out_buffer, int num_frames, int out_rate) {
#if MC2_HAS_FFMPEG_BINK
    (void)out_rate;
    for (int i = 0; i < MAX_AUDIO_STREAMS; i++) {
        Mc2StreamSlot *s = &g_streams[i];
        if (!s->in_use || s->is_music || !s->playing || s->paused || !s->ring) continue;
        float v = s->vol;
        if (v < 0.0f) v = 0.0f;
        if (v > 1.0f) v = 1.0f;
        int take = (num_frames < (int)s->ring_avail) ? num_frames : (int)s->ring_avail;
        for (int f = 0; f < take; f++) {
            uint32_t ri = s->ring_r * 2u;
            int32_t ml = out_buffer[f * 2 + 0] + (int32_t)((float)s->ring[ri + 0] * v);
            int32_t mr = out_buffer[f * 2 + 1] + (int32_t)((float)s->ring[ri + 1] * v);
            if (ml > 32767) ml = 32767; else if (ml < -32768) ml = -32768;
            if (mr > 32767) mr = 32767; else if (mr < -32768) mr = -32768;
            out_buffer[f * 2 + 0] = (int16_t)ml;
            out_buffer[f * 2 + 1] = (int16_t)mr;
            s->ring_r = (s->ring_r + 1u) % MC2_STREAM_RING_FRAMES;
            s->ring_avail--;
        }
        if (s->eof_reached && s->ring_avail == 0u) {
            s->playing = 0;
        }
    }
#else
    (void)out_buffer; (void)num_frames; (void)out_rate;
#endif
}

static uint64_t monotonic_ms_now(void) {
#if defined(_WIN32)
    return (uint64_t)GetTickCount64();
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000ULL + (uint64_t)(ts.tv_nsec / 1000000L);
#endif
}

typedef struct {
    uint32_t name_off;
    uint32_t data_off;
    uint32_t raw_len;
    uint32_t cmp_len;
} Mc2DaveEntry;

static int g_dave_tried = 0;
static uint32_t g_dave_count = 0;
static uint32_t g_dave_name_size = 0;
static Mc2DaveEntry *g_dave_dir = NULL;
static char *g_dave_names = NULL;

static void dave_init_if_needed(void) {
    if (g_dave_tried) return;
    g_dave_tried = 1;
    FILE *fp = open_registered_data("streams_pc.dat", "rb");
    if (!fp && g_game_dir[0]) {
        char p[1024];
        snprintf(p, sizeof(p), "%s/streams_pc.dat", g_game_dir);
        fp = fopen(p, "rb");
    }
    if (!fp) {
        PC_LOGW("[MSS32] streams_pc.dat no disponible para DAVE index");
        return;
    }
    uint8_t hdr[16];
    if (fread(hdr, 1, 16, fp) != 16 || memcmp(hdr, "DAVE", 4) != 0) {
        fclose(fp);
        return;
    }
    uint32_t count = 0, dir_size = 0, name_size = 0;
    memcpy(&count, hdr + 4, 4);
    memcpy(&dir_size, hdr + 8, 4);
    memcpy(&name_size, hdr + 12, 4);
    if (!count || count > 65536u || dir_size < count * 16u || !name_size || name_size > 16u * 1024u * 1024u) {
        fclose(fp);
        return;
    }
    Mc2DaveEntry *dir = (Mc2DaveEntry *)malloc(count * sizeof(Mc2DaveEntry));
    char *names = (char *)malloc((size_t)name_size + 1u);
    if (!dir || !names) {
        free(dir); free(names); fclose(fp); return;
    }
    if (fseek(fp, 2048L, SEEK_SET) != 0 ||
        fread(dir, sizeof(Mc2DaveEntry), count, fp) != count ||
        fseek(fp, 2048L + (long)dir_size, SEEK_SET) != 0 ||
        fread(names, 1, name_size, fp) != name_size) {
        free(dir); free(names); fclose(fp); return;
    }
    names[name_size] = '\0';
    fclose(fp);
    g_dave_dir = dir;
    g_dave_names = names;
    g_dave_name_size = name_size;
    g_dave_count = count;
    PC_LOGI("[MSS32] DAVE index cargado desde streams_pc.dat: %u pistas", g_dave_count);
}

static int dave_lookup(const char *rel_name, uint32_t *out_off, uint32_t *out_len) {
    dave_init_if_needed();
    if (!g_dave_dir || !g_dave_names || !rel_name) return 0;
    const char *q = rel_name;
    while (*q == '.' && (q[1] == '/' || q[1] == '\\')) q += 2;
    while (*q == '/' || *q == '\\') q++;
    const char *alt = (strncasecmp(q, "audio/", 6) == 0) ? (q + 6) : NULL;
    for (uint32_t i = 0; i < g_dave_count; i++) {
        uint32_t no = g_dave_dir[i].name_off;
        if (no >= g_dave_name_size) continue;
        const char *ename = g_dave_names + no;
        if (strcasecmp(ename, q) == 0 || (alt && strcasecmp(ename, alt) == 0)) {
            if (out_off) *out_off = g_dave_dir[i].data_off;
            if (out_len) *out_len = g_dave_dir[i].raw_len;
            return 1;
        }
    }
    return 0;
}

static Mc2StreamSlot *find_stream_slot(uint32_t h) {
    if (!h) return NULL;
    for (int i = 0; i < MAX_AUDIO_STREAMS; i++) {
        if (g_streams[i].in_use && g_streams[i].handle == h) return &g_streams[i];
    }
    return NULL;
}

static Mc2StreamSlot *alloc_stream_slot(uint32_t *out_h) {
    for (int i = 0; i < MAX_AUDIO_STREAMS; i++) {
        if (!g_streams[i].in_use) {
            memset(&g_streams[i], 0, sizeof(Mc2StreamSlot));
            g_streams[i].in_use = 1;
            g_streams[i].vol = 1.0f;
            g_streams[i].handle = g_next_stream_h++;
            if (out_h) *out_h = g_streams[i].handle;
            return &g_streams[i];
        }
    }
    /* Evict oldest non-music slot if full */
    for (int i = 0; i < MAX_AUDIO_STREAMS; i++) {
        if (!g_streams[i].is_music) {
#if MC2_HAS_FFMPEG_BINK
            stream_close_decoder(&g_streams[i]);
#endif
            memset(&g_streams[i], 0, sizeof(Mc2StreamSlot));
            g_streams[i].in_use = 1;
            g_streams[i].vol = 1.0f;
            g_streams[i].handle = g_next_stream_h++;
            if (out_h) *out_h = g_streams[i].handle;
            return &g_streams[i];
        }
    }
    return NULL;
}

#if !defined(_WIN32)
/* ================================================================
 * Real POSIX Winsock 1.1 (wsock32.dll) Bridge for LAN & Netplay
 * ================================================================ */
#define WSOCK_MAX_SOCKETS    256
#define WSOCK_HANDLE_BASE    0x7000u
#define WSOCK_INVALID_SOCKET 0xFFFFFFFFu
#define WSOCK_SOCKET_ERROR   0xFFFFFFFFu

static pthread_mutex_t g_wsock_mutex = PTHREAD_MUTEX_INITIALIZER;
static int g_wsock_fds[WSOCK_MAX_SOCKETS];
static int g_wsock_fds_ready = 0;
static int g_wsock_wsa_refs = 0;
static uint32_t g_wsock_ntoa_slot = 0;
static uint32_t g_wsock_hostent_slot = 0;
RECOMP_TLS static uint32_t g_wsa_last_error = 0;

static int wsock_va_ok(uint32_t va, uint32_t len) {
    return va >= 0x00010000u && (uint64_t)va + (uint64_t)len <= (uint64_t)GUEST_MEM_SIZE;
}

static void wsock_init_table_locked(void) {
    if (!g_wsock_fds_ready) {
        for (int i = 0; i < WSOCK_MAX_SOCKETS; i++) g_wsock_fds[i] = -1;
        g_wsock_fds_ready = 1;
    }
}

static uint32_t wsock_alloc_handle(int fd) {
    pthread_mutex_lock(&g_wsock_mutex);
    wsock_init_table_locked();
    for (int i = 0; i < WSOCK_MAX_SOCKETS; i++) {
        if (g_wsock_fds[i] < 0) {
            g_wsock_fds[i] = fd;
            pthread_mutex_unlock(&g_wsock_mutex);
            return WSOCK_HANDLE_BASE + (uint32_t)i;
        }
    }
    pthread_mutex_unlock(&g_wsock_mutex);
    close(fd);
    g_wsa_last_error = 10024u; /* WSAEMFILE */
    return WSOCK_INVALID_SOCKET;
}

static int wsock_get_fd(uint32_t handle) {
    if (handle < WSOCK_HANDLE_BASE) return -1;
    uint32_t idx = handle - WSOCK_HANDLE_BASE;
    if (idx >= WSOCK_MAX_SOCKETS) return -1;
    pthread_mutex_lock(&g_wsock_mutex);
    wsock_init_table_locked();
    int fd = g_wsock_fds[idx];
    pthread_mutex_unlock(&g_wsock_mutex);
    return fd;
}

static int wsock_close_handle(uint32_t handle) {
    if (handle < WSOCK_HANDLE_BASE) return -1;
    uint32_t idx = handle - WSOCK_HANDLE_BASE;
    if (idx >= WSOCK_MAX_SOCKETS) return -1;
    pthread_mutex_lock(&g_wsock_mutex);
    wsock_init_table_locked();
    int fd = g_wsock_fds[idx];
    g_wsock_fds[idx] = -1;
    pthread_mutex_unlock(&g_wsock_mutex);
    if (fd < 0) return -1;
    return close(fd);
}

static void wsock_close_all(void) {
    pthread_mutex_lock(&g_wsock_mutex);
    wsock_init_table_locked();
    for (int i = 0; i < WSOCK_MAX_SOCKETS; i++) {
        if (g_wsock_fds[i] >= 0) {
            close(g_wsock_fds[i]);
            g_wsock_fds[i] = -1;
        }
    }
    pthread_mutex_unlock(&g_wsock_mutex);
}

static uint32_t wsock_map_errno(int err) {
    switch (err) {
        case 0:            return 0u;
        case EACCES:       return 10013u; /* WSAEACCES */
        case EFAULT:       return 10014u; /* WSAEFAULT */
        case EINVAL:       return 10022u; /* WSAEINVAL */
        case EMFILE:
        case ENFILE:       return 10024u; /* WSAEMFILE */
        case EAGAIN:
#if defined(EWOULDBLOCK) && EWOULDBLOCK != EAGAIN
        case EWOULDBLOCK:
#endif
        case EINPROGRESS:  return 10035u; /* WSAEWOULDBLOCK (Winsock nonblocking connect uses this) */
        case EALREADY:     return 10037u; /* WSAEALREADY */
        case EBADF:
        case ENOTSOCK:     return 10038u; /* WSAENOTSOCK */
        case EMSGSIZE:     return 10040u; /* WSAEMSGSIZE */
        case EPROTOTYPE:   return 10041u; /* WSAEPROTOTYPE */
        case ENOPROTOOPT:  return 10042u; /* WSAENOPROTOOPT */
        case EPROTONOSUPPORT: return 10043u;
        case EOPNOTSUPP:   return 10045u;
        case EAFNOSUPPORT: return 10047u; /* WSAEAFNOSUPPORT */
        case EADDRINUSE:   return 10048u; /* WSAEADDRINUSE */
        case EADDRNOTAVAIL:return 10049u; /* WSAEADDRNOTAVAIL */
        case ENETDOWN:     return 10050u; /* WSAENETDOWN */
        case ENETUNREACH:  return 10051u; /* WSAENETUNREACH */
        case ECONNABORTED: return 10053u; /* WSAECONNABORTED */
        case ECONNRESET:   return 10054u; /* WSAECONNRESET */
        case ENOBUFS:      return 10055u; /* WSAENOBUFS */
        case EISCONN:      return 10056u; /* WSAEISCONN */
        case ENOTCONN:     return 10057u; /* WSAENOTCONN */
        case ETIMEDOUT:    return 10060u; /* WSAETIMEDOUT */
        case ECONNREFUSED: return 10061u; /* WSAECONNREFUSED */
        case EHOSTUNREACH: return 10065u; /* WSAEHOSTUNREACH */
        default:           return 10050u;
    }
}

static int wsock_read_sockaddr(uint32_t sa_va, uint32_t sa_len, struct sockaddr_in *out) {
    if (!sa_va || sa_len < 8u || !wsock_va_ok(sa_va, sa_len)) {
        g_wsa_last_error = 10014u;
        return -1;
    }
    uint16_t fam = guest_read16(sa_va + 0);
    if (fam != 2u && fam != 0u) {
        g_wsa_last_error = 10047u; /* WSAEAFNOSUPPORT */
        return -1;
    }
    memset(out, 0, sizeof(*out));
    out->sin_family = AF_INET;
    memcpy(&out->sin_port, guest_ptr(sa_va + 2), 2);
    memcpy(&out->sin_addr.s_addr, guest_ptr(sa_va + 4), 4);
    return 0;
}

static void wsock_write_sockaddr(uint32_t sa_va, uint32_t salen_va, const struct sockaddr_in *in) {
    if (!salen_va || !wsock_va_ok(salen_va, 4u)) return;
    uint32_t cap = guest_read32(salen_va);
    if (sa_va && cap > 0u && wsock_va_ok(sa_va, cap < 16u ? cap : 16u)) {
        uint32_t clr = cap < 16u ? cap : 16u;
        memset(guest_ptr(sa_va), 0, clr);
        if (cap >= 8u) {
            guest_write16(sa_va + 0, 2u); /* AF_INET */
            memcpy(guest_ptr(sa_va + 2), &in->sin_port, 2);
            memcpy(guest_ptr(sa_va + 4), &in->sin_addr.s_addr, 4);
        }
    }
    guest_write32(salen_va, 16u);
}

static uint32_t wsock_write_hostent(const char *canon_name, const uint32_t *addrs_be, int addr_count) {
    if (addr_count <= 0) return 0u;
    if (addr_count > 8) addr_count = 8;

    pthread_mutex_lock(&g_wsock_mutex);
    uint32_t slot = (g_wsock_hostent_slot++) & 3u;
    pthread_mutex_unlock(&g_wsock_mutex);

    /* 4 slots x 192 bytes = 768 bytes in [0x00033500 .. 0x00033800) before GUEST_VERINFO_VA */
    uint32_t base = GUEST_HOSTENT_VA + slot * 192u;
    uint32_t aliases_va = base + 20u;
    uint32_t ptrs_va    = base + 24u;
    uint32_t addrs_va   = base + 60u;
    uint32_t name_va    = base + 92u;

    memset(guest_ptr(base), 0, 192);
    const char *nm = (canon_name && canon_name[0]) ? canon_name : "pmc2android";
    size_t nlen = strlen(nm);
    if (nlen > 99u) nlen = 99u;
    memcpy(guest_ptr(name_va), nm, nlen);
    *((uint8_t *)guest_ptr(name_va + (uint32_t)nlen)) = 0;

    guest_write32(aliases_va, 0u);
    for (int i = 0; i < addr_count; i++) {
        uint32_t aval = addrs_va + (uint32_t)i * 4u;
        memcpy(guest_ptr(aval), &addrs_be[i], 4);
        guest_write32(ptrs_va + (uint32_t)i * 4u, aval);
    }
    guest_write32(ptrs_va + (uint32_t)addr_count * 4u, 0u);

    guest_write32(base + 0,  name_va);    /* h_name */
    guest_write32(base + 4,  aliases_va); /* h_aliases */
    guest_write16(base + 8,  2u);         /* h_addrtype = AF_INET */
    guest_write16(base + 10, 4u);         /* h_length = 4 */
    guest_write32(base + 12, ptrs_va);    /* h_addr_list */
    return base;
}

static int wsock_iface_priority(const char *ifname, uint32_t ip_be) {
    uint32_t ip_ho = ntohl(ip_be);
    if (!ifname) ifname = "";
    if (strncmp(ifname, "wlan", 4) == 0 || strncmp(ifname, "swlan", 5) == 0 ||
        strncmp(ifname, "ap", 2) == 0 || strncmp(ifname, "eth", 3) == 0 ||
        strncmp(ifname, "en", 2) == 0) {
        return 4;
    }
    if (strncmp(ifname, "zt", 2) == 0 || strncmp(ifname, "tun", 3) == 0 ||
        strncmp(ifname, "tap", 3) == 0 || strncmp(ifname, "wg", 2) == 0) {
        return 3;
    }
    /* RFC1918 private LAN IPv4 */
    if ((ip_ho & 0xFFFF0000u) == 0xC0A80000u || /* 192.168.0.0/16 */
        (ip_ho & 0xFF000000u) == 0x0A000000u || /* 10.0.0.0/8 */
        (ip_ho >= 0xAC100000u && ip_ho <= 0xAC1FFFFFu)) { /* 172.16.0.0/12 */
        return 2;
    }
    return 1;
}

static int wsock_collect_local_ipv4s(uint32_t *out_be, int max_out) {
    struct ifaddrs *ifap = NULL;
    if (getifaddrs(&ifap) != 0 || !ifap) {
        out_be[0] = htonl(INADDR_LOOPBACK);
        return 1;
    }
    uint32_t cand_ip[16];
    int cand_prio[16];
    int n = 0;
    for (struct ifaddrs *ifa = ifap; ifa && n < 16; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr || ifa->ifa_addr->sa_family != AF_INET) continue;
        if (!(ifa->ifa_flags & IFF_UP) || (ifa->ifa_flags & IFF_LOOPBACK)) continue;
        const struct sockaddr_in *sin = (const struct sockaddr_in *)ifa->ifa_addr;
        uint32_t ip_be = sin->sin_addr.s_addr;
        if (ip_be == 0 || ip_be == htonl(INADDR_LOOPBACK)) continue;
        cand_ip[n] = ip_be;
        cand_prio[n] = wsock_iface_priority(ifa->ifa_name, ip_be);
        n++;
    }
    freeifaddrs(ifap);
    if (n == 0) {
        out_be[0] = htonl(INADDR_LOOPBACK);
        return 1;
    }
    /* Insertion sort descending by interface priority so LAN/Wi-Fi/ZeroTier are first */
    for (int i = 1; i < n; i++) {
        uint32_t kip = cand_ip[i];
        int kp = cand_prio[i];
        int j = i - 1;
        while (j >= 0 && cand_prio[j] < kp) {
            cand_ip[j + 1] = cand_ip[j];
            cand_prio[j + 1] = cand_prio[j];
            j--;
        }
        cand_ip[j + 1] = kip;
        cand_prio[j + 1] = kp;
    }
    int count = n < max_out ? n : max_out;
    for (int i = 0; i < count; i++) out_be[i] = cand_ip[i];
    return count;
}

typedef struct {
    uint32_t handle;
    int fd;
    short want;
} WsockPollEntry;

static uint32_t wsock_select(uint32_t read_va, uint32_t write_va, uint32_t except_va, uint32_t timeout_va) {
    WsockPollEntry entries[192];
    int n_entries = 0;

    uint32_t set_vas[3] = { read_va, write_va, except_va };
    short    set_ev[3]  = { POLLIN,  POLLOUT,  POLLPRI };

    for (int s = 0; s < 3; s++) {
        uint32_t sva = set_vas[s];
        if (!sva || !wsock_va_ok(sva, 4u)) continue;
        uint32_t cnt = guest_read32(sva);
        if (cnt > 64u) cnt = 64u;
        if (!wsock_va_ok(sva, 4u + cnt * 4u)) continue;
        for (uint32_t i = 0; i < cnt; i++) {
            uint32_t h = guest_read32(sva + 4u + i * 4u);
            int fd = wsock_get_fd(h);
            if (fd < 0) {
                g_wsa_last_error = 10038u; /* WSAENOTSOCK */
                return WSOCK_SOCKET_ERROR;
            }
            int found = -1;
            for (int k = 0; k < n_entries; k++) {
                if (entries[k].fd == fd) { found = k; break; }
            }
            if (found >= 0) {
                entries[found].want |= set_ev[s];
            } else if (n_entries < 192) {
                entries[n_entries].handle = h;
                entries[n_entries].fd = fd;
                entries[n_entries].want = set_ev[s];
                n_entries++;
            }
        }
    }

    int timeout_ms = -1;
    if (timeout_va) {
        if (!wsock_va_ok(timeout_va, 8u)) {
            g_wsa_last_error = 10014u;
            return WSOCK_SOCKET_ERROR;
        }
        int32_t sec  = (int32_t)guest_read32(timeout_va + 0);
        int32_t usec = (int32_t)guest_read32(timeout_va + 4);
        if (sec < 0 || usec < 0) {
            timeout_ms = 0;
        } else {
            int64_t ms = (int64_t)sec * 1000LL + (int64_t)(usec / 1000);
            if (ms == 0 && usec > 0) ms = 1;
            if (ms > 0x7FFFFFFFLL) ms = 0x7FFFFFFFLL;
            timeout_ms = (int)ms;
        }
    }

    if (n_entries == 0) {
        if (timeout_ms > 0) {
            int slice = timeout_ms > 200 ? 200 : timeout_ms;
            struct timespec ts;
            ts.tv_sec = slice / 1000;
            ts.tv_nsec = (long)(slice % 1000) * 1000000L;
            nanosleep(&ts, NULL);
        }
        return 0u;
    }

    struct pollfd pfds[192];
    for (int i = 0; i < n_entries; i++) {
        pfds[i].fd = entries[i].fd;
        pfds[i].events = entries[i].want;
        pfds[i].revents = 0;
    }

    int rc = 0;
    if (timeout_ms < 0) {
        while (!g_stop_requested) {
            rc = poll(pfds, (nfds_t)n_entries, 200);
            if (rc > 0 || (rc < 0 && errno != EINTR)) break;
        }
    } else {
        do {
            rc = poll(pfds, (nfds_t)n_entries, timeout_ms);
        } while (rc < 0 && errno == EINTR && !g_stop_requested);
    }

    if (rc < 0) {
        g_wsa_last_error = wsock_map_errno(errno);
        return WSOCK_SOCKET_ERROR;
    }

    uint32_t total_ready = 0u;
    for (int s = 0; s < 3; s++) {
        uint32_t sva = set_vas[s];
        if (!sva || !wsock_va_ok(sva, 4u)) continue;
        if (rc == 0) {
            guest_write32(sva, 0u);
            continue;
        }
        uint32_t cnt = guest_read32(sva);
        if (cnt > 64u) cnt = 64u;
        uint32_t out_cnt = 0u;
        for (uint32_t i = 0; i < cnt; i++) {
            uint32_t h = guest_read32(sva + 4u + i * 4u);
            int fd = wsock_get_fd(h);
            short rev = 0;
            for (int k = 0; k < n_entries; k++) {
                if (entries[k].fd == fd) { rev = pfds[k].revents; break; }
            }
            int ready = 0;
            if (s == 0) {
                ready = (rev & (POLLIN | POLLHUP | POLLERR)) != 0;
            } else if (s == 1) {
                if (rev & POLLOUT) {
                    if (rev & POLLERR) {
                        int soerr = 0;
                        socklen_t sl = sizeof(soerr);
                        getsockopt(fd, SOL_SOCKET, SO_ERROR, &soerr, &sl);
                        ready = (soerr == 0);
                    } else {
                        ready = 1;
                    }
                }
            } else {
                if (rev & POLLPRI) ready = 1;
                else if (rev & POLLERR) {
                    int soerr = 0;
                    socklen_t sl = sizeof(soerr);
                    getsockopt(fd, SOL_SOCKET, SO_ERROR, &soerr, &sl);
                    ready = (soerr != 0);
                }
            }
            if (ready) {
                guest_write32(sva + 4u + out_cnt * 4u, h);
                out_cnt++;
                total_ready++;
            }
        }
        guest_write32(sva, out_cnt);
    }
    return total_ready;
}
#endif /* !defined(_WIN32) */

static void dispatch_pe_import(int idx) {
    check_stop_request();
    const PcImportEntry *imp = &g_pc_imports[idx];
    const char *fn = imp->func;
    uint32_t a0 = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t a5 = guest_read32(g_esp + 24);
    uint32_t a6 = guest_read32(g_esp + 28);
    uint32_t a7 = guest_read32(g_esp + 32);
    uint32_t ret_val = 0;

    static int call_trace_count = 0;
    if (call_trace_count < 120 && strcmp(fn, "QueryPerformanceCounter") != 0 &&
        strcmp(fn, "GetTickCount") != 0 && strcmp(fn, "timeGetTime") != 0) {
        call_trace_count++;
        PC_LOGI("[IMP #%d] %s!%s(0x%X, 0x%X, 0x%X) [ret=0x%08X]",
                call_trace_count, imp->dll, fn, a0, a1, a2, guest_read32(g_esp));
    }

    /* ── kernel32.dll ─────────────────────────────────────────── */
    if (strcmp(fn, "GetVersionExA") == 0) {
        if (a0) {
            guest_write32(a0 + 4, 5);    /* dwMajorVersion = 5 (WinXP) */
            guest_write32(a0 + 8, 1);    /* dwMinorVersion = 1 */
            guest_write32(a0 + 12, 2600);/* dwBuildNumber = 2600 */
            guest_write32(a0 + 16, 2);   /* dwPlatformId = VER_PLATFORM_WIN32_NT */
            guest_ptr(a0 + 20)[0] = '\0';
        }
        ret_val = 1;
    } else if (strcmp(fn, "GetVersion") == 0) {
        ret_val = 0x0A280105u; /* WinXP 5.1 build 2600 */
    } else if (strcmp(fn, "GetModuleHandleA") == 0) {
        if (a0 == 0) {
            ret_val = 0x00400000u;
        } else {
            ret_val = 0x10000000u;
        }
    } else if (strcmp(fn, "GetModuleFileNameA") == 0) {
        if (a1 && a2 > 0) {
            const char *m = (const char *)guest_ptr(GUEST_MODNAME_VA);
            size_t len = strlen(m);
            if (len >= a2) len = a2 - 1;
            memcpy(guest_ptr(a1), m, len);
            guest_ptr(a1)[len] = '\0';
            ret_val = (uint32_t)len;
        }
    } else if (strcmp(fn, "GetCommandLineA") == 0) {
        ret_val = GUEST_CMDLINE_VA;
    } else if (strcmp(fn, "GetEnvironmentStrings") == 0) {
        ret_val = GUEST_ENVA_VA;
    } else if (strcmp(fn, "GetEnvironmentStringsW") == 0) {
        ret_val = GUEST_ENVW_VA;
    } else if (strcmp(fn, "FreeEnvironmentStringsA") == 0 ||
               strcmp(fn, "FreeEnvironmentStringsW") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "GetStartupInfoA") == 0) {
        if (a0) {
            memset(guest_ptr(a0), 0, 68);
            guest_write32(a0, 68);
        }
        ret_val = 0;
    } else if (strcmp(fn, "GetStdHandle") == 0) {
        if (a0 == (uint32_t)-10) ret_val = 0x1001u;
        else if (a0 == (uint32_t)-11) ret_val = 0x1002u;
        else if (a0 == (uint32_t)-12) ret_val = 0x1003u;
        else ret_val = 0x1002u;
    } else if (strcmp(fn, "SetStdHandle") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "GetFileType") == 0) {
        if (a0 >= 0x1001u && a0 <= 0x1003u) ret_val = 2; /* FILE_TYPE_CHAR */
        else if (get_file_slot(a0)) ret_val = 1;          /* FILE_TYPE_DISK */
        else ret_val = 0;
    } else if (strcmp(fn, "SetHandleCount") == 0) {
        ret_val = a0;
    } else if (strcmp(fn, "GetACP") == 0) {
        ret_val = 1252;
    } else if (strcmp(fn, "GetOEMCP") == 0) {
        ret_val = 437;
    } else if (strcmp(fn, "GetCPInfo") == 0) {
        if (a1) {
            memset(guest_ptr(a1), 0, 20);
            guest_write32(a1 + 0, 1); /* MaxCharSize = 1 (SBCS) */
            guest_ptr(a1 + 4)[0] = '?';
        }
        ret_val = 1;
    } else if (strcmp(fn, "HeapCreate") == 0) {
        ret_val = 0x00090000u; /* synthetic heap handle */
    } else if (strcmp(fn, "HeapDestroy") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "HeapAlloc") == 0) {
        /* HeapAlloc(hHeap, dwFlags, dwBytes) */
        int zero = (a1 & 0x08u) != 0; /* HEAP_ZERO_MEMORY */
        ret_val = pc_guest_alloc(a2, zero);
    } else if (strcmp(fn, "HeapReAlloc") == 0) {
        /* HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes) */
        int zero = (a1 & 0x08u) != 0;
        ret_val = pc_guest_realloc(a2, a3, zero);
    } else if (strcmp(fn, "HeapSize") == 0) {
        /* HeapSize(hHeap, dwFlags, lpMem) */
        ret_val = pc_guest_size(a2);
    } else if (strcmp(fn, "HeapFree") == 0) {
        /* HeapFree(hHeap, dwFlags, lpMem) */
        ret_val = (uint32_t)pc_guest_free(a2);
    } else if (strcmp(fn, "GlobalAlloc") == 0) {
        /* GlobalAlloc(uFlags, dwBytes) */
        ret_val = pc_guest_alloc(a1, 1);
    } else if (strcmp(fn, "VirtualAlloc") == 0) {
        /* VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect) */
        if (a0 != 0 && a0 >= GUEST_HEAP_START && a0 + a1 <= GUEST_HEAP_END) {
            ret_val = a0;
        } else {
            ret_val = pc_guest_alloc(a1, 1);
        }
    } else if (strcmp(fn, "VirtualFree") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "VirtualProtect") == 0) {
        if (a3) guest_write32(a3, 0x40);
        ret_val = 1;
    } else if (strcmp(fn, "VirtualQuery") == 0) {
        if (a1 && a2 >= 28) {
            guest_write32(a1 + 0, a0 & ~0xFFFu);
            guest_write32(a1 + 4, 0x00400000u);
            guest_write32(a1 + 8, 0x40);
            guest_write32(a1 + 12, 0x10000);
            guest_write32(a1 + 16, 0x1000); /* MEM_COMMIT */
            guest_write32(a1 + 20, 0x40);   /* PAGE_EXECUTE_READWRITE */
            guest_write32(a1 + 24, 0x20000);
            ret_val = 28;
        }
    } else if (strcmp(fn, "IsBadReadPtr") == 0 ||
               strcmp(fn, "IsBadWritePtr") == 0 ||
               strcmp(fn, "IsBadCodePtr") == 0) {
        ret_val = (a0 < 0x00010000u || a0 >= GUEST_MEM_SIZE) ? 1 : 0;
    } else if (strcmp(fn, "WideCharToMultiByte") == 0) {
        /* WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar) */
        uint32_t src_va = a2;
        int cch_w = (int32_t)a3;
        uint32_t dst_va = a4;
        int cb_mb = (int32_t)a5;
        if (a7) guest_write32(a7, 0);
        if (!src_va) {
            ret_val = 0;
        } else {
            int len = 0;
            if (cch_w < 0) {
                while (guest_read16(src_va + (uint32_t)len * 2u) != 0) len++;
                len++; /* include NUL */
            } else {
                len = cch_w;
            }
            if (cb_mb == 0 || dst_va == 0) {
                ret_val = (uint32_t)len;
            } else {
                int n = len < cb_mb ? len : cb_mb;
                uint8_t *dst = guest_ptr(dst_va);
                for (int i = 0; i < n; i++) {
                    uint16_t wc = guest_read16(src_va + (uint32_t)i * 2u);
                    dst[i] = (wc < 256) ? (uint8_t)wc : '?';
                }
                ret_val = (uint32_t)n;
            }
        }
    } else if (strcmp(fn, "MultiByteToWideChar") == 0) {
        /* MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar) */
        uint32_t src_va = a2;
        int cb_mb = (int32_t)a3;
        uint32_t dst_va = a4;
        int cch_w = (int32_t)a5;
        if (!src_va) {
            ret_val = 0;
        } else {
            const uint8_t *src = guest_ptr(src_va);
            int len = (cb_mb < 0) ? ((int)strlen((const char *)src) + 1) : cb_mb;
            if (cch_w == 0 || dst_va == 0) {
                ret_val = (uint32_t)len;
            } else {
                int n = len < cch_w ? len : cch_w;
                for (int i = 0; i < n; i++) {
                    guest_write16(dst_va + (uint32_t)i * 2u, (uint16_t)src[i]);
                }
                ret_val = (uint32_t)n;
            }
        }
    } else if (strcmp(fn, "GetStringTypeA") == 0) {
        /* GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType) */
        uint32_t src_va = a2;
        int cch = (int32_t)a3;
        uint32_t dst_va = a4;
        if (src_va && dst_va) {
            const uint8_t *s = guest_ptr(src_va);
            int n = (cch < 0) ? ((int)strlen((const char *)s) + 1) : cch;
            for (int i = 0; i < n; i++) {
                uint8_t c = s[i];
                uint16_t mask = 0;
                if (isupper(c)) mask |= 0x0001;
                if (islower(c)) mask |= 0x0002;
                if (isdigit(c)) mask |= 0x0004;
                if (isspace(c)) mask |= 0x0008;
                if (ispunct(c)) mask |= 0x0010;
                if (iscntrl(c)) mask |= 0x0020;
                if (isxdigit(c)) mask |= 0x0080;
                if (isalpha(c)) mask |= 0x0100;
                guest_write16(dst_va + (uint32_t)i * 2u, mask);
            }
            ret_val = 1;
        }
    } else if (strcmp(fn, "GetStringTypeW") == 0) {
        /* GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType) */
        uint32_t src_va = a1;
        int cch = (int32_t)a2;
        uint32_t dst_va = a3;
        if (src_va && dst_va) {
            int n = 0;
            if (cch < 0) {
                while (guest_read16(src_va + (uint32_t)n * 2u) != 0) n++;
                n++;
            } else {
                n = cch;
            }
            for (int i = 0; i < n; i++) {
                uint16_t wc = guest_read16(src_va + (uint32_t)i * 2u);
                uint8_t c = (wc < 128) ? (uint8_t)wc : 'a';
                uint16_t mask = 0;
                if (isupper(c)) mask |= 0x0001;
                if (islower(c)) mask |= 0x0002;
                if (isdigit(c)) mask |= 0x0004;
                if (isspace(c)) mask |= 0x0008;
                if (ispunct(c)) mask |= 0x0010;
                if (iscntrl(c)) mask |= 0x0020;
                if (isxdigit(c)) mask |= 0x0080;
                if (isalpha(c)) mask |= 0x0100;
                guest_write16(dst_va + (uint32_t)i * 2u, mask);
            }
            ret_val = 1;
        }
    } else if (strcmp(fn, "LCMapStringA") == 0) {
        /* LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest) */
        uint32_t src_va = a2;
        int cch_src = (int32_t)a3;
        uint32_t dst_va = a4;
        int cch_dst = (int32_t)a5;
        if (src_va) {
            const char *s = (const char *)guest_ptr(src_va);
            int n = (cch_src < 0) ? ((int)strlen(s) + 1) : cch_src;
            if (cch_dst == 0 || dst_va == 0) {
                ret_val = (uint32_t)n;
            } else {
                int copy = n < cch_dst ? n : cch_dst;
                uint8_t *d = guest_ptr(dst_va);
                for (int i = 0; i < copy; i++) {
                    uint8_t c = (uint8_t)s[i];
                    if (a1 & 0x0100u) c = (uint8_t)tolower(c);
                    else if (a1 & 0x0200u) c = (uint8_t)toupper(c);
                    d[i] = c;
                }
                ret_val = (uint32_t)copy;
            }
        }
    } else if (strcmp(fn, "LCMapStringW") == 0) {
        uint32_t src_va = a2;
        int cch_src = (int32_t)a3;
        uint32_t dst_va = a4;
        int cch_dst = (int32_t)a5;
        if (src_va) {
            int n = 0;
            if (cch_src < 0) {
                while (guest_read16(src_va + (uint32_t)n * 2u) != 0) n++;
                n++;
            } else {
                n = cch_src;
            }
            if (cch_dst == 0 || dst_va == 0) {
                ret_val = (uint32_t)n;
            } else {
                int copy = n < cch_dst ? n : cch_dst;
                for (int i = 0; i < copy; i++) {
                    uint16_t wc = guest_read16(src_va + (uint32_t)i * 2u);
                    if (wc < 128) {
                        if (a1 & 0x0100u) wc = (uint16_t)tolower((int)wc);
                        else if (a1 & 0x0200u) wc = (uint16_t)toupper((int)wc);
                    }
                    guest_write16(dst_va + (uint32_t)i * 2u, wc);
                }
                ret_val = (uint32_t)copy;
            }
        }
    } else if (strcmp(fn, "CompareStringA") == 0 || strcmp(fn, "CompareStringW") == 0) {
        ret_val = 2; /* CSTR_EQUAL */
    } else if (strcmp(fn, "GetLocaleInfoA") == 0) {
        if (a2 && a3 > 0) {
            strcpy((char *)guest_ptr(a2), "C");
            ret_val = 2;
        }
    } else if (strcmp(fn, "GetCurrentProcessId") == 0) {
        ret_val = 1000;
    } else if (strcmp(fn, "GetCurrentThreadId") == 0) {
        ret_val = 1001;
    } else if (strcmp(fn, "GetCurrentProcess") == 0) {
        ret_val = 0xFFFFFFFFu;
    } else if (strcmp(fn, "GetCurrentThread") == 0) {
        ret_val = 0xFFFFFFFEu;
    } else if (strcmp(fn, "GetLastError") == 0) {
        ret_val = g_last_error;
    } else if (strcmp(fn, "SetUnhandledExceptionFilter") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "GetSystemTimeAsFileTime") == 0) {
        if (a0) {
            guest_write32(a0 + 0, 0xD53E8000u);
            guest_write32(a0 + 4, 0x01D90000u);
        }
    } else if (strcmp(fn, "GetTickCount") == 0 || strcmp(fn, "timeGetTime") == 0) {
        ret_val = (uint32_t)get_host_ticks_ms();
    } else if (strcmp(fn, "QueryPerformanceFrequency") == 0) {
        if (a0) {
            uint64_t f = get_host_qpf();
            guest_write32(a0 + 0, (uint32_t)(f & 0xFFFFFFFFu));
            guest_write32(a0 + 4, (uint32_t)(f >> 32));
        }
        ret_val = 1;
    } else if (strcmp(fn, "QueryPerformanceCounter") == 0) {
        if (a0) {
            uint64_t c = get_host_qpc_us();
            guest_write32(a0 + 0, (uint32_t)(c & 0xFFFFFFFFu));
            guest_write32(a0 + 4, (uint32_t)(c >> 32));
        }
        ret_val = 1;
    } else if (strcmp(fn, "Sleep") == 0) {
        if (a0 > 0 && a0 <= 50) {
#if defined(_WIN32)
            Sleep(a0);
#else
            usleep(a0 * 1000u);
#endif
        }
        ret_val = 0;
    } else if (strcmp(fn, "GetSystemInfo") == 0) {
        if (a0) {
            memset(guest_ptr(a0), 0, 36);
            guest_write32(a0 + 4, 4096);       /* dwPageSize */
            guest_write32(a0 + 8, 0x00010000u);/* lpMinimumApplicationAddress */
            guest_write32(a0 + 12, 0x7FFEFFFFu);/* lpMaximumApplicationAddress */
            guest_write32(a0 + 16, 1);         /* dwActiveProcessorMask */
            guest_write32(a0 + 20, 1);         /* dwNumberOfProcessors */
            guest_write32(a0 + 24, 586);       /* dwProcessorType = PENTIUM */
            guest_write32(a0 + 28, 65536);     /* dwAllocationGranularity */
        }
    } else if (strcmp(fn, "GetLogicalDrives") == 0) {
        ret_val = 0x0000000Cu; /* C: and D: */
    } else if (strcmp(fn, "GetDriveTypeA") == 0) {
        ret_val = 3; /* DRIVE_FIXED */
    } else if (strcmp(fn, "OutputDebugStringA") == 0) {
        if (a0) {
            const char *msg = (const char *)guest_ptr(a0);
            size_t len = strlen(msg);
            while (len > 0 && (msg[len - 1] == '\n' || msg[len - 1] == '\r')) len--;
            PC_LOGI("[GAME LOG] %.*s", (int)len, msg);
            mc2_diag_record(diag_game_severity(msg, len), "%.*s",
                            (int)(len > 190 ? 190 : len), msg);
        }
    } else if (strcmp(fn, "CreateFileA") == 0) {
        /* CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSec, dwCreationDisposition, dwFlags, hTemplate) */
        const char *gpath = a0 ? (const char *)guest_ptr(a0) : "";
        char host_path[1024];
        translate_guest_path(gpath, host_path, sizeof(host_path));
        int write_access = (a1 & 0x40000000u) != 0; /* GENERIC_WRITE */
        const char *mode = "rb";
        if (write_access) {
            ensure_parent_dirs_exist(host_path);
            /* Win32 creation disposition:
               CREATE_NEW = 1, CREATE_ALWAYS = 2, OPEN_EXISTING = 3, OPEN_ALWAYS = 4, TRUNCATE_EXISTING = 5 */
            if (a4 == 1 || a4 == 2 || a4 == 5) {
                mode = "wb+";
            } else {
                mode = "rb+";
            }
        }
        /* Para userdata/ (partidas guardadas y .cfg), priorizar siempre la carpeta
           grabable de datos (Midnight Club II/userdata/) sobre SAF para que los
           guardados nuevos o actualizados no queden tapados por el SAF original. */
        int is_userdata = (strstr(host_path, "/userdata/") != NULL);
        FILE *fp = NULL;
        if (write_access) {
            fp = fopen(host_path, mode);
        } else if (is_userdata) {
            fp = fopen(host_path, mode);
            if (!fp) fp = open_registered_data(host_path, mode);
        } else {
            fp = open_registered_data(host_path, mode);
            if (!fp) fp = fopen(host_path, mode);
        }
        if (!fp && !write_access) {
            char alt_path[1024];
            strncpy(alt_path, host_path, sizeof(alt_path) - 1);
            alt_path[sizeof(alt_path) - 1] = '\0';
            lowercase_relative_portion(alt_path);
            if (is_userdata) {
                fp = fopen(alt_path, mode);
                if (!fp) fp = open_registered_data(alt_path, mode);
            } else {
                fp = open_registered_data(alt_path, mode);
                if (!fp) fp = fopen(alt_path, mode);
            }
            if (fp) {
                strncpy(host_path, alt_path, sizeof(host_path) - 1);
            }
        }
        if (!fp && write_access) {
            fp = fopen(host_path, "wb+");
        }
        if (!fp && !write_access && strstr(gpath, "psx2icon") != NULL) {
            /* Icono de la edicion PS2 que el binario de PC sigue sondeando. La
               instalacion original no lo incluye; se entrega un archivo vacio
               para que LogOneFile no falle y no desactive el gestor de progreso. */
            ensure_parent_dirs_exist(host_path);
            FILE *tmp = fopen(host_path, "wb");
            if (tmp) fclose(tmp);
            fp = fopen(host_path, "rb");
            if (fp) PORTDBG("[DATA] icono PS2 satisfecho con archivo vacio: %s", gpath);
        }
        if (fp) {
            ret_val = alloc_file_handle(fp, host_path);
            g_last_error = 0;
            PC_LOGI("[FILE] CreateFileA(\"%s\") -> \"%s\" handle=0x%X (write=%d disp=%u)",
                    gpath, host_path, ret_val, write_access, a4);
        } else {
            ret_val = 0xFFFFFFFFu; /* INVALID_HANDLE_VALUE */
            g_last_error = 2;      /* ERROR_FILE_NOT_FOUND */
            /* Los .red/.cfg de userdata los CREA el juego al jugar: no son
               datos ausentes. Se clasifican por PortDebug y no se inundan
               como [FILE MISS], que queda reservado para datos reales. */
            if (strstr(host_path, "/userdata/") == NULL) {
                PC_LOGW("[FILE MISS] CreateFileA(\"%s\") -> \"%s\" NOT FOUND "
                        "(write=%d disp=%u)", gpath, host_path, write_access, a4);
            }
            if (strstr(host_path, "/userdata/") != NULL) {
                /* Los .red y .cfg los crea el juego al jugar: no son datos ausentes. */
                PORTDBG("[DATA] guardado aun no creado: %s", gpath);
            } else if (strstr(gpath, "psx2icon") != NULL
                       || strstr(gpath, "iconview.psi") != NULL) {
                /* Icono de la edicion PS2 que el binario de PC sigue sondeando;
                   la instalacion de PC no lo incluye y su ausencia es normal. */
                PORTDBG("[DATA] icono PS2 ausente (esperado en PC): %s", gpath);
            } else {
                PORTDBG("[DATA] ARCHIVO NO ENCONTRADO: %s (resuelto: %s)",
                        gpath, host_path);
                mc2_diag_record(DIAG_ERROR, "ARCHIVO NO ENCONTRADO: %s", gpath);
            }
        }
    } else if (strcmp(fn, "ReadFile") == 0) {
        /* ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped) */
        GuestFileSlot *s = get_file_slot(a0);
        if (s && s->fp && a1) {
            long saved_pos = -1;
            if (a4 != 0) {
                /* OVERLAPPED: Offset en +8, OffsetHigh en +12. Win32 NO mueve
                   el puntero del archivo en E/S superpuesta; antes se leia solo
                   la parte baja (32 bits) y se dejaba el puntero desplazado,
                   corrompiendo las lecturas secuenciales posteriores. */
                uint32_t off_lo = guest_read32(a4 + 8);
                uint32_t off_hi = guest_read32(a4 + 12);
                int64_t off = ((int64_t)(int32_t)off_hi << 32) | (uint32_t)off_lo;
                saved_pos = ftell(s->fp);
                fseek(s->fp, (long)off, SEEK_SET);
            }
            size_t n = fread(guest_ptr(a1), 1, a2, s->fp);
            if (saved_pos >= 0) fseek(s->fp, saved_pos, SEEK_SET);
            if (a3) guest_write32(a3, (uint32_t)n);
            if (a4) {
                guest_write32(a4 + 0, 0); /* Internal = STATUS_SUCCESS */
                guest_write32(a4 + 4, (uint32_t)n); /* InternalHigh = bytes transferred */
            }
            ret_val = 1;
            g_last_error = 0;
        } else {
            if (a3) guest_write32(a3, 0);
            ret_val = 0;
            g_last_error = 6; /* ERROR_INVALID_HANDLE */
        }
    } else if (strcmp(fn, "GetOverlappedResult") == 0) {
        /* GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait) */
        if (a1 && a2) {
            guest_write32(a2, guest_read32(a1 + 4));
        }
        ret_val = 1;
    } else if (strcmp(fn, "WriteFile") == 0) {
        /* WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped) */
        if (a0 == 0x1002u || a0 == 0x1003u) {
            if (a1 && a2 > 0) {
                fwrite(guest_ptr(a1), 1, a2, stderr);
                fflush(stderr);
            }
            if (a3) guest_write32(a3, a2);
            ret_val = 1;
        } else {
            GuestFileSlot *s = get_file_slot(a0);
            if (s && s->fp && a1) {
                size_t n = fwrite(guest_ptr(a1), 1, a2, s->fp);
                fflush(s->fp);
                if (a3) guest_write32(a3, (uint32_t)n);
                ret_val = 1;
            } else {
                if (a3) guest_write32(a3, 0);
                ret_val = 0;
            }
        }
    } else if (strcmp(fn, "SetFilePointer") == 0) {
        /* SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod) */
        GuestFileSlot *s = get_file_slot(a0);
        if (s && s->fp) {
            int whence = (a3 == 1) ? SEEK_CUR : (a3 == 2 ? SEEK_END : SEEK_SET);
            /* lDistanceToMove es int32 con signo; lpDistanceToMoveHigh aporta
               los 32 bits altos y debe devolverse actualizado. Antes se ignoraba
               y se escribia 0 a ciegas. */
            int64_t dist = (int64_t)(int32_t)a1;
            if (a2) dist += (int64_t)(int32_t)guest_read32(a2) << 32;
            fseek(s->fp, (long)dist, whence);
            long pos = ftell(s->fp);
            if (a2) guest_write32(a2, (uint32_t)(((uint64_t)(int64_t)pos) >> 32));
            ret_val = (uint32_t)pos;
            g_last_error = 0;
        } else {
            ret_val = 0xFFFFFFFFu;
            g_last_error = 6;
        }
    } else if (strcmp(fn, "FlushFileBuffers") == 0 || strcmp(fn, "SetEndOfFile") == 0) {
        GuestFileSlot *s = get_file_slot(a0);
        if (s && s->fp) fflush(s->fp);
        ret_val = 1;
    } else if (strcmp(fn, "CloseHandle") == 0) {
        GuestFileSlot *s = get_file_slot(a0);
        if (s) {
            if (s->fp) fclose(s->fp);
            s->in_use = 0;
            s->fp = NULL;
        }
        ret_val = 1;
    } else if (strcmp(fn, "FindFirstFileA") == 0) {
        const char *gpat = a0 ? (const char *)guest_ptr(a0) : "";
        char host_pat[1024];
        translate_guest_path(gpat, host_pat, sizeof(host_pat));
#if defined(_WIN32)
        WIN32_FIND_DATAA wfd;
        HANDLE h = FindFirstFileA(host_pat, &wfd);
        if (h != INVALID_HANDLE_VALUE && a1) {
            memcpy(guest_ptr(a1), &wfd, sizeof(WIN32_FIND_DATAA));
            FindClose(h);
            ret_val = 0x3001u;
            g_last_error = 0;
        } else {
            ret_val = 0xFFFFFFFFu;
            g_last_error = 2;
        }
#else

        char dir_buf[512];
        char pat_buf[256];
        const char *last_slash = strrchr(host_pat, '/');
        if (last_slash) {
            size_t dlen = (size_t)(last_slash - host_pat);
            if (dlen >= sizeof(dir_buf)) dlen = sizeof(dir_buf) - 1;
            memcpy(dir_buf, host_pat, dlen);
            dir_buf[dlen] = '\0';
            strncpy(pat_buf, last_slash + 1, sizeof(pat_buf) - 1);
            pat_buf[sizeof(pat_buf) - 1] = '\0';
        } else {
            strncpy(dir_buf, ".", sizeof(dir_buf));
            strncpy(pat_buf, host_pat, sizeof(pat_buf) - 1);
            pat_buf[sizeof(pat_buf) - 1] = '\0';
        }

        /* Prefijo relativo del directorio pedido, normalizado como las claves
           del mapa SAF. */
        char rel_dir[256];
        const char *rd = dir_buf;
        size_t base_len = strlen(g_game_dir);
        if (base_len > 0 && strncmp(dir_buf, g_game_dir, base_len) == 0) {
            rd = dir_buf + base_len;
        }
        normalize_data_path(rd, rel_dir, sizeof(rel_dir));
        size_t rl = strlen(rel_dir);

        int found_slot = -1;
        for (int s = 0; s < 16; s++) {
            if (!g_find_handles[s].in_use) { found_slot = s; break; }
        }

        if (found_slot >= 0) {
            HostFindHandle *h = &g_find_handles[found_slot];
            memset(h, 0, sizeof(*h));
            h->in_use = 1;
            strncpy(h->dir_path, dir_buf, sizeof(h->dir_path) - 1);
            strncpy(h->pattern, pat_buf, sizeof(h->pattern) - 1);

            /* Para userdata/, escanear primero la carpeta grabable para que los
               tamanos y archivos actualizados prevalezcan sobre SAF. */
            int scan_local_first = (strstr(dir_buf, "/userdata") != NULL);
            for (int pass = 0; pass < 2; pass++) {
                if ((pass == 0) == scan_local_first) {
                    /* Guardados y archivos creados por el juego en carpeta grabable. */
                    DIR *d = opendir(dir_buf);
                    if (!d) {
                        lowercase_relative_portion(dir_buf);
                        d = opendir(dir_buf);
                    }
                    if (d) {
                        struct dirent *de;
                        while ((de = readdir(d)) != NULL) {
                            if (strcmp(de->d_name, ".") == 0 ||
                                strcmp(de->d_name, "..") == 0) continue;
                            if (!host_match_wildcard(pat_buf, de->d_name)) continue;
                            char full_entry[1024];
                            snprintf(full_entry, sizeof(full_entry), "%s/%s",
                                     dir_buf, de->d_name);
                            struct stat st;
                            memset(&st, 0, sizeof(st));
                            stat(full_entry, &st);
                            find_add_entry(h, de->d_name,
                                           S_ISDIR(st.st_mode) ? 0x10u : 0x80u,
                                           (long long) st.st_size);
                        }
                        closedir(d);
                    }
                } else {
                    /* Archivos del arbol SAF bajo este directorio. */
                    for (int i = 0; i < g_data_fd_count; i++) {
                        const char *p = g_data_fds[i].path;
                        const char *rest;
                        if (rl == 0) rest = p;
                        else if (strncmp(p, rel_dir, rl) == 0 && p[rl] == '/') rest = p + rl + 1;
                        else continue;
                        const char *slash = strchr(rest, '/');
                        if (slash) {
                            char sub[256];
                            size_t n = (size_t)(slash - rest);
                            if (n > 255) n = 255;
                            memcpy(sub, rest, n);
                            sub[n] = '\0';
                            if (host_match_wildcard(pat_buf, sub))
                                find_add_entry(h, sub, 0x10u, 0);
                        } else if (host_match_wildcard(pat_buf, rest)) {
                            find_add_entry(h, rest, 0x80u, g_data_fds[i].size);
                        }
                    }
                }
            }

            if (h->list_count > 0) {
                const char *name = h->names[0];
                uint32_t attr = h->attrs[0];
                long long fsize = h->sizes[0];
                h->list_index = 1;
                find_fill_win32_data(a1, name, attr, fsize);
                ret_val = 0x3100u + (uint32_t) found_slot;
                g_last_error = 0;
                PC_LOGI("[FS] FindFirstFileA(\"%s\") -> \"%s\" (%d entradas, SAF+privada)",
                        gpat, name, h->list_count);
            } else {
                memset(h, 0, sizeof(*h));
                found_slot = -1;
            }
        }

        if (found_slot < 0) {
            /* Ultimo recurso: coincidencia exacta por stat. */
            struct stat st;
            if (stat(host_pat, &st) != 0) {
                lowercase_relative_portion(host_pat);
            }
            if (stat(host_pat, &st) == 0 && a1) {
                memset(guest_ptr(a1), 0, 320);
                guest_write32(a1 + 0, S_ISDIR(st.st_mode) ? 0x10u : 0x80u);
                guest_write32(a1 + 28, (uint32_t)(((uint64_t) st.st_size) >> 32));
                guest_write32(a1 + 32, (uint32_t)(((uint64_t) st.st_size) & 0xFFFFFFFFu));
                const char *base = strrchr(host_pat, '/');
                strncpy((char *) guest_ptr(a1 + 44), base ? base + 1 : host_pat, 259);
                ret_val = 0x3099u;
                g_last_error = 0;
            } else {
                ret_val = 0xFFFFFFFFu;
                g_last_error = 2;
                PC_LOGW("[FS] FindFirstFileA(\"%s\") -> SIN COINCIDENCIAS", gpat);
                mc2_diag_record(DIAG_WARNING, "FindFirstFileA sin coincidencias: %s", gpat);
            }
        }

#endif
    } else if (strcmp(fn, "FindNextFileA") == 0) {
        ret_val = 0;
        g_last_error = 18; /* ERROR_NO_MORE_FILES */
#if !defined(_WIN32)

        if (a0 >= 0x3100u && a0 < 0x3110u) {
            uint32_t slot = a0 - 0x3100u;
            HostFindHandle *h = &g_find_handles[slot];
            if (h->in_use && h->list_index < h->list_count) {
                int i = h->list_index++;
                find_fill_win32_data(a1, h->names[i], h->attrs[i], h->sizes[i]);
                ret_val = 1;
                g_last_error = 0;
                PC_LOGI("[FS] FindNextFileA -> \"%s\" (%d/%d)",
                        h->names[i], h->list_index, h->list_count);
            }
        }

#endif
    } else if (strcmp(fn, "FindClose") == 0) {
#if !defined(_WIN32)

        if (a0 >= 0x3100u && a0 < 0x3110u) {
            uint32_t slot = a0 - 0x3100u;
            memset(&g_find_handles[slot], 0, sizeof(g_find_handles[slot]));
        }

#endif
        ret_val = 1;
    } else if (strcmp(fn, "CreateThread") == 0) {
        /* CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId) */
        PC_LOGI("[THREAD] CreateThread(start=0x%08X, param=0x%08X, flags=0x%X)", a2, a3, a4);
        if (a5) guest_write32(a5, 1002);
        recomp_func_t worker_fn = recomp_lookup(a2);
        if (worker_fn) {
            uint32_t s_eax = g_eax, s_ecx = g_ecx, s_edx = g_edx, s_esp = g_esp;
            uint32_t s_ebx = g_ebx, s_esi = g_esi, s_edi = g_edi;
            uint32_t s_ebp = g_ebp, s_seh = g_seh_ebp, s_kva = g_tls_kernel_va;
            g_esp = 0x018FF000u;
            g_ebp = g_esp;
            g_seh_ebp = g_esp;
            g_esp -= 4; guest_write32(g_esp, a3); /* lpParameter */
            g_esp -= 4; guest_write32(g_esp, 0);  /* return address */
            worker_fn();
            g_eax = s_eax; g_ecx = s_ecx; g_edx = s_edx; g_esp = s_esp;
            g_ebx = s_ebx; g_esi = s_esi; g_edi = s_edi;
            g_ebp = s_ebp; g_seh_ebp = s_seh; g_tls_kernel_va = s_kva;
        }
        ret_val = 0x4001u;
    } else if (strcmp(fn, "ResumeThread") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "SetThreadPriority") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "GetThreadPriority") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "ExitProcess") == 0 || strcmp(fn, "TerminateProcess") == 0) {
        uint32_t caller = guest_read32(g_esp);
        PC_LOGI("[EXIT] %s(code=%u) called after %u frames! caller=0x%08X (esp=0x%08X)",
                fn, a0, g_frame_count, caller, g_esp);
        g_eax = a0;
        if (g_exit_jmp_valid) {
            longjmp(g_exit_jmp, 1);
        }
        exit((int)a0);
    }

    /* ── user32.dll & gdi32.dll ───────────────────────────────── */
    else if (strcmp(fn, "RegisterClassA") == 0) {
        if (a0) {
            g_wndproc_va = guest_read32(a0 + 4); /* lpfnWndProc */
            PC_LOGI("[USER32] RegisterClassA(wndproc=0x%08X)", g_wndproc_va);
        }
        ret_val = 0xC001u;
    } else if (strcmp(fn, "CreateWindowExA") == 0) {
        const char *title = a2 ? (const char *)guest_ptr(a2) : "";
        PC_LOGI("[USER32] CreateWindowExA(title=\"%s\", w=%d, h=%d) -> hWnd=0x%X",
                title, (int)a6, (int)a7, g_hwnd_main);
        ret_val = g_hwnd_main;
    } else if (strcmp(fn, "GetDesktopWindow") == 0) {
        ret_val = 0x00010004u;
    } else if (strcmp(fn, "GetDC") == 0) {
        ret_val = 0x00010020u;
    } else if (strcmp(fn, "ReleaseDC") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "GetDeviceCaps") == 0) {
        /* HORZRES=8, VERTRES=10, BITSPIXEL=12, PLANES=14, VREFRESH=116 */
        if (a1 == 8) ret_val = (uint32_t)mc2_pc_get_dev_w();
        else if (a1 == 10) ret_val = (uint32_t)mc2_pc_get_dev_h();
        else if (a1 == 12) ret_val = 32;
        else if (a1 == 14) ret_val = 1;
        else if (a1 == 116) ret_val = 60;
        else ret_val = 1;
    } else if (strcmp(fn, "CreateSolidBrush") == 0) {
        ret_val = 0x00010030u;
    } else if (strcmp(fn, "GetSystemMetrics") == 0) {
        if (a0 == 0) ret_val = (uint32_t)mc2_pc_get_dev_w();      /* SM_CXSCREEN */
        else if (a0 == 1) ret_val = (uint32_t)mc2_pc_get_dev_h(); /* SM_CYSCREEN */
        else ret_val = 0;
    } else if (strcmp(fn, "GetClientRect") == 0 || strcmp(fn, "GetWindowRect") == 0) {
        if (a1) {
            guest_write32(a1 + 0, 0);
            guest_write32(a1 + 4, 0);
            guest_write32(a1 + 8, (uint32_t)mc2_pc_get_dev_w());
            guest_write32(a1 + 12, (uint32_t)mc2_pc_get_dev_h());
        }
        ret_val = 1;
    } else if (strcmp(fn, "SetRect") == 0) {
        if (a0) {
            guest_write32(a0 + 0, a1);
            guest_write32(a0 + 4, a2);
            guest_write32(a0 + 8, a3);
            guest_write32(a0 + 12, a4);
        }
        ret_val = 1;
    } else if (strcmp(fn, "AdjustWindowRect") == 0 ||
               strcmp(fn, "ShowWindow") == 0 ||
               strcmp(fn, "UpdateWindow") == 0 ||
               strcmp(fn, "SetFocus") == 0 ||
               strcmp(fn, "SetWindowTextA") == 0 ||
               strcmp(fn, "ShowCursor") == 0 ||
               strcmp(fn, "DestroyWindow") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "LoadIconA") == 0 || strcmp(fn, "LoadCursorA") == 0) {
        ret_val = 0x00010040u;
    } else if (strcmp(fn, "PeekMessageA") == 0) {
        ret_val = 0;
        if (a0) {
            mc2_render_lock();
            if (g_win32_msg_tail != g_win32_msg_head) {
                Mc2Win32Msg m = g_win32_msgs[g_win32_msg_tail];
                if (a4 & 1u) { /* PM_REMOVE */
                    g_win32_msg_tail = (g_win32_msg_tail + 1u) & 63u;
                }
                guest_write32(a0 + 0, g_hwnd_main);
                guest_write32(a0 + 4, m.msg);
                guest_write32(a0 + 8, m.wparam);
                guest_write32(a0 + 12, m.lparam);
                guest_write32(a0 + 16, g_frame_count * 16u);
                guest_write32(a0 + 20, m.x);
                guest_write32(a0 + 24, m.y);
                ret_val = 1;
            }
            mc2_render_unlock();
        }
    } else if (strcmp(fn, "GetMessageA") == 0) {
        ret_val = 1;
    } else if (strcmp(fn, "TranslateMessage") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "DispatchMessageA") == 0) {
        ret_val = 0;
        if (a0 && g_wndproc_va) {
            uint32_t hwnd = guest_read32(a0 + 0);
            uint32_t msg  = guest_read32(a0 + 4);
            uint32_t wp   = guest_read32(a0 + 8);
            uint32_t lp   = guest_read32(a0 + 12);
            recomp_func_t wndproc = recomp_lookup(g_wndproc_va);
            if (wndproc) {
                static int s_wmchar_logs = 0;
                if (msg == 0x0102u && s_wmchar_logs < 30) {
                    s_wmchar_logs++;
                    PC_LOGI("[USER32] DispatchMessageA(WM_CHAR=0x%X '%c') -> wndproc=0x%08X",
                            wp, (wp >= 32 && wp < 127) ? (char)wp : '?', g_wndproc_va);
                }
                uint32_t s_eax = g_eax, s_ecx = g_ecx, s_edx = g_edx, s_esp = g_esp;
                uint32_t s_ebx = g_ebx, s_esi = g_esi, s_edi = g_edi, s_ebp = g_ebp;
                g_esp -= 4; guest_write32(g_esp, lp);
                g_esp -= 4; guest_write32(g_esp, wp);
                g_esp -= 4; guest_write32(g_esp, msg);
                g_esp -= 4; guest_write32(g_esp, hwnd);
                g_esp -= 4; guest_write32(g_esp, 0); /* return address */
                wndproc();
                ret_val = g_eax;
                g_eax = s_eax; g_ecx = s_ecx; g_edx = s_edx; g_esp = s_esp;
                g_ebx = s_ebx; g_esi = s_esi; g_edi = s_edi; g_ebp = s_ebp;
            }
        }
    } else if (strcmp(fn, "DefWindowProcA") == 0 ||
               strcmp(fn, "SendMessageA") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "MessageBoxA") == 0) {
        const char *txt = a1 ? (const char *)guest_ptr(a1) : "";
        const char *cap = a2 ? (const char *)guest_ptr(a2) : "";
        PC_LOGW("[MessageBoxA] [%s]: %s", cap, txt);
        ret_val = 1; /* IDOK */
    } else if (strcmp(fn, "wvsprintfA") == 0) {
        /* wvsprintfA(lpOutput, lpFmt, arglist) */
        if (a0 && a1) {
            const char *fmt = (const char *)guest_ptr(a1);
            /* Simple safe copy/format */
            strcpy((char *)guest_ptr(a0), fmt);
            ret_val = (uint32_t)strlen(fmt);
        }
    }

    /* ── advapi32.dll / version.dll / ole32.dll ───────────────── */
    else if (strcmp(fn, "RegOpenKeyExA") == 0 || strcmp(fn, "RegQueryValueExA") == 0) {
        ret_val = 2; /* ERROR_FILE_NOT_FOUND */
    } else if (strcmp(fn, "RegCreateKeyExA") == 0 ||
               strcmp(fn, "RegSetValueExA") == 0 ||
               strcmp(fn, "RegCloseKey") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "GetFileVersionInfoSizeA") == 0) {
        if (a1) guest_write32(a1, 0);
        ret_val = 0;
    } else if (strcmp(fn, "GetFileVersionInfoA") == 0 || strcmp(fn, "VerQueryValueA") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "CoInitialize") == 0 || strcmp(fn, "CoUninitialize") == 0) {
        ret_val = 0;
    } else if (strcmp(fn, "CoCreateInstance") == 0) {
        /* CoCreateInstance(rclsid=a0, pUnkOuter=a1, dwClsContext=a2, riid=a3, ppv=a4) */
        uint32_t out_obj = (a0 == 0x0065F20Cu || a4 == 0x008567C8u) ? g_obj_dmloader8 : g_obj_dmperf8;
        if (a4) guest_write32(a4, out_obj);
        PC_LOGI("[OLE32] CoCreateInstance(rclsid=0x%08X, riid=0x%08X, ppv=0x%08X) -> 0x%08X",
                a0, a3, a4, out_obj);
        ret_val = 0; /* S_OK */
    }

    /* ── d3d9.dll & dinput8.dll ───────────────────────────────── */
    else if (strcmp(fn, "Direct3DCreate9") == 0) {
        PC_LOGI("[D3D9] Direct3DCreate9(SDKVersion=%u) -> 0x%08X", a0, g_obj_d3d9);
        ret_val = g_obj_d3d9;
    } else if (strcmp(fn, "DirectInput8Create") == 0) {
        PC_LOGI("[DINPUT8] DirectInput8Create(ver=0x%X, ppvOut=0x%08X) -> 0x%08X", a1, a3, g_obj_dinput8);
        if (a3) guest_write32(a3, g_obj_dinput8);
        ret_val = 0; /* DI_OK */
    }

    /* ── mss32.dll (Miles Sound System) ───────────────────────── */
    else if (strcmp(imp->dll, "mss32.dll") == 0) {
        if (strcmp(fn, "_AIL_quick_startup@20") == 0) {
            PC_LOGI("[MSS32] AIL_quick_startup(digital=%u, midi=%u, rate=%u, bits=%u, chans=%u)",
                    a0, a1, a2, a3, a4);
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_quick_handles@12") == 0) {
            if (a0) guest_write32(a0, 0x5000u); /* hDig */
            if (a1) guest_write32(a1, 0x5001u); /* hMidi */
            if (a2) guest_write32(a2, 0x5002u); /* hDLS */
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_allocate_sample_handle@4") == 0 ||
                   strcmp(fn, "_AIL_allocate_3D_sample_handle@4") == 0) {
            uint32_t h = 0;
            alloc_voice(&h);
            ret_val = h;
        } else if (strcmp(fn, "_AIL_init_sample@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) { v->cursor_frames = 0; v->cursor_pos = 0.0; v->status = SMP_STOPPED; }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_address@12") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v && a1 && a2) { parse_riff_wave(v, guest_ptr(a1), a2); }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_type@12") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) {
                v->channels = (a1 >= 2) ? 2 : 1;
                v->bits = (a1 & 1) ? 16 : 8;
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_loop_block@12") == 0 ||
                   strcmp(fn, "_AIL_set_3D_sample_loop_block@12") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) {
                uint32_t bps = (uint32_t)(v->channels * (v->bits / 8));
                if (bps == 0) bps = 2;
                uint32_t start_f = (uint32_t)a1;
                if (start_f > v->pcm_frames && (start_f / bps) <= v->pcm_frames) start_f /= bps;
                uint32_t end_f = (a2 == 0xFFFFFFFFu || a2 == 0) ? v->pcm_frames : (uint32_t)a2;
                if (end_f > v->pcm_frames && (end_f / bps) <= v->pcm_frames) end_f /= bps;
                if (end_f > v->pcm_frames) end_f = v->pcm_frames;
                if (start_f >= end_f || start_f >= v->pcm_frames) {
                    /* Invalid/EOF loop block: clear sub-block so voice does not freeze at pcm_frames */
                    v->loop_start = 0;
                    v->loop_end = 0;
                } else {
                    v->loop_start = start_f;
                    v->loop_end = end_f;
                }
                v->loop_count = 0;
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_3D_sample_distances@12") == 0 ||
                   strcmp(fn, "_AIL_set_3D_position@16") == 0 ||
                   strcmp(fn, "_AIL_set_3D_rolloff_factor@8") == 0) {
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_3D_sample_info@8") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v && a1) {
                uint32_t fmt = guest_read32(a1 + 0);
                uint32_t ptr_va = guest_read32(a1 + 4);
                uint32_t data_len = guest_read32(a1 + 8);
                uint32_t rate = guest_read32(a1 + 12);
                uint32_t bits = guest_read32(a1 + 16);
                uint32_t chans = guest_read32(a1 + 20);
                if (ptr_va && data_len > 0) {
                    const uint8_t *pdata = guest_ptr(ptr_va);
                    if (data_len >= 44 && memcmp(pdata, "RIFF", 4) == 0) {
                        parse_riff_wave(v, pdata, data_len);
                    } else {
                        v->channels = chans ? (int)chans : ((fmt >= 2u) ? 2 : 1);
                        v->bits = bits ? (int)bits : ((fmt & 1u) ? 16 : 8);
                        v->sample_rate = rate ? rate : 22050u;
                        uint32_t bps = (uint32_t)(v->channels * (v->bits / 8));
                        if (bps == 0) bps = 2;
                        v->pcm_frames = data_len / bps;
                        if (v->bits == 8) {
                            v->pcm8 = pdata;
                            v->pcm16 = NULL;
                        } else {
                            v->pcm16 = (const int16_t *)pdata;
                            v->pcm8 = NULL;
                        }
                        v->cursor_frames = 0;
                        v->cursor_pos = 0.0;
                    }
                }
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_playback_rate@8") == 0 ||
                   strcmp(fn, "_AIL_set_3D_sample_playback_rate@8") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v && a1 > 0) v->sample_rate = a1;
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_volume_pan@12") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) {
                float vol = decode_ail_vol_arg(a1);
                float pan = decode_ail_vol_arg(a2);
                static int s_vp_log = 0;
                if (s_vp_log < 12) {
                    PC_LOGI("[MSS32] set_sample_volume_pan(h=0x%X rawVol=0x%08X->%.3f rawPan=0x%08X->%.3f)",
                            a0, a1, vol, a2, pan);
                    s_vp_log++;
                }
                v->vol_l = vol * (1.0f - pan * 0.5f);
                v->vol_r = vol * (0.5f + pan * 0.5f);
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_3D_sample_volume@8") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) {
                float vol = decode_ail_vol_arg(a1);
                static int s_v3_log = 0;
                if (s_v3_log < 12) {
                    PC_LOGI("[MSS32] set_3D_sample_volume(h=0x%X rawVol=0x%08X->%.3f)", a0, a1, vol);
                    s_v3_log++;
                }
                v->vol_l = vol;
                v->vol_r = vol;
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_sample_loop_count@8") == 0 ||
                   strcmp(fn, "_AIL_set_3D_sample_loop_count@8") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) v->loop_count = (int)a1;
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_start_sample@4") == 0 ||
                   strcmp(fn, "_AIL_start_3D_sample@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) {
                v->cursor_frames = 0;
                v->cursor_pos = 0.0;
                v->status = SMP_PLAYING;
                int is_3d = (strstr(fn, "3D") != NULL);
                static int s_st2d_log = 0;
                static int s_st3d_log = 0;
                if (is_3d && s_st3d_log < 20) {
                    PC_LOGI("[MSS32 3D] %s(h=0x%X) frames=%u ch=%d bits=%d rate=%u vol=(%.2f,%.2f) loop=%d[%u..%u] pcm=%p/%p",
                            fn, a0, v->pcm_frames, v->channels, v->bits, v->sample_rate,
                            v->vol_l, v->vol_r, v->loop_count, v->loop_start, v->loop_end, (void *)v->pcm16, (void *)v->pcm8);
                    s_st3d_log++;
                } else if (!is_3d && s_st2d_log < 20) {
                    PC_LOGI("[MSS32 2D] %s(h=0x%X) frames=%u ch=%d bits=%d rate=%u vol=(%.2f,%.2f) pcm=%p/%p",
                            fn, a0, v->pcm_frames, v->channels, v->bits, v->sample_rate,
                            v->vol_l, v->vol_r, (void *)v->pcm16, (void *)v->pcm8);
                    s_st2d_log++;
                }
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_stop_sample@4") == 0 ||
                   strcmp(fn, "_AIL_stop_3D_sample@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) { v->status = SMP_STOPPED; }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_resume_sample@4") == 0 ||
                   strcmp(fn, "_AIL_resume_3D_sample@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) { v->status = SMP_PLAYING; }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_sample_status@4") == 0 ||
                   strcmp(fn, "_AIL_3D_sample_status@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            ret_val = v ? (uint32_t)v->status : SMP_DONE;
        } else if (strcmp(fn, "_AIL_release_sample_handle@4") == 0 ||
                   strcmp(fn, "_AIL_release_3D_sample_handle@4") == 0) {
            Mc2AudioVoice *v = find_voice(a0);
            if (v) { v->in_use = 0; v->status = SMP_FREE; }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_open_stream@12") == 0) {
            const char *sname = a1 ? (const char *)guest_ptr(a1) : "";
            char norm[256];
            normalize_data_path(sname, norm, sizeof(norm));
            const char *clean = norm;
            while (clean[0] == '.' && clean[1] == '/') clean += 2;
            uint32_t sh = 0;
            Mc2StreamSlot *slot = alloc_stream_slot(&sh);
            if (slot) {
                slot->is_music = (strstr(clean, "music/") != NULL) ? 1 : 0;
                uint32_t d_off = 0, d_len = 0;
                if (dave_lookup(clean, &d_off, &d_len)) {
                    snprintf(slot->path, sizeof(slot->path), "dave:%u:%u:%s", d_off, d_len, clean);
                } else {
                    char host_path[1024];
                    translate_guest_path(sname, host_path, sizeof(host_path));
                    FILE *chk = open_registered_data(host_path, "rb");
                    if (!chk) chk = fopen(host_path, "rb");
                    if (!chk) {
                        char alt_path[1024];
                        snprintf(alt_path, sizeof(alt_path), "%s/audio/%s", g_game_dir, sname);
                        for (char *c = alt_path; *c; c++) { if (*c == '\\') *c = '/'; }
                        chk = open_registered_data(alt_path, "rb");
                        if (!chk) chk = fopen(alt_path, "rb");
                        if (chk) strncpy(host_path, alt_path, sizeof(host_path) - 1);
                    }
                    if (chk) fclose(chk);
                    if (mc2_pc_data_fd_count() > 0) {
                        snprintf(slot->path, sizeof(slot->path), "saf:%s", clean);
                    } else {
                        snprintf(slot->path, sizeof(slot->path), "%s", host_path);
                    }
                }
                PC_LOGI("[MSS32] AIL_open_stream(\"%s\") -> h=0x%X (%s) -> %s",
                        sname, sh, slot->is_music ? "MUSIC" : "AMBIENT", slot->path);
                PORTDBG("[AUDIO] AIL_open_stream(%s) -> %s", sname, slot->path);
            }
            ret_val = sh;
        } else if (strcmp(fn, "_AIL_start_stream@4") == 0) {
            Mc2StreamSlot *slot = find_stream_slot(a0);
            if (slot) {
                slot->paused = 0;
                slot->start_ms = monotonic_ms_now();
                if (slot->is_music) {
                    slot->playing = 1;
                    g_active_music_stream = a0;
                    PC_LOGI("[MSS32] AIL_start_stream(0x%X) -> music \"%s\"", a0, slot->path);
                    mc2_platform_play_music(slot->path, 1);
                    if (slot->vol > 0.0f && slot->vol < 1.0f) {
                        mc2_platform_set_music_volume(slot->vol);
                    }
                    PORTDBG("[AUDIO] AIL_start_stream -> %s", slot->path);
                } else {
#if MC2_HAS_FFMPEG_BINK
                    int ok = stream_open_decoder(slot, g_bink_out_rate > 0 ? g_bink_out_rate : 44100);
                    slot->playing = ok ? 1 : 0;
                    PC_LOGI("[MSS32] AIL_start_stream(0x%X) -> fx \"%s\" (ok=%d)", a0, slot->path, ok);
#else
                    slot->playing = 1;
#endif
                }
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_pause_stream@8") == 0) {
            Mc2StreamSlot *slot = find_stream_slot(a0);
            if (slot) {
                slot->paused = (a1 != 0);
                if (slot->is_music && a0 == g_active_music_stream) {
                    if (a1) mc2_platform_pause_music();
                    else mc2_platform_resume_music();
                }
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_close_stream@4") == 0) {
            Mc2StreamSlot *slot = find_stream_slot(a0);
            if (slot) {
                if (slot->is_music) {
                    if (slot->playing && a0 == g_active_music_stream) {
                        g_active_music_stream = 0;
                        mc2_platform_stop_music();
                    }
                }
#if MC2_HAS_FFMPEG_BINK
                else stream_close_decoder(slot);
#endif
                slot->playing = 0;
                slot->in_use = 0;
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_set_stream_volume_pan@12") == 0) {
            Mc2StreamSlot *slot = find_stream_slot(a0);
            if (slot) {
                float vol = (float)a1 / 127.0f;
                if (vol < 0.0f) vol = 0.0f;
                if (vol > 1.0f) vol = 1.0f;
                slot->vol = vol;
                if (slot->is_music && a0 == g_active_music_stream) {
                    mc2_platform_set_music_volume(vol);
                }
            }
            ret_val = 1;
        } else if (strcmp(fn, "_AIL_stream_status@4") == 0) {
            Mc2StreamSlot *slot = find_stream_slot(a0);
            if (!slot || !slot->playing) {
                ret_val = SMP_DONE;
            } else if (slot->paused) {
                ret_val = SMP_STOPPED;
#if !MC2_HAS_FFMPEG_BINK
            } else if (!slot->is_music && (monotonic_ms_now() - slot->start_ms) > 3500ULL) {
                slot->playing = 0;
                ret_val = SMP_DONE;
#endif
            } else {
                mc2_streams_pump();
                ret_val = SMP_PLAYING;
            }
        } else if (strcmp(fn, "_AIL_enumerate_3D_providers@12") == 0) {
            uint32_t idx = a0 ? guest_read32(a0) : 1u;
            if (idx == 0u) {
                if (a0) guest_write32(a0, 1u);
                if (a1) guest_write32(a1, 0x5501u);
                if (a2) guest_write32(a2, 0x0064D770u); /* "Miles Fast 2D Positional Audio" */
                ret_val = 1;
            } else {
                ret_val = 0;
            }
        } else if (strcmp(fn, "_AIL_open_3D_provider@4") == 0 ||
                   strcmp(fn, "_AIL_close_3D_provider@4") == 0) {
            ret_val = 0; /* M3D_NOERR */
        } else if (strcmp(fn, "_AIL_last_error@0") == 0) {
            ret_val = GUEST_VERINFO_VA; /* empty string "" */
        } else {
            ret_val = 1;
        }
    }

    /* ── binkw32.dll (Bink Video + Audio via FFmpeg) ──────────── */
    else if (strcmp(imp->dll, "binkw32.dll") == 0) {
#if defined(MC2_HAS_FFMPEG_BINK)
        if (strcmp(fn, "_BinkOpen@8") == 0) {
            const char *bname = a0 ? (const char *)guest_ptr(a0) : "";
            ret_val = bink_open_guest(bname, a1);
        } else if (strcmp(fn, "_BinkWait@4") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (!p || !p->in_use || p->eof_reached || p->next_frame_us == 0) {
                ret_val = 0;
            } else {
                int64_t now = mc2_bink_now_us();
                if (now < p->next_frame_us) {
                    int64_t rem = p->next_frame_us - now;
                    if (rem > 2000) rem = 2000;
                    if (rem > 200) usleep((useconds_t)rem);
                    ret_val = 1;
                } else {
                    ret_val = 0;
                }
            }
        } else if (strcmp(fn, "_BinkNextFrame@4") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (p) {
                p->frame_num++;
                if (p->eof_reached || (p->frames > 0u && p->frame_num > p->frames)) {
                    p->frame_num = 1u;
                    p->eof_reached = 0;
                    p->has_frame = 0;
                    if (p->fmt_ctx) {
                        av_seek_frame(p->fmt_ctx, -1, 0, AVSEEK_FLAG_BACKWARD);
                        if (p->v_dec) avcodec_flush_buffers(p->v_dec);
                        if (p->a_dec) avcodec_flush_buffers(p->a_dec);
                    }
                    ret_val = 1u;
                } else {
                    ret_val = 0u;
                }
                guest_write32(a0 + 0x0C, p->frame_num);
            } else {
                ret_val = 1u;
            }
        } else if (strcmp(fn, "_BinkDoFrame@4") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (p) {
                bink_decode_next_video_frame(p);
                int64_t now = mc2_bink_now_us();
                if (p->next_frame_us == 0 || (now - p->next_frame_us) > p->frame_interval_us * 4) {
                    p->next_frame_us = now + p->frame_interval_us;
                } else {
                    p->next_frame_us += p->frame_interval_us;
                }
                guest_write32(a0 + 0x10, p->frame_num);
            }
            ret_val = 0;
        } else if (strcmp(fn, "_BinkCopyToBuffer@28") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (p && a1 && p->width > 0 && p->height > 0) {
                if (!p->has_frame && !p->eof_reached) {
                    bink_decode_next_video_frame(p);
                }
                if (p->has_frame && p->v_frame->data[0]) {
                    static int s_copy_logs = 0;
                    if (s_copy_logs < 8) {
                        s_copy_logs++;
                        PC_LOGI("[BINK] CopyToBuffer(0x%08X %ux%u pitch=%d destH=%u x=%u y=%u flags=0x%X)",
                                a1, p->width, p->height, (int32_t)a2, a3, a4, a5, a6);
                    }
                    uint32_t fmt_code = a6 & 0xFFu;
                    enum AVPixelFormat dst_fmt = AV_PIX_FMT_BGRA;
                    int bpp = 4;
                    switch (fmt_code) {
                        case 1:  dst_fmt = AV_PIX_FMT_BGR24;    bpp = 3; break;
                        case 2:  dst_fmt = AV_PIX_FMT_RGB24;    bpp = 3; break;
                        case 3:  dst_fmt = AV_PIX_FMT_BGRA;     bpp = 4; break;
                        case 4:  dst_fmt = AV_PIX_FMT_RGBA;     bpp = 4; break;
                        case 5:  dst_fmt = AV_PIX_FMT_BGRA;     bpp = 4; break;
                        case 6:  dst_fmt = AV_PIX_FMT_RGBA;     bpp = 4; break;
                        case 9:  dst_fmt = AV_PIX_FMT_RGB555LE; bpp = 2; break;
                        case 10: dst_fmt = AV_PIX_FMT_RGB565LE; bpp = 2; break;
                        default: dst_fmt = AV_PIX_FMT_BGRA;     bpp = 4; break;
                    }
                    enum AVPixelFormat src_fmt = (enum AVPixelFormat)p->v_frame->format;
                    if (src_fmt == AV_PIX_FMT_NONE) src_fmt = p->v_dec->pix_fmt;
                    p->sws = sws_getCachedContext(p->sws, (int)p->width, (int)p->height, src_fmt,
                                                  (int)p->width, (int)p->height, dst_fmt,
                                                  SWS_BILINEAR, NULL, NULL, NULL);
                    if (p->sws) {
                        size_t need = (size_t)p->width * (size_t)p->height * (size_t)bpp;
                        if (p->conv_buf_size < need) {
                            free(p->conv_buf);
                            p->conv_buf = (uint8_t *)malloc(need);
                            p->conv_buf_size = p->conv_buf ? need : 0;
                        }
                        if (p->conv_buf) {
                            uint8_t *dst_data[4] = { p->conv_buf, NULL, NULL, NULL };
                            int dst_linesize[4] = { (int)(p->width * (uint32_t)bpp), 0, 0, 0 };
                            sws_scale(p->sws, (const uint8_t *const *)p->v_frame->data, p->v_frame->linesize,
                                      0, (int)p->height, dst_data, dst_linesize);
                            int32_t dest_pitch = (int32_t)a2;
                            uint32_t dest_h = a3 ? a3 : p->height;
                            uint32_t dest_x = a4;
                            uint32_t dest_y = a5;
                            uint32_t copy_h = (dest_h > dest_y && p->height > (dest_h - dest_y)) ? (dest_h - dest_y) : p->height;
                            uint32_t row_bytes = p->width * (uint32_t)bpp;
                            for (uint32_t y = 0; y < copy_h; y++) {
                                int64_t dst_addr = (int64_t)a1 + (int64_t)(dest_y + y) * (int64_t)dest_pitch + (int64_t)dest_x * (int64_t)bpp;
                                if (dst_addr >= 0x00100000LL && (uint64_t)(dst_addr + (int64_t)row_bytes) <= GUEST_MEM_SIZE) {
                                    memcpy(guest_ptr((uint32_t)dst_addr), p->conv_buf + (size_t)y * row_bytes, row_bytes);
                                }
                            }
                        }
                    }
                }
            }
            ret_val = 0;
        } else if (strcmp(fn, "_BinkClose@4") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (p) {
                PC_LOGI("[BINK] BinkClose(0x%08X) frame=%u/%u", a0, p->frame_num, p->frames);
                bink_close_slot(p);
            }
            ret_val = 0;
        } else if (strcmp(fn, "_BinkSetVolume@12") == 0) {
            Mc2BinkSlot *p = bink_find_slot(a0);
            if (p) {
                float v = (float)(int32_t)a2 / 32768.0f;
                if (v < 0.0f) v = 0.0f;
                if (v > 1.5f) v = 1.5f;
                p->volume = v;
            }
            ret_val = 0;
        } else if (strcmp(fn, "_BinkOpenMiles@4") == 0
                   || strcmp(fn, "_BinkSetSoundSystem@8") == 0) {
            ret_val = 1;
        } else {
            ret_val = 1;
        }
#else
        if (strcmp(fn, "_BinkOpen@8") == 0) {
            ret_val = 0;
        } else if (strcmp(fn, "_BinkWait@4") == 0 || strcmp(fn, "_BinkCopyToBuffer@28") == 0
                   || strcmp(fn, "_BinkClose@4") == 0 || strcmp(fn, "_BinkSetVolume@12") == 0
                   || strcmp(fn, "_BinkDoFrame@4") == 0) {
            ret_val = 0;
        } else {
            ret_val = 1;
        }
#endif
    }

    /* ── wsock32.dll (Real POSIX Sockets Bridge) ──────────────── */
    else if (strcmp(imp->dll, "wsock32.dll") == 0) {
#if !defined(_WIN32)
        if (strcmp(fn, "WSAStartup") == 0) {
            if (a1 && wsock_va_ok(a1, 400u)) {
                memset(guest_ptr(a1), 0, 400);
                guest_write16(a1 + 0, (uint16_t)(a0 ? a0 : 0x0101u));
                guest_write16(a1 + 2, 0x0202u);
            }
            pthread_mutex_lock(&g_wsock_mutex);
            wsock_init_table_locked();
            g_wsock_wsa_refs++;
            int refs = g_wsock_wsa_refs;
            pthread_mutex_unlock(&g_wsock_mutex);
            g_wsa_last_error = 0u;
            PC_LOGI("[WSOCK32] WSAStartup(ver=0x%X) -> OK (refs=%d)", a0, refs);
            ret_val = 0u;
        } else if (strcmp(fn, "WSACleanup") == 0) {
            int close_now = 0;
            pthread_mutex_lock(&g_wsock_mutex);
            if (g_wsock_wsa_refs > 0) g_wsock_wsa_refs--;
            if (g_wsock_wsa_refs == 0) close_now = 1;
            pthread_mutex_unlock(&g_wsock_mutex);
            if (close_now) wsock_close_all();
            g_wsa_last_error = 0u;
            ret_val = 0u;
        } else if (strcmp(fn, "WSAGetLastError") == 0) {
            ret_val = g_wsa_last_error;
        } else if (strcmp(fn, "socket") == 0) {
            int af = (a0 == 2u || a0 == 0u) ? AF_INET : (int)a0;
            int typ = (a1 == 1u) ? SOCK_STREAM : ((a1 == 2u) ? SOCK_DGRAM : (int)a1);
            int fd = socket(af, typ, (int)a2);
            if (fd < 0) {
                g_wsa_last_error = wsock_map_errno(errno);
                PC_LOGW("[WSOCK32] socket(af=%u,type=%u,proto=%u) failed errno=%d", a0, a1, a2, errno);
                ret_val = WSOCK_INVALID_SOCKET;
            } else {
                uint32_t h = wsock_alloc_handle(fd);
                if (h == WSOCK_INVALID_SOCKET) {
                    ret_val = WSOCK_INVALID_SOCKET;
                } else {
                    g_wsa_last_error = 0u;
                    PC_LOGI("[WSOCK32] socket(af=%u,type=%u,proto=%u) -> handle=0x%X (fd=%d)", a0, a1, a2, h, fd);
                    ret_val = h;
                }
            }
        } else if (strcmp(fn, "closesocket") == 0) {
            if (wsock_close_handle(a0) < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                g_wsa_last_error = 0u;
                ret_val = 0u;
            }
        } else if (strcmp(fn, "shutdown") == 0) {
            int fd = wsock_get_fd(a0);
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (shutdown(fd, (int)a1) < 0) {
                g_wsa_last_error = wsock_map_errno(errno);
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                g_wsa_last_error = 0u;
                ret_val = 0u;
            }
        } else if (strcmp(fn, "ioctlsocket") == 0) {
            int fd = wsock_get_fd(a0);
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (!a2 || !wsock_va_ok(a2, 4u)) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (a1 == 0x8004667Eu) { /* FIONBIO */
                uint32_t nb = guest_read32(a2);
                int flags = fcntl(fd, F_GETFL, 0);
                if (flags < 0 || fcntl(fd, F_SETFL, nb ? (flags | O_NONBLOCK) : (flags & ~O_NONBLOCK)) < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    g_wsa_last_error = 0u;
                    ret_val = 0u;
                }
            } else if (a1 == 0x4004667Fu) { /* FIONREAD */
                int avail = 0;
                if (ioctl(fd, FIONREAD, &avail) < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    guest_write32(a2, (uint32_t)(avail > 0 ? avail : 0));
                    g_wsa_last_error = 0u;
                    ret_val = 0u;
                }
            } else {
                PC_LOGW("[WSOCK32] ioctlsocket unhandled cmd=0x%08X", a1);
                g_wsa_last_error = 10022u;
                ret_val = WSOCK_SOCKET_ERROR;
            }
        } else if (strcmp(fn, "setsockopt") == 0) {
            int fd = wsock_get_fd(a0);
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (a4 && (!a3 || !wsock_va_ok(a3, a4))) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                int rc = -1;
                if (a1 == 0xFFFFu) { /* SOL_SOCKET */
                    int opt = -1;
                    switch (a2) {
                        case 0x0004u: opt = SO_REUSEADDR; break;
                        case 0x0008u: opt = SO_KEEPALIVE; break;
                        case 0x0010u: opt = SO_DONTROUTE; break;
                        case 0x0020u: opt = SO_BROADCAST; break;
                        case 0x0100u: opt = SO_OOBINLINE; break;
                        case 0x1001u: opt = SO_SNDBUF;    break;
                        case 0x1002u: opt = SO_RCVBUF;    break;
                        default: break;
                    }
                    if (opt >= 0) {
                        rc = setsockopt(fd, SOL_SOCKET, opt, guest_ptr(a3), (socklen_t)a4);
                        if (opt == SO_BROADCAST) {
                            PC_LOGI("[WSOCK32] setsockopt(h=0x%X, SO_BROADCAST) -> rc=%d errno=%d", a0, rc, rc < 0 ? errno : 0);
                        }
                    } else if (a2 == 0x1005u || a2 == 0x1006u) { /* SO_SNDTIMEO / SO_RCVTIMEO (DWORD ms) */
                        uint32_t ms = (a4 >= 4u) ? guest_read32(a3) : 0u;
                        struct timeval tv;
                        tv.tv_sec = (time_t)(ms / 1000u);
                        tv.tv_usec = (suseconds_t)((ms % 1000u) * 1000u);
                        rc = setsockopt(fd, SOL_SOCKET, (a2 == 0x1005u) ? SO_SNDTIMEO : SO_RCVTIMEO, &tv, sizeof(tv));
                    } else if (a2 == 0x0080u && a4 >= 4u) { /* SO_LINGER */
                        struct linger lg;
                        lg.l_onoff = (int)guest_read16(a3 + 0);
                        lg.l_linger = (int)guest_read16(a3 + 2);
                        rc = setsockopt(fd, SOL_SOCKET, SO_LINGER, &lg, sizeof(lg));
                    } else if (a2 == 0xFF7Fu && a4 >= 4u) { /* SO_DONTLINGER */
                        struct linger lg;
                        lg.l_onoff = (guest_read32(a3) == 0u) ? 1 : 0;
                        lg.l_linger = 0;
                        rc = setsockopt(fd, SOL_SOCKET, SO_LINGER, &lg, sizeof(lg));
                    } else {
                        PC_LOGW("[WSOCK32] setsockopt SOL_SOCKET unknown opt=0x%X", a2);
                        errno = ENOPROTOOPT;
                    }
                } else if (a1 == 6u) { /* IPPROTO_TCP */
                    if (a2 == 0x0001u) {
                        rc = setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, guest_ptr(a3), (socklen_t)a4);
                    } else {
                        errno = ENOPROTOOPT;
                    }
                } else if (a1 == 0u) { /* IPPROTO_IP (Winsock 1.1 constants) */
                    int opt = -1;
                    switch (a2) {
                        case 2u: opt = IP_MULTICAST_IF;   break;
                        case 3u: opt = IP_MULTICAST_TTL;  break;
                        case 4u: opt = IP_MULTICAST_LOOP; break;
                        case 5u: opt = IP_ADD_MEMBERSHIP; break;
                        case 6u: opt = IP_DROP_MEMBERSHIP;break;
                        case 7u: opt = IP_TTL;            break;
                        case 8u: opt = IP_TOS;            break;
                        default: break;
                    }
                    if (opt >= 0) {
                        rc = setsockopt(fd, IPPROTO_IP, opt, guest_ptr(a3), (socklen_t)a4);
                    } else {
                        PC_LOGW("[WSOCK32] setsockopt IPPROTO_IP unknown opt=0x%X", a2);
                        errno = ENOPROTOOPT;
                    }
                } else {
                    PC_LOGW("[WSOCK32] setsockopt level=0x%X opt=0x%X", a1, a2);
                    errno = ENOPROTOOPT;
                }
                if (rc < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    g_wsa_last_error = 0u;
                    ret_val = 0u;
                }
            }
        } else if (strcmp(fn, "bind") == 0) {
            int fd = wsock_get_fd(a0);
            struct sockaddr_in sa;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (wsock_read_sockaddr(a1, a2, &sa) < 0) {
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (bind(fd, (const struct sockaddr *)&sa, sizeof(sa)) < 0) {
                g_wsa_last_error = wsock_map_errno(errno);
                PC_LOGW("[WSOCK32] bind(h=0x%X, port=%u) failed errno=%d", a0, ntohs(sa.sin_port), errno);
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                struct sockaddr_in bound;
                socklen_t bl = sizeof(bound);
                if (getsockname(fd, (struct sockaddr *)&bound, &bl) == 0) {
                    PC_LOGI("[WSOCK32] bind(h=0x%X) -> %s:%u OK", a0, inet_ntoa(bound.sin_addr), ntohs(bound.sin_port));
                }
                g_wsa_last_error = 0u;
                ret_val = 0u;
            }
        } else if (strcmp(fn, "connect") == 0) {
            int fd = wsock_get_fd(a0);
            struct sockaddr_in sa;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (wsock_read_sockaddr(a1, a2, &sa) < 0) {
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (connect(fd, (const struct sockaddr *)&sa, sizeof(sa)) < 0) {
                g_wsa_last_error = wsock_map_errno(errno);
                if (errno != EINPROGRESS) {
                    PC_LOGW("[WSOCK32] connect(%s:%u) failed errno=%d", inet_ntoa(sa.sin_addr), ntohs(sa.sin_port), errno);
                }
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                PC_LOGI("[WSOCK32] connect(%s:%u) -> OK", inet_ntoa(sa.sin_addr), ntohs(sa.sin_port));
                g_wsa_last_error = 0u;
                ret_val = 0u;
            }
        } else if (strcmp(fn, "getsockname") == 0) {
            int fd = wsock_get_fd(a0);
            struct sockaddr_in sa;
            socklen_t sl = sizeof(sa);
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (!a1 || !a2 || !wsock_va_ok(a2, 4u)) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (getsockname(fd, (struct sockaddr *)&sa, &sl) < 0) {
                g_wsa_last_error = wsock_map_errno(errno);
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                wsock_write_sockaddr(a1, a2, &sa);
                g_wsa_last_error = 0u;
                ret_val = 0u;
            }
        } else if (strcmp(fn, "sendto") == 0) {
            int fd = wsock_get_fd(a0);
            int len = (int)a2;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (len < 0 || (len > 0 && (!a1 || !wsock_va_ok(a1, (uint32_t)len)))) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                struct sockaddr_in sa;
                const struct sockaddr *dst = NULL;
                socklen_t dlen = 0;
                if (a4 && a5) {
                    if (wsock_read_sockaddr(a4, a5, &sa) < 0) {
                        ret_val = WSOCK_SOCKET_ERROR;
                        goto wsock_done;
                    }
                    dst = (const struct sockaddr *)&sa;
                    dlen = sizeof(sa);
                }
                int sflags = ((int)a3 & (MSG_OOB | MSG_DONTROUTE)) | MSG_NOSIGNAL;
                ssize_t sent = sendto(fd, len > 0 ? guest_ptr(a1) : (const void *)"", (size_t)len, sflags, dst, dlen);
                if (sent < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    static int s_send_err_log = 0;
                    if (s_send_err_log < 5) {
                        s_send_err_log++;
                        PC_LOGW("[WSOCK32] sendto(h=0x%X, %s:%u, len=%d) failed errno=%d",
                                a0, dst ? inet_ntoa(sa.sin_addr) : "-", dst ? ntohs(sa.sin_port) : 0, len, errno);
                    }
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    static int s_send_ok_log = 0;
                    if (s_send_ok_log < 8) {
                        s_send_ok_log++;
                        PC_LOGI("[WSOCK32] sendto(h=0x%X -> %s:%u, len=%d) -> %zd OK",
                                a0, dst ? inet_ntoa(sa.sin_addr) : "-", dst ? ntohs(sa.sin_port) : 0, len, sent);
                    }
                    g_wsa_last_error = 0u;
                    ret_val = (uint32_t)sent;
                }
            }
        } else if (strcmp(fn, "recvfrom") == 0) {
            int fd = wsock_get_fd(a0);
            int len = (int)a2;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (len < 0 || (len > 0 && (!a1 || !wsock_va_ok(a1, (uint32_t)len)))) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                struct sockaddr_in sa;
                socklen_t sl = sizeof(sa);
                memset(&sa, 0, sizeof(sa));
                int rflags = (int)a3 & (MSG_OOB | MSG_PEEK);
                ssize_t got = recvfrom(fd, guest_ptr(a1), (size_t)len, rflags,
                                       (a4 && a5) ? (struct sockaddr *)&sa : NULL,
                                       (a4 && a5) ? &sl : NULL);
                if (got < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    if (a4 && a5) wsock_write_sockaddr(a4, a5, &sa);
                    g_wsa_last_error = 0u;
                    ret_val = (uint32_t)got;
                }
            }
        } else if (strcmp(fn, "send") == 0) {
            int fd = wsock_get_fd(a0);
            int len = (int)a2;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (len < 0 || (len > 0 && (!a1 || !wsock_va_ok(a1, (uint32_t)len)))) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                int sflags = ((int)a3 & (MSG_OOB | MSG_DONTROUTE)) | MSG_NOSIGNAL;
                ssize_t sent = send(fd, len > 0 ? guest_ptr(a1) : (const void *)"", (size_t)len, sflags);
                if (sent < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    g_wsa_last_error = 0u;
                    ret_val = (uint32_t)sent;
                }
            }
        } else if (strcmp(fn, "recv") == 0) {
            int fd = wsock_get_fd(a0);
            int len = (int)a2;
            if (fd < 0) {
                g_wsa_last_error = 10038u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else if (len < 0 || (len > 0 && (!a1 || !wsock_va_ok(a1, (uint32_t)len)))) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                int rflags = (int)a3 & (MSG_OOB | MSG_PEEK);
                ssize_t got = recv(fd, guest_ptr(a1), (size_t)len, rflags);
                if (got < 0) {
                    g_wsa_last_error = wsock_map_errno(errno);
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    g_wsa_last_error = 0u;
                    ret_val = (uint32_t)got;
                }
            }
        } else if (strcmp(fn, "select") == 0) {
            ret_val = wsock_select(a1, a2, a3, a4);
        } else if (strcmp(fn, "__WSAFDIsSet") == 0) {
            ret_val = 0u;
            if (a1 && wsock_va_ok(a1, 4u)) {
                uint32_t cnt = guest_read32(a1);
                if (cnt > 64u) cnt = 64u;
                if (wsock_va_ok(a1, 4u + cnt * 4u)) {
                    for (uint32_t i = 0; i < cnt; i++) {
                        if (guest_read32(a1 + 4u + i * 4u) == a0) {
                            ret_val = 1u;
                            break;
                        }
                    }
                }
            }
        } else if (strcmp(fn, "htons") == 0 || strcmp(fn, "ntohs") == 0) {
            ret_val = BSWAP16((uint16_t)a0);
        } else if (strcmp(fn, "htonl") == 0 || strcmp(fn, "ntohl") == 0) {
            ret_val = BSWAP32(a0);
        } else if (strcmp(fn, "inet_addr") == 0) {
            if (!a0 || !wsock_va_ok(a0, 1u)) {
                ret_val = 0xFFFFFFFFu; /* INADDR_NONE */
            } else {
                struct in_addr ia;
                const char *s = (const char *)guest_ptr(a0);
                if (inet_aton(s, &ia) != 0) ret_val = (uint32_t)ia.s_addr;
                else ret_val = 0xFFFFFFFFu;
            }
        } else if (strcmp(fn, "inet_ntoa") == 0) {
            pthread_mutex_lock(&g_wsock_mutex);
            uint32_t slot = (g_wsock_ntoa_slot++) & 7u;
            pthread_mutex_unlock(&g_wsock_mutex);
            uint32_t va = GUEST_INET_NTOA_VA + slot * 32u;
            uint32_t ip_be = a0;
            snprintf((char *)guest_ptr(va), 32, "%u.%u.%u.%u",
                     (ip_be >> 0) & 0xFFu, (ip_be >> 8) & 0xFFu,
                     (ip_be >> 16) & 0xFFu, (ip_be >> 24) & 0xFFu);
            ret_val = va;
        } else if (strcmp(fn, "gethostname") == 0) {
            if (!a0 || a1 == 0u || !wsock_va_ok(a0, a1)) {
                g_wsa_last_error = 10014u;
                ret_val = WSOCK_SOCKET_ERROR;
            } else {
                const char *hn = "pmc2android";
                size_t len = strlen(hn) + 1u;
                if (len > (size_t)a1) {
                    g_wsa_last_error = 10014u;
                    ret_val = WSOCK_SOCKET_ERROR;
                } else {
                    memcpy(guest_ptr(a0), hn, len);
                    g_wsa_last_error = 0u;
                    ret_val = 0u;
                }
            }
        } else if (strcmp(fn, "gethostbyname") == 0) {
            const char *orig_name = (a0 && wsock_va_ok(a0, 1u)) ? (const char *)guest_ptr(a0) : "";
            char rewritten_host[256];
            const char *name = orig_name;
            if (g_mc2hook.enabled && g_mc2hook.open_spy && orig_name[0]) {
                size_t hlen = strlen(orig_name);
                if (hlen >= 11 && hlen < sizeof(rewritten_host) &&
                    strcasecmp(orig_name + hlen - 11, "gamespy.com") == 0) {
                    memcpy(rewritten_host, orig_name, hlen - 11);
                    memcpy(rewritten_host + hlen - 11, "openspy.net", 12);
                    name = rewritten_host;
                    PC_LOGI("[MC2HOOK/OpenSpy] gethostbyname('%s') -> '%s'", orig_name, name);
                }
            }
            uint32_t addrs[8];
            int count = 0;
            if (!name[0] || strcmp(name, "localhost") == 0 || strcmp(name, "pmc2android") == 0) {
                count = wsock_collect_local_ipv4s(addrs, 8);
                ret_val = wsock_write_hostent(name[0] ? name : "pmc2android", addrs, count);
                struct in_addr ia;
                ia.s_addr = addrs[0];
                PC_LOGI("[WSOCK32] gethostbyname('%s') -> local LAN %s (%d addrs)", name, inet_ntoa(ia), count);
                g_wsa_last_error = 0u;
            } else {
                struct in_addr ia;
                if (inet_aton(name, &ia) != 0) {
                    addrs[0] = (uint32_t)ia.s_addr;
                    ret_val = wsock_write_hostent(name, addrs, 1);
                    g_wsa_last_error = 0u;
                } else {
                    struct addrinfo hints, *res = NULL;
                    memset(&hints, 0, sizeof(hints));
                    hints.ai_family = AF_INET;
                    int gai = getaddrinfo(name, NULL, &hints, &res);
                    if (gai == 0 && res) {
                        for (struct addrinfo *p = res; p && count < 8; p = p->ai_next) {
                            if (p->ai_family == AF_INET && p->ai_addr) {
                                addrs[count++] = ((const struct sockaddr_in *)p->ai_addr)->sin_addr.s_addr;
                            }
                        }
                        freeaddrinfo(res);
                    }
                    if (count > 0) {
                        ret_val = wsock_write_hostent(name, addrs, count);
                        g_wsa_last_error = 0u;
                        PC_LOGI("[WSOCK32] gethostbyname('%s') -> resolved %d addrs", name, count);
                    } else {
                        g_wsa_last_error = 11001u; /* WSAHOST_NOT_FOUND */
                        ret_val = 0u;
                        PC_LOGW("[WSOCK32] gethostbyname('%s') -> NOT FOUND", name);
                    }
                }
            }
        } else {
            PC_LOGW("[WSOCK32] Unhandled wsock32 func: %s", fn);
            g_wsa_last_error = 10045u;
            ret_val = WSOCK_SOCKET_ERROR;
        }
wsock_done:;
#else
        if (strcmp(fn, "WSAStartup") == 0) {
            if (a1) {
                memset(guest_ptr(a1), 0, 400);
                guest_write16(a1 + 0, (uint16_t)(a0 ? a0 : 0x0002));
                guest_write16(a1 + 2, 0x0202);
            }
            ret_val = 0;
        } else if (strcmp(fn, "WSACleanup") == 0 || strcmp(fn, "closesocket") == 0 ||
                   strcmp(fn, "ioctlsocket") == 0 || strcmp(fn, "setsockopt") == 0 ||
                   strcmp(fn, "bind") == 0 || strcmp(fn, "shutdown") == 0) {
            ret_val = 0;
        } else if (strcmp(fn, "socket") == 0) {
            ret_val = 0x7001u;
        } else if (strcmp(fn, "getsockname") == 0) {
            if (a1 && a2) {
                memset(guest_ptr(a1), 0, 16);
                guest_write16(a1 + 0, 2);
                guest_write32(a1 + 4, 0x0100007Fu);
                guest_write32(a2, 16);
            }
            ret_val = 0;
        } else if (strcmp(fn, "select") == 0 || strcmp(fn, "__WSAFDIsSet") == 0) {
            ret_val = 0;
        } else if (strcmp(fn, "htons") == 0 || strcmp(fn, "ntohs") == 0) {
            ret_val = BSWAP16((uint16_t)a0);
        } else if (strcmp(fn, "htonl") == 0 || strcmp(fn, "ntohl") == 0) {
            ret_val = BSWAP32(a0);
        } else if (strcmp(fn, "inet_addr") == 0) {
            ret_val = 0x0100007Fu;
        } else if (strcmp(fn, "inet_ntoa") == 0) {
            strcpy((char *)guest_ptr(GUEST_INET_NTOA_VA), "127.0.0.1");
            ret_val = GUEST_INET_NTOA_VA;
        } else if (strcmp(fn, "gethostname") == 0) {
            if (a0 && a1 > 0) strncpy((char *)guest_ptr(a0), "127.0.0.1", a1);
            ret_val = 0;
        } else if (strcmp(fn, "gethostbyname") == 0) {
            ret_val = 0;
        } else if (strcmp(fn, "WSAGetLastError") == 0) {
            ret_val = 10035;
        } else {
            ret_val = 0xFFFFFFFFu;
        }
#endif
    }

    g_eax = ret_val;
    g_esp += 4u + (uint32_t)imp->pop_bytes;
}

static void dm_read_utf16_path(uint32_t va, char *out, size_t out_sz) {
    if (!va || !out || out_sz == 0) { if (out && out_sz) out[0] = '\0'; return; }
    size_t i = 0;
    while (i + 1 < out_sz) {
        uint16_t ch = guest_read16(va + (uint32_t)(i * 2u));
        if (ch == 0) break;
        out[i++] = (ch < 128u) ? (char)ch : '_';
    }
    out[i] = '\0';
}

static void mc2_dm_dispatch_loader(uint32_t idx) {
    static const uint32_t k_nargs[16] = {3, 1, 1, 4, 2, 4, 4, 2, 2, 2, 3, 4, 1, 2, 5, 1};
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t ret_val = 0;
    if (idx == 0) {
        if (a2) guest_write32(a2, self);
    } else if (idx == 1 || idx == 2) {
        ret_val = 1;
    } else if (idx == 14) { /* LoadObjectFromFile(this, rguidClassID, iidInterfaceID, pwzFilePath, ppv) */
        char path[256];
        dm_read_utf16_path(a3, path, sizeof(path));
        uint32_t seg_va = create_com_resource(g_vtbl_dmseg8, 7, 0, 0, 0, 0);
        if (!seg_va) seg_va = g_obj_dmseg8;
        int loaded = mc2_dm_load_segment(path, seg_va);
        if (loaded >= 0) {
            if (a4) guest_write32(a4, seg_va);
            ret_val = 0;
        } else {
            /* Keep game state alive even if an auxiliary .dls/.sty lookup misses */
            if (a4) guest_write32(a4, seg_va);
            ret_val = 0;
        }
        (void)a1;
    }
    g_eax = ret_val;
    g_esp += 4 + (uint32_t)(idx < 16 ? k_nargs[idx] : 1u) * 4u;
}

static void mc2_dm_dispatch_perf(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t a3 = guest_read32(g_esp + 16);
    uint32_t a4 = guest_read32(g_esp + 20);
    uint32_t a7 = guest_read32(g_esp + 32);
    uint32_t a9 = guest_read32(g_esp + 40);
    uint32_t ret_val = 0;
    uint32_t nargs = 1;
    switch (idx) {
    case 0:
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2:
        nargs = 1;
        ret_val = 1;
        break;
    case 5: /* Stop(this, pSegment, pSegmentState, mtTime, dwFlags) */
        nargs = 5;
        mc2_dm_stop(a1 ? a1 : a2);
        break;
    case 14: /* IsPlaying(this, pSegment, pSegState) */
        nargs = 3;
        ret_val = mc2_dm_is_playing(a1, a2) ? 0u : 1u; /* S_OK=playing, S_FALSE=stopped */
        break;
    case 15: /* GetTime(this, prtNow, pmtNow) */
        nargs = 3;
        {
            uint64_t ms = monotonic_ms_now();
            if (a1) {
                uint64_t rt = ms * 10000ULL;
                guest_write32(a1, (uint32_t)(rt & 0xFFFFFFFFu));
                guest_write32(a1 + 4, (uint32_t)(rt >> 32));
            }
            if (a2) {
                uint32_t mt = (uint32_t)((ms * 768ULL * 2ULL) / 1000ULL);
                guest_write32(a2, mt);
            }
        }
        break;
    case 34: /* SetGlobalParam(this, rguidType, pData, dwSize) */
        nargs = 4;
        if (a2 && a3 >= 4) {
            float val = 1.0f;
            uint32_t raw = guest_read32(a2);
            memcpy(&val, &raw, 4);
            static int s_gp_log = 0;
            if (s_gp_log < 6) {
                PC_LOGI("[DMUSIC8] SetGlobalParam guid=0x%08X val=%.4f raw=0x%08X sz=%u",
                        a1, val, raw, a3);
                s_gp_log++;
            }
        }
        break;
    case 38: /* CloseDown */
        nargs = 1;
        mc2_dm_stop(0);
        break;
    case 44: /* InitAudio */
        nargs = 8;
        PC_LOGI("[DMUSIC8] IDirectMusicPerformance8::InitAudio -> S_OK");
        break;
    case 45: /* PlaySegmentEx */
        nargs = 10;
        {
            uint32_t state_va = create_com_resource(g_vtbl_dmstate8, 7, 0, 0, 0, 0);
            if (!state_va) state_va = g_obj_dmstate8;
            if (a7) guest_write32(a7, state_va);
            mc2_dm_play_segment(a1, state_va, a9, a4);
        }
        break;
    case 46: /* StopEx(this, pObjectToStop, i64Stop_lo, i64Stop_hi, dwFlags) */
        nargs = 5;
        mc2_dm_stop(a1);
        break;
    case 49: /* CreateStandardAudioPath */
        nargs = 5;
        if (a4) {
            uint32_t ap_va = create_com_resource(g_vtbl_dmpath8, 7, 0, 0, 0, 0);
            guest_write32(a4, ap_va ? ap_va : g_obj_dmpath8);
        }
        break;
    default:
        nargs = 1;
        break;
    }
    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void mc2_dm_dispatch_seg(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t ret_val = 0;
    uint32_t nargs = 1;
    switch (idx) {
    case 0:
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2:
        nargs = 1;
        ret_val = 1;
        break;
    case 3: /* GetLength(this, pmtLength) */
        nargs = 2;
        if (a1) {
            uint32_t len_mt = 768u * 32u;
            pthread_mutex_lock(&g_dm_mutex);
            for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
                if (g_dm_segs[i].in_use && g_dm_segs[i].guest_va == self && g_dm_segs[i].mt_length > 0) {
                    len_mt = g_dm_segs[i].mt_length;
                    break;
                }
            }
            pthread_mutex_unlock(&g_dm_mutex);
            guest_write32(a1, len_mt);
        }
        break;
    case 21: /* SetStartPoint(this, mtStart) */
        nargs = 2;
        pthread_mutex_lock(&g_dm_mutex);
        for (int i = 0; i < MC2_DM_MAX_SEGS; i++) {
            if (g_dm_segs[i].in_use && g_dm_segs[i].guest_va == self) {
                g_dm_segs[i].mt_play_start = a1;
                break;
            }
        }
        pthread_mutex_unlock(&g_dm_mutex);
        break;
    case 29: /* Download */
    case 30: /* Unload */
        nargs = 2;
        break;
    default:
        nargs = 1;
        break;
    }
    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void mc2_dm_dispatch_path(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t ret_val = 0;
    uint32_t nargs = 1;
    switch (idx) {
    case 0:
        nargs = 3;
        if (a2) guest_write32(a2, self);
        break;
    case 1:
    case 2:
        nargs = 1;
        ret_val = 1;
        break;
    case 5: /* SetVolume(this, lVolume, dwDuration) */
        nargs = 3;
        mc2_dm_set_audiopath_volume(self, (int32_t)a1);
        break;
    default:
        nargs = 1;
        break;
    }
    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

static void mc2_dm_dispatch_state(uint32_t idx) {
    uint32_t self = guest_read32(g_esp + 4);
    uint32_t a1 = guest_read32(g_esp + 8);
    uint32_t a2 = guest_read32(g_esp + 12);
    uint32_t ret_val = 0;
    uint32_t nargs = (idx == 0) ? 3u : 1u;
    if (idx == 0) {
        if (a2) guest_write32(a2, self);
    } else if (idx == 1 || idx == 2) {
        ret_val = 1;
    } else if (idx == 3 || idx == 4) { /* GetRepeats / GetSeek */
        nargs = 2;
        if (a1) guest_write32(a1, (idx == 4) ? mc2_dm_get_seek_mt(self) : 0xFFFFFFFFu);
    }
    g_eax = ret_val;
    g_esp += 4 + nargs * 4u;
}

/* ================================================================
 * Thunk Trampoline Table for recomp_lookup_kernel(va)
 * ================================================================ */

static uint32_t g_active_kernel_va = 0;

/* Since recomp_lookup_kernel(va) returns a void (*)(void) function pointer
 * and takes no arguments, we generate lightweight indexed trampolines or
 * set g_active_kernel_va right inside recomp_lookup_kernel!
 * Because RECOMP_ICALL calls `recomp_func_t _fn = recomp_lookup_kernel(_va); if (_fn) _fn();`
 * immediately on the same thread without nested lookups before entry, storing
 * `_va` in a thread-local `g_active_kernel_va` inside `recomp_lookup_kernel(_va)`
 * and returning `pc_kernel_entry` works for ANY number of synthetic VAs! */

static void pc_kernel_entry(void) {
    uint32_t va = g_tls_kernel_va;
    if (va >= VA_IAT_BASE && va < VA_IAT_BASE + PC_IMPORT_COUNT * 4u) {
        int idx = (int)((va - VA_IAT_BASE) >> 2);
        dispatch_pe_import(idx);
        return;
    }
    if (va >= VA_D3D9_BASE && va < VA_D3D9_BASE + 17 * 4u) {
        dispatch_d3d9_method((va - VA_D3D9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DDEV9_BASE && va < VA_D3DDEV9_BASE + 119 * 4u) {
        dispatch_d3ddev9_method((va - VA_D3DDEV9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DTEX9_BASE && va < VA_D3DTEX9_BASE + 22 * 4u) {
        dispatch_d3dtex9_method((va - VA_D3DTEX9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DSURF9_BASE && va < VA_D3DSURF9_BASE + 17 * 4u) {
        dispatch_d3dsurf9_method((va - VA_D3DSURF9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DVB9_BASE && va < VA_D3DVB9_BASE + 14 * 4u) {
        dispatch_d3dbuf9_method((va - VA_D3DVB9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DIB9_BASE && va < VA_D3DIB9_BASE + 14 * 4u) {
        dispatch_d3dbuf9_method((va - VA_D3DIB9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DSHADER_BASE && va < VA_D3DSHADER_BASE + 10 * 4u) {
        dispatch_d3dshader_method((va - VA_D3DSHADER_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DCUBETEX9_BASE && va < VA_D3DCUBETEX9_BASE + 22 * 4u) {
        dispatch_d3dcubetex9_method((va - VA_D3DCUBETEX9_BASE) >> 2);
        return;
    }
    if (va >= VA_D3DSTATEBLOCK9_BASE && va < VA_D3DSTATEBLOCK9_BASE + 6 * 4u) {
        dispatch_d3dstateblock9_method((va - VA_D3DSTATEBLOCK9_BASE) >> 2);
        return;
    }
    if (va >= VA_DINPUT8_BASE && va < VA_DINPUT8_BASE + 9 * 4u) {
        dispatch_dinput8_method((va - VA_DINPUT8_BASE) >> 2);
        return;
    }
    if (va >= VA_DIDEV8_BASE && va < VA_DIDEV8_BASE + 32 * 4u) {
        dispatch_didev8_method((va - VA_DIDEV8_BASE) >> 2);
        return;
    }
    if (va >= VA_DMLOADER8_BASE && va < VA_DMLOADER8_BASE + 16 * 4u) {
        mc2_dm_dispatch_loader((va - VA_DMLOADER8_BASE) >> 2);
        return;
    }
    if (va >= VA_DMPERF8_BASE && va < VA_DMPERF8_BASE + 52 * 4u) {
        mc2_dm_dispatch_perf((va - VA_DMPERF8_BASE) >> 2);
        return;
    }
    if (va >= VA_DMSEG8_BASE && va < VA_DMSEG8_BASE + 32 * 4u) {
        mc2_dm_dispatch_seg((va - VA_DMSEG8_BASE) >> 2);
        return;
    }
    if (va >= VA_DMPATH8_BASE && va < VA_DMPATH8_BASE + 16 * 4u) {
        mc2_dm_dispatch_path((va - VA_DMPATH8_BASE) >> 2);
        return;
    }
    if (va >= VA_DMSTATE8_BASE && va < VA_DMSTATE8_BASE + 16 * 4u) {
        mc2_dm_dispatch_state((va - VA_DMSTATE8_BASE) >> 2);
        return;
    }
    PC_LOGE("[KERNEL] Unknown synthetic VA 0x%08X", va);
    g_eax = 0;
    g_esp += 4;
}

recomp_func_t recomp_lookup_kernel(uint32_t xbox_va) {
    if (xbox_va >= 0xFE000000u && xbox_va < 0xFE020000u) {
        g_tls_kernel_va = xbox_va;
        return pc_kernel_entry;
    }
    return NULL;
}

/* ================================================================
 * Memory Layout & PE Loader
 * ================================================================ */

static uint32_t alloc_com_vtbl(uint32_t base_syn_va, uint32_t count) {
    uint32_t vtbl_va = g_com_cursor;
    g_com_cursor += ((count * 4u) + 15u) & ~15u;
    for (uint32_t i = 0; i < count; i++) {
        guest_write32(vtbl_va + i * 4u, base_syn_va + i * 4u);
    }
    return vtbl_va;
}

void mc2_pc_bridge_init(void) {
    /* 1. Patch all 202 PE IAT slots with synthetic VAs (0xFE000000 + i*4) */
    for (int i = 0; i < PC_IMPORT_COUNT; i++) {
        uint32_t syn_va = VA_IAT_BASE + (uint32_t)i * 4u;
        guest_write32(g_pc_imports[i].thunk_addr, syn_va);
    }

    /* 2. Build COM Vtables in Guest Memory */
    g_com_cursor = GUEST_COM_ARENA_VA;
    g_vtbl_d3d9      = alloc_com_vtbl(VA_D3D9_BASE, 17);
    g_vtbl_d3ddev9   = alloc_com_vtbl(VA_D3DDEV9_BASE, 119);
    g_vtbl_d3dtex9   = alloc_com_vtbl(VA_D3DTEX9_BASE, 22);
    g_vtbl_d3dsurf9  = alloc_com_vtbl(VA_D3DSURF9_BASE, 17);
    g_vtbl_d3dvb9    = alloc_com_vtbl(VA_D3DVB9_BASE, 14);
    g_vtbl_d3dib9    = alloc_com_vtbl(VA_D3DIB9_BASE, 14);
    g_vtbl_d3dshader = alloc_com_vtbl(VA_D3DSHADER_BASE, 10);
    g_vtbl_d3dcubetex9    = alloc_com_vtbl(VA_D3DCUBETEX9_BASE, 22);
    g_vtbl_d3dstateblock9 = alloc_com_vtbl(VA_D3DSTATEBLOCK9_BASE, 6);
    g_vtbl_dinput8   = alloc_com_vtbl(VA_DINPUT8_BASE, 9);
    g_vtbl_didev8    = alloc_com_vtbl(VA_DIDEV8_BASE, 32);
    g_vtbl_dmloader8 = alloc_com_vtbl(VA_DMLOADER8_BASE, 16);
    g_vtbl_dmperf8   = alloc_com_vtbl(VA_DMPERF8_BASE, 52);
    g_vtbl_dmseg8    = alloc_com_vtbl(VA_DMSEG8_BASE, 32);
    g_vtbl_dmpath8   = alloc_com_vtbl(VA_DMPATH8_BASE, 16);
    g_vtbl_dmstate8  = alloc_com_vtbl(VA_DMSTATE8_BASE, 16);

    /* 3. Create Singleton COM Objects */
    g_obj_d3d9         = create_com_resource(g_vtbl_d3d9, 0, 0, 0, 0, 0);
    g_obj_d3ddev9      = create_com_resource(g_vtbl_d3ddev9, 0, 0, 1280, 720, 22);
    g_obj_backbuffer   = create_com_resource(g_vtbl_d3dsurf9, 4, 1280 * 720 * 4, 1280, 720, 22);
    g_obj_depthstencil = create_com_resource(g_vtbl_d3dsurf9, 4, 1280 * 720 * 4, 1280, 720, 75);
    g_obj_dinput8      = create_com_resource(g_vtbl_dinput8, 0, 0, 0, 0, 0);
    g_obj_dmloader8    = create_com_resource(g_vtbl_dmloader8, 7, 0, 0, 0, 0);
    g_obj_dmperf8      = create_com_resource(g_vtbl_dmperf8, 7, 0, 0, 0, 0);
    g_obj_dmseg8       = create_com_resource(g_vtbl_dmseg8, 7, 0, 0, 0, 0);
    g_obj_dmpath8      = create_com_resource(g_vtbl_dmpath8, 7, 0, 0, 0, 0);
    g_obj_dmstate8     = create_com_resource(g_vtbl_dmstate8, 7, 0, 0, 0, 0);

    /* 4. Initialize Static Strings & TIB in Guest Memory */
    strcpy((char *)guest_ptr(GUEST_CMDLINE_VA), g_cmdline_str);
    strcpy((char *)guest_ptr(GUEST_MODNAME_VA), "C:\\Midnight Club II\\mc2.exe");
    memcpy(guest_ptr(GUEST_ENVA_VA), "PATH=.\0\0", 8);
    {
        const char *env = "PATH=.";
        for (int i = 0; i <= 6; i++) {
            guest_write16(GUEST_ENVW_VA + (uint32_t)i * 2u, (uint16_t)env[i]);
        }
        guest_write16(GUEST_ENVW_VA + 14, 0);
    }

    /* Setup TIB at 0x00020000 */
    g_fs_base = GUEST_TIB_VA;
    guest_write32(g_fs_base + 0x00, 0xFFFFFFFFu);     /* ExceptionList = -1 */
    guest_write32(g_fs_base + 0x04, GUEST_STACK_TOP); /* StackBase */
    guest_write32(g_fs_base + 0x08, 0x01000000u);     /* StackLimit */
    guest_write32(g_fs_base + 0x18, g_fs_base);       /* Self */
    guest_write32(g_fs_base + 0x20, 1000);            /* ProcessId */
    guest_write32(g_fs_base + 0x24, 1001);            /* ThreadId */
    guest_write32(g_fs_base + 0x2C, GUEST_TLS_VA);    /* ThreadLocalStoragePointer */
    guest_write32(GUEST_TLS_VA, GUEST_TLS_VA + 64);

    /* Enable AGE internal debug output channel (Displayf / Warningf / Errorf -> OutputDebugStringA) */
    guest_ptr(0x00679848u)[0] |= 2;

    mc2hook_apply_boot_patches();

    PC_LOGI("Bridge initialized: %d PE imports patched, COM vtables ready.", PC_IMPORT_COUNT);
}

bool mc2_pc_memory_init_buffer(const uint8_t *raw, size_t fsize) {
    if (!raw || fsize < 0x1000) return false;

    if (!g_guest_base) {
#if defined(_WIN32)
        g_guest_base = (uint8_t *)VirtualAlloc(NULL, GUEST_MEM_SIZE, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
#else
        g_guest_base = (uint8_t *)mmap(NULL, GUEST_MEM_SIZE, PROT_READ | PROT_WRITE,
                                       MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        if (g_guest_base == MAP_FAILED) g_guest_base = NULL;
#endif
        if (!g_guest_base) {
            PC_LOGE("Failed to allocate 512 MB guest address space");
            return false;
        }
    }
    memset(g_guest_base, 0, 0x01000000u);
    g_xbox_mem_offset = (ptrdiff_t)g_guest_base;
    g_heap_cursor = GUEST_HEAP_START;

    /* Support both original PE (MZ) and synthetic XBE (XBEH) containers! */
    if (memcmp(raw, "MZ", 2) == 0) {
        uint32_t pe_off = 0;
        memcpy(&pe_off, raw + 0x3C, 4);
        uint16_t num_secs = 0, opt_size = 0;
        uint32_t image_base = 0, size_of_headers = 0;
        memcpy(&num_secs, raw + pe_off + 6, 2);
        memcpy(&opt_size, raw + pe_off + 20, 2);
        memcpy(&image_base, raw + pe_off + 24 + 28, 4);
        memcpy(&size_of_headers, raw + pe_off + 24 + 60, 4);

        /* Copy PE headers to 0x00400000 */
        if (size_of_headers > 0x1000) size_of_headers = 0x1000;
        memcpy(guest_ptr(image_base), raw, size_of_headers);

        uint32_t sec_table_off = pe_off + 24 + opt_size;
        for (uint16_t i = 0; i < num_secs; i++) {
            const uint8_t *sh = raw + sec_table_off + (uint32_t)i * 40u;
            char sname[9] = {0};
            memcpy(sname, sh, 8);
            uint32_t vsize = 0, rva = 0, raw_size = 0, raw_ptr = 0;
            memcpy(&vsize, sh + 8, 4);
            memcpy(&rva, sh + 12, 4);
            memcpy(&raw_size, sh + 16, 4);
            memcpy(&raw_ptr, sh + 20, 4);

            uint32_t va = image_base + rva;
            uint32_t copy_len = raw_size;
            if (raw_ptr + copy_len > (uint32_t)fsize) {
                copy_len = (raw_ptr < (uint32_t)fsize) ? ((uint32_t)fsize - raw_ptr) : 0;
            }
            if (copy_len > 0 && raw_ptr > 0) {
                memcpy(guest_ptr(va), raw + raw_ptr, copy_len);
            }
            PC_LOGI("Mapped PE section %-8s at VA 0x%08X (vsize=0x%X, raw=0x%X)",
                    sname, va, vsize, copy_len);
        }
    } else if (memcmp(raw, "XBEH", 4) == 0) {
        uint32_t base_addr = 0, num_secs = 0, sec_hdrs_va = 0;
        memcpy(&base_addr, raw + 0x104, 4);
        memcpy(&num_secs, raw + 0x11C, 4);
        memcpy(&sec_hdrs_va, raw + 0x120, 4);

        /* Synthesize valid MZ + PE header at 0x00400000 so WinMainCRTStartup check passes */
        guest_write16(base_addr + 0x00, 0x5A4Du); /* 'MZ' */
        guest_write32(base_addr + 0x3C, 0x80u);   /* e_lfanew */
        guest_write32(base_addr + 0x80, 0x00004550u); /* 'PE\0\0' */
        guest_write16(base_addr + 0x80 + 0x18, 0x010Bu); /* PE32 magic */
        guest_write32(base_addr + 0x80 + 0x74, 16u);     /* NumberOfRvaAndSizes */

        uint32_t sec_off = sec_hdrs_va - base_addr;
        for (uint32_t i = 0; i < num_secs && i < 16; i++) {
            const uint8_t *sh = raw + sec_off + i * 56u;
            uint32_t va = 0, vsize = 0, raw_addr = 0, raw_size = 0;
            memcpy(&va, sh + 4, 4);
            memcpy(&vsize, sh + 8, 4);
            memcpy(&raw_addr, sh + 12, 4);
            memcpy(&raw_size, sh + 16, 4);
            if (raw_size > 0 && raw_addr + raw_size <= (uint32_t)fsize) {
                memcpy(guest_ptr(va), raw + raw_addr, raw_size);
            }
            PC_LOGI("Mapped XBE section #%u at VA 0x%08X (vsize=0x%X, raw=0x%X)",
                    i, va, vsize, raw_size);
        }
    } else {
        PC_LOGE("Unrecognized binary format (expected MZ or XBEH)");
        return false;
    }

    return true;
}

bool mc2_pc_memory_init(const char *exe_path) {
    FILE *f = fopen(exe_path, "rb");
    if (!f) {
        PC_LOGE("Cannot open executable: %s", exe_path);
        return false;
    }
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (fsize < 0x1000) {
        fclose(f);
        return false;
    }

    uint8_t *raw = (uint8_t *)malloc((size_t)fsize);
    if (!raw || fread(raw, 1, (size_t)fsize, f) != (size_t)fsize) {
        free(raw);
        fclose(f);
        return false;
    }
    fclose(f);

    bool ok = mc2_pc_memory_init_buffer(raw, (size_t)fsize);
    free(raw);
    return ok;
}

void mc2_pc_memory_shutdown(void) {
    if (g_guest_base) {
#if defined(_WIN32)
        VirtualFree(g_guest_base, 0, MEM_RELEASE);
#else
        munmap(g_guest_base, GUEST_MEM_SIZE);
#endif
        g_guest_base = NULL;
        g_xbox_mem_offset = 0;
    }
}

extern void xbe_entry_point(void);

int mc2_pc_run_loaded(void) {
    mc2_pc_bridge_init();
    recomp_dispatch_init();

    g_esp = GUEST_STACK_TOP;
    g_ebp = GUEST_STACK_TOP;
    g_seh_ebp = GUEST_STACK_TOP;

    /* Push sentinel return address for xbe_entry_point */
    g_esp -= 4;
    guest_write32(g_esp, 0);

    PC_LOGI("Starting Midnight Club II (PC Recompiled) at OEP 0x0061958A (ESP=0x%08X, cmdline='%s')...",
            g_esp, g_cmdline_str);
    if (setjmp(g_exit_jmp) == 0) {
        g_exit_jmp_valid = 1;
        xbe_entry_point();
        g_exit_jmp_valid = 0;
    } else {
        g_exit_jmp_valid = 0;
    }
    PC_LOGI("xbe_entry_point finished (eax=0x%08X, frames=%u)", g_eax, g_frame_count);
    return (int)g_eax;
}

int mc2_pc_boot_and_run(const char *exe_path, const char *game_dir, const char *cmdline) {
    mc2_pc_set_paths(game_dir, NULL);
    mc2_pc_set_cmdline(cmdline);

    if (!mc2_pc_memory_init(exe_path)) {
        return -1;
    }
    return mc2_pc_run_loaded();
}
