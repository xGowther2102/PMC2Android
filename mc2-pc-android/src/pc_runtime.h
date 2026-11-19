#ifndef MC2_PC_RUNTIME_H
#define MC2_PC_RUNTIME_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int index;
    int ordinal;
    uint32_t thunk_addr;
    int pop_bytes;
    const char *dll;
    const char *func;
} PcImportEntry;

/* Initialize 512 MB guest memory and map mc2.exe (or mc2_pc.xbe) at 0x00400000 */
bool mc2_pc_memory_init(const char *exe_path);
bool mc2_pc_memory_init_buffer(const uint8_t *raw, size_t fsize);
void mc2_pc_memory_shutdown(void);

/* Solicita la salida cooperativa del bucle del juego (seguro entre hilos). */
void mc2_pc_request_stop(void);
int mc2_pc_is_stop_requested(void);

/* Registro de descriptores SAF para los datos de solo lectura. */
void mc2_pc_register_data_fd(const char *relative_path, int fd, long long size);
void mc2_pc_clear_data_fds(void);
int mc2_pc_data_fd_count(void);

/* Resumen del uso real de los archivos del arbol SAF (para diagnostico). */
const char *mc2_pc_data_usage_summary(void);

/* Depurador integrado: informe completo, resumen y reinicio del colector. */
const char *mc2_diag_report(void);
const char *mc2_diag_summary(void);
void mc2_diag_reset(void);

/* Sonda CRC32 de un tramo de un archivo del arbol SAF. */
const char *mc2_pc_probe_data(const char *guest_path, long long offset, int len);
void mc2_pc_dump_data_usage(void);

/* Configure game root directory and optional command line before booting */
void mc2_pc_set_paths(const char *game_dir, const char *save_dir);
void mc2_pc_set_cmdline(const char *cmdline);

/* Initialize IAT thunks (0xFE000000+) and COM vtables (0xFE010000+) */
void mc2_pc_bridge_init(void);

/* High-level boot entry point (initializes stack/TIB/dispatch and calls xbe_entry_point) */
int mc2_pc_boot_and_run(const char *exe_path, const char *game_dir, const char *cmdline);
int mc2_pc_run_loaded(void);

/* Guest memory allocator */
uint32_t pc_guest_alloc(uint32_t size, int zero_mem);
uint32_t pc_guest_realloc(uint32_t old_va, uint32_t new_size, int zero_mem);
uint32_t pc_guest_size(uint32_t va);
int pc_guest_free(uint32_t va);

/* Frame & log statistics for Android HUD / host console */
uint32_t mc2_pc_get_frame_count(void);
uint32_t mc2_pc_get_draw_calls(void);
void mc2_pc_get_recent_logs(char *out_buf, size_t max_len);

/* ================================================================
 * Phase 3: Direct3D 9 -> OpenGL ES 3.0 Render & Input Bridge
 * ================================================================ */

typedef struct {
    float x, y, z, w; /* Homogeneous clip-space position */
    uint8_t r, g, b, a;
    float u, v;
    float u1, v1;
} Mc2Vertex;

typedef struct {
    uint32_t tex_va;
    uint32_t tex_w;
    uint32_t tex_h;
    uint32_t tex_version;
    const uint8_t *tex_rgba;
    uint32_t prim_type;   /* D3DPRIMITIVETYPE: 1=Point, 2=LineList, 3=LineStrip, 4=TriList, 5=TriStrip, 6=TriFan */
    uint32_t first_idx;
    uint32_t idx_count;
    uint8_t alpha_blend;
    uint8_t src_blend;
    uint8_t dst_blend;
    uint8_t z_enable;
    uint8_t z_write;
    uint8_t z_func;        /* D3DCMPFUNC: 1=NEVER..8=ALWAYS (default 4=LESSEQUAL) */
    uint8_t cull_mode;
    uint8_t alpha_test;
    uint8_t alpha_ref;
    uint8_t alpha_func;    /* D3DCMPFUNC: 1=NEVER..8=ALWAYS */
    uint8_t cwrite_mask;   /* D3DRS_COLORWRITEENABLE: bit0=R,1=G,2=B,3=A */
    uint8_t use_tex_rgb;   /* Stage 0 samples texture RGB */
    uint8_t use_tex_alpha; /* Stage 0 samples texture Alpha */
    uint8_t wrap_u;        /* D3DTEXTUREADDRESS: 1=WRAP, 2=MIRROR, 3=CLAMP */
    uint8_t wrap_v;
    uint8_t stencil_en;
    uint8_t stencil_func;
    uint8_t stencil_ref;
    uint8_t stencil_mask;
    uint8_t stencil_wmask;
    uint8_t stencil_fail;
    uint8_t stencil_zfail;
    uint8_t stencil_pass;
    uint8_t is_clear;
    uint8_t clear_flags;   /* 1=TARGET, 2=ZBUFFER, 4=STENCIL */
    uint32_t clear_color;  /* 0xAARRGGBB */
    float vp_x, vp_y, vp_w, vp_h;
    uint32_t target_va;    /* 0 = backbuffer, else offscreen RT parent texture VA */
    uint16_t target_w, target_h;
    uint8_t src_is_rt;     /* 1 if bound stage-0 texture is an offscreen RT */
    uint32_t tex1_va;
    uint16_t tex1_w, tex1_h;
    uint32_t tex1_version;
    const uint8_t *tex1_rgba;
    uint8_t src1_is_rt;
    uint8_t wrap_u1, wrap_v1;
    uint8_t color_op1, alpha_op1;
    uint8_t color1_arg1, color1_arg2;
    uint8_t alpha1_arg1, alpha1_arg2;
    uint32_t texture_factor;
    uint8_t blend_op;      /* D3DBLENDOP: 1=ADD, 2=SUBTRACT, 3=REVSUBTRACT */
    uint8_t has_scissor;   /* Nonzero on partial Clear(Count>0, pRects!=NULL) */
    int16_t scissor_x, scissor_y;
    uint16_t scissor_w, scissor_h;
    uint8_t target_cube_face; /* 0 = 2D target/backbuffer, 1..6 = CubeMap face + 1 */
    uint8_t tex1_is_cube;     /* 1 if Stage 1 texture is IDirect3DCubeTexture9 */
    uint8_t fog_enable;       /* D3DRS_FOGENABLE */
    uint8_t fog_mode;         /* D3DRS_FOGTABLEMODE / FOGVERTEXMODE */
    uint32_t fog_color;       /* D3DRS_FOGCOLOR (0xAARRGGBB) */
    float fog_start;          /* D3DRS_FOGSTART */
    float fog_end;            /* D3DRS_FOGEND */
    float fog_density;        /* D3DRS_FOGDENSITY */
} Mc2DrawBatch;

typedef struct {
    uint32_t frame_id;
    uint32_t clear_color;
    Mc2Vertex *verts;
    uint32_t vert_count;
    uint32_t *indices;
    uint32_t idx_count;
    Mc2DrawBatch *batches;
    uint32_t batch_count;
    uint16_t dev_w, dev_h;
} Mc2RenderFrame;

/* Acquire latest completed D3D9 frame for GLES rendering (thread-safe) */
const Mc2RenderFrame *mc2_pc_acquire_render_frame(void);
void mc2_pc_release_render_frame(void);

/* Inject DirectInput8 DIK_* key state (pressed: 1 or 0) from Android touch/gamepad */
void mc2_pc_set_key_state(int dik_code, int pressed);

/* Queue a printable character (WM_CHAR) for MC2's Win32 message pump */
void mc2_pc_push_char(int ch);

/* Inject mouse coordinates in active game resolution, relative deltas, and Win32 mouse event */
void mc2_pc_set_mouse_state(int x, int y, int dx, int dy, int left_down, int msg_type);

/* Active D3D9 device backbuffer dimensions (e.g. 1280x720 by default) */
int mc2_pc_get_dev_w(void);
int mc2_pc_get_dev_h(void);

/* Mix active audio samples/streams into stereo 16-bit PCM for AAudio callback */
void mc2_audio_mix(int16_t *out_buffer, int num_frames, int sample_rate);
int mc2_dm_mix_pcm(int16_t *out_buffer, int num_frames, int sample_rate);

/* Background Music (MP3) Platform Playback Bridge */
void mc2_platform_play_music(const char *path, int loop);
void mc2_platform_stop_music(void);
void mc2_platform_pause_music(void);
void mc2_platform_resume_music(void);
void mc2_platform_set_music_volume(float vol);

/* Integrated MC2HOOK Framework Configuration (port of jtxredline/mc2hook) */
typedef struct {
    int enabled;
    int open_spy;
    int multi_dat;
    int reflection_res;        /* 128, 256, 512, 1024 */
    int reflection_no_skip;    /* 0 or 1 */
    int ai_player_models;      /* 0 or 1 */
    float car_shadow_intensity;/* 0.5 .. 1.5 (default 0.5) */
    int body_shader;           /* 0 or 1 */
    float draw_dist_mult;      /* 1.0 .. 2.5 */
    int menu_scroll_fix;       /* 0 or 1 */
    int burnout_fps_fix;       /* 0 or 1 */
    int manual_reverse;        /* 0 or 1 */
    int expand_world;          /* 0 or 1 */
    float time_warp;           /* 0.5 .. 1.5 (default 1.0) */
    float gravity;             /* -9.8 default */
} Mc2HookConfig;

void mc2_pc_set_mc2hook_config(const Mc2HookConfig *cfg);
void mc2_pc_get_mc2hook_config(Mc2HookConfig *out);

int mc2hook_is_enabled(void);
int mc2hook_reflection_res(void);
int mc2hook_reflection_no_skip(void);
int mc2hook_ai_player_models(void);
float mc2hook_car_shadow_intensity(void);
int mc2hook_menu_scroll_fix(void);
int mc2hook_burnout_fps_fix(void);
int mc2hook_manual_reverse(void);
int mc2hook_expand_world(void);
int mc2hook_multi_dat(void);
float mc2hook_time_warp(void);
uint32_t mc2hook_next_extra_dat(int *cursor);
void mc2hook_apply_burnout_fps_fix(uint32_t car_sim_va);

#ifdef __cplusplus
}
#endif

#endif /* MC2_PC_RUNTIME_H */

