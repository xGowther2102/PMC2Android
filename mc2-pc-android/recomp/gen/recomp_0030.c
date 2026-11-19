/**
 * Midnight Club II (PC) - Recompiled code chunk 30
 * Functions: 250 (0x00571480 - 0x0057C8C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00571480
 * Original: 0x00571480 - 0x00571492 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00571480(void)
{

loc_00571480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00571488u); RECOMP_ABI_CALL(0x005995F0u, sub_005995F0); /* call 0x005995F0 */

loc_00571488: ;
    MEM32(esi) = 0x65111C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005714A0
 * Original: 0x005714A0 - 0x005714A7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005714A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005714A0: ;
    eax = MEM32(ecx + 0x6C);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_005714B0
 * Original: 0x005714B0 - 0x005714B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005714B0(void)
{

loc_005714B0: ;
    MEM32(ecx) = 0x6510FC;
    esp += 4; return; /* ret */

}

/**
 * sub_005714C0
 * Original: 0x005714C0 - 0x0057154F (143 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005714C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005714C0: ;
    fp_push(MEMF(0x673E6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_005714D3: ;
    fp_push(MEMF(0x673E70)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_005714E6: ;
    fp_push(MEMF(0x673E74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_005714F9: ;
    fp_push(MEMF(0x673E78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_0057150C: ;
    fp_push(MEMF(0x673E7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_0057151F: ;
    fp_push(MEMF(0x673E80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057154A; /* jp: parity */

loc_00571532: ;
    fp_push(MEMF(0x673E5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63384C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63384c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057154A; /* jnp: not parity */

loc_00571545: ;
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0057154A: ;
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) | 2;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00571550
 * Original: 0x00571550 - 0x00571555 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00571550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00571550: ;
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) | 1;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00571560
 * Original: 0x00571560 - 0x00571565 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00571560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00571560: ;
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00571570
 * Original: 0x00571570 - 0x00571B7D (1549 bytes, 468 insns)
 * CC: cdecl, 9 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00571570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00571570: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x50);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    ebp = MEM32(esp + 0x78);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    edi = MEM32(esp + 0x74);
    ebx = ecx;
    MEM32(esp + 0x18) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x14) = 0;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEM32(esp + 0x10) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x2C) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x673E88)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057194C; /* jne: not equal / not zero */

loc_00571623: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005717A8; /* jne: not equal / not zero */

loc_0057163A: ;
    eax = MEM32(esp + 0x6C);
    MEM32(eax) = 0;

loc_00571644: ;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;

loc_0057165C: ;
    eax = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + 8) = (float)fp_top(); /* fst */
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esp + 0x70);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057180F; /* jne: not equal / not zero */

loc_005717A4: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    goto loc_00571815;

loc_005717A8: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005717C5; /* jp: parity */

loc_005717B9: ;
    ecx = MEM32(esp + 0x6C);
    MEM32(ecx) = 0x40490FDB;
    goto loc_005717E7;

loc_005717C5: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0x005717CEu); RECOMP_ABI_CALL(0x0061A620u, sub_0061A620); /* call 0x0061A620 */

loc_005717CE: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esp + 0x6C);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DF88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63df88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00571644; /* jne: not equal / not zero */

loc_005717E7: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0057180Au); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0057180A: ;
    goto loc_0057165C;

loc_0057180F: ;
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00571815: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00571828; /* jne: not equal / not zero */

loc_00571824: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    goto loc_0057182E;

loc_00571828: ;
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0057182E: ;
    edx = MEM32(ebx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(edx + 8)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x6510F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x643C30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x643c30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005718A4; /* jne: not equal / not zero */

loc_00571885: ;
    ecx = MEM32(esp + 0x44);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0x005718A2u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005718A2: ;
    goto loc_005718BE;

loc_005718A4: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x34) = 0;

loc_005718BE: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    eax = MEM32(esp + 0x6C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E70)); /* fmul dword ptr [0x673e70] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x673E6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x28) = ecx;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    edx = MEM32(esp + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x30) = eax;

loc_0057194C: ;
    ecx = MEM32(esp + 0x78);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00571B20; /* jne: not equal / not zero */

loc_00571965: ;
    fp_push(MEMF(0x673E78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005719A2; /* jp: parity */

loc_00571978: ;
    fp_push(MEMF(0x673E7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005719A2; /* jp: parity */

loc_0057198B: ;
    fp_push(MEMF(0x673E80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00571B20; /* jnp: not parity */

loc_005719A2: ;
    eax = MEM32(esp + 0x68);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 4) & 7]; g_fp_stack[(g_fp_top + 4) & 7] = _t; } /* fxch st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] + fp_top()); fp_pop(); /* faddp st(4) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x6C);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx) = edx;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 4);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_push(MEMF(0x6510F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C521C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DF88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63df88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00571AA6; /* jne: not equal / not zero */

loc_00571A9E: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_00571AC4;

loc_00571AA6: ;
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65113C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65113c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00571ABE; /* jp: parity */

loc_00571AB6: ;
    fp_push(MEMF(0x630320)); /* fld float */
    goto loc_00571AC4;

loc_00571ABE: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00571AC4: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp)); /* fmul dword ptr [ebp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E80)); /* fmul dword ptr [0x673e80] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E7C)); /* fmul dword ptr [0x673e7c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E78)); /* fmul dword ptr [0x673e78] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_00571B20: ;
    eax = MEM32(ebx + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    POP32(esp, edi);
    fp_top() = -fp_top(); /* fchs */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    POP32(esp, ebp);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00571B80
 * Original: 0x00571B80 - 0x0057239C (2076 bytes, 567 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00571B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00571B80: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x128);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x12C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0xE8) = 0;
    MEM32(esp + 0xE4) = 0;
    MEM32(esp + 0xE0) = 0;
    PUSH32(esp, 0x00571BDEu); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00571BDE: ;
    ecx = MEM32(esp + 0x13C);
    edi = MEM32(esp + 0x134);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00571BFAu); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00571BFA: ;
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    edx = MEM32(esp + 0x12C);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0xC0)); /* fld float */
    ecx = esp + 0xBC;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xCC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x50)); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x5C)); /* fadd dword ptr [esp + 0x5c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xDC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00571C9Au); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00571C9A: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x88) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x9C) = ecx;
    ecx = esp + 0x38;
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x98) = eax;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    ecx = esp + 0xE8;
    MEM32(esp + 0xA4) = edx;
    MEM32(esp + 0xA8) = eax;
    PUSH32(esp, 0x00571D0Eu); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_00571D0E: ;
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00571D27u); RECOMP_ABI_CALL(0x00606F30u, sub_00606F30); /* call 0x00606F30 */

loc_00571D27: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    ecx = MEM32(0x6797CC);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    ebp = MEM32(esp + 0x128);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    edx = MEM32(0x6797D4);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEM32(esp + 0x1C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    eax = esp + 0x78;
    ecx = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(ebx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEM32(esp + 0x70) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x10)); /* fadd dword ptr [edi + 0x10] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x14)); /* fadd dword ptr [edi + 0x14] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x18)); /* fadd dword ptr [edi + 0x18] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x1C)); /* fadd dword ptr [edi + 0x1c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x20)); /* fadd dword ptr [edi + 0x20] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp)); /* fmul dword ptr [ebp] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 4)); /* fmul dword ptr [ebp + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00571E0Du); RECOMP_ABI_CALL(0x00594B90u, sub_00594B90); /* call 0x00594B90 */

loc_00571E0D: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x68);
    ecx = MEM32(ebx + 8);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00571E46u); RECOMP_ABI_CALL(0x00594B90u, sub_00594B90); /* call 0x00594B90 */

loc_00571E46: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    ecx = MEM32(ebx + 4);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x6C)); /* fsub dword ptr [esp + 0x6c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x74)); /* fsub dword ptr [esp + 0x74] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x20)); /* fmul dword ptr [edi + 0x20] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x118)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005720F3; /* jnp: not parity */

loc_00572005: ;
    edx = MEM32(esp + 0x11C);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00572041; /* jne: not equal / not zero */

loc_00572031: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x118)); /* fadd dword ptr [esp + 0x118] */
    MEMF(esp + 0x118) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00572043;

loc_00572041: ;
    fp_pop(); /* fstp st(0) */

loc_00572043: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005720AF; /* jnp: not parity */

loc_005720A8: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x118) / fp_top()); /* fdivr dword ptr [esp + 0x118] */

loc_005720AF: ;
    fp_push(MEMF(0x673E68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x18) = edx;
    goto loc_00572109;

loc_005720F3: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 0;

loc_00572109: ;
    fp_push(MEMF(esp + 0x120)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00572248; /* jnp: not parity */

loc_00572121: ;
    edx = MEM32(esp + 0x124);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x120)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00572169; /* jne: not equal / not zero */

loc_00572158: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057218E; /* je: equal / zero */

loc_00572169: ;
    fp_push(MEMF(esp + 0x120)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005721A0; /* jp: parity */

loc_0057217D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005721A0; /* jp: parity */

loc_0057218E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x120)); /* fadd dword ptr [esp + 0x120] */
    MEMF(esp + 0x120) = (float)fp_top(); fp_pop(); /* fstp */

loc_005721A0: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057220C; /* jnp: not parity */

loc_00572205: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x120) / fp_top()); /* fdivr dword ptr [esp + 0x120] */

loc_0057220C: ;
    fp_push(MEMF(0x6C5218)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00572248: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x12C);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD4)); /* fadd dword ptr [ecx + 0xd4] */
    MEMF(ecx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD8)); /* fadd dword ptr [ecx + 0xd8] */
    MEMF(ecx + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xDC)); /* fadd dword ptr [ecx + 0xdc] */
    MEMF(ecx + 0xDC) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(ebx + 8);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp)); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 4)); /* fadd dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005723A0
 * Original: 0x005723A0 - 0x005726C7 (807 bytes, 221 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005723A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005723A0: ;
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x104);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x104);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebp = ecx;
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x005723CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005723C9u); } /* indirect call */
    }

loc_005723CC: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ebx = ebp + 0x24;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x005723DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005723DCu); } /* indirect call */
    }

loc_005723DF: ;
    ebp = MEM32(ebp + 8);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x005723F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005723EFu); } /* indirect call */
    }

loc_005723F2: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    ecx = esp + 0x40;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x5C)); /* fadd dword ptr [esp + 0x5c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00572467u); RECOMP_ABI_CALL(0x00609760u, sub_00609760); /* call 0x00609760 */

loc_00572467: ;
    fp_push(MEMF(ebx)); /* fld float */
    MEM32(esp + 0xA0) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x70)); /* fsub dword ptr [edi + 0x70] */
    MEM32(esp + 0xB0) = 0;
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x74)); /* fsub dword ptr [edi + 0x74] */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x78)); /* fsub dword ptr [edi + 0x78] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    eax = MEM32(esp + 0x10C);
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x70;
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(eax)); /* fld float */
    ebx = edi + 0x4C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x70)); /* fsub dword ptr [edi + 0x70] */
    PUSH32(esp, ebx);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x74)); /* fsub dword ptr [edi + 0x74] */
    MEM32(esp + 0xC8) = 0;
    fp_push(MEMF(eax + 8)); /* fld float */
    MEM32(esp + 0x78) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x78)); /* fsub dword ptr [edi + 0x78] */
    MEM32(esp + 0x88) = 0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x98) = 0;
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057254Au); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_0057254A: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 0xD4;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005725BCu); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_005725BC: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, 0x005725D2u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_005725D2: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = esp + 0xD4;
    PUSH32(esp, 0x005725E6u); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_005725E6: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x005725FCu); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_005725FC: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = esp + 0x78;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00572630u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572630: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, 0x00572641u); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_00572641: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00572657u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572657: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005726D0
 * Original: 0x005726D0 - 0x005726EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005726D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005726D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005726D8u); RECOMP_ABI_CALL(0x005714B0u, sub_005714B0); /* call 0x005714B0 */

loc_005726D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005726E8; /* je: equal / zero */

loc_005726DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005726E5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005726E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005726E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005726F0
 * Original: 0x005726F0 - 0x005727D9 (233 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005726F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005726F0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(eax + 8);
    edx = esi + 0xC;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax);
    ebx = esi + 0x18;
    MEM32(ebx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x6C) = 2;
    PUSH32(esp, 0x00572732u); RECOMP_ABI_CALL(0x005714C0u, sub_005714C0); /* call 0x005714C0 */

loc_00572732: ;
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x78) = edi;
    eax = 0x3F800000;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = edi;
    MEM32(esi + 0xA8) = edi;
    PUSH32(esp, ebx);
    MEM32(esi + 0xAC) = edi;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = edi;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    MEM32(esi + 0xC0) = eax;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0xCC) = edi;
    MEM32(esi + 0xC8) = edi;
    MEM32(esi + 0xC4) = edi;
    PUSH32(esp, 0x005727D0u); RECOMP_ABI_CALL(0x005999E0u, sub_005999E0); /* call 0x005999E0 */

loc_005727D0: ;
    MEM32(esi + 0x6C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005727E0
 * Original: 0x005727E0 - 0x00572806 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005727E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005727E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005727E8u); RECOMP_ABI_CALL(0x00571560u, sub_00571560); /* call 0x00571560 */

loc_005727E8: ;
    PUSH32(esp, 0x005727EDu); RECOMP_ABI_CALL(0x00599650u, sub_00599650); /* call 0x00599650 */

loc_005727ED: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00572804; /* je: equal / zero */

loc_005727F4: ;
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = eax + 0x4C;
    PUSH32(esp, 0x00572804u); RECOMP_ABI_CALL(0x0046E8C0u, sub_0046E8C0); /* call 0x0046E8C0 */

loc_00572804: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00572810
 * Original: 0x00572810 - 0x00573C12 (5122 bytes, 1183 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00572810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00572810: ;
    _fb = (uint32_t)(0x3D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573C0A; /* jne: not equal / not zero */

loc_00572823: ;
    eax = MEM32(esi + 4);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1AC) = (float)fp_top(); /* fst */
    PUSH32(esp, edi);
    fp_push(MEMF(eax + 4)); /* fld float */
    MEMF(esp + 0x1B4) = (float)fp_top(); /* fst */
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1B8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x1BC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x1C0) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x1C4) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x1C8) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x1CC) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(esp + 0x1D0) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1DC) = 0;
    MEM32(esp + 0x1D8) = 0;
    MEM32(esp + 0x1D4) = 0;
    ecx = MEM32(eax);
    MEM32(esp + 0xC0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xC8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0xCC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0xD0) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0xD4) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0xD8) = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(esp + 0x1B8);
    MEM32(esp + 0xDC) = edx;
    eax = MEM32(eax + 0x20);
    MEMF(esp + 0x258) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1BC);
    MEM32(esp + 0x260) = ecx;
    MEMF(esp + 0x25C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C4);
    MEM32(esp + 0xE0) = eax;
    eax = MEM32(esp + 0x1C0);
    MEM32(esp + 0x26C) = ecx;
    ecx = MEM32(esp + 0x1D0);
    MEM32(esp + 0x264) = edx;
    edx = MEM32(esp + 0x1C8);
    MEM32(esp + 0x268) = eax;
    eax = MEM32(esp + 0x1CC);
    MEM32(esp + 0x278) = ecx;
    ecx = esp + 0x258;
    MEM32(esp + 0xEC) = 0;
    MEM32(esp + 0xE8) = 0;
    MEM32(esp + 0xE4) = 0;
    MEM32(esp + 0x270) = edx;
    MEM32(esp + 0x274) = eax;
    MEM32(esp + 0x27C) = 0;
    MEM32(esp + 0x280) = 0;
    MEM32(esp + 0x284) = 0;
    PUSH32(esp, 0x005729C4u); RECOMP_ABI_CALL(0x006083A0u, sub_006083A0); /* call 0x006083A0 */

loc_005729C4: ;
    edx = MEM32(esp + 0xC0);
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    MEM32(esp + 0x228) = edx;
    edx = MEM32(esp + 0xCC);
    MEM32(esp + 0x22C) = eax;
    eax = MEM32(esp + 0xD0);
    MEM32(esp + 0x230) = ecx;
    ecx = MEM32(esp + 0xD4);
    MEM32(esp + 0x234) = edx;
    MEM32(esp + 0x238) = eax;
    MEM32(esp + 0x23C) = ecx;
    ecx = MEM32(esp + 0xE0);
    edx = MEM32(esp + 0xD8);
    eax = MEM32(esp + 0xDC);
    MEM32(esp + 0x248) = ecx;
    ecx = MEM32(esp + 0xEC);
    MEM32(esp + 0x240) = edx;
    edx = MEM32(esp + 0xE4);
    MEM32(esp + 0x244) = eax;
    eax = MEM32(esp + 0xE8);
    MEM32(esp + 0x254) = ecx;
    ecx = esp + 0x228;
    MEM32(esp + 0x24C) = edx;
    MEM32(esp + 0x250) = eax;
    PUSH32(esp, 0x00572A78u); RECOMP_ABI_CALL(0x006083A0u, sub_006083A0); /* call 0x006083A0 */

loc_00572A78: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x28C;
    PUSH32(esp, eax);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00572A8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00572A8Bu); } /* indirect call */
    }

loc_00572A8E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x34C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00572AA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00572A9Eu); } /* indirect call */
    }

loc_00572AA1: ;
    ecx = esp + 0x348;
    PUSH32(esp, ecx);
    ecx = esp + 0x28C;
    PUSH32(esp, 0x00572AB5u); RECOMP_ABI_CALL(0x00594630u, sub_00594630); /* call 0x00594630 */

loc_00572AB5: ;
    ecx = esp + 0x288;
    PUSH32(esp, 0x00572AC1u); RECOMP_ABI_CALL(0x00609760u, sub_00609760); /* call 0x00609760 */

loc_00572AC1: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x70)); /* fsub dword ptr [eax + 0x70] */
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x74)); /* fsub dword ptr [eax + 0x74] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x78)); /* fsub dword ptr [eax + 0x78] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEM32(esp + 0x180) = 0;
    MEM32(esp + 0x188) = edx;
    MEM32(esp + 0x190) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1A0) = 0;
    MEM32(esp + 0x1AC) = 0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x1A8) = 0;
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x1A4) = 0;
    MEMF(esp + 0x184) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x150) = 0;
    MEMF(esp + 0x18C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x194) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x198) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x19C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x154) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x158) = ecx;
    ecx = MEM32(esp + 8);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x164) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x16C) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x15C) = edx;
    MEM32(esp + 0x160) = 0;
    MEM32(esp + 0x170) = 0;
    MEM32(esp + 0x17C) = 0;
    MEM32(esp + 0x178) = 0;
    MEM32(esp + 0x174) = 0;
    MEMF(esp + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x00572C20u); RECOMP_ABI_CALL(0x00607DA0u, sub_00607DA0); /* call 0x00607DA0 */

loc_00572C20: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x25C;
    PUSH32(esp, ecx);
    ecx = esp + 0x2F0;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x8C) = 0;
    PUSH32(esp, 0x00572C5Au); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572C5A: ;
    edx = esp + 0x1B0;
    PUSH32(esp, edx);
    eax = esp + 0x2EC;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    MEM32(esp + 0x31C) = 0;
    MEM32(esp + 0x318) = 0;
    MEM32(esp + 0x314) = 0;
    PUSH32(esp, 0x00572C94u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572C94: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x68);
    MEM32(esp + 0x120) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x124) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x128) = eax;
    eax = MEM32(esp + 0x74);
    MEM32(esp + 0x12C) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x130) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x134) = eax;
    eax = MEM32(esp + 0x80);
    MEM32(esp + 0x138) = ecx;
    ecx = esp + 0x120;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x13C) = edx;
    MEM32(esp + 0x140) = eax;
    MEM32(esp + 0x144) = 0;
    MEM32(esp + 0x148) = 0;
    MEM32(esp + 0x14C) = 0;
    PUSH32(esp, 0x00572D48u); RECOMP_ABI_CALL(0x00609760u, sub_00609760); /* call 0x00609760 */

loc_00572D48: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, 0x00572D65u); RECOMP_ABI_CALL(0x00607DA0u, sub_00607DA0); /* call 0x00607DA0 */

loc_00572D65: ;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x22C;
    PUSH32(esp, edx);
    ecx = esp + 0x2F0;
    MEM32(esp + 0xC4) = 0;
    MEM32(esp + 0xC0) = 0;
    MEM32(esp + 0xBC) = 0;
    PUSH32(esp, 0x00572DA2u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572DA2: ;
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x2EC;
    PUSH32(esp, ecx);
    ecx = esp + 0x98;
    PUSH32(esp, 0x00572DBEu); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572DBE: ;
    ecx = MEM32(esp + 0x98);
    edx = MEM32(esp + 0x90);
    eax = MEM32(esp + 0x94);
    MEM32(esp + 0xF8) = ecx;
    ecx = MEM32(esp + 0xA4);
    MEM32(esp + 0xF0) = edx;
    edx = MEM32(esp + 0x9C);
    MEM32(esp + 0xF4) = eax;
    eax = MEM32(esp + 0xA0);
    MEM32(esp + 0x104) = ecx;
    ecx = MEM32(esp + 0xB0);
    MEM32(esp + 0xFC) = edx;
    edx = MEM32(esp + 0xA8);
    MEM32(esp + 0x100) = eax;
    eax = MEM32(esp + 0xAC);
    MEM32(esp + 0x110) = ecx;
    ecx = MEM32(esp + 0xBC);
    MEM32(esp + 0x108) = edx;
    edx = MEM32(esp + 0xB4);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(esp + 0xB8);
    MEM32(esp + 0x11C) = ecx;
    ecx = esp + 0xF0;
    MEM32(esp + 0x114) = edx;
    MEM32(esp + 0x118) = eax;
    PUSH32(esp, 0x00572E72u); RECOMP_ABI_CALL(0x00609760u, sub_00609760); /* call 0x00609760 */

loc_00572E72: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 2 (8-bit) */
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x30) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00572F91; /* je: equal / zero */

loc_00572EB4: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x2C0;
    MEM32(esp + 0x2EC) = 0;
    MEM32(esp + 0x2E8) = 0;
    MEM32(esp + 0x2E4) = 0;
    PUSH32(esp, 0x00572EF0u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572EF0: ;
    ecx = esp + 0x1B0;
    PUSH32(esp, ecx);
    edx = esi + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0x320;
    MEM32(esp + 0x34C) = 0;
    MEM32(esp + 0x348) = 0;
    MEM32(esp + 0x344) = 0;
    PUSH32(esp, 0x00572F29u); RECOMP_ABI_CALL(0x00606D50u, sub_00606D50); /* call 0x00606D50 */

loc_00572F29: ;
    eax = esp + 0x318;
    PUSH32(esp, eax);
    ecx = esp + 0x3AC;
    PUSH32(esp, 0x00572F3Du); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_00572F3D: ;
    ecx = esp + 0x2B8;
    PUSH32(esp, ecx);
    ecx = esp + 0x37C;
    PUSH32(esp, 0x00572F51u); RECOMP_ABI_CALL(0x006083D0u, sub_006083D0); /* call 0x006083D0 */

loc_00572F51: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x38C;
    PUSH32(esp, ecx);
    edx = esp + 0x2D0;
    PUSH32(esp, edx);
    eax = esp + 0x3C4;
    PUSH32(esp, eax);
    ecx = esp + 0x338;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00572F91u); RECOMP_ABI_CALL(0x00571570u, sub_00571570); /* call 0x00571570 */

loc_00572F91: ;
    edx = MEM32(0x6797D4);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    eax = esp + 0x208;
    PUSH32(esp, eax);
    ebp = edx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x00572FAFu); RECOMP_ABI_CALL(0x00594B30u, sub_00594B30); /* call 0x00594B30 */

loc_00572FAF: ;
    ecx = esp + 0x220;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00572FC0u); RECOMP_ABI_CALL(0x00594B90u, sub_00594B90); /* call 0x00594B90 */

loc_00572FC0: ;
    ecx = MEM32(esi + 8);
    edx = esp + 0x214;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00572FD1u); RECOMP_ABI_CALL(0x00594B30u, sub_00594B30); /* call 0x00594B30 */

loc_00572FD1: ;
    ecx = MEM32(esi + 8);
    eax = esp + 0x1F0;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00572FE2u); RECOMP_ABI_CALL(0x00594B90u, sub_00594B90); /* call 0x00594B90 */

loc_00572FE2: ;
    eax = MEM32(esi + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x214)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x218)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x21C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_push(MEMF(esp + 0xAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_push(MEMF(esp + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_push(MEMF(esp + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x90)); /* fmul dword ptr [eax + 0x90] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x88)); /* fmul dword ptr [eax + 0x88] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x1F4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x1F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_push(MEMF(esp + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x100)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xF4)); /* fmul dword ptr [esp + 0xf4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x110)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x114)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x108)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x16C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x154)); /* fmul dword ptr [esp + 0x154] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x158)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x170)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x15C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x174)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x168)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(esp + 0x208)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); /* fsubr st(3) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x210)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x8C)); /* fmul dword ptr [ecx + 0x8c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x220)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x224)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x228)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_push(MEMF(esp + 0x13C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x130)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x124)); /* fmul dword ptr [esp + 0x124] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x128)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x140)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x134)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x12C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x144)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x138)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x19C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x190)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x184)); /* fmul dword ptr [esp + 0x184] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    fp_push(MEMF(esp + 0x188)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    eax = esp + 0x1E8;
    fp_push(MEMF(esp + 0x1A4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    PUSH32(esp, edi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x198)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x1B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00573531u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057352Eu); } /* indirect call */
    }

loc_00573531: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x200;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00573544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00573541u); } /* indirect call */
    }

loc_00573544: ;
    fp_push(MEMF(esp + 0x1FC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1E4)); /* fsub dword ptr [esp + 0x1e4] */
    fp_push(MEMF(esp + 0x200)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1E8)); /* fsub dword ptr [esp + 0x1e8] */
    fp_push(MEMF(esp + 0x204)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1EC)); /* fsub dword ptr [esp + 0x1ec] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x2A4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x298)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x290)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x29C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    SET_LO8(eax, MEM8(esi + 0x6C));
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    fp_push(MEMF(esp + 0x294)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    POP32(esp, ebp);
    fp_push(MEMF(esp + 0x2A8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x29C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_0057373D; /* je: equal / zero */

loc_00573631: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e5c] */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x40) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057367C; /* jne: not equal / not zero */

loc_0057364C: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x673E5C)); /* fsub dword ptr [0x673e5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573677; /* jp: parity */

loc_00573671: ;
    MEM32(esp + 0x20) = ecx;
    goto loc_0057367C;

loc_00573677: ;
    ecx = 1;

loc_0057367C: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e64] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005736B4; /* jne: not equal / not zero */

loc_00573691: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x673E64)); /* fsub dword ptr [0x673e64] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005736F2; /* jp: parity */

loc_005736B2: ;
    goto loc_005736E6;

loc_005736B4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x673e60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005736EE; /* jp: parity */

loc_005736C1: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x673E60)); /* fsub dword ptr [0x673e60] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005736F2; /* jne: not equal / not zero */

loc_005736E6: ;
    MEM32(esp + 0x40) = 0;

loc_005736EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057373D; /* je: equal / zero */

loc_005736F2: ;
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    edx = esp + 0x184;
    PUSH32(esp, edx);
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    edx = esp + 0x298;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x2E8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0057373Du); RECOMP_ABI_CALL(0x00571B80u, sub_00571B80); /* call 0x00571B80 */

loc_0057373D: ;
    fp_push(MEMF(0x6C5214)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057378E; /* jne: not equal / not zero */

loc_00573750: ;
    fp_push(MEMF(0x6C5214)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63F2A0)); /* fmul dword ptr [0x63f2a0] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057378E; /* jp: parity */

loc_00573787: ;
    ecx = esi;
    PUSH32(esp, 0x0057378Eu); RECOMP_ABI_CALL(0x00571550u, sub_00571550); /* call 0x00571550 */

loc_0057378E: ;
    eax = MEM32(esi + 4);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x70)); /* fsub dword ptr [eax + 0x70] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x74)); /* fsub dword ptr [eax + 0x74] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x78)); /* fsub dword ptr [eax + 0x78] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA0)); /* fadd dword ptr [eax + 0xa0] */
    MEMF(eax + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA4)); /* fadd dword ptr [eax + 0xa4] */
    MEMF(eax + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA8)); /* fadd dword ptr [eax + 0xa8] */
    MEMF(eax + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    fp_push(MEMF(eax + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    fp_push(MEMF(eax + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x38) = ecx;
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA0)); /* fadd dword ptr [eax + 0xa0] */
    MEMF(eax + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA4)); /* fadd dword ptr [eax + 0xa4] */
    MEMF(eax + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xA8)); /* fadd dword ptr [eax + 0xa8] */
    MEMF(eax + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    edx = MEM32(0x6797CC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x88)); /* fadd dword ptr [eax + 0x88] */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + 0x8C)); /* fld float */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DF88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63df88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573A38; /* jne: not equal / not zero */

loc_00573903: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    ecx = esp + 0x4C;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x350;
    PUSH32(esp, 0x00573957u); RECOMP_ABI_CALL(0x00609500u, sub_00609500); /* call 0x00609500 */

loc_00573957: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    edx = esp + 8;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x350;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x60)); /* fsub dword ptr [esp + 0x60] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005739CDu); RECOMP_ABI_CALL(0x00473D30u, sub_00473D30); /* call 0x00473D30 */

loc_005739CD: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x58)); /* fadd dword ptr [esp + 0x58] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573A10; /* jp: parity */

loc_005739FE: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651140)); /* fmul dword ptr [0x651140] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    goto loc_00573A1C;

loc_00573A10: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */

loc_00573A1C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00573A38: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esi + 4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    ecx = esp + 0x24;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    edx = esi + 0xC;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00573AB8u); RECOMP_ABI_CALL(0x0046E8C0u, sub_0046E8C0); /* call 0x0046E8C0 */

loc_00573AB8: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00573ACCu); RECOMP_ABI_CALL(0x0046E8C0u, sub_0046E8C0); /* call 0x0046E8C0 */

loc_00573ACC: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edi + 8) = edx;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x673E84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E84)); /* fmul dword ptr [0x673e84] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573C08; /* jne: not equal / not zero */

loc_00573B70: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = MEM32(esi + 4);
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x673E84)); /* fsub dword ptr [0x673e84] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x70)); /* fadd dword ptr [eax + 0x70] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x74)); /* fadd dword ptr [eax + 0x74] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x78)); /* fadd dword ptr [eax + 0x78] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x50);
    MEM32(eax + 0x78) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esi + 8);
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0x78) = edx;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */

loc_00573C08: ;
    fp_pop(); /* fstp st(0) */

loc_00573C0A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00573C20
 * Original: 0x00573C20 - 0x00573C2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00573C20: ;
    MEM32(ecx) = 0x651144;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00573C30
 * Original: 0x00573C30 - 0x00573C48 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C30(void)
{

loc_00573C30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00573C50
 * Original: 0x00573C50 - 0x00573C5F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C50(void)
{

loc_00573C50: ;
    MEM32(ecx + 0x2C) = 0;
    MEM32(ecx + 0x30) = 0x3F800000;
    esp += 4; return; /* ret */

}

/**
 * sub_00573C60
 * Original: 0x00573C60 - 0x00573C6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C60(void)
{

loc_00573C60: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00573C70
 * Original: 0x00573C70 - 0x00573C78 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C70(void)
{

loc_00573C70: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00573C80
 * Original: 0x00573C80 - 0x00573CAD (45 bytes, 13 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00573C80: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00573C9A; /* jne: not equal / not zero */

loc_00573C88: ;
    PUSH32(esp, 0x651148);
    PUSH32(esp, 0x00573C92u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00573C92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00573C9A: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x14) = edx;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00573CB0
 * Original: 0x00573CB0 - 0x00574330 (1664 bytes, 539 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00573CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00573CB0: ;
    fp_push(MEMF(0x62F944)); /* fld float */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ebx = MEM32(esi + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573CF5; /* jp: parity */

loc_00573CD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00573D13; /* jle: less or equal (signed <=) */

loc_00573CD6: ;
    eax = esi + 0x14;
    ecx = ebx;
    goto loc_00573CE0;

    /* nop */

loc_00573CE0: ;
    edx = MEM32(eax);
    fp_push(MEMF(edx + 0x150)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_00573CE0; /* jne: not equal / not zero */

loc_00573CF3: ;
    goto loc_00573D13;

loc_00573CF5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00573D13; /* jle: less or equal (signed <=) */

loc_00573CF9: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x14;
    /* nop */

loc_00573D00: ;
    edx = MEM32(eax);
    fp_push(MEMF(edx + 0x150)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x38)); /* fmul dword ptr [esi + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if ((_fa != 0)) goto loc_00573D00; /* jne: not equal / not zero */

loc_00573D13: ;
    edx = MEM32(esi + 8);
    fp_push(MEMF(0x65E384)); /* fld float */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00573D4E; /* je: equal / zero */

loc_00573D22: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00573D4E; /* je: equal / zero */

loc_00573D29: ;
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00573D4E; /* jne: not equal / not zero */

loc_00573D33: ;
    ecx = MEM32(eax + 0x14);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x6C)); /* fld float */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00573D48; /* je: equal / zero */

loc_00573D42: ;
    fp_push(MEMF(eax + ecx * 4 + 0x44)); /* fld float */
    goto loc_00573D4C;

loc_00573D48: ;
    fp_push(MEMF(eax + ecx * 4 + 0x1C)); /* fld float */

loc_00573D4C: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */

loc_00573D4E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00573D72; /* jle: less or equal (signed <=) */

loc_00573D5A: ;
    ecx = MEM32(esi + 0x10);
    eax = esi + 0x14;

loc_00573D60: ;
    ebp = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1A0)); /* fsub dword ptr [ebp + 0x1a0] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00573D60; /* jne: not equal / not zero */

loc_00573D6E: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */

loc_00573D72: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573DEB; /* jp: parity */

loc_00573D82: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573DC6; /* jne: not equal / not zero */

loc_00573D8F: ;
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); fp_pop(); /* fsubrp st(1) */
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00573DD7; /* je: equal / zero */

loc_00573DA0: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573E4F; /* jp: parity */

loc_00573DB9: ;
    MEM32(esp + 0x20) = 1;
    goto loc_00573E4F;

loc_00573DC6: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573DA0; /* jp: parity */

loc_00573DD7: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x20) = 1;
    goto loc_00573E4F;

loc_00573DEB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573E07; /* jne: not equal / not zero */

loc_00573DFD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_00573E22;

loc_00573E07: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573E1C; /* jp: parity */

loc_00573E14: ;
    fp_push(MEMF(0x630320)); /* fld float */
    goto loc_00573E22;

loc_00573E1C: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00573E22: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573E43; /* jp: parity */

loc_00573E3B: ;
    MEM32(esp + 0x20) = 1;

loc_00573E43: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00573E4F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00573EB0; /* je: equal / zero */

loc_00573E53: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00573EB0; /* je: equal / zero */

loc_00573E5A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edi (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00573E68; /* je: equal / zero */

loc_00573E62: ;
    fp_push(MEMF(ecx + eax * 4 + 0x44)); /* fld float */
    goto loc_00573E6C;

loc_00573E68: ;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */

loc_00573E6C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00573EB0; /* jnp: not parity */

loc_00573E79: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edi (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00573E87; /* je: equal / zero */

loc_00573E81: ;
    fp_push(MEMF(ecx + eax * 4 + 0x44)); /* fld float */
    goto loc_00573E8B;

loc_00573E87: ;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */

loc_00573E8B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edi (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00573E99; /* je: equal / zero */

loc_00573E93: ;
    fp_push(MEMF(ecx + eax * 4 + 0x44)); /* fld float */
    goto loc_00573E9D;

loc_00573E99: ;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */

loc_00573E9D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D408)); /* fadd dword ptr [0x63d408] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_00573EB8;

loc_00573EB0: ;
    MEM32(esp + 0x24) = 0x41200000;

loc_00573EB8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00573EE5; /* jle: less or equal (signed <=) */

loc_00573EBC: ;
    ebp = MEM32(esp + 0x10);
    ebx = esi + 0x14;

loc_00573EC3: ;
    ecx = esp + edi * 4 + 0x58;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = esp + edi * 4 + 0x2C;
    PUSH32(esp, edx);
    eax = esp + edi * 4 + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00573EDAu); RECOMP_ABI_CALL(0x0056EDB0u, sub_0056EDB0); /* call 0x0056EDB0 */

loc_00573EDA: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00573EC3; /* jl: less (signed <) */

loc_00573EE5: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x30)); /* fdiv dword ptr [esi + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x673E90)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057409B; /* jne: not equal / not zero */

loc_00573F0F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00574141; /* jle: less or equal (signed <=) */

loc_00573F1B: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x638140)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x638140] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00573F3F; /* jp: parity */

loc_00573F2B: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6510F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6510f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00574141; /* je: equal / zero */

loc_00573F3F: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x673E98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x673e98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573F5D; /* jne: not equal / not zero */

loc_00573F51: ;
    edx = MEM32(0x673E94);
    MEM32(esp + 0x18) = edx;
    goto loc_00573F7F;

loc_00573F5D: ;
    fp_push(MEMF(0x673E98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x673E90)); /* fmul dword ptr [0x673e90] */
    fp_push(MEMF(0x673E94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C5220)); /* fmul dword ptr [0x6c5220] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00573F7F: ;
    fp_pop(); /* fstp st(0) */
    edi = ecx + -1;
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_push(MEMF(0x65E384)); /* fld float */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    if (CMP_LE(_fas, _fbs)) goto loc_00573FDB; /* jle: less or equal (signed <=) */

loc_00573FA8: ;
    edx = MEM32(esi + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + 0x18;
    /* nop */

loc_00573FB0: ;
    ebx = MEM32(ecx + -4);
    ebp = MEM32(ecx);
    fp_push(MEMF(ebx + 0x1A0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x1A0)); /* fsub dword ptr [ebp + 0x1a0] */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esp + eax * 4 + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + eax * 4 + 0x38)); /* fadd dword ptr [esp + eax*4 + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_L(_fas, _fbs)) goto loc_00573FB0; /* jl: less (signed <) */

loc_00573FD7: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */

loc_00573FDB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00573FF9; /* jne: not equal / not zero */

loc_00573FF1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    goto loc_0057400A;

loc_00573FF9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057400A; /* jp: parity */

loc_00574004: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_0057400A: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    eax = MEM32(esi + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643EF0)); /* fmul dword ptr [0x643ef0] */
    MEM32(esp + 0x1C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    MEMF(esi + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    if (CMP_LE(_fas, _fbs)) goto loc_00574099; /* jle: less or equal (signed <=) */

loc_00574046: ;
    ecx = MEM32(esi + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00574050: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x38)); /* fmul dword ptr [esp + eax*4 + 0x38] */
    MEMF(esp + eax * 4 + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x50)); /* fmul dword ptr [esp + eax*4 + 0x50] */
    MEMF(esp + eax * 4 + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x20)); /* fmul dword ptr [esp + eax*4 + 0x20] */
    MEMF(esp + eax * 4 + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x3C)); /* fmul dword ptr [esp + eax*4 + 0x3c] */
    MEMF(esp + eax * 4 + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x54)); /* fmul dword ptr [esp + eax*4 + 0x54] */
    MEMF(esp + eax * 4 + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + eax * 4 + 0x24)); /* fmul dword ptr [esp + eax*4 + 0x24] */
    MEMF(esp + eax * 4 + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00574050; /* jl: less (signed <) */

loc_00574099: ;
    fp_pop(); /* fstp st(0) */

loc_0057409B: ;
    ebx = MEM32(esi + 0x10);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005740B9; /* jle: less or equal (signed <=) */

loc_005740A7: ;
    ecx = ebx;
    /* nop */

loc_005740B0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + eax * 4 + 0x40)); /* fadd dword ptr [esp + eax*4 + 0x40] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005740B0; /* jl: less (signed <) */

loc_005740B9: ;
    ecx = MEM32(esi + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_005741B6; /* jl: less (signed <) */

loc_005740D5: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(MEMF(0x6797CC) / fp_top()); /* fdivr dword ptr [0x6797cc] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574155; /* jp: parity */

loc_00574105: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push(MEMF(0x651158)); /* fld float */
    if (CMP_LE(_fas, _fbs)) goto loc_0057412A; /* jle: less or equal (signed <=) */

loc_0057410F: ;
    edi = MEM32(esi + 0x10);

loc_00574112: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ecx * 4 + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + ecx*4 + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00574125; /* jne: not equal / not zero */

loc_0057411D: ;
    fp_pop(); /* fstp st(0) */
    edx = ecx;
    fp_push(MEMF(esp + ecx * 4 + 0x28)); /* fld float */

loc_00574125: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00574112; /* jl: less (signed <) */

loc_0057412A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005741B4; /* jnp: not parity */

loc_00574137: ;
    MEM32(esp + edx * 4 + 0x28) = 0x51BA43B7;
    goto loc_0057418F;

loc_00574141: ;
    MEM32(esi + 0x30) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    goto loc_0057409B;

loc_00574155: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    fp_push(MEMF(0x650F90)); /* fld float */
    if (CMP_LE(_fas, _fbs)) goto loc_0057417A; /* jle: less or equal (signed <=) */

loc_0057415F: ;
    edi = MEM32(esi + 0x10);

loc_00574162: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ecx * 4 + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + ecx*4 + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574175; /* jp: parity */

loc_0057416D: ;
    fp_pop(); /* fstp st(0) */
    edx = ecx;
    fp_push(MEMF(esp + ecx * 4 + 0x28)); /* fld float */

loc_00574175: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00574162; /* jl: less (signed <) */

loc_0057417A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005741B4; /* je: equal / zero */

loc_00574187: ;
    MEM32(esp + edx * 4 + 0x28) = 0xD1BA43B7u;

loc_0057418F: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + edx * 4 + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + edx * 4 + 0x40)); /* fsub dword ptr [esp + edx*4 + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_LE(_fas, _fbs)) goto loc_005740D5; /* jle: less or equal (signed <=) */

loc_005741B2: ;
    goto loc_005741B6;

loc_005741B4: ;
    fp_pop(); /* fstp st(0) */

loc_005741B6: ;
    eax = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_00574210; /* je: equal / zero */

loc_005741C6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005741E7; /* jp: parity */

loc_005741D7: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00574208; /* je: equal / zero */

loc_005741E7: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574210; /* jp: parity */

loc_005741F7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00574210; /* jne: not equal / not zero */

loc_00574208: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00574210: ;
    edx = MEM32(esi + 8);
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005742D8; /* je: equal / zero */

loc_0057421E: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00574231; /* je: equal / zero */

loc_0057422B: ;
    fp_push(MEMF(ecx + eax * 4 + 0x44)); /* fld float */
    goto loc_00574235;

loc_00574231: ;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */

loc_00574235: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574267; /* jp: parity */

loc_00574251: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_00574257: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_00574278; /* je: equal / zero */

loc_00574261: ;
    fp_push(MEMF(ecx + eax * 4 + 0x44)); /* fld float */
    goto loc_0057427C;

loc_00574267: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00574287; /* jne: not equal / not zero */

loc_00574271: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx + 0x30)); /* fld float */
    goto loc_00574257;

loc_00574278: ;
    fp_push(MEMF(ecx + eax * 4 + 0x1C)); /* fld float */

loc_0057427C: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00574287: ;
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_push(MEMF(edx + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005742B0; /* jp: parity */

loc_00574296: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x60)); /* fadd dword ptr [edx + 0x60] */
    MEMF(edx + 0x60) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005742D8; /* jne: not equal / not zero */

loc_005742AB: ;
    MEMF(edx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005742DA;

loc_005742B0: ;
    fp_push(MEMF(edx + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005742D6; /* jne: not equal / not zero */

loc_005742BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    fp_top() = RECOMP_FP_PC(MEMF(edx + 0x60) - fp_top()); /* fsubr dword ptr [edx + 0x60] */
    MEMF(edx + 0x60) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005742D8; /* jp: parity */

loc_005742D1: ;
    MEMF(edx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005742DA;

loc_005742D6: ;
    fp_pop(); /* fstp st(0) */

loc_005742D8: ;
    fp_pop(); /* fstp st(0) */

loc_005742DA: ;
    edx = MEM32(esi + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00574314; /* jle: less or equal (signed <=) */

loc_005742E4: ;
    eax = esi + 0x18;

loc_005742E7: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    edx = MEM32(eax + -4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + -8);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    MEMF(edx + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x10);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005742E7; /* jl: less (signed <) */

loc_00574314: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00574328; /* je: equal / zero */

loc_0057431B: ;
    eax = MEM32(esi + eax * 4 + 0x10);
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x1A4) = ecx;

loc_00574328: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574330
 * Original: 0x00574330 - 0x0057437F (79 bytes, 31 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574330: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x650FF8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057434Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057434E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x65116C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00574364u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00574364: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x65115C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057437Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057437A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00574380
 * Original: 0x00574380 - 0x005743B1 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574380: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x651144;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x34) = 0x41200000;
    MEM32(ecx + 0x38) = 0x3F800000;
    MEM32(ecx + 0x3C) = 0x3F99999A;
    PUSH32(esp, 0x005743AEu); RECOMP_ABI_CALL(0x00573C50u, sub_00573C50); /* call 0x00573C50 */

loc_005743AE: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005743C0
 * Original: 0x005743C0 - 0x005743DD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005743C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005743C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x651180;
    PUSH32(esp, 0x005743D2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005743D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_005743E0
 * Original: 0x005743E0 - 0x005743F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005743E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005743E0: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    MEMF(ecx + 0x54) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3C)); /* fmul dword ptr [ecx + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574400
 * Original: 0x00574400 - 0x005745D1 (465 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00574400: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 0x44) = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    MEM32(esi + 0x48) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0057442Fu); RECOMP_ABI_CALL(0x00574D40u, sub_00574D40); /* call 0x00574D40 */

loc_0057442F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057449F; /* je: equal / zero */

loc_00574436: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x651194);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00574444u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00574444: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 4) = eax;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x2C) = edx;
    goto loc_005744FF;

loc_0057449F: ;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x28) = 0;

loc_005744FF: ;
    eax = MEM32(esi + 0x44);
    fp_push(MEMF(eax + 0x114)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(eax + 0x118)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(eax + 0x11C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0x114)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(eax + 0x118)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(eax + 0x11C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00574587u); RECOMP_ABI_CALL(0x005743E0u, sub_005743E0); /* call 0x005743E0 */

loc_00574587: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005745AB; /* je: equal / zero */

loc_0057458E: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + 0x6C);
    ecx = MEM32(edx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x005745A4u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_005745A4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_005745AB: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005745E0
 * Original: 0x005745E0 - 0x00574764 (388 bytes, 127 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005745E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005745E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx + 0x160);
    edx = MEM32(esi + 0x48);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edx + 0x160);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    PUSH32(esp, edi);
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00574664; /* jnp: not parity */

loc_0057462A: ;
    SET_LO8(eax, MEM8(ecx + 0x18E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574664; /* je: equal / zero */

loc_00574634: ;
    SET_LO8(eax, MEM8(edx + 0x18E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574664; /* je: equal / zero */

loc_0057463E: ;
    fp_push(MEMF(ecx + 0x168)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x168)); /* fsub dword ptr [edx + 0x168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00574664u); RECOMP_ABI_CALL(0x004DBF40u, sub_004DBF40); /* call 0x004DBF40 */

loc_00574664: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005746AD; /* je: equal / zero */

loc_0057466B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x40);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 0x005746ABu); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_005746AB: ;
    goto loc_005746CC;

loc_005746AD: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(eax + 0x6C);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    eax = esi + 0x20;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_005746CC: ;
    ecx = MEM32(esi + 0x44);
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65119C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65119c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057473E; /* jnp: not parity */

loc_005746DF: ;
    edx = MEM32(esi + 0x48);
    fp_push(MEMF(edx + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65119C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65119c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057473E; /* jnp: not parity */

loc_005746F2: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574712; /* jp: parity */

loc_00574702: ;
    fp_push(MEMF(edx + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057475E; /* jnp: not parity */

loc_00574712: ;
    eax = MEM32(ecx + 0x180);
    PUSH32(esp, eax);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00574725u); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_00574725: ;
    esi = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x180);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00574738u); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_00574738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0057473E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00574750u); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_00574750: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0057475Du); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_0057475D: ;
    POP32(esp, ebx);

loc_0057475E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574770
 * Original: 0x00574770 - 0x005747A9 (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6511AC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057478Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057478E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x6511A0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005747A4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005747A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005747B0
 * Original: 0x005747B0 - 0x0057480A (90 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005747B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005747B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x651180;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    edx = 0x3F800000;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x38) = 0x40200000;
    MEM32(eax + 0x3C) = 0x3E800000;
    esp += 4; return; /* ret */

}

/**
 * sub_00574810
 * Original: 0x00574810 - 0x0057482D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x6511B8;
    PUSH32(esp, 0x00574822u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00574822: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00574830
 * Original: 0x00574830 - 0x0057497E (334 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00574830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00574858u); RECOMP_ABI_CALL(0x00574D40u, sub_00574D40); /* call 0x00574D40 */

loc_00574858: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574957; /* je: equal / zero */

loc_00574863: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x6511CC);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00574871u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00574871: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 8) = eax;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x3C);
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x24)); /* fsub dword ptr [eax + 0x24] */
    fp_push(MEMF(ecx + 0x118)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_push(MEMF(ecx + 0x11C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x2C)); /* fsub dword ptr [eax + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057494E; /* jp: parity */

loc_00574917: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00574945; /* jne: not equal / not zero */

loc_00574927: ;
    fp_push(MEMF(ecx + 0x114)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00574945; /* jp: parity */

loc_0057493C: ;
    MEM32(esi + 0x44) = 2;
    goto loc_0057495E;

loc_00574945: ;
    MEM32(esi + 0x44) = 0;
    goto loc_0057495E;

loc_0057494E: ;
    MEM32(esi + 0x44) = 1;
    goto loc_0057495E;

loc_00574957: ;
    MEM32(esi + 0x44) = 0xFFFFFFFFu;

loc_0057495E: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00574977u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_00574977: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574980
 * Original: 0x00574980 - 0x00574A78 (248 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00574980: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574A72; /* je: equal / zero */

loc_00574993: ;
    ecx = MEM32(esi + 0x3C);
    fp_push(MEMF(ecx + 0x160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x70)); /* fadd dword ptr [ecx + 0x70] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005749A8u); RECOMP_ABI_CALL(0x0056D0C0u, sub_0056D0C0); /* call 0x0056D0C0 */

loc_005749A8: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    eax = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005749CE; /* je: equal / zero */

loc_005749B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005749BD; /* je: equal / zero */

loc_005749B6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005749CE; /* je: equal / zero */

loc_005749B9: ;
    fp_pop(); /* fstp st(0) */
    goto loc_005749D7;

loc_005749BD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    eax = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005749D7;

loc_005749CE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    ecx = MEM32(esi + 8);
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_005749D7: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00574A59; /* jne: not equal / not zero */

loc_005749DD: ;
    eax = MEM32(esi + 0x3C);
    fp_push(MEMF(eax + 0x114)); /* fld float */
    edi = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x24)); /* fsub dword ptr [edi + 0x24] */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x114;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x28)); /* fsub dword ptr [edi + 0x28] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x2C)); /* fsub dword ptr [edi + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00574A12u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00574A12: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00574A1Cu); RECOMP_ABI_CALL(0x0040ADD0u, sub_0040ADD0); /* call 0x0040ADD0 */

loc_00574A1C: ;
    edx = MEM32(esi + 0x3C);
    fp_push(MEMF(edx + 0x15C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 0x10;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00574A39u); RECOMP_ABI_CALL(0x00609500u, sub_00609500); /* call 0x00609500 */

loc_00574A39: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00574A53u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_00574A53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574A59: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00574A72u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_00574A72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574A80
 * Original: 0x00574A80 - 0x00574A9B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x6511DC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00574A98u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00574A98: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00574AA0
 * Original: 0x00574AA0 - 0x00574AE4 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574AA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x6511B8;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    edx = 0x3F800000;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00574AF0
 * Original: 0x00574AF0 - 0x00574C31 (321 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574AF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63B81C);
    edx = esp + 0x10;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00574B0Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00574B0E: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x30564950);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00574B1Du); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00574B1D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574B74; /* je: equal / zero */

loc_00574B24: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x4C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = eax;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574B74: ;
    ecx = esp;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574B88u); RECOMP_ABI_CALL(0x00612520u, sub_00612520); /* call 0x00612520 */

loc_00574B88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00574BAA; /* jne: not equal / not zero */

loc_00574B8C: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574BA4; /* je: equal / zero */

loc_00574B94: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00574B9Eu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_00574B9E: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574BA4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574BAA: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6511F0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x00574BC9u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00574BC9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574C19; /* je: equal / zero */

loc_00574BCF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00574BDFu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00574BDF: ;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x6511E4);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00574BEDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00574BED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    ecx = 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    PUSH32(esp, edx);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574C09u); RECOMP_ABI_CALL(0x00612150u, sub_00612150); /* call 0x00612150 */

loc_00574C09: ;
    ecx = ebx;
    PUSH32(esp, 0x00574C10u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00574C10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574C19: ;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574C2Au); RECOMP_ABI_CALL(0x00612150u, sub_00612150); /* call 0x00612150 */

loc_00574C2A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574C40
 * Original: 0x00574C40 - 0x00574CE1 (161 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574C40: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63B81C);
    edx = esp + 0x10;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00574C5Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00574C5E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = 0x6C5224;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00574C7Du); RECOMP_ABI_CALL(0x00612520u, sub_00612520); /* call 0x00612520 */

loc_00574C7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00574C90; /* jne: not equal / not zero */

loc_00574C81: ;
    ecx = MEM32(esp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574C90: ;
    edx = esp + 4;
    PUSH32(esp, 0x30564950);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00574C9Fu); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00574C9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00574CC4; /* jne: not equal / not zero */

loc_00574CA6: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x6511F0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x00574CC0u); RECOMP_ABI_CALL(0x00613880u, sub_00613880); /* call 0x00613880 */

loc_00574CC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574CCA; /* je: equal / zero */

loc_00574CC4: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00574CCA: ;
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574CDBu); RECOMP_ABI_CALL(0x00612150u, sub_00612150); /* call 0x00612150 */

loc_00574CDB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574CF0
 * Original: 0x00574CF0 - 0x00574D34 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574CF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574D02u); RECOMP_ABI_CALL(0x00611FE0u, sub_00611FE0); /* call 0x00611FE0 */

loc_00574D02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574D26; /* je: equal / zero */

loc_00574D06: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00574D10u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00574D10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574D22u); RECOMP_ABI_CALL(0x00612020u, sub_00612020); /* call 0x00612020 */

loc_00574D22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00574D06; /* jne: not equal / not zero */

loc_00574D26: ;
    ecx = 0x6C5224;
    PUSH32(esp, 0x00574D30u); RECOMP_ABI_CALL(0x00612050u, sub_00612050); /* call 0x00612050 */

loc_00574D30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574D40
 * Original: 0x00574D40 - 0x00574D5D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574D40: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x673EA0);
    PUSH32(esp, 0x00574D59u); RECOMP_ABI_CALL(0x00574AF0u, sub_00574AF0); /* call 0x00574AF0 */

loc_00574D59: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574D60
 * Original: 0x00574D60 - 0x00574D78 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574D60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x673EA0);
    PUSH32(esp, 0x00574D74u); RECOMP_ABI_CALL(0x00574C40u, sub_00574C40); /* call 0x00574C40 */

loc_00574D74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574D80
 * Original: 0x00574D80 - 0x00574D86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574D80(void)
{

loc_00574D80: ;
    eax = MEM32(0x6C523C);
    esp += 4; return; /* ret */

}

/**
 * sub_00574D90
 * Original: 0x00574D90 - 0x00574D9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574D90: ;
    MEM32(ecx) = 0x6511F4;
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00574DA0
 * Original: 0x00574DA0 - 0x00574DA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574DA0(void)
{

loc_00574DA0: ;
    eax = ecx;
    MEM32(eax) = 0x6511F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00574DB0
 * Original: 0x00574DB0 - 0x00574DCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00574DB8u); RECOMP_ABI_CALL(0x00574D90u, sub_00574D90); /* call 0x00574D90 */

loc_00574DB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00574DC8; /* je: equal / zero */

loc_00574DBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00574DC5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00574DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00574DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00574DD0
 * Original: 0x00574DD0 - 0x00574DE1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00574DD8u); RECOMP_ABI_CALL(0x00591790u, sub_00591790); /* call 0x00591790 */

loc_00574DD8: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_00574DF0
 * Original: 0x00574DF0 - 0x00574E01 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00574DF8u); RECOMP_ABI_CALL(0x00591D60u, sub_00591D60); /* call 0x00591D60 */

loc_00574DF8: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00574E10
 * Original: 0x00574E10 - 0x00574E68 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574E10: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00574E62; /* jle: less or equal (signed <=) */

loc_00574E25: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    /* nop */

loc_00574E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x64ACF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00574E41u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00574E41: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00574E4Cu); RECOMP_ABI_CALL(0x00574D60u, sub_00574D60); /* call 0x00574D60 */

loc_00574E4C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574E57; /* je: equal / zero */

loc_00574E53: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00574E57: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00574E30; /* jl: less (signed <) */

loc_00574E5C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00574E62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00574E70
 * Original: 0x00574E70 - 0x00574F45 (213 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00574E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00574E78u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00574E78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x6C) = eax;
    MEM32(esi) = 0x651210;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = 0xBF400000u;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = 0x3E4CCCCD;
    edx = MEM32(0x6796D8);
    ecx = esi + 0x48;
    MEM32(ecx) = edx;
    edx = MEM32(0x6796DC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x6796E0);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00574F50
 * Original: 0x00574F50 - 0x00574F56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574F50(void)
{

loc_00574F50: ;
    eax = 0x651254;
    esp += 4; return; /* ret */

}

/**
 * sub_00574F60
 * Original: 0x00574F60 - 0x00574F6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574F60: ;
    MEM32(ecx) = 0x651210;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00574F70
 * Original: 0x00574F70 - 0x00574F9D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00574F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00574F70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0xB0) = eax;
    ecx = MEM32(ecx + 0x6C);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00574F9C; /* je: equal / zero */

loc_00574F97: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_00574F9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00574FA0
 * Original: 0x00574FA0 - 0x00574FD3 (51 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00574FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00574FA0: ;
    eax = MEM32(ecx + 0x6C);
    eax = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x84)); /* fld float */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00574FE0
 * Original: 0x00574FE0 - 0x0057502E (78 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00574FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00574FE0: ;
    eax = MEM32(ecx + 0x6C);
    eax = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x104)); /* fld float */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x104;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x3C)); /* fadd dword ptr [ecx + 0x3c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63032C)); /* fmul dword ptr [0x63032c] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575030
 * Original: 0x00575030 - 0x00575060 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00575030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00575030: ;
    eax = MEM32(ecx + 0x6C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 4);
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575060
 * Original: 0x00575060 - 0x0057507D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575060: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575080
 * Original: 0x00575080 - 0x0057509D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575080: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005750A0
 * Original: 0x005750A0 - 0x0057516A (202 bytes, 71 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005750A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005750A0: ;
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575166; /* je: equal / zero */

loc_005750B1: ;
    fp_push(MEMF(eax + 0x64)); /* fld float */
    edx = MEM32(edx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 0x58)); /* fld float */
    esi = MEM32(eax + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x4C)); /* fmul dword ptr [eax + 0x4c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    fp_push(MEMF(eax + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEM32(edx) = esi;
    esi = MEM32(eax + 0x50);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 0x54);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(edx + 8) = esi;
    esi = MEM32(eax + 0x58);
    MEM32(edx + 0xC) = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(eax + 0x5C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edx + 0x10) = esi;
    esi = MEM32(eax + 0x60);
    MEM32(edx + 0x14) = esi;
    esi = MEM32(eax + 0x64);
    MEM32(edx + 0x18) = esi;
    esi = MEM32(eax + 0x68);
    MEM32(edx + 0x1C) = esi;
    esi = MEM32(eax + 0x6C);
    MEM32(edx + 0x20) = esi;
    esi = MEM32(eax + 0x70);
    MEM32(edx + 0x24) = esi;
    esi = MEM32(eax + 0x74);
    MEM32(edx + 0x28) = esi;
    eax = MEM32(eax + 0x78);
    MEM32(edx + 0x2C) = eax;
    ecx = MEM32(ecx + 0x6C);
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00575166: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575170
 * Original: 0x00575170 - 0x005752D3 (355 bytes, 116 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00575170: ;
    eax = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005752CC; /* je: equal / zero */

loc_00575182: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = edi;
    edi = MEM32(eax + 0x18);
    MEM32(edx + 0x18) = edi;
    edi = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = edi;
    edi = MEM32(eax + 0x20);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x24);
    MEM32(edx + 0x24) = edi;
    edi = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = edi;
    edi = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = edi;
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x20) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x1C);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x30) = edx;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    edx = MEM32(eax + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEM32(esp + 0x40) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x10);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 0x20);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 4) & 7]); /* fsub st(4) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x24);
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esp + 0x28);
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x58) = ecx;
    ecx = MEM32(esp + 0x2C);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x5C) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esi + 0x64) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 0x68) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 0x70) = ecx;
    MEM32(esi + 0x74) = edx;
    MEM32(esi + 0x78) = eax;
    POP32(esp, edi);

loc_005752CC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005752E0
 * Original: 0x005752E0 - 0x005752FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005752E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005752E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005752E8u); RECOMP_ABI_CALL(0x00574F60u, sub_00574F60); /* call 0x00574F60 */

loc_005752E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005752F8; /* je: equal / zero */

loc_005752EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005752F5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005752F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005752F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575300
 * Original: 0x00575300 - 0x0057533D (61 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575308u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00575308: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(esi + 0xE) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0xC) = LO16(eax);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM16(esi + 0x28) = LO16(eax);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM32(esi) = 0x65125C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575340
 * Original: 0x00575340 - 0x0057534B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575340: ;
    MEM32(ecx) = 0x65125C;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00575350
 * Original: 0x00575350 - 0x0057536D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575350: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM16(ecx + 0x28) = LO16(eax);
    MEM16(ecx + 0x2A) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00575370
 * Original: 0x00575370 - 0x0057538E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575378u); RECOMP_ABI_CALL(0x00575340u, sub_00575340); /* call 0x00575340 */

loc_00575378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575388; /* je: equal / zero */

loc_0057537F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00575385u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00575385: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575388: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575390
 * Original: 0x00575390 - 0x005753B2 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575390: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, esi);
    esi = eax + 4;
    MEM32(eax) = 0x651294;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005753A3: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005753A3; /* jne: not equal / not zero */

loc_005753AD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005753C0
 * Original: 0x005753C0 - 0x005753C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005753C0(void)
{

loc_005753C0: ;
    MEM32(ecx) = 0x651294;
    esp += 4; return; /* ret */

}

/**
 * sub_005753D0
 * Original: 0x005753D0 - 0x00575407 (55 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005753D0(void)
{

loc_005753D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005753D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753D5u); } /* indirect call */
    }

loc_005753D8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x005753DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753DCu); } /* indirect call */
    }

loc_005753DF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005753E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753E3u); } /* indirect call */
    }

loc_005753E6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005753EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753EAu); } /* indirect call */
    }

loc_005753ED: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x005753F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753F1u); } /* indirect call */
    }

loc_005753F4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x005753FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753F8u); } /* indirect call */
    }

loc_005753FB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00575402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005753FFu); } /* indirect call */
    }

loc_00575402: ;
    eax = MEM32(esi + 0x44);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575410
 * Original: 0x00575410 - 0x00575418 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575410(void)
{

loc_00575410: ;
    MEM32(ecx + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575420
 * Original: 0x00575420 - 0x0057542B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575420(void)
{

loc_00575420: ;
    eax = MEM32(ecx + 0x44);
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575430
 * Original: 0x00575430 - 0x0057543B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575430(void)
{

loc_00575430: ;
    eax = MEM32(ecx + 0x44);
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575440
 * Original: 0x00575440 - 0x0057544B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575440(void)
{

loc_00575440: ;
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0057544Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575447u); } /* indirect call */
    }

loc_0057544A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00575450
 * Original: 0x00575450 - 0x0057545B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575450(void)
{

loc_00575450: ;
    eax = MEM32(ecx + 0x44);
    MEM32(eax + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575460
 * Original: 0x00575460 - 0x0057546B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575460(void)
{

loc_00575460: ;
    eax = MEM32(ecx + 0x44);
    MEM32(eax + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575470
 * Original: 0x00575470 - 0x005754BA (74 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7B);
    PUSH32(esp, 0x63D134);
    PUSH32(esp, 0x130);
    edi = ecx;
    PUSH32(esp, 0x00575485u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00575485: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005754A7; /* je: equal / zero */

loc_0057548C: ;
    ecx = eax;
    PUSH32(esp, 0x00575493u); RECOMP_ABI_CALL(0x00575870u, sub_00575870); /* call 0x00575870 */

loc_00575493: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0057549Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057549Bu); } /* indirect call */
    }

loc_0057549E: ;
    ecx = MEM32(edi + 0x44);
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005754A7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005754B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005754AEu); } /* indirect call */
    }

loc_005754B1: ;
    ecx = MEM32(edi + 0x44);
    POP32(esp, edi);
    MEM32(ecx + 0x18) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005754C0
 * Original: 0x005754C0 - 0x005754DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005754C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005754C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005754C8u); RECOMP_ABI_CALL(0x005753C0u, sub_005753C0); /* call 0x005753C0 */

loc_005754C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005754D8; /* je: equal / zero */

loc_005754CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005754D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005754D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005754D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005754E0
 * Original: 0x005754E0 - 0x005754FB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005754E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005754E0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005754F6; /* je: equal / zero */

loc_005754E7: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 4) = LO8(eax);
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_005754F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575500
 * Original: 0x00575500 - 0x00575522 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00575500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00575500: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057551D; /* jp: parity */

loc_0057550E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0057551D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575530
 * Original: 0x00575530 - 0x00575557 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00575530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575551; /* je: equal / zero */

loc_0057553A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEMF(esi + edi * 4 + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057554Cu); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_0057554C: ;
    MEM32(esi + edi * 4 + 0x14) = eax;
    POP32(esp, edi);

loc_00575551: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575560
 * Original: 0x00575560 - 0x005755C3 (99 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x84);
    PUSH32(esp, edi);
    edi = edx + ecx;
    edx = edi + 0x28;

loc_00575576: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057558B; /* je: equal / zero */

loc_0057557B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00575576; /* jl: less (signed <) */

loc_00575584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_0057558B: ;
    edx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x21);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4 + 0x28) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + eax * 4 + 0x48) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + eax * 4 + 0x68) = edx;
    MEM32(ecx + eax * 4 + 0x88) = 0;
    MEM32(edi + 0xA8) = MEM32(edi + 0xA8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005755D0
 * Original: 0x005755D0 - 0x0057561A (74 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005755D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005755D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00575614; /* jne: not equal / not zero */

loc_005755DB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x673F10);
    PUSH32(esp, 0x673EF0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005755EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005755EBu); } /* indirect call */
    }

loc_005755EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575614; /* je: equal / zero */

loc_005755F2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x673F10);
    PUSH32(esp, 0x673F00);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00575607u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575604u); } /* indirect call */
    }

loc_00575607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575614; /* je: equal / zero */

loc_0057560B: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00575614: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575620
 * Original: 0x00575620 - 0x0057568C (108 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x48;
    ecx = 8;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00575631: ;
    MEM32(eax + -32) = edi;
    MEM32(eax) = edi;
    MEM32(eax + 0x20) = edi;
    MEM32(eax + 0x40) = edx;
    MEM32(esi + 0xA8) = edi;
    MEM32(eax + 0x64) = edi;
    MEM32(eax + 0x84) = edi;
    MEM32(eax + 0xA4) = edi;
    MEM32(eax + 0xC4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x12C) = edi;
    if ((_fa != 0)) goto loc_00575631; /* jne: not equal / not zero */

loc_00575663: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575682; /* je: equal / zero */

loc_00575668: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575682; /* jne: not equal / not zero */

loc_0057566F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00575678u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575675u); } /* indirect call */
    }

loc_00575678: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00575682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057567Fu); } /* indirect call */
    }

loc_00575682: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575690
 * Original: 0x00575690 - 0x00575791 (257 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575690: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(0x65E384)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x21);
    eax = ecx + edx * 4 + 0x28;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = eax;
    goto loc_005756C0;

    /* nop */
    /* nop */

loc_005756C0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575772; /* je: equal / zero */

loc_005756CD: ;
    eax = edx + esi;
    edi = ecx + eax * 4 + 0x88;
    eax = MEM32(edi);
    ebx = eax + 1;
    MEM32(esp + 0x20) = ebx;
    MEM32(edi) = ebx;
    ebx = edx + esi;
    ebp = MEM32(ecx + ebx * 4 + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = ecx + ebx * 4 + 0x68;
    if (CMP_GE(_fas, _fbs)) goto loc_00575736; /* jge: greater or equal (signed >=) */

loc_005756F1: ;
    ebp = edx + esi;
    ebp = MEM32(ecx + ebp * 4 + 0x48);
    ebp = MEM32(ebp + eax * 4);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(esp + 0x10);
    ebp = MEM32(ebp);
    fp_push(MEMF(ebp + eax * 4)); /* fld float */
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00575721; /* jle: less or equal (signed <=) */

loc_0057571B: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00575730;

loc_00575721: ;
    if (CMP_NE(_fa, _fb)) goto loc_00575736; /* jne: not equal / not zero */

loc_00575723: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00575736; /* jne: not equal / not zero */

loc_00575730: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_00575736: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575772; /* jne: not equal / not zero */

loc_0057573E: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    eax = edx + esi;
    MEM32(ecx + eax * 4 + 0x48) = 0;
    eax = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x84);
    MEM32(edi) = 0xFFFFFFFFu;
    eax = eax + ecx + 0xA8;
    MEM32(ebx) = 0;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00575772: ;
    edi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_005756C0; /* jl: less (signed <) */

loc_00575787: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005757A0
 * Original: 0x005757A0 - 0x0057586B (203 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005757A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005757A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575864; /* je: equal / zero */

loc_005757B1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005757B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005757B4u); } /* indirect call */
    }

loc_005757B7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00575859; /* jle: less or equal (signed <=) */

loc_005757C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = esi + 0x1C;
    ebp = esi + 0xA8;

loc_005757D0: ;
    PUSH32(esp, 0x005757D5u); RECOMP_ABI_CALL(0x00611C40u, sub_00611C40); /* call 0x00611C40 */

loc_005757D5: ;
    _fb = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005757EA; /* jge: greater or equal (signed >=) */

loc_005757E4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005757EA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8600DC)); /* fmul dword ptr [0x8600dc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00575841; /* jne: not equal / not zero */

loc_005757FA: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00575828; /* jle: less or equal (signed <=) */

loc_00575800: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00575808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575805u); } /* indirect call */
    }

loc_00575808: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00575841; /* jnp: not parity */

loc_00575819: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00575826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575823u); } /* indirect call */
    }

loc_00575826: ;
    goto loc_00575841;

loc_00575828: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00575841; /* jp: parity */

loc_00575837: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00575841u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057583Eu); } /* indirect call */
    }

loc_00575841: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x84;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005757D0; /* jl: less (signed <) */

loc_00575857: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00575859: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00575864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00575870
 * Original: 0x00575870 - 0x005758F2 (130 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x6512CC;
    edi = esi + 0x14;
    ebx = 2;

loc_00575883: ;
    ecx = edi;
    PUSH32(esp, 0x0057588Au); RECOMP_ABI_CALL(0x00611C60u, sub_00611C60); /* call 0x00611C60 */

loc_0057588A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00575883; /* jne: not equal / not zero */

loc_00575890: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esi + 4) = LO8(ecx);
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = 0x40400000;
    MEM32(esi + 0x24) = 0x3DCCCCCD;
    eax = esi + 0x48;
    edx = 8;

loc_005758B4: ;
    MEM32(esi + 0xA8) = ecx;
    MEM32(eax + -32) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x40) = edi;
    MEM32(eax + 0x20) = ecx;
    MEM32(esi + 0x12C) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0xC4) = edi;
    MEM32(eax + 0xA4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005758B4; /* jne: not equal / not zero */

loc_005758E6: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00575900
 * Original: 0x00575900 - 0x00575918 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 1);
    MEM32(esi) = 0x6512CC;
    PUSH32(esp, 0x00575910u); RECOMP_ABI_CALL(0x00575620u, sub_00575620); /* call 0x00575620 */

loc_00575910: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00575920
 * Original: 0x00575920 - 0x0057593E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575928u); RECOMP_ABI_CALL(0x00575900u, sub_00575900); /* call 0x00575900 */

loc_00575928: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575938; /* je: equal / zero */

loc_0057592F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00575935u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00575935: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575938: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575940
 * Original: 0x00575940 - 0x00575952 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575940(void)
{

loc_00575940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575948u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00575948: ;
    MEM32(esi) = 0x6512F8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575960
 * Original: 0x00575960 - 0x0057596B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575960: ;
    MEM32(ecx) = 0x6512F8;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00575970
 * Original: 0x00575970 - 0x0057598E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575970: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575978u); RECOMP_ABI_CALL(0x00575960u, sub_00575960); /* call 0x00575960 */

loc_00575978: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575988; /* je: equal / zero */

loc_0057597F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00575985u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00575985: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575988: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575990
 * Original: 0x00575990 - 0x005759A6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575990(void)
{

loc_00575990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575998u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00575998: ;
    MEM32(esi) = 0x651320;
    MEM8(esi + 0xC) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005759B0
 * Original: 0x005759B0 - 0x005759BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005759B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005759B0: ;
    MEM32(ecx) = 0x651320;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_005759C0
 * Original: 0x005759C0 - 0x005759C5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005759C0(void)
{

loc_005759C0: ;
    MEM8(ecx + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005759D0
 * Original: 0x005759D0 - 0x005759EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005759D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005759D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005759D8u); RECOMP_ABI_CALL(0x005759B0u, sub_005759B0); /* call 0x005759B0 */

loc_005759D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005759E8; /* je: equal / zero */

loc_005759DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005759E5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005759E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005759E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005759F0
 * Original: 0x005759F0 - 0x00575A0D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005759F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005759F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x65134C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00575A10
 * Original: 0x00575A10 - 0x00575A69 (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x65134C;
    if (CMP_EQ(_fa, _fb)) goto loc_00575A26; /* je: equal / zero */

loc_00575A20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00575A26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A24u); } /* indirect call */
    }

loc_00575A26: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575A33; /* je: equal / zero */

loc_00575A2D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00575A33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A31u); } /* indirect call */
    }

loc_00575A33: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575A40; /* je: equal / zero */

loc_00575A3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00575A40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A3Eu); } /* indirect call */
    }

loc_00575A40: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575A4D; /* je: equal / zero */

loc_00575A47: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00575A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A4Bu); } /* indirect call */
    }

loc_00575A4D: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575A5A; /* je: equal / zero */

loc_00575A54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00575A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A58u); } /* indirect call */
    }

loc_00575A5A: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00575A68; /* je: equal / zero */

loc_00575A62: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00575A68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00575A66u); } /* indirect call */
    }

loc_00575A68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00575A70
 * Original: 0x00575A70 - 0x00575A8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575A78u); RECOMP_ABI_CALL(0x00575A10u, sub_00575A10); /* call 0x00575A10 */

loc_00575A78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575A88; /* je: equal / zero */

loc_00575A7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00575A85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00575A85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575A88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575A90
 * Original: 0x00575A90 - 0x00575AA2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575A90(void)
{

loc_00575A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575A98u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00575A98: ;
    MEM32(esi) = 0x65135C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575AB0
 * Original: 0x00575AB0 - 0x00575ABB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575AB0: ;
    MEM32(ecx) = 0x65135C;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00575AC0
 * Original: 0x00575AC0 - 0x00575ADE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00575AC8u); RECOMP_ABI_CALL(0x00575AB0u, sub_00575AB0); /* call 0x00575AB0 */

loc_00575AC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575AD8; /* je: equal / zero */

loc_00575ACF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00575AD5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00575AD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575AD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575AE0
 * Original: 0x00575AE0 - 0x00575B08 (40 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575AE0: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(ecx + 0xA) = LO16(eax);
    SET_LO8(eax, MEM8(0x6C5254));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575AFE; /* je: equal / zero */

loc_00575AF2: ;
    edx = MEM32(0x6C5248);
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

loc_00575AFE: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00575B10
 * Original: 0x00575B10 - 0x00575B26 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64D110);
    esi = ecx;
    PUSH32(esp, 0x00575B1Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00575B1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x23) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575B30
 * Original: 0x00575B30 - 0x00575B69 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575B30: ;
    eax = MEM32(0x6C5240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00575B57; /* je: equal / zero */

loc_00575B3E: ;
    edi = edi;

loc_00575B40: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575B50; /* jb: below (unsigned <) */

loc_00575B47: ;
    esi = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575B67; /* jb: below (unsigned <) */

loc_00575B50: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575B40; /* jne: not equal / not zero */

loc_00575B57: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6513D8);
    PUSH32(esp, 0x00575B62u); RECOMP_ABI_CALL(0x00618700u, sub_00618700); /* call 0x00618700 */

loc_00575B62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00575B67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575B70
 * Original: 0x00575B70 - 0x00575B9C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575B70: ;
    MEM32(ecx) = 0x651408;
    _fa = (uint32_t)(MEM32(0x6C5240)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C5240), ecx (32-bit) */
    eax = 0x6C5240;
    if (CMP_EQ(_fa, _fb)) goto loc_00575B8F; /* je: equal / zero */

loc_00575B83: ;
    eax = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575B83; /* jne: not equal / not zero */

loc_00575B8F: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00575BA0
 * Original: 0x00575BA0 - 0x00575C4A (170 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575BA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x651410);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x110) = ebx;
    PUSH32(esp, 0x00575BDFu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00575BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575C00; /* je: equal / zero */

loc_00575BE6: ;
    PUSH32(esp, 0x6C524C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x651410);
    MEM8(0x6C5254) = 1;
    PUSH32(esp, 0x00575BFDu); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_00575BFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575C00: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esp + 0x1C));
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x21) = 1;
    MEM8(esi + 0x20) = LO8(eax);
    MEM8(esi + 0x22) = LO8(edx);
    MEM8(esi + 0x23) = LO8(ebx);
    MEM32(esi + 0xE4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00575C35; /* je: equal / zero */

loc_00575C29: ;
    ecx = 0x20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00575C35: ;
    edi = esi + 0xA4;
    ecx = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00575C50
 * Original: 0x00575C50 - 0x00575C59 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575C50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM8(ecx + 0x21) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00575C60
 * Original: 0x00575C60 - 0x00575C82 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575C60: ;
    ecx = MEM32(esp + 4);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575C7C; /* je: equal / zero */

loc_00575C6C: ;
    /* nop */

loc_00575C70: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575C70; /* jne: not equal / not zero */

loc_00575C77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00575C81; /* jae: above or equal (unsigned >=) */

loc_00575C7C: ;
    eax = 3;

loc_00575C81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00575C90
 * Original: 0x00575C90 - 0x00575E1B (395 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575C90: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00575E11; /* jne: not equal / not zero */

loc_00575CA1: ;
    eax = MEM32(esp + 0x114);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00575CB9u); RECOMP_ABI_CALL(0x00617760u, sub_00617760); /* call 0x00617760 */

loc_00575CB9: ;
    eax = MEM32(esp + 0x124);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x651438);
    PUSH32(esp, 0x00575CD4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00575CD4: ;
    ebx = esi + -64;
    ebp = esp + 0x61;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 0x90;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00575CF0;

    /* nop */

loc_00575CF0: ;
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 0x18) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    goto loc_00575D10;

    /* nop */

loc_00575D10: ;
    edx = ZX8(MEM8(esi + ebx));
    PUSH32(esp, edx);
    PUSH32(esp, 0x651430);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00575D20u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00575D20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00575D10; /* jl: less (signed <) */

loc_00575D2C: ;
    esi = ebx;
    ecx = 2;

loc_00575D33: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D3D; /* jb: below (unsigned <) */

loc_00575D39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D3F; /* jb: below (unsigned <) */

loc_00575D3D: ;
    SET_LO8(eax, 0x2E);

loc_00575D3F: ;
    MEM8(esi + ebp + -1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D4E; /* jb: below (unsigned <) */

loc_00575D4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D50; /* jb: below (unsigned <) */

loc_00575D4E: ;
    SET_LO8(eax, 0x2E);

loc_00575D50: ;
    MEM8(esi + ebp) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D5E; /* jb: below (unsigned <) */

loc_00575D5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D60; /* jb: below (unsigned <) */

loc_00575D5E: ;
    SET_LO8(eax, 0x2E);

loc_00575D60: ;
    MEM8(esi + ebp + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D6F; /* jb: below (unsigned <) */

loc_00575D6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D71; /* jb: below (unsigned <) */

loc_00575D6F: ;
    SET_LO8(eax, 0x2E);

loc_00575D71: ;
    MEM8(esi + ebp + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D80; /* jb: below (unsigned <) */

loc_00575D7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D82; /* jb: below (unsigned <) */

loc_00575D80: ;
    SET_LO8(eax, 0x2E);

loc_00575D82: ;
    MEM8(esi + ebp + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D91; /* jb: below (unsigned <) */

loc_00575D8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575D93; /* jb: below (unsigned <) */

loc_00575D91: ;
    SET_LO8(eax, 0x2E);

loc_00575D93: ;
    MEM8(esi + ebp + 4) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575DA2; /* jb: below (unsigned <) */

loc_00575D9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575DA4; /* jb: below (unsigned <) */

loc_00575DA2: ;
    SET_LO8(eax, 0x2E);

loc_00575DA4: ;
    MEM8(esi + ebp + 5) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575DB3; /* jb: below (unsigned <) */

loc_00575DAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575DB5; /* jb: below (unsigned <) */

loc_00575DB3: ;
    SET_LO8(eax, 0x2E);

loc_00575DB5: ;
    MEM8(esi + ebp + 6) = LO8(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00575D33; /* jne: not equal / not zero */

loc_00575DC3: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x58) = 0;
    eax = 0x651424;
    if (CMP_NE(_fa, _fb)) goto loc_00575DDA; /* jne: not equal / not zero */

loc_00575DD5: ;
    eax = 0x651418;

loc_00575DDA: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00575DE6u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00575DE6: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00575CF0; /* jne: not equal / not zero */

loc_00575E01: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00575E11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00575E20
 * Original: 0x00575E20 - 0x00575E72 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575E20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575E3F; /* je: equal / zero */

loc_00575E33: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575E33; /* jne: not equal / not zero */

loc_00575E3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00575E44; /* jae: above or equal (unsigned >=) */

loc_00575E3F: ;
    esi = 3;

loc_00575E44: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575E53; /* je: equal / zero */

loc_00575E4B: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = ecx;
    goto loc_00575E5A;

loc_00575E53: ;
    eax = MEM32(edx + 0x14);
    MEM32(ecx + esi * 4 + 0x24) = eax;

loc_00575E5A: ;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575E67; /* je: equal / zero */

loc_00575E61: ;
    ecx = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_00575E67: ;
    MEM32(edx + 0x14) = edi;
    MEM32(edx + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575E80
 * Original: 0x00575E80 - 0x00575EC8 (72 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575E80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFF8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00575EA2; /* je: equal / zero */

loc_00575E96: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00575E96; /* jne: not equal / not zero */

loc_00575E9D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00575EA7; /* jae: above or equal (unsigned >=) */

loc_00575EA2: ;
    edx = 3;

loc_00575EA7: ;
    MEM32(esi + 0x10) = 0;
    eax = MEM32(ecx + edx * 4 + 0x24);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ecx + edx * 4 + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00575EC0; /* je: equal / zero */

loc_00575EBD: ;
    MEM32(eax + 0x10) = esi;

loc_00575EC0: ;
    MEM32(ecx + edx * 4 + 0x24) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00575ED0
 * Original: 0x00575ED0 - 0x00575EFA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00575ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    PUSH32(esp, 0x651464);
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0x00575EE8u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00575EE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00575EF1u); RECOMP_ABI_CALL(0x006178B0u, sub_006178B0); /* call 0x006178B0 */

loc_00575EF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00575F00
 * Original: 0x00575F00 - 0x0057612D (557 bytes, 187 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00575F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00575F00: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x90);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 6;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(ebp + 0x10);
    ecx = 0x10;
    edi = esp + 0x58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = esp + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    eax = ecx + 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_00575FE2; /* jae: above or equal (unsigned >=) */

loc_00575F4B: ;
    goto loc_00575F50;

    /* nop */

loc_00575F50: ;
    esi = MEM32(ebx);
    edi = MEM32(ebx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = esi;
    ecx = MEM32(eax + -12);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX8(MEM8(ecx + 0x673F3C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = edi;
    ecx = MEM32(eax + -16);
    ecx = ~ecx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00575F8B; /* je: equal / zero */

loc_00575F77: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(ebx + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = edx;
    edx = MEM32(eax + -12);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x10) = ecx;
    goto loc_00575FC5;

loc_00575F8B: ;
    esi = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = esi;
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = edx;
    ecx = MEM32(eax + -12);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + -8));
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + edx + 0x58) = MEM32(esp + edx + 0x58) + ecx;
    _fa = (uint32_t)(MEM32(esp + edx + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX8(MEM8(esi + 0x673F3C));
    edx = esp + edx + 0x18;
    ecx = esi + ecx + 0x10;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00575FC5: ;
    edx = MEM32(eax + -12);
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx + eax + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00575F50; /* jb: below (unsigned <) */

loc_00575FE2: ;
    SET_LO8(eax, MEM8(esp + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576120; /* je: equal / zero */

loc_00575FF1: ;
    PUSH32(esp, 0x6514F8);
    PUSH32(esp, 0x00575FFBu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00575FFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    ecx = ebp + 0xA8;

loc_00576010: ;
    ebp = MEM32(esp + eax + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057601D; /* jne: not equal / not zero */

loc_00576018: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576043; /* je: equal / zero */

loc_0057601D: ;
    ebx = MEM32(esp + eax + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + eax + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + -4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x9C);
    MEM32(esp + 0x10) = ebp;

loc_00576043: ;
    ebp = MEM32(esp + eax + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057604F; /* jne: not equal / not zero */

loc_0057604B: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576074; /* je: equal / zero */

loc_0057604F: ;
    ebx = MEM32(esp + eax + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + eax + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x9C);
    MEM32(esp + 0x10) = ebp;

loc_00576074: ;
    ebp = MEM32(esp + eax + 0x60);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576081; /* jne: not equal / not zero */

loc_0057607C: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005760A7; /* je: equal / zero */

loc_00576081: ;
    ebx = MEM32(esp + eax + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + eax + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x9C);
    MEM32(esp + 0x10) = ebp;

loc_005760A7: ;
    ebp = MEM32(esp + eax + 0x64);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005760B4; /* jne: not equal / not zero */

loc_005760AF: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005760DA; /* je: equal / zero */

loc_005760B4: ;
    ebx = MEM32(esp + eax + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + eax + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x9C);
    MEM32(esp + 0x10) = ebp;

loc_005760DA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00576010; /* jl: less (signed <) */

loc_005760E9: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6514CC);
    PUSH32(esp, 0x005760FBu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005760FB: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    ebx = MEM32(ebx + 0x10);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x65148C);
    PUSH32(esp, 0x0057611Du); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0057611D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00576130
 * Original: 0x00576130 - 0x0057620A (218 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576130: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    PUSH32(esp, edi);
    ecx = 6;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = esp + 0x28;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = esp + 0x68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(edx + 8);
    ecx = eax + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_005761EB; /* jae: above or equal (unsigned >=) */

loc_00576174: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);

loc_00576182: ;
    eax = MEM32(ecx + -12);
    edx = eax;
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX8(MEM8(edx + 0x673F4C));
    edx = MEM32(ecx + -16);
    edx = ~edx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edi = edi + esi + 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_005761B4; /* je: equal / zero */

loc_0057619F: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x28) = edx;
    goto loc_005761D0;

loc_005761B4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + -8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + edx + 0x30) = MEM32(esp + edx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(esp + edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + edx + 0x70;
    eax = esi + eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005761D0: ;
    edx = MEM32(ecx + -12);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00576182; /* jb: below (unsigned <) */

loc_005761E5: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005761EB: ;
    ecx = MEM32(esp + 0xAC);
    eax = MEM32(edx + ecx * 4 + 0xA4);
    edx = MEM32(esp + ecx * 4 + 0x68);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00576210
 * Original: 0x00576210 - 0x0057637D (365 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00576378; /* je: equal / zero */

loc_00576225: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00576378; /* je: equal / zero */

loc_00576230: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax + 0x10;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00576335; /* jae: above or equal (unsigned >=) */

loc_0057624B: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00576250: ;
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = ebx + -16;
    if (CMP_EQ(_fa, _fb)) goto loc_005762D1; /* je: equal / zero */

loc_0057625A: ;
    edx = MEM32(ebp);
    edx = ~edx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_005762D1; /* jne: not equal / not zero */

loc_00576264: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    esi = MEM32(ebx + -12);
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55555555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x55555555 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x651564);
    ecx = ebx;
    PUSH32(esp, 0x00576284u); RECOMP_ABI_CALL(0x00575C90u, sub_00575C90); /* call 0x00575C90 */

loc_00576284: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    ecx = 4;
    edi = 0x6513D4;
    esi = esi + ebx + -4;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_005762A6; /* je: equal / zero */

loc_005762A1: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005762A6: ;
    ecx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651550);
    ecx = ebx;
    eax = edx;
    PUSH32(esp, 0x005762BEu); RECOMP_ABI_CALL(0x00575C90u, sub_00575C90); /* call 0x00575C90 */

loc_005762BE: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ecx;
    edi = ecx;

loc_005762D1: ;
    eax = MEM32(ebp);
    edx = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x651544);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    PUSH32(esp, 0x005762F0u); RECOMP_ABI_CALL(0x00575C90u, sub_00575C90); /* call 0x00575C90 */

loc_005762F0: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp);
    ecx = eax;
    ecx = ~ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0057630B; /* je: equal / zero */

loc_00576305: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp) = eax;

loc_0057630B: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xF)) >> 32) & 1);
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx + ebp + 0x20;
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 8))) >> 32) & 1);
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00576250; /* jb: below (unsigned <) */

loc_00576326: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00576335; /* je: equal / zero */

loc_0057632B: ;
    MEM32(0) = 0;

loc_00576335: ;
    ecx = esi + 0x30;
    edx = 0x1D;
    /* nop */

loc_00576340: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00576350; /* je: equal / zero */

loc_00576346: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00576346; /* jne: not equal / not zero */

loc_00576350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00576340; /* jne: not equal / not zero */

loc_00576356: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    eax = ecx + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_00576378; /* jae: above or equal (unsigned >=) */

loc_00576367: ;
    edx = MEM32(eax + -12);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xF)) >> 32) & 1);
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx + eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00576367; /* jb: below (unsigned <) */

loc_00576378: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00576380
 * Original: 0x00576380 - 0x00576498 (280 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576380: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057648E; /* je: equal / zero */

loc_00576394: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057648E; /* je: equal / zero */

loc_0057639F: ;
    SET_LO8(eax, MEM8(0x6C5254));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057648E; /* jne: not equal / not zero */

loc_005763AC: ;
    eax = MEM32(esp + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005763BC; /* jne: not equal / not zero */

loc_005763B7: ;
    eax = 0x651588;

loc_005763BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005763C4u); RECOMP_ABI_CALL(0x00617CA0u, sub_00617CA0); /* call 0x00617CA0 */

loc_005763C4: ;
    ecx = MEM32(ebx + 0x10);
    edi = eax;
    eax = MEM32(ebx + 8);
    esi = eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00576485; /* jae: above or equal (unsigned >=) */

loc_005763DC: ;
    PUSH32(esp, ebp);
    /* nop */

loc_005763E0: ;
    _fa = (uint32_t)(MEM8(esi + -16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -16), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00576469; /* je: equal / zero */

loc_005763EA: ;
    ecx = MEM32(esi + -4);
    eax = ecx;
    ebp = eax + 1;

loc_005763F2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005763F2; /* jne: not equal / not zero */

loc_005763F9: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00576445; /* jb: below (unsigned <) */

loc_00576402: ;
    PUSH32(esp, 0x1FF);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00576412u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00576412: ;
    eax = MEM32(esi + -12);
    edx = ZX16(MEM16(esi + -6));
    ecx = eax + 0x1F;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = edx & 0xFFFF3FFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651578);
    PUSH32(esp, edi);
    MEM8(esp + 0x233) = 0;
    PUSH32(esp, 0x00576440u); RECOMP_ABI_CALL(0x00618050u, sub_00618050); /* call 0x00618050 */

loc_00576440: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00576469;

loc_00576445: ;
    eax = MEM32(esi + -12);
    edx = eax + 0x1F;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + -6));
    eax = eax & 0xFFFF3FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651578);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00576466u); RECOMP_ABI_CALL(0x00618050u, sub_00618050); /* call 0x00618050 */

loc_00576466: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576469: ;
    ecx = MEM32(esi + -12);
    edx = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + esi + 0x10;
    _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005763E0; /* jb: below (unsigned <) */

loc_00576484: ;
    POP32(esp, ebp);

loc_00576485: ;
    ecx = edi;
    PUSH32(esp, 0x0057648Cu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0057648C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0057648E: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005764A0
 * Original: 0x005764A0 - 0x00576521 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005764A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005764A0: ;
    ecx = MEM32(0x6C5258);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057651D; /* je: equal / zero */

loc_005764AD: ;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005764B9u); RECOMP_ABI_CALL(0x00575F00u, sub_00575F00); /* call 0x00575F00 */

loc_005764B9: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(0x6C5258);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xBC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 2;
    PUSH32(esp, edi);

loc_005764D4: ;
    edi = MEM32(eax + -20);
    esi = MEM32(eax + -24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005764D4; /* jne: not equal / not zero */

loc_005764F5: ;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D6F0)); /* fmul dword ptr [0x62d6f0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x651598);
    PUSH32(esp, 0x00576518u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576518: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0057651D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00576530
 * Original: 0x00576530 - 0x005765A7 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00576530: ;
    ecx = MEM32(0x6C5258);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005765A3; /* je: equal / zero */

loc_00576540: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576553; /* je: equal / zero */

loc_00576549: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057654Fu); RECOMP_ABI_CALL(0x00576130u, sub_00576130); /* call 0x00576130 */

loc_0057654F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00576553: ;
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057655Fu); RECOMP_ABI_CALL(0x00575F00u, sub_00575F00); /* call 0x00575F00 */

loc_0057655F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    eax = edx + ecx;
    ecx = MEM32(0x6C5258);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xBC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 2;
    PUSH32(esp, edi);
    /* nop */

loc_00576580: ;
    edi = MEM32(ecx + -20);
    esi = MEM32(ecx + -24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00576580; /* jne: not equal / not zero */

loc_005765A1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_005765A3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005765B0
 * Original: 0x005765B0 - 0x00576614 (100 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005765B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005765B0: ;
    SET_LO8(eax, MEM8(ecx + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057660F; /* jne: not equal / not zero */

loc_005765B7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005765C9; /* ja: above (unsigned >) */

loc_005765C0: ;
    eax = ecx + 0xE8;
    esp += 8; return; /* ret 4 */

loc_005765C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005765D7; /* ja: above (unsigned >) */

loc_005765CE: ;
    eax = ecx + 0xF0;
    esp += 8; return; /* ret 4 */

loc_005765D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005765E5; /* ja: above (unsigned >) */

loc_005765DC: ;
    eax = ecx + 0xF8;
    esp += 8; return; /* ret 4 */

loc_005765E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005765F3; /* ja: above (unsigned >) */

loc_005765EA: ;
    eax = ecx + 0x100;
    esp += 8; return; /* ret 4 */

loc_005765F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00576601; /* ja: above (unsigned >) */

loc_005765F8: ;
    eax = ecx + 0x108;
    esp += 8; return; /* ret 4 */

loc_00576601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0057660F; /* ja: above (unsigned >) */

loc_00576606: ;
    eax = ecx + 0x110;
    esp += 8; return; /* ret 4 */

loc_0057660F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00576620
 * Original: 0x00576620 - 0x0057665C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00576620: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    eax = edx + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0057665A; /* jae: above or equal (unsigned >=) */

loc_00576630: ;
    edx = 0x8000;
    PUSH32(esp, edi);

loc_00576636: ;
    _fa = (uint32_t)(MEM8(eax + -16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + -16), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00576640; /* je: equal / zero */

loc_0057663C: ;
    MEM16(eax + -6) = MEM16(eax + -6) | LO16(edx);
    _fa = (uint32_t)(MEM16(eax + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00576640: ;
    esi = MEM32(eax + -12);
    edi = MEM32(ecx + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + eax + 0x10;
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00576636; /* jb: below (unsigned <) */

loc_00576659: ;
    POP32(esp, edi);

loc_0057665A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00576660
 * Original: 0x00576660 - 0x00576738 (216 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576660: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;

loc_00576675: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00576732; /* jle: less or equal (signed <=) */

loc_0057667D: ;
    PUSH32(esp, 0x6515D0);
    edi = ebp;
    PUSH32(esp, 0x00576689u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00576689: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00576690: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005766AF; /* jle: less or equal (signed <=) */

loc_00576694: ;
    eax = ZX8(MEM8(ebx + esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x6515C8);
    PUSH32(esp, 0x005766A3u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_005766A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00576690; /* jl: less (signed <) */

loc_005766AD: ;
    goto loc_005766D0;

loc_005766AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005766D0; /* jge: greater or equal (signed >=) */

loc_005766B4: ;
    edi = 8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005766C0;

    /* nop */

loc_005766C0: ;
    PUSH32(esp, 0x6515C4);
    PUSH32(esp, 0x005766CAu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_005766CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005766C0; /* jne: not equal / not zero */

loc_005766D0: ;
    PUSH32(esp, 0x6515BC);
    PUSH32(esp, 0x005766DAu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_005766DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005766E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0057670D; /* jle: less or equal (signed <=) */

loc_005766E5: ;
    eax = ZX8(MEM8(ebx + esi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005766F3; /* jl: less (signed <) */

loc_005766EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005766F8; /* jl: less (signed <) */

loc_005766F3: ;
    eax = 0x2E;

loc_005766F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x639B84);
    PUSH32(esp, 0x00576703u); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_00576703: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005766E1; /* jl: less (signed <) */

loc_0057670D: ;
    PUSH32(esp, 0x6306D8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0057671Au); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_0057671A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00576675; /* jl: less (signed <) */

loc_00576732: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00576740
 * Original: 0x00576740 - 0x0057687B (315 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00576856; /* jae: above or equal (unsigned >=) */

loc_00576768: ;
    goto loc_00576770;

    /* nop */

loc_00576770: ;
    _fa = (uint32_t)(MEM8(esi + -16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -16), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00576806; /* je: equal / zero */

loc_0057677A: ;
    ecx = MEM32(esi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576806; /* je: equal / zero */

loc_00576785: ;
    SET_LO16(eax, MEM16(esi + -6));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00576806; /* js: sign (negative) */

loc_0057678D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005767EA; /* jne: not equal / not zero */

loc_00576792: ;
    SET_LO8(edx, MEM8(0x673F20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005767E4; /* je: equal / zero */

loc_0057679C: ;
    SET_LO8(edx, MEM8(0x6C5254));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005767BB; /* je: equal / zero */

loc_005767A6: ;
    edx = MEM32(esi + -12);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x651680);
    PUSH32(esp, 0x005767B6u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005767B6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005767D7;

loc_005767BB: ;
    eax = ZX16(LO16(eax));
    eax = eax & 0xFFFF3FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -12);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x65165C);
    PUSH32(esp, 0x005767D4u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005767D4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005767D7: ;
    edx = MEM32(esi + -12);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005767E1u); RECOMP_ABI_CALL(0x00576660u, sub_00576660); /* call 0x00576660 */

loc_005767E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005767E4: ;
    MEM8(esi + -5) = MEM8(esi + -5) | 0x40;
    _fa = (uint32_t)(MEM8(esi + -5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_005767F8;

loc_005767EA: ;
    ecx = MEM32(esi + -12);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_005767F8: ;
    ecx = MEM32(esi + -12);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00576806: ;
    eax = MEM32(esi + -12);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + esi + 0x10;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00576770; /* jb: below (unsigned <) */

loc_00576823: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576856; /* je: equal / zero */

loc_0057682B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x651630);
    PUSH32(esp, 0x00576837u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576837: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x651600);
    PUSH32(esp, 0x0057684Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0057684B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00576856: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6515EC);
    PUSH32(esp, 0x00576861u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576861: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6515D8);
    PUSH32(esp, 0x00576870u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576870: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00576880
 * Original: 0x00576880 - 0x005769BF (319 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576880: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00576998; /* jae: above or equal (unsigned >=) */

loc_005768A8: ;
    goto loc_005768B0;

    /* nop */

loc_005768B0: ;
    _fa = (uint32_t)(MEM8(esi + -16)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -16), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00576948; /* je: equal / zero */

loc_005768BA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00576948; /* jb: below (unsigned <) */

loc_005768C4: ;
    SET_LO16(ecx, MEM16(esi + -6));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057692C; /* jne: not equal / not zero */

loc_005768CD: ;
    SET_LO8(eax, MEM8(0x6C5254));
    edx = MEM32(esi + -12);
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + -4);
    PUSH32(esp, edx);
    if (CMP_EQ(_fa, _fb)) goto loc_005768EE; /* je: equal / zero */

loc_005768DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6516E4);
    PUSH32(esp, 0x005768E9u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005768E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00576919;

loc_005768EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057690C; /* je: equal / zero */

loc_005768F2: ;
    ecx = ZX16(LO16(ecx));
    ecx = ecx & 0xFFFF3FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6516C0);
    PUSH32(esp, 0x00576907u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576907: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00576919;

loc_0057690C: ;
    PUSH32(esp, 0x6516A4);
    PUSH32(esp, 0x00576916u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576916: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576919: ;
    eax = MEM32(esi + -12);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00576923u); RECOMP_ABI_CALL(0x00576660u, sub_00576660); /* call 0x00576660 */

loc_00576923: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + -5) = MEM8(esi + -5) | 0x40;
    _fa = (uint32_t)(MEM8(esi + -5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0057693A;

loc_0057692C: ;
    ecx = MEM32(esi + -12);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_0057693A: ;
    ecx = MEM32(esi + -12);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00576948: ;
    ecx = MEM32(esi + -12);
    edx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + esi + 0x10;
    _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005768B0; /* jb: below (unsigned <) */

loc_00576963: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576998; /* je: equal / zero */

loc_0057696B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x651630);
    PUSH32(esp, 0x00576977u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576977: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651600);
    PUSH32(esp, 0x0057698Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0057698B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00576998: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6515EC);
    PUSH32(esp, 0x005769A3u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005769A3: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6515D8);
    PUSH32(esp, 0x005769B2u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005769B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005769C0
 * Original: 0x005769C0 - 0x005769CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005769C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005769C0: ;
    ecx = MEM32(0x6C5258);
    g_seh_ebp = ebp; sub_00576620(); return; /* tail jmp 0x00576620 */

}

/**
 * sub_005769E0
 * Original: 0x005769E0 - 0x00576AE9 (265 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005769E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005769E0: ;
    eax = ecx;
    MEM32(eax) = 0x651408;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0xE8) = ecx;
    MEM16(eax + 0xEC) = 8;
    MEM16(eax + 0xEE) = 0xF00;
    MEM32(eax + 0xF0) = ecx;
    MEM16(eax + 0xF4) = 0xC;
    MEM16(eax + 0xF6) = 0x1680;
    MEM32(eax + 0xF8) = ecx;
    MEM16(eax + 0xFC) = 0x10;
    MEM16(eax + 0xFE) = 0x1E00;
    MEM32(eax + 0x100) = ecx;
    MEM16(eax + 0x104) = 0x20;
    MEM16(eax + 0x106) = 0x3C00;
    MEM32(eax + 0x108) = ecx;
    MEM16(eax + 0x10C) = 0x30;
    MEM16(eax + 0x10E) = 0x5A00;
    MEM32(eax + 0x110) = ecx;
    MEM16(eax + 0x114) = 0x40;
    MEM16(eax + 0x116) = 0x7800;
    ecx = MEM32(0x6C5240);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x679784);
    ecx = 0x5764A0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(0x6C5240) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00576AA9; /* je: equal / zero */

loc_00576AA3: ;
    MEM32(0x679784) = ecx;

loc_00576AA9: ;
    edx = MEM32(0x679788);
    ecx = 0x576530;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576ABE; /* je: equal / zero */

loc_00576AB8: ;
    MEM32(0x679788) = ecx;

loc_00576ABE: ;
    edx = MEM32(0x67978C);
    ecx = 0x5769C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576AD3; /* je: equal / zero */

loc_00576ACD: ;
    MEM32(0x67978C) = ecx;

loc_00576AD3: ;
    edx = MEM32(0x679790);
    ecx = 0x5769D0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576AE8; /* je: equal / zero */

loc_00576AE2: ;
    MEM32(0x679790) = ecx;

loc_00576AE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00576AF0
 * Original: 0x00576AF0 - 0x00576B0E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00576AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00576AF8u); RECOMP_ABI_CALL(0x00575B70u, sub_00575B70); /* call 0x00575B70 */

loc_00576AF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00576B08; /* je: equal / zero */

loc_00576AFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00576B05u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00576B05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576B08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00576B10
 * Original: 0x00576B10 - 0x00576E5E (846 bytes, 283 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576B10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(esp + 4) = ebx;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00576B2B; /* je: equal / zero */

loc_00576B22: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00576B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00576B24u); } /* indirect call */
    }

loc_00576B27: ;
    ebx = MEM32(esp + 8);

loc_00576B2B: ;
    eax = MEM32(0x6C5248);
    ecx = MEM32(0x6C524C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x6C5248) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00576B58; /* jne: not equal / not zero */

loc_00576B40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651778);
    PUSH32(esp, 0x00576B4Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00576B4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    ebx = MEM32(esp + 8);
    eax = MEM32(0x6C5248);

loc_00576B58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576B79; /* jne: not equal / not zero */

loc_00576B5C: ;
    eax = MEM32(0x6C525C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x651730);
    MEM32(0x6C525C) = eax;
    PUSH32(esp, 0x00576B72u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00576B72: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576B79: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576B8B; /* jne: not equal / not zero */

loc_00576B81: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00576B8B: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00576B93u); RECOMP_ABI_CALL(0x005765B0u, sub_005765B0); /* call 0x005765B0 */

loc_00576B93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576BA7; /* je: equal / zero */

loc_00576B97: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00576B9Fu); RECOMP_ABI_CALL(0x005771A0u, sub_005771A0); /* call 0x005771A0 */

loc_00576B9F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00576BA7: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576BB5; /* je: equal / zero */

loc_00576BAE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;

loc_00576BB5: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & 0xFFFFFFF0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00576DDD; /* je: equal / zero */

loc_00576BC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00576BCEu); RECOMP_ABI_CALL(0x00575C60u, sub_00575C60); /* call 0x00575C60 */

loc_00576BCE: ;
    esi = MEM32(ebx + eax * 4 + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576BFA; /* je: equal / zero */

loc_00576BD9: ;
    /* nop */

loc_00576BE0: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576BEE; /* je: equal / zero */

loc_00576BE7: ;
    edx = ebp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00576BF3; /* jbe: below or equal (unsigned <=) */

loc_00576BEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00576C3E; /* jae: above or equal (unsigned >=) */

loc_00576BF3: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576BE0; /* jne: not equal / not zero */

loc_00576BFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576C04; /* jne: not equal / not zero */

loc_00576BFF: ;
    eax = 4;

loc_00576C04: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576C3E; /* jne: not equal / not zero */

loc_00576C08: ;
    ecx = ebx + eax * 4 + 0x24;
    /* nop */

loc_00576C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00576C36; /* jae: above or equal (unsigned >=) */

loc_00576C15: ;
    esi = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576C10; /* je: equal / zero */

loc_00576C20: ;
    edx = ebp + 0x10;

loc_00576C23: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00576C2D; /* jbe: below or equal (unsigned <=) */

loc_00576C28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00576C3E; /* jae: above or equal (unsigned >=) */

loc_00576C2D: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576C23; /* jne: not equal / not zero */

loc_00576C34: ;
    goto loc_00576C10;

loc_00576C36: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576D23; /* je: equal / zero */

loc_00576C3E: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00576C4Eu); RECOMP_ABI_CALL(0x00575E20u, sub_00575E20); /* call 0x00575E20 */

loc_00576C4E: ;
    ebp = MEM32(esi);
    eax = MEM32(esp + 0x1C);
    ebp = ebp | 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    MEM32(esi) = ebp;
    ecx = ZX8(MEM8(esp + 0x20));
    eax = ebp;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ecx;
    eax = MEM32(0x6C5244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576C82; /* je: equal / zero */

loc_00576C72: ;
    edx = MEM32(0x6C5250);
    edx = edx & 0xFFFF3FFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00576C91;

loc_00576C82: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x24);
    eax = eax & 0xFFFF3FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00576C91: ;
    ecx = esi;
    PUSH32(esp, 0x00576C98u); RECOMP_ABI_CALL(0x00575AE0u, sub_00575AE0); /* call 0x00575AE0 */

loc_00576C98: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00576CF6; /* jle: less or equal (signed <=) */

loc_00576C9C: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx + esi + 0x10;
    MEM32(ebx + 4) = edi;
    MEM32(ebx) = esi;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = edi + 0xF;
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ebx + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00576CDE; /* jae: above or equal (unsigned >=) */

loc_00576CC8: ;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + ebx + 0x10);
    eax = eax + ebx + 0x10;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x10);

loc_00576CDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00576CE4u); RECOMP_ABI_CALL(0x00575E80u, sub_00575E80); /* call 0x00575E80 */

loc_00576CE4: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576CF6; /* jne: not equal / not zero */

loc_00576CF0: ;
    MEM32(eax + 0xE4) = ebx;

loc_00576CF6: ;
    SET_LO8(eax, MEM8(0x8602D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576D10; /* je: equal / zero */

loc_00576CFF: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00576D0Du); RECOMP_ABI_CALL(0x00613F10u, sub_00613F10); /* call 0x00613F10 */

loc_00576D0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576D10: ;
    SET_LO16(eax, MEM16(0x8602C8));
    edi = esi + 0x10;
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    goto loc_00576E1F;

loc_00576D23: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 8);
    edx = eax + ebp + 0x10;
    edi = ecx + eax + 0x1F;
    MEM32(ebx + 0x10) = edx;
    eax = ZX8(MEM8(esp + 0x20));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + -16) = eax;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0xE4);
    esi = edi + -16;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x6C5244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576D77; /* je: equal / zero */

loc_00576D68: ;
    ecx = MEM32(0x6C5250);
    ecx = ecx & 0xFFFF3FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    goto loc_00576D86;

loc_00576D77: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    edx = edx & 0xFFFF3FFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);

loc_00576D86: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00576D8Eu); RECOMP_ABI_CALL(0x00575AE0u, sub_00575AE0); /* call 0x00575AE0 */

loc_00576D8E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0xE4) = esi;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00576DB6; /* jbe: below or equal (unsigned <=) */

loc_00576DA4: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x65170C);
    PUSH32(esp, 0x00576DB3u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00576DB3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576DB6: ;
    SET_LO8(eax, MEM8(0x8602D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576DD0; /* je: equal / zero */

loc_00576DBF: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00576DCDu); RECOMP_ABI_CALL(0x00613F10u, sub_00613F10); /* call 0x00613F10 */

loc_00576DCD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576DD0: ;
    SET_LO16(eax, MEM16(0x8602C8));
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    goto loc_00576E1F;

loc_00576DDD: ;
    eax = MEM32(ebx + 0x10);
    edi = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x10) = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00576E08; /* jbe: below or equal (unsigned <=) */

loc_00576DF6: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x65170C);
    PUSH32(esp, 0x00576E05u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00576E05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576E08: ;
    SET_LO8(eax, MEM8(0x8602D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576E1F; /* je: equal / zero */

loc_00576E11: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00576E1Cu); RECOMP_ABI_CALL(0x00613F10u, sub_00613F10); /* call 0x00613F10 */

loc_00576E1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576E1F: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576E53; /* je: equal / zero */

loc_00576E2A: ;
    eax = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx);
    ecx = MEM32(ecx + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x55555555;
    edx = MEM32(esp + 0x18);
    eax = eax + edx + -4;
    MEM32(eax) = 0xAAAAAAAAu;

loc_00576E53: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00576E60
 * Original: 0x00576E60 - 0x0057709C (572 bytes, 195 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00576E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00576E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576E70; /* je: equal / zero */

loc_00576E6B: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00576E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00576E6Du); } /* indirect call */
    }

loc_00576E70: ;
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057707C; /* je: equal / zero */

loc_00576E7C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0xE8;
    PUSH32(esp, 0x00576E89u); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576E89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576E91: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0xF0;
    PUSH32(esp, 0x00576E9Eu); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576E9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576EA6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0xF8;
    PUSH32(esp, 0x00576EB3u); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576EB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576EBB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0x100;
    PUSH32(esp, 0x00576EC8u); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576EC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576ED0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0x108;
    PUSH32(esp, 0x00576EDDu); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576EDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576EE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = edi + 0x110;
    PUSH32(esp, 0x00576EF2u); RECOMP_ABI_CALL(0x00577100u, sub_00577100); /* call 0x00577100 */

loc_00576EF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057707C; /* jne: not equal / not zero */

loc_00576EFA: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057707C; /* je: equal / zero */

loc_00576F05: ;
    SET_LO8(eax, MEM8(edi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576F32; /* je: equal / zero */

loc_00576F0C: ;
    eax = MEM32(ebx + -12);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55555555) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x55555555 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576F2B; /* jne: not equal / not zero */

loc_00576F19: ;
    edx = MEM32(ebx + -12);
    eax = edx + ebx + -4;
    edx = MEM32(eax);
    ecx = 0x6513D4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576F32; /* je: equal / zero */

loc_00576F2B: ;
    ecx = edi;
    PUSH32(esp, 0x00576F32u); RECOMP_ABI_CALL(0x00576210u, sub_00576210); /* call 0x00576210 */

loc_00576F32: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057707C; /* je: equal / zero */

loc_00576F3D: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057707C; /* je: equal / zero */

loc_00576F48: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + -16;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576F78; /* je: equal / zero */

loc_00576F54: ;
    eax = MEM32(esi);
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx + eax + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576F78; /* je: equal / zero */

loc_00576F6A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6517C4);
    PUSH32(esp, 0x00576F75u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00576F75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576F78: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(edi + 8);
    ebp = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + esi + 0x10;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576FA8; /* je: equal / zero */

loc_00576F91: ;
    edx = MEM32(eax);
    edx = edx & 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00576FA8; /* je: equal / zero */

loc_00576F9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x651790);
    PUSH32(esp, 0x00576FA5u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00576FA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00576FA8: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esi);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057707A; /* je: equal / zero */

loc_00576FC6: ;
    ebx = ebx & 0xFFFFFFF8u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00577014; /* je: equal / zero */

loc_00576FCB: ;
    ecx = MEM32(ebx);
    ecx = ~ecx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00577014; /* je: equal / zero */

loc_00576FD4: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00576FDCu); RECOMP_ABI_CALL(0x00575E20u, sub_00575E20); /* call 0x00575E20 */

loc_00576FDC: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = edx;
    _fa = (uint32_t)(MEM32(edi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xE4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00576FFA; /* jne: not equal / not zero */

loc_00576FF4: ;
    MEM32(edi + 0xE4) = ebx;

loc_00576FFA: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + ebx + 0x10);
    eax = eax + ebx + 0x10;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    MEM32(eax) = ecx;

loc_00577014: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx + esi + 0x10;
    ebp = eax + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00577083; /* jae: above or equal (unsigned >=) */

loc_0057702E: ;
    edx = MEM32(ebx);
    edx = ~edx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00577081; /* je: equal / zero */

loc_00577037: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0057703Fu); RECOMP_ABI_CALL(0x00575E20u, sub_00575E20); /* call 0x00575E20 */

loc_0057703F: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + esi + 0x10);
    eax = eax + esi + 0x10;
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xE4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00577072; /* jne: not equal / not zero */

loc_0057706C: ;
    MEM32(edi + 0xE4) = esi;

loc_00577072: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0057707Au); RECOMP_ABI_CALL(0x00575E80u, sub_00575E80); /* call 0x00575E80 */

loc_0057707A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0057707C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00577081: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */

loc_00577083: ;
    if (CMP_NE(_fa, _fb)) goto loc_00577072; /* jne: not equal / not zero */

loc_00577085: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 0x10) = esi;
    POP32(esp, esi);
    edx = edx & 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    MEM32(edi + 0xE4) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005770A0
 * Original: 0x005770A0 - 0x005770F7 (87 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005770A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005770A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x005770B5u); RECOMP_ABI_CALL(0x00576B10u, sub_00576B10); /* call 0x00576B10 */

loc_005770B5: ;
    ebx = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005770EF; /* je: equal / zero */

loc_005770BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005770EF; /* je: equal / zero */

loc_005770C3: ;
    SET_LO8(ecx, MEM8(ebp + 0x23));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_005770D2; /* je: equal / zero */

loc_005770CD: ;
    ecx = MEM32(eax + -12);
    goto loc_005770D4;

loc_005770D2: ;
    ecx = esi;

loc_005770D4: ;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x005770EEu); RECOMP_ABI_CALL(0x00576E60u, sub_00576E60); /* call 0x00576E60 */

loc_005770EE: ;
    POP32(esp, edi);

loc_005770EF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00577100
 * Original: 0x00577100 - 0x005771A0 (160 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577100: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0057712C; /* je: equal / zero */

loc_0057710D: ;
    eax = MEM32(esp + 0x10);

loc_00577111: ;
    ecx = esi + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00577124; /* jb: below (unsigned <) */

loc_00577118: ;
    edx = ZX16(MEM16(edi + 6));
    ecx = edx + esi + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00577134; /* jb: below (unsigned <) */

loc_00577124: ;
    ebx = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00577111; /* jne: not equal / not zero */

loc_0057712C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00577134: ;
    ecx = ZX16(MEM16(edi + 4));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    edx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(esi + edx * 4 + 4);
    edx = esi + edx * 4 + 4;
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 4;

loc_00577164: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057718A; /* jne: not equal / not zero */

loc_00577169: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00577164; /* jl: less (signed <) */

loc_00577172: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00577182u); RECOMP_ABI_CALL(0x00576E60u, sub_00576E60); /* call 0x00576E60 */

loc_00577182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0057718A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577198; /* je: equal / zero */

loc_00577190: ;
    ecx = MEM32(esi);
    MEM32(esi) = eax;
    MEM32(edi) = esi;
    MEM32(ebx) = ecx;

loc_00577198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005771A0
 * Original: 0x005771A0 - 0x0057726C (204 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005771A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005771A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577200; /* je: equal / zero */

loc_005771AD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x10) = ecx;
    goto loc_005771C0;

    /* nop */

loc_005771C0: ;
    eax = MEM32(esp + 0x10);
    edx = edi + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005771FA; /* jb: below (unsigned <) */

loc_005771CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 4;

loc_005771D0: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005771F1; /* je: equal / zero */

loc_005771D7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005771E0: ;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00577243; /* je: equal / zero */

loc_005771EB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005771E0; /* jl: less (signed <) */

loc_005771F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005771D0; /* jl: less (signed <) */

loc_005771FA: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005771C0; /* jne: not equal / not zero */

loc_00577200: ;
    edx = ZX16(MEM16(ebx + 6));
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x448);
    PUSH32(esp, 0x6517F8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0057721Du); RECOMP_ABI_CALL(0x00576B10u, sub_00576B10); /* call 0x00576B10 */

loc_0057721D: ;
    edx = eax;
    eax = MEM32(ebx);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = 1;
    edi = edx + 8;
    ecx = 0xE;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = edx;
    eax = edx + 0x40;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00577243: ;
    ebp = MEM32(edi + eax * 4 + 4);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + eax * 4 + 4) = ebp;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(ebx + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + edi + 0x40;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00577270
 * Original: 0x00577270 - 0x0057729F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00577272: ;
    ecx = MEM32(eax + 0x6C5260);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057729C; /* je: equal / zero */

loc_0057727C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057728D; /* je: equal / zero */

loc_00577280: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00577272; /* jb: below (unsigned <) */

loc_0057728A: ;
    eax = esi;
    esp += 4; return; /* ret */

loc_0057728D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x651808);
    PUSH32(esp, 0x00577298u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00577298: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */

loc_0057729C: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_005772A0
 * Original: 0x005772A0 - 0x005772D9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005772A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005772A0: ;
    eax = MEM32(0x8602D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005772B6; /* je: equal / zero */

loc_005772A9: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x005772B2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005772B0u); } /* indirect call */
    }

loc_005772B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005772B6: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x651830);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005772D0u); RECOMP_ABI_CALL(0x00576B10u, sub_00576B10); /* call 0x00576B10 */

loc_005772D0: ;
    esi = eax;
    PUSH32(esp, 0x005772D7u); RECOMP_ABI_CALL(0x00577270u, sub_00577270); /* call 0x00577270 */

loc_005772D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005772E0
 * Original: 0x005772E0 - 0x00577318 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005772E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005772E0: ;
    eax = MEM32(0x8602D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_005772F6; /* je: equal / zero */

loc_005772ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x005772F2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005772F0u); } /* indirect call */
    }

loc_005772F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005772F6: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, 0x0057730Fu); RECOMP_ABI_CALL(0x00576B10u, sub_00576B10); /* call 0x00576B10 */

loc_0057730F: ;
    esi = eax;
    PUSH32(esp, 0x00577316u); RECOMP_ABI_CALL(0x00577270u, sub_00577270); /* call 0x00577270 */

loc_00577316: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00577320
 * Original: 0x00577320 - 0x0057734C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577320: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057734B; /* je: equal / zero */

loc_00577328: ;
    ecx = MEM32(0x8602CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577338; /* je: equal / zero */

loc_00577332: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(ecx); return; /* indirect tail jmp */

loc_00577338: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577341u); RECOMP_ABI_CALL(0x00575B30u, sub_00575B30); /* call 0x00575B30 */

loc_00577341: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0057734Bu); RECOMP_ABI_CALL(0x00576E60u, sub_00576E60); /* call 0x00576E60 */

loc_0057734B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00577350
 * Original: 0x00577350 - 0x0057737C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577350: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057737B; /* je: equal / zero */

loc_00577358: ;
    ecx = MEM32(0x8602CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577368; /* je: equal / zero */

loc_00577362: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(ecx); return; /* indirect tail jmp */

loc_00577368: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577371u); RECOMP_ABI_CALL(0x00575B30u, sub_00575B30); /* call 0x00575B30 */

loc_00577371: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0057737Bu); RECOMP_ABI_CALL(0x00576E60u, sub_00576E60); /* call 0x00576E60 */

loc_0057737B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00577380
 * Original: 0x00577380 - 0x0057738B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577380: ;
    ecx = MEM32(0x6C5258);
    g_seh_ebp = ebp; sub_00576210(); return; /* tail jmp 0x00576210 */

}

/**
 * sub_00577390
 * Original: 0x00577390 - 0x0057747D (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577390: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005773A4u); RECOMP_ABI_CALL(0x005ED240u, sub_005ED240); /* call 0x005ED240 */

loc_005773A4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005773C7; /* je: equal / zero */

loc_005773AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x005773C4u); RECOMP_ABI_CALL(0x005ED7B0u, sub_005ED7B0); /* call 0x005ED7B0 */

loc_005773C4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005773C7: ;
    PUSH32(esp, 0x005773CCu); RECOMP_ABI_CALL(0x005F12F0u, sub_005F12F0); /* call 0x005F12F0 */

loc_005773CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005773DD; /* jne: not equal / not zero */

loc_005773D0: ;
    PUSH32(esp, 0x651850);
    PUSH32(esp, 0x005773DAu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005773DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005773DD: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x651848);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x005773EBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005773EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577400; /* je: equal / zero */

loc_005773F2: ;
    ecx = eax;
    PUSH32(esp, 0x005773F9u); RECOMP_ABI_CALL(0x00577510u, sub_00577510); /* call 0x00577510 */

loc_005773F9: ;
    MEM32(0x6C52E4) = eax;
    goto loc_0057740A;

loc_00577400: ;
    MEM32(0x6C52E4) = 0;

loc_0057740A: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x651848);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x0057741Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0057741B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577430; /* je: equal / zero */

loc_00577422: ;
    ecx = eax;
    PUSH32(esp, 0x00577429u); RECOMP_ABI_CALL(0x005769E0u, sub_005769E0); /* call 0x005769E0 */

loc_00577429: ;
    MEM32(0x6C52E8) = eax;
    goto loc_0057743A;

loc_00577430: ;
    MEM32(0x6C52E8) = 0;

loc_0057743A: ;
    PUSH32(esp, 0x65183C);
    PUSH32(esp, 0x00577444u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00577444: ;
    ecx = MEM32(0x6C52E8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C52E4);
    PUSH32(esp, 0x00577466u); RECOMP_ABI_CALL(0x005775A0u, sub_005775A0); /* call 0x005775A0 */

loc_00577466: ;
    edx = MEM32(0x6C5258);
    eax = MEM32(0x6C52E8);
    MEM32(0x6C52E0) = edx;
    MEM32(0x6C5258) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00577480
 * Original: 0x00577480 - 0x0057749B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577480: ;
    PUSH32(esp, 0x62D468);
    PUSH32(esp, 0x0057748Au); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0057748A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577496; /* je: equal / zero */

loc_00577491: ;
    PUSH32(esp, 0x00577496u); RECOMP_ABI_CALL(0x005FDD20u, sub_005FDD20); /* call 0x005FDD20 */
    if (mc2hook_multi_dat()) {
        int _dat_cur = 0;
        uint32_t _dat_va = 0;
        while ((_dat_va = mc2hook_next_extra_dat(&_dat_cur)) != 0u) {
            PUSH32(esp, 0x16);
            PUSH32(esp, 0x65882Cu);
            PUSH32(esp, 0x20);
            PUSH32(esp, 0x005FDD83u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0);
            esp = esp + 0xC;
            if (eax != 0u) {
                ecx = eax;
                PUSH32(esp, 0x005FDD91u); RECOMP_ABI_CALL(0x005FC660u, sub_005FC660);
                uint32_t _zf = eax;
                if (_zf != 0u) {
                    PUSH32(esp, _dat_va);
                    ecx = _zf;
                    PUSH32(esp, 0x005FDDA3u); RECOMP_ABI_CALL(0x005FDCE0u, sub_005FDCE0);
                    if (LO8(eax) == 0) {
                        ecx = _zf;
                        PUSH32(esp, 0x005FDDD0u); RECOMP_ABI_CALL(0x005FC690u, sub_005FC690);
                        PUSH32(esp, _zf);
                        PUSH32(esp, 0x005FDDD6u); RECOMP_ABI_CALL(0x00577320u, sub_00577320);
                        esp = esp + 4;
                    }
                }
            }
        }
    }

loc_00577496: ;
    g_seh_ebp = ebp; sub_005EF2D0(); return; /* tail jmp 0x005EF2D0 */

}

/**
 * sub_005774A0
 * Original: 0x005774A0 - 0x005774BF (31 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005774A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005774A0: ;
    PUSH32(esp, 0x005774A5u); RECOMP_ABI_CALL(0x005F0BC0u, sub_005F0BC0); /* call 0x005F0BC0 */

loc_005774A5: ;
    PUSH32(esp, 0x005774AAu); RECOMP_ABI_CALL(0x005FD2D0u, sub_005FD2D0); /* call 0x005FD2D0 */

loc_005774AA: ;
    PUSH32(esp, 0x005774AFu); RECOMP_ABI_CALL(0x00612130u, sub_00612130); /* call 0x00612130 */

loc_005774AF: ;
    ecx = MEM32(0x6C52E4);
    PUSH32(esp, 0x005774BAu); RECOMP_ABI_CALL(0x00577610u, sub_00577610); /* call 0x00577610 */

loc_005774BA: ;
    g_seh_ebp = ebp; sub_00617AA0(); return; /* tail jmp 0x00617AA0 */

}

/**
 * sub_005774C0
 * Original: 0x005774C0 - 0x0057750F (79 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005774C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005774C0: ;
    ecx = MEM32(0x6C52E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x6C52E0);
    MEM32(0x6C5258) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005774DA; /* je: equal / zero */

loc_005774D4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005774DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005774D8u); } /* indirect call */
    }

loc_005774DA: ;
    ecx = MEM32(0x6C52E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    MEM32(0x6C52E8) = 0;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005774FF; /* je: equal / zero */

loc_005774F1: ;
    PUSH32(esp, 0x005774F6u); RECOMP_ABI_CALL(0x00577670u, sub_00577670); /* call 0x00577670 */

loc_005774F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005774FCu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005774FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005774FF: ;
    MEM32(0x6C52E4) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005F0B30(); return; /* tail jmp 0x005F0B30 */

}

/**
 * sub_00577510
 * Original: 0x00577510 - 0x00577520 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577510: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00577520
 * Original: 0x00577520 - 0x00577569 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577520: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00577549; /* je: equal / zero */

loc_0057753A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D124); PUSH32(esp, 0x00577549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00577543u); } /* indirect call */
    }

loc_00577549: ;
    edx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x12));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x11));
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C52EC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577567u); RECOMP_ABI_CALL(0x00575BA0u, sub_00575BA0); /* call 0x00575BA0 */

loc_00577567: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00577570
 * Original: 0x00577570 - 0x0057759E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577570: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057758C; /* je: equal / zero */

loc_0057757A: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D128); PUSH32(esp, 0x0057758Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00577586u); } /* indirect call */
    }

loc_0057758C: ;
    MEM32(esi) = 0;
    ecx = MEM32(0x6C52EC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00575C50(); return; /* tail jmp 0x00575C50 */

}

/**
 * sub_005775A0
 * Original: 0x005775A0 - 0x0057760E (110 bytes, 35 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005775A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005775A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 0xC));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x6C52EC) = eax;
    SET_LO8(eax, MEM8(esp + 0x34));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    MEM8(esi + 0x10) = LO8(edx);
    MEM32(esi + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x3C));
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esi + 0x11) = LO8(eax);
    MEM8(esi + 0x12) = LO8(ecx);
    { uint32_t _icall_target = MEM32(0x62D12C); PUSH32(esp, 0x005775D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005775D0u); } /* indirect call */
    }

loc_005775D6: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 8);
    eax = ecx + eax + -1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = ~ecx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x1000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 0;
    { uint32_t _icall_target = MEM32(0x62D124); PUSH32(esp, 0x005775FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005775F7u); } /* indirect call */
    }

loc_005775FD: ;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00577607u); RECOMP_ABI_CALL(0x00577520u, sub_00577520); /* call 0x00577520 */

loc_00577607: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00577610
 * Original: 0x00577610 - 0x00577631 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577610: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00577618u); RECOMP_ABI_CALL(0x00577570u, sub_00577570); /* call 0x00577570 */

loc_00577618: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577629; /* je: equal / zero */

loc_0057761F: ;
    eax = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;

loc_00577629: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00577520(); return; /* tail jmp 0x00577520 */

}

/**
 * sub_00577640
 * Original: 0x00577640 - 0x00577669 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577640: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577667; /* je: equal / zero */

loc_0057764A: ;
    PUSH32(esp, 0x0057764Fu); RECOMP_ABI_CALL(0x00577570u, sub_00577570); /* call 0x00577570 */

loc_0057764F: ;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D128); PUSH32(esp, 0x00577660u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057765Au); } /* indirect call */
    }

loc_00577660: ;
    MEM32(esi + 4) = 0;

loc_00577667: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00577670
 * Original: 0x00577670 - 0x00577680 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577670(void)
{

loc_00577670: ;
    PUSH32(esp, 0x00577675u); RECOMP_ABI_CALL(0x00577640u, sub_00577640); /* call 0x00577640 */

loc_00577675: ;
    MEM32(0x6C52EC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00577680
 * Original: 0x00577680 - 0x00577693 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x3C) = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_005776A0
 * Original: 0x005776A0 - 0x00577889 (489 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005776A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005776A0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x6C52F4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6C5300)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6c5300] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005776BC; /* jp: parity */

loc_005776B4: ;
    fp_push(MEMF(0x6C5300)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005776BC: ;
    fp_push(MEMF(0x6518BC)); /* fld float */
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x6C52FC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005777DD; /* jl: less (signed <) */

loc_005776D9: ;
    PUSH32(esp, ebx);
    ebx = 3;
    ecx = 0x6C7310;

loc_005776E4: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -8)); /* fsub dword ptr [ecx - 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -4)); /* fsub dword ptr [ecx - 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057771D; /* jp: parity */

loc_00577717: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0057771D: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00577757; /* jp: parity */

loc_00577751: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00577757: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x10)); /* fsub dword ptr [ecx + 0x10] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x14)); /* fsub dword ptr [ecx + 0x14] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18)); /* fsub dword ptr [ecx + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00577791; /* jp: parity */

loc_0057778B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_00577791: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x1C)); /* fsub dword ptr [ecx + 0x1c] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x20)); /* fsub dword ptr [ecx + 0x20] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005777CB; /* jp: parity */

loc_005777C5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_005777CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005776E4; /* jl: less (signed <) */

loc_005777DC: ;
    POP32(esp, ebx);

loc_005777DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0057782F; /* jge: greater or equal (signed >=) */

loc_005777E1: ;
    ecx = esi + esi * 2;
    ecx = ecx * 4 + 0x6C7310;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005777F0: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -8)); /* fsub dword ptr [ecx - 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -4)); /* fsub dword ptr [ecx - 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00577829; /* jp: parity */

loc_00577823: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_00577829: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005777F0; /* jne: not equal / not zero */

loc_0057782F: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6C52F8)); /* fsub dword ptr [0x6c52f8] */
    fp_push(MEMF(0x6C52F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6C52F8)); /* fsub dword ptr [0x6c52f8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057785E; /* jp: parity */

loc_00577854: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00577873;

loc_0057785E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00577873; /* jne: not equal / not zero */

loc_0057786B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00577873: ;
    fp_push(MEMF(0x6C52F4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6C5300)); /* fsub dword ptr [0x6c5300] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6C5300)); /* fadd dword ptr [0x6c5300] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00577890
 * Original: 0x00577890 - 0x005779C4 (308 bytes, 110 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577890: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005778B7; /* jne: not equal / not zero */

loc_0057789C: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005778B5; /* jne: not equal / not zero */

loc_005778A3: ;
    PUSH32(esp, 0x6518C0);
    PUSH32(esp, 0x005778ADu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005778AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_005778B5: ;
    ebx = eax;

loc_005778B7: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = edx + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005778CD; /* jle: less or equal (signed <=) */

loc_005778C9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;

loc_005778CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005779BE; /* jl: less (signed <) */

loc_005778D5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_005779BE; /* je: equal / zero */

loc_005778DB: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    edi = edi;

loc_005778E0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x005778F5u); RECOMP_ABI_CALL(0x00579500u, sub_00579500); /* call 0x00579500 */

loc_005778F5: ;
    edi = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    eax = ZX8(MEM8(edi + edx + 0x28));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    PUSH32(esp, 0x00577915u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00577915: ;
    ecx = ZX8(MEM8(edi + 0x29));
    MEM32(esp + 0x18) = ecx;
    MEM8(edi + 0x28) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    PUSH32(esp, 0x0057792Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0057792C: ;
    edx = ZX8(MEM8(edi + 0x2A));
    MEM32(esp + 0x18) = edx;
    MEM8(edi + 0x29) = LO8(eax);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    PUSH32(esp, 0x00577943u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00577943: ;
    MEM8(edi + 0x2A) = LO8(eax);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005779AF; /* je: equal / zero */

loc_0057794D: ;
    ecx = MEM32(esi + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = MEM32(esi + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx + 0x14)); /* fmul dword ptr [ecx + edx + 0x14] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx + 0x18)); /* fmul dword ptr [ecx + edx + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx + 0x10)); /* fmul dword ptr [ecx + edx + 0x10] */
    ecx = ecx + edx + 0x10;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_005779AF: ;
    ecx = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ecx;
    if ((_fa != 0)) goto loc_005778E0; /* jne: not equal / not zero */

loc_005779BD: ;
    POP32(esp, ebp);

loc_005779BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005779D0
 * Original: 0x005779D0 - 0x00577C4E (638 bytes, 200 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005779D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005779D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebp = ecx;
    MEM32(ebp) = esi;
    MEM32(ebp + 4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_005779F9; /* jne: not equal / not zero */

loc_005779EF: ;
    MEM32(esp + 0x20) = 0x673F60;
    goto loc_00577A00;

loc_005779F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x673F60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x673F60 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00577A11; /* jne: not equal / not zero */

loc_00577A00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00577A11; /* jne: not equal / not zero */

loc_00577A08: ;
    MEM32(ebp + 8) = 0x6C5308;
    goto loc_00577A31;

loc_00577A11: ;
    PUSH32(esp, 0x1FC);
    eax = edi * 4;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x6518E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577A2Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00577A2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;

loc_00577A31: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    ebx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(MEMF(0x638484) / fp_top()); /* fdivr dword ptr [0x638484] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00577B85; /* je: equal / zero */

loc_00577A50: ;
    MEM32(esp + 0x10) = edi;

loc_00577A54: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00577B2A; /* jl: less (signed <) */

loc_00577A6F: ;
    eax = MEM32(esp + 0x20);
    edi = 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + 8;

loc_00577A7E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -16)); /* fmul dword ptr [eax - 0x10] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -76)); /* fmul dword ptr [eax - 0x4c] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + -40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -80)); /* fmul dword ptr [eax - 0x50] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -76)); /* fmul dword ptr [eax - 0x4c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -36) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -64)); /* fmul dword ptr [eax - 0x40] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -60)); /* fmul dword ptr [eax - 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + -32) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -60)); /* fmul dword ptr [eax - 0x3c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -64)); /* fmul dword ptr [eax - 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -48)); /* fmul dword ptr [eax - 0x30] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -44)); /* fmul dword ptr [eax - 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -48)); /* fmul dword ptr [eax - 0x30] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -44)); /* fmul dword ptr [eax - 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -32)); /* fmul dword ptr [eax - 0x20] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -28)); /* fmul dword ptr [eax - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -32)); /* fmul dword ptr [eax - 0x20] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -28)); /* fmul dword ptr [eax - 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + -12) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00577A7E; /* jl: less (signed <) */

loc_00577B2A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00577B6F; /* jge: greater or equal (signed >=) */

loc_00577B2E: ;
    ecx = MEM32(esp + 0x20);
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00577B40: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ebx + edx * 8 + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -16)); /* fmul dword ptr [eax - 0x10] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -12)); /* fmul dword ptr [eax - 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebx + edx * 8 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00577B40; /* jl: less (signed <) */

loc_00577B6F: ;
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00577A54; /* jne: not equal / not zero */

loc_00577B85: ;
    ebx = MEM32(esp + 0x28);
    fp_pop(); /* fstp st(0) */
    edi = MEM32(esp + 0x2C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x214);
    ecx = eax * 8;
    PUSH32(esp, 0x6518E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00577BAEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00577BAE: ;
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    edx = eax;
    MEM32(esp + 0x28) = ebp;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00577C44; /* jle: less or equal (signed <=) */

loc_00577BDC: ;
    /* nop */

loc_00577BE0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00577C37; /* jle: less or equal (signed <=) */

loc_00577BEA: ;
    /* nop */

loc_00577BF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00577C2B; /* jle: less or equal (signed <=) */

loc_00577BF6: ;
    ecx = MEM32(esp + 0x20);
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00577C05: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -4)); /* fadd dword ptr [ecx - 4] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(edx + eax * 8 + -8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + -16)); /* fadd dword ptr [ecx - 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(edx + eax * 8 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_00577C05; /* jl: less (signed <) */

loc_00577C27: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00577C2B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00577BF0; /* jl: less (signed <) */

loc_00577C37: ;
    eax = MEM32(esp + 0x2C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00577BE0; /* jl: less (signed <) */

loc_00577C44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00577C50
 * Original: 0x00577C50 - 0x00577C5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577C50(void)
{

loc_00577C50: ;
    eax = ecx;
    MEM32(eax + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00577C60
 * Original: 0x00577C60 - 0x00577C6F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577C60: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577C6E; /* je: equal / zero */

loc_00577C67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577C6Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00577C6D: ;
    POP32(esp, ecx);

loc_00577C6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00577C70
 * Original: 0x00577C70 - 0x00577D91 (289 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577C70: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00577D8C; /* je: equal / zero */

loc_00577C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    goto loc_00577C90;

    /* nop */

loc_00577C90: ;
    ebx = (uint32_t)(int32_t)SMEM8(edi);
    esi = (uint32_t)(int32_t)SMEM8(edi + 1);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 8);
    MEM32(esp + 0x1C) = eax;
    MEM32(0x85B2C0) = edx;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 6);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00577CC8u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00577CC8: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00577D72; /* jle: less or equal (signed <=) */

loc_00577CDE: ;
    edi = edi;

loc_00577CE0: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    ecx = MEM32(ebx);
    MEMF(0x85B2B0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x85B2A4) = ecx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_push(MEMF(0x858560)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x858550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x18)); /* fadd dword ptr [edi + 0x18] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x85855C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x85854C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x14)); /* fadd dword ptr [edi + 0x14] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858558)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x858548)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x10)); /* fadd dword ptr [edi + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x85B2A0); PUSH32(esp, 0x00577D55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00577D4Fu); } /* indirect call */
    }

loc_00577D55: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00577CE0; /* jl: less (signed <) */

loc_00577D72: ;
    PUSH32(esp, 0x00577D77u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00577D77: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00577C90; /* jne: not equal / not zero */

loc_00577D89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00577D8C: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00577DA0
 * Original: 0x00577DA0 - 0x00577EF2 (338 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00577DA0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00577EEB; /* je: equal / zero */

loc_00577DB2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00577DC0: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00577ED6; /* je: equal / zero */

loc_00577DCA: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x636EB0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x636eb0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00577ED6; /* jne: not equal / not zero */

loc_00577DE1: ;
    ebp = (uint32_t)(int32_t)SMEM8(esi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 1);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0xC);
    eax = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebx + 8);
    ebp = ebp << 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 8);
    edx = edx & 0xFE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = eax;
    eax = ZX8(MEM8(esi + 9));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esi + 0xA));
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0xB));
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x11;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x85B2C0) = edx;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00577E3Eu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00577E3E: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00577ED1; /* jle: less or equal (signed <=) */

loc_00577E53: ;
    fp_push(MEMF(ebp + 4)); /* fld float */
    edx = MEM32(ebp);
    MEMF(0x85B2B0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x85B2A4) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x85B2A0); PUSH32(esp, 0x00577EB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00577EB3u); } /* indirect call */
    }

loc_00577EB9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00577E53; /* jl: less (signed <) */

loc_00577ED1: ;
    PUSH32(esp, 0x00577ED6u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00577ED6: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00577DC0; /* jne: not equal / not zero */

loc_00577EE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00577EEB: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00577F00
 * Original: 0x00577F00 - 0x00577F3B (59 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x2C0);
    eax = edi * 4;
    PUSH32(esp, 0x6518E4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00577F1Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00577F1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 4) = LO16(edi);
    MEM32(esi) = eax;
    MEM16(esi + 6) = 0;
    POP32(esp, edi);
    MEM32(0x6C5304) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00577F40
 * Original: 0x00577F40 - 0x00577F56 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577F40: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00577F48u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00577F48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C5304) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00577F60
 * Original: 0x00577F60 - 0x00577FAC (76 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577F60: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00577FA8; /* jbe: below or equal (unsigned <=) */

loc_00577F6B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);

loc_00577F71: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00577F80; /* je: equal / zero */

loc_00577F75: ;
    edx = MEM32(ecx);
    edi = MEM32(edx + eax * 4);
    edx = edx + eax * 4;
    MEM32(edx + -4) = edi;

loc_00577F80: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00577F89; /* jne: not equal / not zero */

loc_00577F87: ;
    SET_LO8(ebx, 1);

loc_00577F89: ;
    edx = ZX16(MEM16(ecx + 6));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00577F71; /* jl: less (signed <) */

loc_00577F92: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00577FA8; /* je: equal / zero */

loc_00577F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00577FA8; /* jbe: below or equal (unsigned <=) */

loc_00577FA3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ecx + 6) = LO16(eax);

loc_00577FA8: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00577FB0
 * Original: 0x00577FB0 - 0x00577FF8 (72 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00577FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00577FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x00577FBBu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00577FBB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00577FE9; /* jbe: below or equal (unsigned <=) */

loc_00577FC6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_00577FD0;

    /* nop */

loc_00577FD0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM32(ecx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x48), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00577FDF; /* je: equal / zero */

loc_00577FDA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00577FDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00577FDCu); } /* indirect call */
    }

loc_00577FDF: ;
    eax = ZX16(MEM16(edi + 6));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00577FD0; /* jl: less (signed <) */

loc_00577FE8: ;
    POP32(esp, ebx);

loc_00577FE9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00577FF0u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00577FF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00578000
 * Original: 0x00578000 - 0x00578026 (38 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00578023; /* jbe: below or equal (unsigned <=) */

loc_0057800C: ;
    /* nop */

loc_00578010: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0057801Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00578017u); } /* indirect call */
    }

loc_0057801A: ;
    eax = ZX16(MEM16(edi + 6));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00578010; /* jl: less (signed <) */

loc_00578023: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00578030
 * Original: 0x00578030 - 0x005780D7 (167 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    MEM32(esi) = 0x6518EC;
    PUSH32(esp, 0x00578042u); RECOMP_ABI_CALL(0x00577C50u, sub_00577C50); /* call 0x00577C50 */

loc_00578042: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x68) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x6C) = edi;
    MEM32(esi + 0x70) = 0xC11CCCCDu;
    MEM32(esi + 0x50) = 0x3F800000;
    MEM8(esi + 0x4C) = 1;
    MEM32(esi + 0x48) = 0xFFFFFFFFu;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x30) = edi;
    ecx = esi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x44) = edi;
    PUSH32(esp, 0x00578094u); RECOMP_ABI_CALL(0x00577680u, sub_00577680); /* call 0x00577680 */

loc_00578094: ;
    ecx = MEM32(0x6C5304);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005780A4; /* je: equal / zero */

loc_0057809E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005780A4u); RECOMP_ABI_CALL(0x00579020u, sub_00579020); /* call 0x00579020 */

loc_005780A4: ;
    MEM32(0x6C52FC) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x6C52F8) = 0x42480000;
    MEM32(0x6C52F0) = 0x447A0000;
    MEM32(0x6C5300) = 0x3F800000;
    MEM32(0x6C52F4) = 0x3F800000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005780E0
 * Original: 0x005780E0 - 0x00578147 (103 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005780E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005780E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x6518EC;
    if (CMP_EQ(_fa, _fb)) goto loc_005780F9; /* je: equal / zero */

loc_005780F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005780F6u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005780F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005780F9: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00578109; /* je: equal / zero */

loc_00578100: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00578106u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00578106: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578109: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00578126; /* je: equal / zero */

loc_00578111: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00578126; /* jne: not equal / not zero */

loc_00578116: ;
    ecx = edi;
    PUSH32(esp, 0x0057811Du); RECOMP_ABI_CALL(0x005FA080u, sub_005FA080); /* call 0x005FA080 */

loc_0057811D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00578123u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00578123: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578126: ;
    ecx = MEM32(0x6C5304);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00578137; /* je: equal / zero */

loc_00578131: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00578137u); RECOMP_ABI_CALL(0x00577F60u, sub_00577F60); /* call 0x00577F60 */

loc_00578137: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x0057813Fu); RECOMP_ABI_CALL(0x00577C60u, sub_00577C60); /* call 0x00577C60 */

loc_0057813F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00578150
 * Original: 0x00578150 - 0x005781B9 (105 bytes, 37 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x6518E4);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0057816Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0057816A: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x6518E4);
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0057817Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0057817F: ;
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    ecx = ZX8(MEM8(0x858374));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x18;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x005781B4u); RECOMP_ABI_CALL(0x005779D0u, sub_005779D0); /* call 0x005779D0 */

loc_005781B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005781C0
 * Original: 0x005781C0 - 0x005781FB (59 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005781C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005781C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005781E0; /* je: equal / zero */

loc_005781CB: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005781E0; /* jne: not equal / not zero */

loc_005781D0: ;
    ecx = esi;
    PUSH32(esp, 0x005781D7u); RECOMP_ABI_CALL(0x005FA080u, sub_005FA080); /* call 0x005FA080 */

loc_005781D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005781DDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005781DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005781E0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005781F8; /* je: equal / zero */

loc_005781ED: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005781F8; /* je: equal / zero */

loc_005781F5: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005781F8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00578200
 * Original: 0x00578200 - 0x0057854E (846 bytes, 286 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00578200: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6797CC);
    MEM32(esp + 4) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D8AC)); /* fmul dword ptr [0x62d8ac] */
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x5C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x40)); /* fadd dword ptr [ebp + 0x40] */
    MEMF(ebp + 0x40) = (float)fp_top(); /* fst */
    if (CMP_EQ(_fa, _fb)) goto loc_00578290; /* je: equal / zero */

loc_00578232: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x70] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057824C; /* jnp: not parity */

loc_0057823C: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00578292; /* jp: parity */

loc_0057824C: ;
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00578255u); RECOMP_ABI_CALL(0x005776A0u, sub_005776A0); /* call 0x005776A0 */

loc_00578255: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x58)); /* fadd dword ptr [ebp + 0x58] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x00578269u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578269: ;
    ecx = eax;
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(ebp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578292; /* jne: not equal / not zero */

loc_00578285: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0057828Eu); RECOMP_ABI_CALL(0x00577890u, sub_00577890); /* call 0x00577890 */

loc_0057828E: ;
    goto loc_00578292;

loc_00578290: ;
    fp_pop(); /* fstp st(0) */

loc_00578292: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0057852C; /* jle: less or equal (signed <=) */

loc_0057829F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, edi);

loc_005782A6: ;
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + edx + 0xC)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + eax;
    MEM32(esp + 0x28) = ecx;
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005784EE; /* jnp: not parity */

loc_005782D1: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ebx + eax + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6518F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6518f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005784EE; /* jnp: not parity */

loc_005782E9: ;
    SET_LO8(eax, MEM8(ecx + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005784EE; /* je: equal / zero */

loc_005782F4: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x60)); /* fadd dword ptr [ebp + 0x60] */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = ebx + ecx + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x2B));
    MEM8(esp + 0x13) = LO8(eax);
    SET_LO16(edi, ZX8(LO8(eax)));
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005783D3; /* je: equal / zero */

loc_005783A4: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005783D3; /* jle: less or equal (signed <=) */

loc_005783A9: ;
    edx = SX8(LO8(eax));
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x005783BDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005783BD: ;
    ecx = SX16(LO16(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005783CA; /* jns: not sign (positive) */

loc_005783C4: ;
    MEM8(esi + 0x2B) = 0;
    goto loc_005783D3;

loc_005783CA: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esi + 0x2B) = LO8(ecx);

loc_005783D3: ;
    eax = ZX8(MEM8(esi + 0x29));
    ecx = ZX8(MEM8(esi + 0x2A));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esi + 0x2B));
    SET_LO8(edx, MEM8(esi + 0x28));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x10);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + eax + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x25);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp + 0x18) = edx;
    edi = ebx + ecx + 1;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, 0x00578410u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578410: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    SET_LO8(ecx, MEM8(edi));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = LO8(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + eax + 4)); /* fadd dword ptr [ebx + eax + 4] */
    eax = ebx + eax + 4;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(edx, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00578462; /* je: equal / zero */

loc_00578436: ;
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ebx + eax + 0x14)); /* fld float */
    edi = ebx + eax + 0x14;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00578462; /* jp: parity */

loc_0057844B: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = edx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = eax;
    goto loc_005784AB;

loc_00578462: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005784AB; /* je: equal / zero */

loc_00578467: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    edx = ebx + eax + 0x14;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005784AB; /* jne: not equal / not zero */

loc_0057847D: ;
    eax = MEM32(ecx + 0xC);
    MEM32(edx) = eax;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005784AB; /* jp: parity */

loc_00578492: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_005784AB: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005784D3; /* je: equal / zero */

loc_005784B1: ;
    ecx = ZX8(MEM8(esi + 0x26));
    esi = ZX8(MEM8(esi + 0x27));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005784D3; /* jge: greater or equal (signed >=) */

loc_005784BD: ;
    edx = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(ebx + edx);
    edi = ebx + edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = LO8(edx);

loc_005784D3: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    goto loc_0057851E;

loc_005784EE: ;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + eax;
    ecx = 0xB;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + eax;
    ecx = 7;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_0057851E: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005782A6; /* jl: less (signed <) */

loc_0057852B: ;
    POP32(esp, edi);

loc_0057852C: ;
    fp_push(MEMF(ebp + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578547; /* jne: not equal / not zero */

loc_0057853C: ;
    eax = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00578547; /* jle: less or equal (signed <=) */

loc_00578543: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x3C) = eax;

loc_00578547: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578550
 * Original: 0x00578550 - 0x00578645 (245 bytes, 84 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00578550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00578573; /* jne: not equal / not zero */

loc_00578560: ;
    SET_LO8(eax, MEM8(0x674FCA));
    PUSH32(esp, 0);
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x00578570u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00578570: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578573: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005785A8; /* jne: not equal / not zero */

loc_00578583: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8583A0);
    PUSH32(esp, 0x005785A0u); RECOMP_ABI_CALL(0x005FA520u, sub_005FA520); /* call 0x005FA520 */

loc_005785A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00578642; /* je: equal / zero */

loc_005785A8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = 0x1E;
    if (CMP_LE(_fas, _fbs)) goto loc_00578642; /* jle: less or equal (signed <=) */

loc_005785BA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005785D1; /* jne: not equal / not zero */

loc_005785C1: ;
    PUSH32(esp, 0x6518FC);
    PUSH32(esp, 0x005785CBu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005785CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005785D1: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    ebx = MEM32(0x8583F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005785E7u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005785E7: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005785F0u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_005785F0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edi = esi + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00578605u); RECOMP_ABI_CALL(0x00577DA0u, sub_00577DA0); /* call 0x00577DA0 */

loc_00578605: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00578614u); RECOMP_ABI_CALL(0x00577C70u, sub_00577C70); /* call 0x00577C70 */

loc_00578614: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    MEM32(0x85B2C0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00578629u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00578629: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00578642; /* jne: not equal / not zero */

loc_00578635: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0057863Fu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0057863F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578642: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578650
 * Original: 0x00578650 - 0x0057866E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00578658u); RECOMP_ABI_CALL(0x005780E0u, sub_005780E0); /* call 0x005780E0 */

loc_00578658: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00578668; /* je: equal / zero */

loc_0057865F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00578665u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00578665: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578668: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00578670
 * Original: 0x00578670 - 0x00578692 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578670: ;
    eax = MEM32(0x673FAC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057867Fu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_0057867F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C733C) = eax;
    MEM32(0x6C7338) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005786A0
 * Original: 0x005786A0 - 0x005786AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005786A0(void)
{

loc_005786A0: ;
    eax = MEM32(0x6C733C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005786ABu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_005786AB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005786B0
 * Original: 0x005786B0 - 0x005786CD (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005786B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005786B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EC48)); /* fmul dword ptr [0x63ec48] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005786D0
 * Original: 0x005786D0 - 0x005786DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005786D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005786D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM8(ecx + 0x50) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_005786E0
 * Original: 0x005786E0 - 0x0057876E (142 bytes, 53 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005786E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005786E0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx + 1;
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057871B; /* jne: not equal / not zero */

loc_005786F4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + 1;
    MEM32(ecx + 8) = eax;
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ecx + 0x14);
    eax = esi;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(eax + ebx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057871B; /* jp: parity */

loc_00578718: ;
    MEM32(ecx + 8) = esi;

loc_0057871B: ;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 4) = edi;
    ecx = MEM32(esp + 0x10);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx * 4 + 0x6C7338);
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    esi = MEM32(eax);
    ecx = edx;
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    POP32(esp, esi);
    MEM32(edx + 8) = ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578770
 * Original: 0x00578770 - 0x00578A9E (814 bytes, 290 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00578770: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00578792; /* jne: not equal / not zero */

loc_00578781: ;
    MEM8(esi + 0x50) = LO8(eax);
    MEM8(esi + 0x51) = LO8(eax);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00578792: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_005787CE; /* jne: not equal / not zero */

loc_0057879B: ;
    SET_LO8(edx, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005787CE; /* jne: not equal / not zero */

loc_005787A2: ;
    edx = MEM32(esp + 0x44);
    MEM8(esi + 0x50) = 1;
    MEM8(esi + 0x51) = 0;
    edi = MEM32(edx);
    ecx = esi + 0x1C;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005787CE: ;
    edi = MEM32(esp + 0x44);
    fp_push(MEMF(edi)); /* fld float */
    ebp = esi + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp)); /* fsub dword ptr [ebp] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 4)); /* fsub dword ptr [ebp + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 8)); /* fsub dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D67C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d67c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00578A90; /* jnp: not parity */

loc_00578815: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x44)); /* fdiv dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057897D; /* je: equal / zero */

loc_005788E2: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = esi + 0x28;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(esi + 0x51));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00578925; /* jne: not equal / not zero */

loc_00578900: ;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi + 0x34;
    PUSH32(esp, 0x00578913u); RECOMP_ABI_CALL(0x0046FA20u, sub_0046FA20); /* call 0x0046FA20 */

loc_00578913: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi + 0x40;
    PUSH32(esp, 0x00578925u); RECOMP_ABI_CALL(0x0046FA20u, sub_0046FA20); /* call 0x0046FA20 */

loc_00578925: ;
    eax = esi + 0x40;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00578937u); RECOMP_ABI_CALL(0x005786E0u, sub_005786E0); /* call 0x005786E0 */

loc_00578937: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(esi + 0x50) = 0;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, 0x0057895Bu); RECOMP_ABI_CALL(0x005786E0u, sub_005786E0); /* call 0x005786E0 */

loc_0057895B: ;
    MEM32(esi + 0x4C) = 2;
    ecx = MEM32(edi);
    MEM32(ebp) = ecx;
    edx = MEM32(edi + 4);
    MEM32(ebp + 4) = edx;
    eax = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0057897D: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x30)); /* fmul dword ptr [esi + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DB58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63db58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00578A11; /* jnp: not parity */

loc_005789AE: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x651934)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x651934] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00578A11; /* je: equal / zero */

loc_005789BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00578A11; /* jne: not equal / not zero */

loc_005789C3: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x28);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x38);
    POP32(esp, ebp);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00578A11: ;
    edx = MEM32(esp + 0x4C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00578A28u); RECOMP_ABI_CALL(0x005786E0u, sub_005786E0); /* call 0x005786E0 */

loc_00578A28: ;
    eax = MEM32(edi);
    MEM32(ebp) = eax;
    ecx = MEM32(edi + 4);
    MEM32(ebp + 4) = ecx;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    MEM32(ebp + 8) = edx;
    MEM32(esi + 0x4C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00578A94; /* jl: less (signed <) */

loc_00578A49: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    SET_LO8(eax, 1);
    MEM8(esi + 0x50) = LO8(eax);
    MEM8(esi + 0x51) = LO8(eax);
    eax = esi + 0x34;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    edx = esi + 0x40;
    POP32(esp, edi);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, ebp);
    MEM32(esi + 0x4C) = 0;
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    MEM32(edx + 8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00578A90: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_00578A94: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578AA0
 * Original: 0x00578AA0 - 0x00578EBB (1051 bytes, 298 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00578AA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0x00578AB9u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00578AB9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = MEM32(esp + 0x24);
    ebx = MEM32(esi);
    edi = ecx + ebp + -1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00578DC4; /* jl: less (signed <) */

loc_00578ADD: ;
    MEM32(esp + 0x10) = 3;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00578AE8: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00578AFDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578AFD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    edx = eax;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578B21; /* jne: not equal / not zero */

loc_00578B19: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00578B21: ;
    ecx = MEM32(esi + 0x14);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = edi + 2;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x85B2AC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0;
    ebp = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0x3F800000;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = edx;
    PUSH32(esp, 0x00578BA9u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578BA9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    edx = eax;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578BCD; /* jne: not equal / not zero */

loc_00578BC5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00578BCD: ;
    ecx = MEM32(esi + 0x14);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = edi + 1;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x85B2AC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0;
    ebp = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0x3F800000;
    eax = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = eax;
    edx = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = edx;
    PUSH32(esp, 0x00578C55u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578C55: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    edx = eax;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578C79; /* jne: not equal / not zero */

loc_00578C71: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00578C79: ;
    ecx = MEM32(esi + 0x14);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x85B2AC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0;
    ebp = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0x3F800000;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = edx;
    PUSH32(esp, 0x00578D00u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578D00: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    edx = eax;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578D24; /* jne: not equal / not zero */

loc_00578D1C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00578D24: ;
    ecx = MEM32(esi + 0x14);
    eax = edi + -1;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x85B2AC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = 0;
    ebp = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = 0x3F800000;
    eax = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = eax;
    ebp = MEM32(0x85B2AC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ebp;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00578AE8; /* jl: less (signed <) */

loc_00578DBC: ;
    edi = MEM32(esp + 0x14);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */

loc_00578DC4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00578EA6; /* jge: greater or equal (signed >=) */

loc_00578DCC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ebp;

loc_00578DD4: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00578DE9u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00578DE9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    edx = eax;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    edx = edx | 0xFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00578E0D; /* jne: not equal / not zero */

loc_00578E05: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00578E0D: ;
    ecx = MEM32(esi + 0x14);
    eax = edi;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(eax + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x85B2AC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0;
    ebp = MEM32(eax + 0x1C);
    MEM32(ecx + 0x14) = ebp;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    ebp = MEM32(eax + 0xC);
    MEM32(ecx) = ebp;
    ebp = MEM32(eax + 0x10);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0x10) = 0x3F800000;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x85B2AC) = edx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00578DD4; /* jne: not equal / not zero */

loc_00578E8F: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00578E98u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00578E98: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00578EA6: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00578EADu); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00578EAD: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578EC0
 * Original: 0x00578EC0 - 0x00578FA4 (228 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00578EC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00578F9F; /* je: equal / zero */

loc_00578ED4: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edx + 1;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(0x673FA4);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00578EEE; /* jge: greater or equal (signed >=) */

loc_00578EEC: ;
    edi = eax;

loc_00578EEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00578F9C; /* je: equal / zero */

loc_00578EF6: ;
    eax = MEM32(esi + 0x14);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00578F06u); RECOMP_ABI_CALL(0x005FB260u, sub_005FB260); /* call 0x005FB260 */

loc_00578F06: ;
    edx = edi + -1;
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEM32(esp + 0x10) = 0;
    eax = eax + ebx + -1;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00578F9C; /* jle: less or equal (signed <=) */

loc_00578F33: ;
    ebp = MEM32(esp + 0x18);
    ebx = eax;
    MEM32(esp + 0x14) = edi;
    /* nop */

loc_00578F40: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 0x14);
    edi = ebx;
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(edx + eax + 0x1C)); /* fld float */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00578F7A; /* jp: parity */

loc_00578F60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00578F7A; /* jle: less or equal (signed <=) */

loc_00578F65: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00578F74u); RECOMP_ABI_CALL(0x00578AA0u, sub_00578AA0); /* call 0x00578AA0 */

loc_00578F74: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00578F7A: ;
    eax = MEM32(esp + 0x14);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00578F40; /* jne: not equal / not zero */

loc_00578F86: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00578F9C; /* jle: less or equal (signed <=) */

loc_00578F8B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00578F9Au); RECOMP_ABI_CALL(0x00578AA0u, sub_00578AA0); /* call 0x00578AA0 */

loc_00578F9A: ;
    fp_pop(); /* fstp st(0) */

loc_00578F9C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00578F9F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00578FB0
 * Original: 0x00578FB0 - 0x00578FF5 (69 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00578FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00578FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x1AD);
    eax = edi * 4;
    PUSH32(esp, 0x651938);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00578FCFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00578FCF: ;
    MEM16(esi + 4) = LO16(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM16(esi + 6) = 0;
    POP32(esp, edi);
    MEM32(0x6C7344) = esi;
    eax = esi;
    MEM32(0x673FA4) = 0x400;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00579000
 * Original: 0x00579000 - 0x00579016 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579000: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00579008u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00579008: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C7344) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00579020
 * Original: 0x00579020 - 0x00579036 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579020: ;
    eax = ZX16(MEM16(ecx + 6));
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(edx + eax * 4) = esi;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00579040
 * Original: 0x00579040 - 0x0057911A (218 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00579040: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x8583E8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x858404));
    PUSH32(esp, ebp);
    ebp = MEM32(0x858430);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    SET_LO8(edx, MEM8(0x8583E0));
    esi = ecx;
    SET_LO8(ecx, MEM8(0x674FCA));
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 1);
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(ecx);
    MEM8(esp + 0x18) = LO8(edx);
    PUSH32(esp, 0x00579080u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00579080: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00579087u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00579087: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00579093u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00579093: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0057909Au); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0057909A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005790A1u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005790A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005790A8u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_005790A8: ;
    PUSH32(esp, 0x674FD0);
    PUSH32(esp, 0x005790B2u); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_005790B2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005790B9u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_005790B9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005790D7; /* jbe: below or equal (unsigned <=) */

loc_005790C4: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x005790CEu); RECOMP_ABI_CALL(0x00578EC0u, sub_00578EC0); /* call 0x00578EC0 */

loc_005790CE: ;
    ecx = ZX16(MEM16(esi + 6));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005790C4; /* jl: less (signed <) */

loc_005790D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005790DDu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_005790DD: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005790E7u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005790E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 4 + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005790FBu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_005790FB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00579105u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00579105: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0057910Fu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_0057910F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00579120
 * Original: 0x00579120 - 0x00579144 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579120: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(0x6C7344);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00579140; /* je: equal / zero */

loc_0057913A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00579140u); RECOMP_ABI_CALL(0x00579020u, sub_00579020); /* call 0x00579020 */

loc_00579140: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00579150
 * Original: 0x00579150 - 0x00579171 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579150: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057915Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057915C: ;
    ecx = MEM32(0x6C7344);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057916F; /* je: equal / zero */

loc_00579169: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057916Fu); RECOMP_ABI_CALL(0x00577F60u, sub_00577F60); /* call 0x00577F60 */

loc_0057916F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00579180
 * Original: 0x00579180 - 0x0057933C (444 bytes, 130 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00579180: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63EC48)); /* fmul dword ptr [0x63ec48] */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x14);
    fp_push(MEMF(0x62D57C)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    PUSH32(esp, edi);
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005791B2; /* je: equal / zero */

loc_005791A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005791AFu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005791AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005791B2: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x66);
    eax = edi;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x651938);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005791C8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005791C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005792DF; /* jl: less (signed <) */

loc_005791D9: ;
    edi = 3;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005791E0: ;
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + eax) = 0xBF800000u;
    MEM32(ecx + eax + 4) = ebx;
    MEM32(ecx + eax + 8) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0xC) = 0x3F800000;
    MEM32(eax + ecx + 0x10) = ebx;
    MEM32(eax + ecx + 0x14) = ebx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + edx + 0x18) = ebx;
    ecx = eax + ecx + 0xC;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x1C) = ebx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + edx + 0x20) = 0xBF800000u;
    MEM32(eax + edx + 0x24) = ebx;
    MEM32(eax + edx + 0x28) = ebx;
    ecx = eax + edx + 0x20;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x2C) = 0x3F800000;
    MEM32(eax + ecx + 0x30) = ebx;
    MEM32(eax + ecx + 0x34) = ebx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + edx + 0x38) = ebx;
    ecx = eax + ecx + 0x2C;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x3C) = ebx;
    ecx = MEM32(esi + 0x14);
    edx = eax + 0x60;
    MEM32(edx + ecx + -32) = 0xBF800000u;
    MEM32(edx + ecx + -28) = ebx;
    MEM32(edx + ecx + -24) = ebx;
    ecx = edx + ecx + -32;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x4C) = 0x3F800000;
    MEM32(eax + ecx + 0x50) = ebx;
    MEM32(eax + ecx + 0x54) = ebx;
    ecx = eax + ecx + 0x4C;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x58) = ebx;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x5C) = ebx;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0xBF800000u;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    edx = MEM32(esi + 0x14);
    ecx = eax + edx + 0x6C;
    MEM32(ecx) = 0x3F800000;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + ecx + 0x78) = ebx;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + edx + 0x7C) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005791E0; /* jl: less (signed <) */

loc_005792DD: ;
    edi = ecx;

loc_005792DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00579328; /* jge: greater or equal (signed >=) */

loc_005792E3: ;
    ecx = ebp;
    edx = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005792F0: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0xBF800000u;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    eax = MEM32(esi + 0x14);
    eax = ecx + eax + 0xC;
    MEM32(eax) = 0x3F800000;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    eax = MEM32(esi + 0x14);
    MEM32(ecx + eax + 0x18) = ebx;
    eax = MEM32(esi + 0x14);
    MEM32(ecx + eax + 0x1C) = ebx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005792F0; /* jne: not equal / not zero */

loc_00579328: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi) = edi;
    MEM8(esi + 0x58) = LO8(ebx);
    PUSH32(esp, 0x00579335u); RECOMP_ABI_CALL(0x005786D0u, sub_005786D0); /* call 0x005786D0 */

loc_00579335: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00579340
 * Original: 0x00579340 - 0x00579410 (208 bytes, 52 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00579340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00579340: ;
    ecx = MEM32(0x679680);
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 4);
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(0x679680);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x269EC3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = esi;
    esi = esi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x7FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00579410
 * Original: 0x00579410 - 0x005794D4 (196 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00579418u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00579418: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x651940;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x7C) = ecx;
    SET_LO8(ecx, 0xFF);
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x74) = 0xC11CCCCDu;
    MEM8(esi + 0x83) = LO8(ecx);
    MEM8(esi + 0x82) = LO8(ecx);
    MEM8(esi + 0x81) = LO8(ecx);
    MEM8(esi + 0x80) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005794E0
 * Original: 0x005794E0 - 0x005794E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005794E0(void)
{

loc_005794E0: ;
    eax = 0x651960;
    esp += 4; return; /* ret */

}

/**
 * sub_005794F0
 * Original: 0x005794F0 - 0x005794F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005794F0(void)
{

loc_005794F0: ;
    eax = 0x63DFE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00579500
 * Original: 0x00579500 - 0x0057987D (893 bytes, 233 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00579500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0xA0));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = esi + 0x30;
    MEM8(ebx + eax + 2) = LO8(ecx);
    PUSH32(esp, edx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00579530u); RECOMP_ABI_CALL(0x00579340u, sub_00579340); /* call 0x00579340 */

loc_00579530: ;
    ecx = MEM32(0x679680);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = edx;
    MEM32(0x679680) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    MEMF(edi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x3C)); /* fadd dword ptr [esi + 0x3c] */
    MEMF(edi + 0xC) = (float)fp_top(); /* fst */
    SET_LO8(eax, MEM8(0x858374));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005795D0; /* je: equal / zero */

loc_005795C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6433D8)); /* fmul dword ptr [0x6433d8] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005795D2;

loc_005795D0: ;
    fp_pop(); /* fstp st(0) */

loc_005795D2: ;
    edx = MEM32(0x679680);
    fp_push(MEMF(esi + 0x60)); /* fld float */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    MEM32(0x679680) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x5C)); /* fadd dword ptr [esi + 0x5c] */
    MEMF(edi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edx;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x94));
    MEM8(edi + 0x26) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x98));
    fp_pop(); /* fstp st(0) */
    MEM8(edi + 0x27) = LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0xA0)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA0), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00579682; /* je: equal / zero */

loc_00579674: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x94));
    MEM8(ebx + edx) = LO8(eax);
    goto loc_005796C4;

loc_00579682: ;
    edx = MEM32(0x679680);
    eax = MEM32(esi + 0x94);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    ecx = MEM32(esi + 0x98);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x679680) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    MEM8(ebx + eax) = LO8(edx);

loc_005796C4: ;
    ecx = MEM32(0x679680);
    fp_push(MEMF(esi + 0x50)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edx;
    MEM32(0x679680) = ecx;
    eax = MEM32(ebp + 0x10);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C)); /* fadd dword ptr [esi + 0x4c] */
    MEMF(ebx + eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0x10);
    ecx = ebx + eax + 0x10;
    PUSH32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00579721u); RECOMP_ABI_CALL(0x00579340u, sub_00579340); /* call 0x00579340 */

loc_00579721: ;
    SET_LO8(edx, MEM8(esi + 0x80));
    MEM8(edi + 0x28) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x81));
    MEM8(edi + 0x29) = LO8(eax);
    SET_LO8(ecx, MEM8(esi + 0x82));
    MEM8(edi + 0x2A) = LO8(ecx);
    SET_LO8(eax, MEM8(esi + 0x83));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, LO8(eax));
    MEM8(edi + 0x2B) = LO8(eax);
    eax = ZX8(MEM8(edi + 0x29));
    ecx = ZX8(LO8(ecx));
    SET_LO8(edx, MEM8(edi + 0x28));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x10);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + eax + 8) = edx;
    ecx = MEM32(esi + 0x74);
    MEM32(edi + 0x1C) = ecx;
    fp_push(MEMF(esi + 0x58)); /* fld float */
    edx = MEM32(0x679680);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;
    MEM32(0x679680) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x54)); /* fadd dword ptr [esi + 0x54] */
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esi + 0x88)); /* fild */
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edx;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esi + 0x84)); /* fiadd dword ptr [esi + 0x84] */
    PUSH32(esp, 0x005797FAu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005797FA: ;
    fp_pop(); /* fstp st(0) */
    MEM8(edi + 0x24) = LO8(eax);
    eax = MEM32(ebp + 0x10);
    MEM8(ebx + eax + 1) = 0;
    fp_push((double)SMEM32(esi + 0x90)); /* fild */
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edx;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esi + 0x8C)); /* fiadd dword ptr [esi + 0x8c] */
    PUSH32(esp, 0x00579851u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00579851: ;
    fp_pop(); /* fstp st(0) */
    MEM8(edi + 0x25) = LO8(eax);
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + eax + 0xC) = ecx;
    esi = MEM32(esi + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00579876; /* je: equal / zero */

loc_0057986A: ;
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00579873u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00579871u); } /* indirect call */
    }

loc_00579873: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00579876: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00579880
 * Original: 0x00579880 - 0x00579B3C (700 bytes, 247 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6422DC);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0057989Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057989E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F85C);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x005798B4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005798B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F814);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x005798CAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005798CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F808);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x005798E0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005798E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64F828);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005798F6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005798F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F820);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057990Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057990C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x650B0C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579922u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579922: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651A28);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579938u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579938: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A9C0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057994Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057994E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64F850);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579964u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579964: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64672C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057997Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057997A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x651A20);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579990u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579990: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64679C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005799A6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005799A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651A18);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005799BCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005799BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x651A10);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005799D2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005799D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651A04);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005799E8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005799E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6519FC);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579A01u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6519F0);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579A1Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6519E4);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579A33u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6519D4);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579A4Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A4C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x6519C4);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579A65u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6519B8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579A7Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A7B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6519A8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579A91u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579A91: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x74;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64F7F0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579AA7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579AA7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651998);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579AC0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579AC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x65198C);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579AD9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579AD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x651980);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579AF2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579AF2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A9B8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579B08u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579B08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651974);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00579B1Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579B1E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x65196C);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00579B37u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00579B37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00579B40
 * Original: 0x00579B40 - 0x00579B5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00579B48u); RECOMP_ABI_CALL(0x005E3280u, sub_005E3280); /* call 0x005E3280 */

loc_00579B48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00579B58; /* je: equal / zero */

loc_00579B4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00579B55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00579B55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00579B58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00579B60
 * Original: 0x00579B60 - 0x00579B94 (52 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00579B68u); RECOMP_ABI_CALL(0x0057D080u, sub_0057D080); /* call 0x0057D080 */

loc_00579B68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0x100) = eax;
    MEM32(esi) = 0x651A30;
    MEM32(esi + 0xF8) = 0x3F000000;
    MEM32(esi + 0xFC) = 0x3ECCCCCD;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00579BA0
 * Original: 0x00579BA0 - 0x00579BAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00579BA0: ;
    MEM32(ecx) = 0x651A30;
    g_seh_ebp = ebp; sub_0057D150(); return; /* tail jmp 0x0057D150 */

}

/**
 * sub_00579BB0
 * Original: 0x00579BB0 - 0x00579BED (61 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579BB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xF0) = eax;
    eax = MEM32(eax + 0x6C);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x6C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00579BE9; /* je: equal / zero */

loc_00579BD1: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00579BD9u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00579BD9: ;
    eax = MEM32(esi + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00579BE9u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_00579BE9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00579BF0
 * Original: 0x00579BF0 - 0x00579BFD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579BF0(void)
{

loc_00579BF0: ;
    eax = MEM32(ecx + 0xFC);
    MEM32(ecx + 0x100) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00579C00
 * Original: 0x00579C00 - 0x00579CBC (188 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00579C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x100)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00579CB9; /* jne: not equal / not zero */

loc_00579C1B: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 4) = ecx;
    PUSH32(esp, ecx);
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00579C52u); RECOMP_ABI_CALL(0x004382E0u, sub_004382E0); /* call 0x004382E0 */

loc_00579C52: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0xFC)); /* fdiv dword ptr [esi + 0xfc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF8)); /* fmul dword ptr [esi + 0xf8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x3C)); /* fmul dword ptr [esi + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x38)); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0x100) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00579CB9; /* jp: parity */

loc_00579CAF: ;
    MEM32(esi + 0x100) = 0;

loc_00579CB9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00579CC0
 * Original: 0x00579CC0 - 0x00579CDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00579CC8u); RECOMP_ABI_CALL(0x00579BA0u, sub_00579BA0); /* call 0x00579BA0 */

loc_00579CC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00579CD8; /* je: equal / zero */

loc_00579CCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00579CD5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00579CD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00579CD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00579CE0
 * Original: 0x00579CE0 - 0x00579FAB (715 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579CE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00579CEAu); RECOMP_ABI_CALL(0x00579B60u, sub_00579B60); /* call 0x00579B60 */

loc_00579CEA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x1C);
    edi = 1;
    PUSH32(esp, 0x651AA0);
    PUSH32(esp, 0x18);
    MEM32(esi) = 0x651A68;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0x180) = ebx;
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x184) = edi;
    MEM32(esi + 0x18C) = ebx;
    MEM32(esi + 0x188) = ebx;
    MEM32(esi + 0x104) = edi;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x194) = ebx;
    MEM32(esi + 0x190) = ebx;
    MEM32(esi + 0x19C) = ebx;
    PUSH32(esp, 0x00579D47u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00579D47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00579D61; /* je: equal / zero */

loc_00579D4E: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x14) = ebx;
    goto loc_00579D63;

loc_00579D61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00579D63: ;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x1AC) = ebx;
    MEM32(esi + 0x1A8) = ebx;
    MEM32(esi + 0x1A4) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEM32(esi + 0x1B8) = ebx;
    MEM32(esi + 0x1B4) = ebx;
    MEM32(esi + 0x1B0) = ebx;
    MEM32(esi + 0x1C0) = ebx;
    MEM32(esi + 0x1BC) = ebx;
    MEM32(esi + 0x1CC) = ebx;
    MEM32(esi + 0x1C8) = ebx;
    MEM32(esi + 0x1C4) = ebx;
    MEM32(esi + 0x1DC) = ebx;
    MEM32(esi + 0x210) = 0x1F;
    MEM32(esi + 0x1F0) = ebx;
    MEM32(esi + 0x1EC) = ebx;
    MEM32(esi + 0x1E8) = ebx;
    MEM32(esi + 0x1FC) = ebx;
    MEM32(esi + 0x1F8) = ebx;
    MEM32(esi + 0x1F4) = ebx;
    MEM32(esi + 0x208) = ebx;
    MEM32(esi + 0x204) = ebx;
    MEM32(esi + 0x200) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    eax = 0x3F800000;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x30) = ebx;
    ecx = 0x42700000;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x9C) = ecx;
    ecx = 0x41200000;
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xC0) = ecx;
    ecx = 0x3F000000;
    MEM32(esi + 0x74) = 0x3F99999A;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = 0x44C80000;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0xB0) = 0x3C23D70A;
    MEM32(esi + 0xB4) = 0x3E800000;
    MEM32(esi + 0xA4) = 0x40A00000;
    MEM32(esi + 0xAC) = 0x3F333333;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0x108) = ebx;
    MEM32(esi + 0x10C) = 0x3FF33333;
    MEM32(esi + 0x110) = 0x40F66666;
    edx = 0x40000000;
    MEM32(esi + 0x114) = edi;
    MEM32(esi + 0x118) = ecx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = edx;
    MEM32(esi + 0x128) = 0x41400000;
    MEM32(esi + 0x12C) = 0x40A00000;
    MEM32(esi + 0x130) = 0x420C0000;
    MEM32(esi + 0x134) = 0x40A00000;
    MEM32(esi + 0x138) = 0x41200000;
    MEM32(esi + 0x13C) = 0x3F4CCCCD;
    MEM32(esi + 0x140) = 0x3E99999A;
    MEM32(esi + 0x144) = ebx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x158) = ecx;
    MEM32(esi + 0x15C) = 0x40600000;
    MEM32(esi + 0x148) = 0x3F0CCCCD;
    MEM32(esi + 0x14C) = ecx;
    MEM32(esi + 0x150) = ecx;
    MEM32(esi + 0x160) = 0xBF4CCCCDu;
    MEM32(esi + 0x1D8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0x20C) = ebx;
    MEM8(esi + 0x1D0) = LO8(ebx);
    MEM32(esi + 0x164) = 0x3FA00000;
    MEM32(esi + 0x168) = 0x3DCCCCCD;
    MEM32(esi + 0x16C) = edx;
    MEM32(esi + 0x170) = edx;
    MEM32(esi + 0x174) = 0x40800000;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00579FB0
 * Original: 0x00579FB0 - 0x00579FD0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00579FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x178);
    PUSH32(esp, eax);
    MEM32(esi) = 0x651A68;
    PUSH32(esp, 0x00579FC5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00579FC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00579BA0(); return; /* tail jmp 0x00579BA0 */

}

/**
 * sub_00579FD0
 * Original: 0x00579FD0 - 0x00579FE7 (23 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00579FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00579FD0: ;
    fp_push(MEMF(ecx + 0x128)); /* fld float */
    MEM32(ecx + 0x80) = 0x3F000000;
    MEMF(ecx + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00579FF0
 * Original: 0x00579FF0 - 0x0057A073 (131 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00579FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00579FF0: ;
    MEM32(ecx + 0xBC) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18C) = eax;
    edx = MEM32(ecx + 0x3C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x1D4) = eax;
    MEM8(ecx + 0x1D0) = LO8(eax);
    MEM32(ecx + 0x1D8) = 0x3F800000;
    MEM32(ecx + 0x100) = eax;
    MEM32(ecx + 0x1DC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0057A080
 * Original: 0x0057A080 - 0x0057A2DB (603 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057A080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057A080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF0);
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    ebp = 1;
    MEMF(esi + 0x1C4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xB0)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x1C8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x6797CC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A1CC; /* jne: not equal / not zero */

loc_0057A0C1: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A15D; /* jne: not equal / not zero */

loc_0057A0CD: ;
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A0E3; /* jne: not equal / not zero */

loc_0057A0DD: ;
    MEM32(esi + 0xA8) = ebx;

loc_0057A0E3: ;
    _fa = (uint32_t)(MEM8(esi + 0x1D0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1D0), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A1D8; /* jne: not equal / not zero */

loc_0057A0EF: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A1D8; /* jne: not equal / not zero */

loc_0057A103: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1D4)); /* fadd dword ptr [esi + 0x1d4] */
    MEMF(esi + 0x1D4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x16C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x16c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A1D8; /* jne: not equal / not zero */

loc_0057A124: ;
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    MEM8(esi + 0x1D0) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A14F; /* jne: not equal / not zero */

loc_0057A13E: ;
    fp_push(MEMF(0x630320)); /* fld float */
    MEMF(esi + 0x1D8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0057A1D8;

loc_0057A14F: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    MEMF(esi + 0x1D8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0057A1D8;

loc_0057A15D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1D0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1D0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A1C4; /* jne: not equal / not zero */

loc_0057A166: ;
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A181; /* jne: not equal / not zero */

loc_0057A179: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_0057A187;

loc_0057A181: ;
    fp_push(MEMF(0x630320)); /* fld float */

loc_0057A187: ;
    ecx = MEM32(esi + 0x178);
    MEMF(esi + 0x1D8) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x651AB0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x651ab0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A1BC; /* jne: not equal / not zero */

loc_0057A1A5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63384C)); /* fmul dword ptr [0x63384c] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x1D0) = LO8(ebx);
    MEM32(esi + 0x1D4) = ebx;
    goto loc_0057A1D8;

loc_0057A1BC: ;
    fp_pop(); /* fstp st(0) */
    MEM8(esi + 0x1D0) = LO8(ebx);

loc_0057A1C4: ;
    MEM32(esi + 0x1D4) = ebx;
    goto loc_0057A1D8;

loc_0057A1CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x1D0) = LO8(eax);

loc_0057A1D8: ;
    ecx = MEM32(esi + 0x6C);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D410)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d410] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A1F3; /* jp: parity */

loc_0057A1EB: ;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x120), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A1FC; /* je: equal / zero */

loc_0057A1F3: ;
    _fa = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x120), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A20F; /* jne: not equal / not zero */

loc_0057A1FC: ;
    MEM32(esi + 0x184) = ebx;

loc_0057A202: ;
    MEM32(esi + 0x188) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0057A20F: ;
    ecx = MEM32(esi + 0xF0);
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 0x10);
    fp_push(MEMF(eax + 0x48)); /* fld float */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ecx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0057A246u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057A243u); } /* indirect call */
    }

loc_0057A246: ;
    ecx = MEM32(esi + 0xF0);
    fp_push((double)SMEM32(ecx + 0x1C)); /* fild */
    edi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6456F4)); /* fmul dword ptr [0x6456f4] */
    PUSH32(esp, 0x0057A25Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0057A25C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0057A28C; /* jle: less or equal (signed <=) */

loc_0057A265: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x180)); /* fadd dword ptr [esi + 0x180] */
    MEMF(esi + 0x180) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A2B1; /* jne: not equal / not zero */

loc_0057A27E: ;
    MEM32(esi + 0x184) = ebp;
    MEM32(esi + 0x17C) = ebx;
    goto loc_0057A2B1;

loc_0057A28C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x17C)); /* fadd dword ptr [esi + 0x17c] */
    MEMF(esi + 0x17C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A2B1; /* jne: not equal / not zero */

loc_0057A2A5: ;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x180) = ebx;

loc_0057A2B1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x651AAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x651aac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A2CE; /* jne: not equal / not zero */

loc_0057A2C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x184)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x184), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A202; /* je: equal / zero */

loc_0057A2CE: ;
    MEM32(esi + 0x188) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057A2E0
 * Original: 0x0057A2E0 - 0x0057A42C (332 bytes, 89 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057A2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057A2E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x168)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057A429; /* jnp: not parity */

loc_0057A2FB: ;
    fp_push(MEMF(esi + 0x164)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x160)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x160] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057A429; /* jnp: not parity */

loc_0057A312: ;
    eax = MEM32(esi + 0xF0);
    fp_push(MEMF(0x65E384)); /* fld float */
    ecx = MEM32(eax + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0057A362; /* jle: less or equal (signed <=) */

loc_0057A32B: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(esi + 0xF0);
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    /* nop */

loc_0057A340: ;
    SET_LO8(ebx, MEM8(eax + 0x8E));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A34D; /* je: equal / zero */

loc_0057A34A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0057A34D: ;
    _fb = (uint32_t)(0x1D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1D4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0057A340; /* jne: not equal / not zero */

loc_0057A355: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0057A362; /* je: equal / zero */

loc_0057A35E: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */

loc_0057A362: ;
    SET_LO8(eax, MEM8(esi + 0x1D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A37F; /* jne: not equal / not zero */

loc_0057A36C: ;
    fp_push(MEMF(esi + 0x110)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A385; /* jp: parity */

loc_0057A37F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */

loc_0057A385: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A3E1; /* jp: parity */

loc_0057A392: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x160)); /* fmul dword ptr [esi + 0x160] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D0F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d0f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A3B1; /* jne: not equal / not zero */

loc_0057A3A9: ;
    MEM32(esp + 4) = 0x3F666666;

loc_0057A3B1: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x168)); /* fsub dword ptr [esi + 0x168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1A8)); /* fmul dword ptr [esi + 0x1a8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0057A3CCu); RECOMP_ABI_CALL(0x00619AD0u, sub_00619AD0); /* call 0x00619AD0 */

loc_0057A3CC: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x168)); /* fmul dword ptr [esi + 0x168] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esi + 0x1A8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0057A3E1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x164)); /* fmul dword ptr [esi + 0x164] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D0F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d0f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A400; /* jne: not equal / not zero */

loc_0057A3F8: ;
    MEM32(esp + 4) = 0x3F666666;

loc_0057A400: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0057A409u); RECOMP_ABI_CALL(0x00619AD0u, sub_00619AD0); /* call 0x00619AD0 */

loc_0057A409: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x168)); /* fmul dword ptr [esi + 0x168] */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x168)); /* fsub dword ptr [esi + 0x168] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1A8)); /* fmul dword ptr [esi + 0x1a8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x1A8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0057A429: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057A430
 * Original: 0x0057A430 - 0x0057A5A1 (369 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057A430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057A430: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xF0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A59B; /* je: equal / zero */

loc_0057A445: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A59B; /* je: equal / zero */

loc_0057A453: ;
    edx = MEM32(esi + 0x124);
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(0x6797CC);
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0xC) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = MEM32(esi + 0x128);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A4F6; /* jne: not equal / not zero */

loc_0057A48C: ;
    fp_push(MEMF(esi + 0x130)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x12C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x12c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057A4BE; /* jnp: not parity */

loc_0057A49F: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(esi + 0x12C);
    eax = MEM32(esi + 0x1C8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057A4B9u); RECOMP_ABI_CALL(0x0046E7E0u, sub_0046E7E0); /* call 0x0046E7E0 */

loc_0057A4B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0057A4C4;

loc_0057A4BE: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_0057A4C4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esi + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A4EC; /* jne: not equal / not zero */

loc_0057A4E2: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A4FE; /* je: equal / zero */

loc_0057A4EC: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 8) = ecx;
    goto loc_0057A4FE;

loc_0057A4F6: ;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 8) = edx;

loc_0057A4FE: ;
    ecx = MEM32(edi + 0xC);
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A51C; /* jp: parity */

loc_0057A511: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0057A51C: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0057A52E; /* jle: less or equal (signed <=) */

loc_0057A526: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 8) = eax;

loc_0057A52E: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A54A; /* jne: not equal / not zero */

loc_0057A538: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057A54A; /* jne: not equal / not zero */

loc_0057A542: ;
    MEM32(esp + 8) = 0x41A00000;

loc_0057A54A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A561; /* jp: parity */

loc_0057A559: ;
    fp_push(MEMF(esi + 0x138)); /* fld float */
    goto loc_0057A576;

loc_0057A561: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A591; /* jne: not equal / not zero */

loc_0057A570: ;
    fp_push(MEMF(esi + 0x134)); /* fld float */

loc_0057A576: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0057A58Eu); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_0057A58E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057A591: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0xA8) = edx;

loc_0057A59B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057A5B0
 * Original: 0x0057A5B0 - 0x0057AA4D (1181 bytes, 347 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057A5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057A5B0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0057A750; /* jne: not equal / not zero */

loc_0057A5C8: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0057A5D9; /* jle: less or equal (signed <=) */

loc_0057A5D2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x1DC) = eax;

loc_0057A5D9: ;
    fp_push(MEMF(esi + 0xCC)); /* fld float */
    ebx = esi + 0xCC;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x30)); /* fsub dword ptr [esi + 0x30] */
    edi = esi + 0x30;
    fp_push(MEMF(ebx + 4)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 4)); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057A638u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0057A638: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0x28);
    fp_push(MEMF(eax + 0x13C)); /* fld float */
    ecx = MEM32(esi + 0xF0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x134)); /* fmul dword ptr [eax + 0x134] */
    edx = MEM32(ecx + 0x6C);
    ecx = MEM32(0x6C8EB8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x643C90)); /* fadd dword ptr [0x643c90] */
    ebp = MEM32(ecx);
    fp_push(MEMF(eax + 0x140)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x134)); /* fmul dword ptr [eax + 0x134] */
    eax = MEM32(edx + 4);
    edx = MEM32(esi + 0x210);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x643C90)); /* fadd dword ptr [0x643c90] */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x64;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ecx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0xB8); PUSH32(esp, 0x0057A6A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057A69Bu); } /* indirect call */
    }

loc_0057A6A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057AA43; /* je: equal / zero */

loc_0057A6A9: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65113C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65113c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057AA43; /* jp: parity */

loc_0057A6D6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esi + 0x1DC) = 2;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057AA43; /* jp: parity */

loc_0057A705: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057AA43; /* jp: parity */

loc_0057A71A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0057A750: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057AA43; /* jne: not equal / not zero */

loc_0057A759: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xCC)); /* fsub dword ptr [esi + 0xcc] */
    ebx = esi + 0xCC;
    ecx = esp + 0x18;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 4)); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057A78Cu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0057A78C: ;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx + 8);
    ebp = MEM32(esi + 0x210);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edi);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 0xF0);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x3C) = 0;
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 4);
    ecx = MEM32(0x6797CC);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0057A7F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057A7ECu); } /* indirect call */
    }

loc_0057A7F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A9D3; /* je: equal / zero */

loc_0057A7FA: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x632600)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x632600] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057A9D3; /* jne: not equal / not zero */

loc_0057A83F: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 0x1DC) = 1;
    PUSH32(esp, 0x0057A851u); RECOMP_ABI_CALL(0x0046E820u, sub_0046E820); /* call 0x0046E820 */

loc_0057A851: ;
    MEMF(esi + 0x1E0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = esp + 0x24;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = ebx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057A897u); RECOMP_ABI_CALL(0x0046E820u, sub_0046E820); /* call 0x0046E820 */

loc_0057A897: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62F944)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62f944] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esi + 0xBC);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057A926; /* jp: parity */

loc_0057A8AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A905; /* je: equal / zero */

loc_0057A8F4: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    goto loc_0057A99E;

loc_0057A905: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6382CC)); /* fmul dword ptr [0x6382cc] */
    edx = esp + 0x20;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    goto loc_0057A97D;

loc_0057A926: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0057A95E; /* je: equal / zero */

loc_0057A950: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    goto loc_0057A99E;

loc_0057A95E: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6382CC)); /* fmul dword ptr [0x6382cc] */
    eax = esp + 0x2C;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);

loc_0057A97D: ;
    ecx = esp + 0x94;
    PUSH32(esp, 0x0057A989u); RECOMP_ABI_CALL(0x00609900u, sub_00609900); /* call 0x00609900 */

loc_0057A989: ;
    eax = MEM32(esp + 0x90);
    ecx = MEM32(esp + 0x8C);
    edx = MEM32(esp + 0x88);

loc_0057A99E: ;
    ebp = edi;
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x0057A9B1u); RECOMP_ABI_CALL(0x0046E820u, sub_0046E820); /* call 0x0046E820 */

loc_0057A9B1: ;
    MEMF(esi + 0x1E4) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x1E0)); /* fdiv dword ptr [esi + 0x1e0] */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xB8)); /* fmul dword ptr [esi + 0xb8] */
    MEMF(esi + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0057A9D3: ;
    eax = MEM32(esi + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057AA43; /* je: equal / zero */

loc_0057A9DD: ;
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    ebp = esi + 0x1E4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057AA39; /* jp: parity */

loc_0057A9F6: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057AA39; /* jne: not equal / not zero */

loc_0057AA00: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0x1E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0057AA17u); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_0057AA17: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0057AA2Fu); RECOMP_ABI_CALL(0x0046FA20u, sub_0046FA20); /* call 0x0046FA20 */

loc_0057AA2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0057AA39: ;
    MEM32(esi + 0x1DC) = 0;

loc_0057AA43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057AA50
 * Original: 0x0057AA50 - 0x0057AD38 (744 bytes, 241 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057AA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057AA50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0057AA5Eu); RECOMP_ABI_CALL(0x0057D470u, sub_0057D470); /* call 0x0057D470 */

loc_0057AA5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D2C4);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0057AA77u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AA77: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D61C);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0057AA90u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AA90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x118;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D60C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AAA9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AAA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D600);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0057AAC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AAC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D5F4);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0057AADBu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AADB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5E8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AAF4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AAF4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D5DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB0Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB0D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x12C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D5D0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB26u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB26: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x130;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5C4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB3Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D5BC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB58u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB58: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x138;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D5B4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB71u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x13C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5A4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AB8Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AB8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D598);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ABA3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ABA3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D58C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ABBCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ABBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x148;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D580);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ABD5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ABD5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x14C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D574);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ABEEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ABEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D568);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC07u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC07: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x154;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D560);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0057AC20u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC20: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D554);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC39u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x15C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D548);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC52u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC52: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x160;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D540);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC6Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC6B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x164;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D538);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC84u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x168;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D52C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AC9Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AC9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xF4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D520);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0057ACB6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ACB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D514);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ACCFu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ACCF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x170;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D508);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057ACE8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057ACE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x174;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D4FC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AD01u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AD01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xFC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D4EC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AD1Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AD1A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63D4DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057AD33u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057AD33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057AD40
 * Original: 0x0057AD40 - 0x0057AD5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057AD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057AD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057AD48u); RECOMP_ABI_CALL(0x00579FB0u, sub_00579FB0); /* call 0x00579FB0 */

loc_0057AD48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057AD58; /* je: equal / zero */

loc_0057AD4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057AD55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057AD55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057AD58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057AD48
 * Original: 0x0057AD48 - 0x0057AD5E (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057AD48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057AD48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057AD58; /* je: equal / zero */

loc_0057AD4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057AD55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057AD55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057AD58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057AD60
 * Original: 0x0057AD60 - 0x0057B4B7 (1879 bytes, 537 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057AD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057AD60: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B4B2; /* je: equal / zero */

loc_0057AD71: ;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x1D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_push(MEMF(esi + 0x144)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esi + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_pop(); /* fstp st(0) */
    edi = esi + 0xCC;
    fp_push(MEMF(esi + 0x90)); /* fld float */
    if (CMP_EQ(_fa, _fb)) goto loc_0057ADB7; /* je: equal / zero */

loc_0057ADA0: ;
    eax = MEM32(esi + 0xF0);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x88)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0057ADC8;

loc_0057ADB7: ;
    ecx = MEM32(esi + 0xF0);
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x88)); /* fld float */

loc_0057ADC8: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0057ADDBu); RECOMP_ABI_CALL(0x00491DD0u, sub_00491DD0); /* call 0x00491DD0 */

loc_0057ADDB: ;
    eax = MEM32(esi + 0xF0);
    fp_push(MEMF(eax + 0x58)); /* fld float */
    MEM32(esi + 0x18C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x8C)); /* fadd dword ptr [esi + 0x8c] */
    edx = edi;
    ecx = esi + 0x200;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xD0)); /* fadd dword ptr [esi + 0xd0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xB8)); /* fadd dword ptr [esi + 0xb8] */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0x6C);
    MEM32(ecx + 8) = edx;
    fp_push(MEMF(0x6796C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x6796C8)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6796C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(0x6796C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057AE73u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0057AE73: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(esi + 0x110);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C4)); /* fmul dword ptr [0x6796c4] */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C8)); /* fmul dword ptr [0x6796c8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C8)); /* fmul dword ptr [0x6796c8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C0)); /* fmul dword ptr [0x6796c0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C0)); /* fmul dword ptr [0x6796c0] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C4)); /* fmul dword ptr [0x6796c4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xB8)); /* fsub dword ptr [esi + 0xb8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0057AF89; /* je: equal / zero */

loc_0057AF5B: ;
    eax = MEM32(esi + 0x184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057AF6F; /* jne: not equal / not zero */

loc_0057AF65: ;
    eax = MEM32(esi + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057AF78; /* jne: not equal / not zero */

loc_0057AF6F: ;
    _fa = (uint32_t)(MEM32(esi + 0x188)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x188), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057AF89; /* jne: not equal / not zero */

loc_0057AF78: ;
    eax = 1;
    MEM32(esi + 0x188) = eax;
    MEM32(esi + 0x18C) = eax;

loc_0057AF89: ;
    ebx = MEM32(esp + 0x2C);
    eax = esi + 0x1E8;
    ebp = eax;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = edx;
    ebp = esi + 0x1F4;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = edx;
    PUSH32(esp, edi);
    ebp = esi + 0x3C;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0057AFB9u); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_0057AFB9: ;
    ebx = MEM32(esi + 0x178);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0057B096; /* jne: not equal / not zero */

loc_0057AFDC: ;
    SET_LO8(eax, MEM8(esi + 0x1D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B010; /* je: equal / zero */

loc_0057AFE6: ;
    edx = MEM32(0x6797CC);
    fp_push(MEMF(esi + 0x170)); /* fld float */
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1D8)); /* fld float */
    eax = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63384C)); /* fmul dword ptr [0x63384c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    goto loc_0057B028;

loc_0057B010: ;
    ecx = MEM32(0x6797CC);
    fp_push(MEMF(esi + 0x174)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);

loc_0057B028: ;
    PUSH32(esp, 0x0057B02Du); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_0057B02D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B04F; /* jp: parity */

loc_0057B047: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0057B072;

loc_0057B04F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63384C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63384c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057B068; /* jne: not equal / not zero */

loc_0057B060: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_0057B072;

loc_0057B068: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x651AB4)); /* fmul dword ptr [0x651ab4] */

loc_0057B072: ;
    fp_push(MEMF(esi + 0x1A8)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(esi + 0x1A8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0xC)); /* fadd dword ptr [ebx + 0xc] */
    MEM32(ebx + 8) = eax;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    goto loc_0057B0FF;

loc_0057B096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057B0F6; /* jne: not equal / not zero */

loc_0057B09B: ;
    SET_LO8(eax, MEM8(esi + 0x1D0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x10) = 0x40490FDB;
    if (CMP_NE(_fa, _fb)) goto loc_0057B0B5; /* jne: not equal / not zero */

loc_0057B0AD: ;
    MEM32(esp + 0x10) = 0;

loc_0057B0B5: ;
    ecx = MEM32(esi + 0x1A8);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x40490FDB);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0057B0D5u); RECOMP_ABI_CALL(0x0046E7E0u, sub_0046E7E0); /* call 0x0046E7E0 */

loc_0057B0D5: ;
    fp_push(MEMF(esi + 0x1A8)); /* fld float */
    edx = MEM32(esp + 0x1C);
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0xC)); /* fadd dword ptr [ebx + 0xc] */
    MEM32(ebx + 8) = edx;
    goto loc_0057B0FF;

loc_0057B0F6: ;
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1A8)); /* fadd dword ptr [esi + 0x1a8] */

loc_0057B0FF: ;
    fp_push(MEMF(0x6796C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    fp_push(MEMF(0x6796C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6796C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    fp_push(MEMF(0x6796C4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B17A; /* jp: parity */

loc_0057B158: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B17A; /* jp: parity */

loc_0057B169: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B249; /* jnp: not parity */

loc_0057B17A: ;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B1B5; /* jnp: not parity */

loc_0057B1A1: ;
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0057B1B3u); RECOMP_ABI_CALL(0x00609870u, sub_00609870); /* call 0x00609870 */

loc_0057B1B3: ;
    goto loc_0057B1B7;

loc_0057B1B5: ;
    fp_pop(); /* fstp st(0) */

loc_0057B1B7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B1D9; /* jnp: not parity */

loc_0057B1C8: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6796C0);
    ecx = ebp;
    PUSH32(esp, 0x0057B1D9u); RECOMP_ABI_CALL(0x00609870u, sub_00609870); /* call 0x00609870 */

loc_0057B1D9: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x60)); /* fadd dword ptr [esi + 0x60] */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B24B; /* jnp: not parity */

loc_0057B204: ;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x60)); /* fadd dword ptr [esi + 0x60] */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x64)); /* fadd dword ptr [esi + 0x64] */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x68)); /* fadd dword ptr [esi + 0x68] */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0057B24B;

loc_0057B249: ;
    fp_pop(); /* fstp st(0) */

loc_0057B24B: ;
    fp_push(MEMF(esi + 0x118)); /* fld float */
    edx = MEM32(esi + 0xF0);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = MEM32(edx + 0x6C);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057B4AF; /* jne: not equal / not zero */

loc_0057B272: ;
    ebp = MEM32(esi + 0x210);
    ecx = MEM32(esi + 0x118);
    ebp = ebp & 0xFFFFFFF1u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ebx = esi + 0x60;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0057B2A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057B29Du); } /* indirect call */
    }

loc_0057B2A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B375; /* je: equal / zero */

loc_0057B2AB: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEM32(esp + 0x60) = eax;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C8)); /* fmul dword ptr [0x6796c8] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C4)); /* fmul dword ptr [0x6796c4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C0)); /* fmul dword ptr [0x6796c0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x643670)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x643670] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B32C; /* jp: parity */

loc_0057B322: ;
    MEM32(esp + 0x14) = 0xBF490FDBu;
    goto loc_0057B345;

loc_0057B32C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x646EE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x646ee4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057B345; /* jne: not equal / not zero */

loc_0057B33D: ;
    MEM32(esp + 0x14) = 0x3F490FDB;

loc_0057B345: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B448; /* jp: parity */

loc_0057B36E: ;
    fp_pop(); /* fstp st(0) */
    goto loc_0057B45B;

loc_0057B375: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0057B397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057B391u); } /* indirect call */
    }

loc_0057B397: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B4AF; /* je: equal / zero */

loc_0057B39F: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0057B3A7u); RECOMP_ABI_CALL(0x0046C880u, sub_0046C880); /* call 0x0046C880 */

loc_0057B3A7: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C8)); /* fmul dword ptr [0x6796c8] */
    PUSH32(esp, 0x3F490FDB);
    fp_push(MEMF(esp + 0x58)); /* fld float */
    PUSH32(esp, 0xBF490FDBu);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C4)); /* fmul dword ptr [0x6796c4] */
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6796C0)); /* fmul dword ptr [0x6796c0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057B414u); RECOMP_ABI_CALL(0x00450390u, sub_00450390); /* call 0x00450390 */

loc_0057B414: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B45B; /* jnp: not parity */

loc_0057B444: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0057B448: ;
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0057B45Bu); RECOMP_ABI_CALL(0x00609870u, sub_00609870); /* call 0x00609870 */

loc_0057B45B: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B47E; /* jnp: not parity */

loc_0057B46C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x6796C0);
    PUSH32(esp, 0x0057B47Eu); RECOMP_ABI_CALL(0x00609870u, sub_00609870); /* call 0x00609870 */

loc_0057B47E: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xD0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xd0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B4AF; /* jp: parity */

loc_0057B4A6: ;
    eax = MEM32(esi + 0xD0);
    MEM32(esi + 0x64) = eax;

loc_0057B4AF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0057B4B2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057B4C0
 * Original: 0x0057B4C0 - 0x0057B65B (411 bytes, 125 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057B4C0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    eax = MEM32(esi + 0x38);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    ecx = MEM32(esp + 0x94);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x630D68)); /* fadd dword ptr [0x630d68] */
    edx = eax;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEM32(esp + 0x1C) = eax;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    eax = MEM32(esi + 0xF0);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(esi + 0x210);
    edi = MEM32(ecx + 4);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x20) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0057B545u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057B53Fu); } /* indirect call */
    }

loc_0057B545: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B57C; /* je: equal / zero */

loc_0057B549: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6302F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6302f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B57C; /* jp: parity */

loc_0057B55A: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(esi + 0x38);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D520)); /* fsub dword ptr [0x62d520] */
    ebx = 1;
    MEM32(esp + 0x78) = ecx;
    eax = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    goto loc_0057B58C;

loc_0057B57C: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x20) = ecx;
    eax = ecx;

loc_0057B58C: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    ecx = MEM32(0x6C8EB8);
    fp_push(MEMF(esp + 0x98)); /* fld float */
    MEM32(esp + 0x3C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x630D68)); /* fsub dword ptr [0x630d68] */
    eax = MEM32(esi + 0x210);
    fp_push(MEMF(esi + 0x38)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push(MEMF(esi + 0x30)); /* fld float */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x30;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = 0;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0057B5E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057B5DEu); } /* indirect call */
    }

loc_0057B5E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B60C; /* je: equal / zero */

loc_0057B5E8: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6302F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6302f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057B60C; /* jne: not equal / not zero */

loc_0057B5F9: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ebp = 1;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0057B60C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B638; /* je: equal / zero */

loc_0057B610: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B623; /* je: equal / zero */

loc_0057B614: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057B651; /* jnp: not parity */

loc_0057B623: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0057B638; /* jne: not equal / not zero */

loc_0057B631: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x34) = ecx;

loc_0057B638: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B651; /* je: equal / zero */

loc_0057B63C: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0057B651; /* jp: parity */

loc_0057B64A: ;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x34) = edx;

loc_0057B651: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 52; return; /* ret 48 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057B660
 * Original: 0x0057B660 - 0x0057B837 (471 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057B660: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xBC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B699; /* je: equal / zero */

loc_0057B674: ;
    eax = MEM32(esi + 0x178);
    MEM32(eax) = edi;
    eax = MEM32(esi + 0x178);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x178);
    MEM32(ecx + 0x14) = edi;

loc_0057B699: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x34);
    MEM32(esp + 0x38) = ecx;
    ecx = esi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0057B6F4u); RECOMP_ABI_CALL(0x0057A080u, sub_0057A080); /* call 0x0057A080 */

loc_0057B6F4: ;
    ecx = esi;
    PUSH32(esp, 0x0057B6FBu); RECOMP_ABI_CALL(0x0057A2E0u, sub_0057A2E0); /* call 0x0057A2E0 */

loc_0057B6FB: ;
    ecx = esi;
    PUSH32(esp, 0x0057B702u); RECOMP_ABI_CALL(0x0057AD60u, sub_0057AD60); /* call 0x0057AD60 */

loc_0057B702: ;
    ecx = esi;
    PUSH32(esp, 0x0057B709u); RECOMP_ABI_CALL(0x0057A430u, sub_0057A430); /* call 0x0057A430 */

loc_0057B709: ;
    ecx = MEM32(esi + 0x114);
    ebx = MEM32(esi + 0x94);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057B72C; /* jne: not equal / not zero */

loc_0057B71E: ;
    _fa = (uint32_t)(MEM32(esi + 0x1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1DC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0057B72C; /* jle: less or equal (signed <=) */

loc_0057B726: ;
    MEM32(esi + 0x94) = edi;

loc_0057B72C: ;
    ecx = esi;
    PUSH32(esp, 0x0057B733u); RECOMP_ABI_CALL(0x0057DC00u, sub_0057DC00); /* call 0x0057DC00 */

loc_0057B733: ;
    _fa = (uint32_t)(MEM32(esi + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x11C), edi (32-bit) */
    MEM32(esi + 0x94) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0057B7A0; /* je: equal / zero */

loc_0057B741: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x50);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 0x2C) = ecx;
    ecx = esi;
    MEM32(eax + 0x28) = edx;
    PUSH32(esp, 0x0057B7A0u); RECOMP_ABI_CALL(0x0057B4C0u, sub_0057B4C0); /* call 0x0057B4C0 */

loc_0057B7A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x114), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B7C5; /* je: equal / zero */

loc_0057B7A8: ;
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x34);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x38);
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0057B7C5u); RECOMP_ABI_CALL(0x0057A5B0u, sub_0057A5B0); /* call 0x0057A5B0 */

loc_0057B7C5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0057B7CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057B7C9u); } /* indirect call */
    }

loc_0057B7CC: ;
    _fa = (uint32_t)(MEM32(esi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xBC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B7DA; /* je: equal / zero */

loc_0057B7D4: ;
    MEM32(esi + 0xBC) = edi;

loc_0057B7DA: ;
    _fa = (uint32_t)(MEM32(esi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x104), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057B830; /* je: equal / zero */

loc_0057B7E2: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(esi + 0x4C);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(esi + 0x50);
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(esi + 0x54);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(esi + 0x58);
    MEM32(esi + 0x28) = edx;
    eax = MEM32(esi + 0x5C);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(esi + 0x60);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(esi + 0x64);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(esi + 0x68);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x104) = edi;

loc_0057B830: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0057B840
 * Original: 0x0057B840 - 0x0057B953 (275 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057B840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057B848u); RECOMP_ABI_CALL(0x00579B60u, sub_00579B60); /* call 0x00579B60 */

loc_0057B848: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x651AB8;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x124) = eax;
    ecx = 1;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x98) = ecx;
    ecx = 0x41E00000;
    MEM32(esi + 0x9C) = ecx;
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x74) = 0x3F99999A;
    MEM32(esi + 0x7C) = 0x42700000;
    MEM32(esi + 0x80) = 0x40400000;
    MEM32(esi + 0x84) = 0x44C80000;
    MEM32(esi + 0xC4) = 0x3FDEB852;
    MEM32(esi + 0xC0) = 0x3FE66666;
    edx = 0x3F800000;
    MEM32(esi + 0x78) = edx;
    ecx = 0x3F333333;
    MEM32(esi + 0xAC) = ecx;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = 0x3FCCCCCD;
    MEM32(esi + 0x110) = ecx;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = 0x3FD9999A;
    MEM32(esi + 0x11C) = 0x3F400000;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x138) = eax;
    MEM32(esi + 0x140) = 0x1F;
    MEM32(esi + 0x13C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057B952
 * Original: 0x0057B952 - 0x0057B953 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B952(void)
{

loc_0057B952: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0057B960
 * Original: 0x0057B960 - 0x0057B96B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057B960: ;
    MEM32(ecx) = 0x651AB8;
    g_seh_ebp = ebp; sub_00579BA0(); return; /* tail jmp 0x00579BA0 */

}

/**
 * sub_0057B966
 * Original: 0x0057B966 - 0x0057B96B (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B966(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057B966: ;
    g_seh_ebp = ebp; sub_00579BA0(); return; /* tail jmp 0x00579BA0 */

}

/**
 * sub_0057B970
 * Original: 0x0057B970 - 0x0057B9A3 (51 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057B970: ;
    eax = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ecx + 0xBC) = 1;
    esi = MEM32(eax);
    edx = ecx + 0x124;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    MEM32(ecx + 0x100) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057B9B0
 * Original: 0x0057B9B0 - 0x0057BA72 (194 bytes, 65 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057B9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057B9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0057B9BEu); RECOMP_ABI_CALL(0x0057D470u, sub_0057D470); /* call 0x0057D470 */

loc_0057B9BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D2C4);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0057B9D7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057B9D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651B10);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0057B9F0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057B9F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x134;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64566C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057BA09u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057BA09: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651B00);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057BA22u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057BA22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D4EC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057BA3Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057BA3B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xF8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D4DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057BA54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057BA54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x13C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x651AF0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057BA6Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057BA6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057BA80
 * Original: 0x0057BA80 - 0x0057BA8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BA80(void)
{

loc_0057BA80: ;
    MEM32(ecx + 0x80) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_0057BA90
 * Original: 0x0057BA90 - 0x0057BAAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057BA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057BA98u); RECOMP_ABI_CALL(0x0057B960u, sub_0057B960); /* call 0x0057B960 */

loc_0057BA98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057BAA8; /* je: equal / zero */

loc_0057BA9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057BAA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057BAA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057BAA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057BAB0
 * Original: 0x0057BAB0 - 0x0057BC38 (392 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057BAB0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x3C;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = 0x3F800000;
    MEM32(esi) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x24) = ebx;
    _fa = (uint32_t)(MEM32(edi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xF4), 0xFFFFFFFFu (32-bit) */
    eax = edi + 0x114;
    if (CMP_EQ(_fa, _fb)) goto loc_0057BAFA; /* je: equal / zero */

loc_0057BAF4: ;
    eax = edi + 0x108;

loc_0057BAFA: ;
    edx = MEM32(eax);
    ecx = edi + 0x60;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edi + 0x6C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0057BB18u); RECOMP_ABI_CALL(0x006066D0u, sub_006066D0); /* call 0x006066D0 */

loc_0057BB18: ;
    _fa = (uint32_t)(MEM32(edi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057BB2F; /* jne: not equal / not zero */

loc_0057BB21: ;
    fp_push(MEMF(edi + 0x134)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0057BB39;

loc_0057BB2F: ;
    edx = MEM32(edi + 0x134);
    MEM32(esp + 0xC) = edx;

loc_0057BB39: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057BB57; /* jnp: not parity */

loc_0057BB4A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0057BB57u); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_0057BB57: ;
    _fa = (uint32_t)(MEM32(edi + 0xF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xF4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057BB6A; /* jne: not equal / not zero */

loc_0057BB60: ;
    MEM32(esp + 0xC) = 0x40490FDB;
    goto loc_0057BB74;

loc_0057BB6A: ;
    ecx = MEM32(edi + 0x130);
    MEM32(esp + 0xC) = ecx;

loc_0057BB74: ;
    fp_push(MEMF(edi + 0x138)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057BB91; /* jnp: not parity */

loc_0057BB87: ;
    edx = MEM32(edi + 0x138);
    MEM32(esp + 0xC) = edx;

loc_0057BB91: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057BBB2; /* jnp: not parity */

loc_0057BBA2: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0057BBB2u); RECOMP_ABI_CALL(0x00609840u, sub_00609840); /* call 0x00609840 */

loc_0057BBB2: ;
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057BBCC; /* je: equal / zero */

loc_0057BBB9: ;
    PUSH32(esp, eax);
    edx = edi + 0x88;
    PUSH32(esp, edx);
    ecx = edi + 0xCC;
    PUSH32(esp, 0x0057BBCCu); RECOMP_ABI_CALL(0x00520F90u, sub_00520F90); /* call 0x00520F90 */

loc_0057BBCC: ;
    ecx = edi;
    PUSH32(esp, 0x0057BBD3u); RECOMP_ABI_CALL(0x0057DC00u, sub_0057DC00); /* call 0x0057DC00 */

loc_0057BBD3: ;
    eax = MEM32(edi + 0xF0);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 4);
    ebx = MEM32(edi + 0x140);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x13C);
    PUSH32(esp, eax);
    esi = edi + 0x30;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0057BC05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057BBFFu); } /* indirect call */
    }

loc_0057BC05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057BC31; /* je: equal / zero */

loc_0057BC09: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0057BC31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057BC40
 * Original: 0x0057BC40 - 0x0057BC65 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057BC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057BC48u); RECOMP_ABI_CALL(0x0057BAB0u, sub_0057BAB0); /* call 0x0057BAB0 */

loc_0057BC48: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0057BC4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057BC4Cu); } /* indirect call */
    }

loc_0057BC4F: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057BC63; /* je: equal / zero */

loc_0057BC59: ;
    MEM32(esi + 0xBC) = 0;

loc_0057BC63: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057BC70
 * Original: 0x0057BC70 - 0x0057BEEC (636 bytes, 157 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057BC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057BC70: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x858548);
    ecx = MEM32(0x85854C);
    edx = MEM32(0x858550);
    MEM32(0x6C7F70) = eax;
    eax = MEM32(0x858558);
    MEM32(0x6C7364) = eax;
    eax = MEM32(0x858568);
    MEM32(0x6C7354) = eax;
    fp_push(MEMF(0x6C7354)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C7354)); /* fmul dword ptr [0x6c7354] */
    MEM32(0x6C7F74) = ecx;
    ecx = MEM32(0x85855C);
    eax = MEM32(0x858574);
    MEM32(0x6C7F78) = edx;
    edx = MEM32(0x858560);
    MEM32(0x6C7368) = ecx;
    ecx = MEM32(0x85856C);
    MEM32(0x6C7358) = ecx;
    fp_push(MEMF(0x6C7358)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C7358)); /* fmul dword ptr [0x6c7358] */
    MEM32(0x6C736C) = edx;
    edx = MEM32(0x858570);
    MEM32(0x6C735C) = edx;
    fp_push(MEMF(0x6C735C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C735C)); /* fmul dword ptr [0x6c735c] */
    MEM32(0x6C7360) = eax;
    MEM32(esp + 8) = 0;
    eax = 0x6C7378;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7358)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C7354)); /* fmul dword ptr [0x6c7354] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C735C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C7354)); /* fmul dword ptr [0x6c7354] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C735C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6C7358)); /* fmul dword ptr [0x6c7358] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0057BD50;

    /* nop */

loc_0057BD50: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6443B0)); /* fmul dword ptr [0x6443b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638484)); /* fmul dword ptr [0x638484] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(0x6C735C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(0x6C7358)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(0x6C7354)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x6C7F78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x6C7F74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6C7F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7F78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(0x6C7F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6C7F74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7F74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(0x6C7F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6C7F78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C736C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x6C7368)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C7F78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C7F78 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 8) = ecx;
    fp_push(MEMF(0x6C7364)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x6C736C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(0x6C7368)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6C7364)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7368)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(0x6C736C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6C7364)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_L(_fas, _fbs)) goto loc_0057BD50; /* jl: less (signed <) */

loc_0057BEE4: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057BEF0
 * Original: 0x0057BEF0 - 0x0057BF05 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057BEF0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0057BF01u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0057BF01: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0057BF10
 * Original: 0x0057BF10 - 0x0057BF24 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057BF10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057BF10: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x651B20)); /* fadd dword ptr [0x651b20] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057BF30
 * Original: 0x0057BF30 - 0x0057C1BE (654 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057BF30: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = MEM32(0x673FE4);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057BFD0; /* jnp: not parity */

loc_0057BF52: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6507F0)); /* fmul dword ptr [0x6507f0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648168)); /* fmul dword ptr [0x648168] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x651B20)); /* fadd dword ptr [0x651b20] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0057BF80; /* jge: greater or equal (signed >=) */

loc_0057BF75: ;
    edx = 0x80;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;
    if ((_fas < 0)) goto loc_0057BF75; /* js: sign (negative) */

loc_0057BF80: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = eax + eax * 2;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C7370)); /* fmul dword ptr [eax + 0x6c7370] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C7374)); /* fmul dword ptr [eax + 0x6c7374] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C7378)); /* fmul dword ptr [eax + 0x6c7378] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C737C)); /* fmul dword ptr [eax + 0x6c737c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C7380)); /* fmul dword ptr [eax + 0x6c7380] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C7384)); /* fmul dword ptr [eax + 0x6c7384] */
    goto loc_0057C018;

loc_0057BFD0: ;
    fp_push(MEMF(0x6C7F70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(0x6C7F74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(0x6C7F78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7364)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C7368)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6C736C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */

loc_0057C018: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 4) & 7]); /* fadd st(4) */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx);
    MEM32(eax + 0x10) = esi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    esi = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax + 0xC) = edx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = esi;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esi = MEM32(esp + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(eax + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    POP32(esp, esi);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C1C0
 * Original: 0x0057C1C0 - 0x0057C1C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C1C0: ;
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

}

/**
 * sub_0057C1D0
 * Original: 0x0057C1D0 - 0x0057C1E2 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C1D0(void)
{

loc_0057C1D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x673FC0);
    MEM32(0x673FE4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0057C1F0
 * Original: 0x0057C1F0 - 0x0057C236 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057C1F8u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0057C1F8: ;
    ecx = esi + 0x18;
    MEM32(esi) = 0x651B2C;
    PUSH32(esp, 0x0057C206u); RECOMP_ABI_CALL(0x00614370u, sub_00614370); /* call 0x00614370 */

loc_0057C206: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x10) = LO16(eax);
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x44) = LO8(eax);
    MEM32(esi + 0x3C) = 0x43E60000;
    MEM32(esi + 0x40) = 0x3F000000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057C240
 * Original: 0x0057C240 - 0x0057C246 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C240(void)
{

loc_0057C240: ;
    eax = 0x651B58;
    esp += 4; return; /* ret */

}

/**
 * sub_0057C250
 * Original: 0x0057C250 - 0x0057C25B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C250: ;
    MEM32(ecx) = 0x651B2C;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0057C260
 * Original: 0x0057C260 - 0x0057C26A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C260(void)
{

loc_0057C260: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C270
 * Original: 0x0057C270 - 0x0057C27D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C270(void)
{

loc_0057C270: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    MEM32(eax + 0x70) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C280
 * Original: 0x0057C280 - 0x0057C2A6 (38 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C280: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C296; /* je: equal / zero */

loc_0057C28B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C296; /* je: equal / zero */

loc_0057C290: ;
    MEM16(ecx + 0x10) = 4;

loc_0057C296: ;
    MEM32(ecx + 0x2C) = edx;
    MEM32(edx + 0x70) = ecx;
    MEM32(ecx + 0x30) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C2B0
 * Original: 0x0057C2B0 - 0x0057C337 (135 bytes, 50 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C2B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    edx = esi + 0x18;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM16(esi + 0x10) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0057C328; /* je: equal / zero */

loc_0057C2EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C328; /* je: equal / zero */

loc_0057C2F1: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C328; /* je: equal / zero */

loc_0057C2F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0057C30F; /* jne: not equal / not zero */

loc_0057C2FD: ;
    PUSH32(esp, 0x0057C302u); RECOMP_ABI_CALL(0x0057CFB0u, sub_0057CFB0); /* call 0x0057CFB0 */

loc_0057C302: ;
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_0057C30F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057C315u); RECOMP_ABI_CALL(0x0057CF60u, sub_0057CF60); /* call 0x0057CF60 */

loc_0057C315: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ecx;
    eax = 1;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_0057C328: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0057C330u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0057C330: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0057C340
 * Original: 0x0057C340 - 0x0057C35B (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C340: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0057C34Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C348u); } /* indirect call */
    }

loc_0057C34B: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C359; /* je: equal / zero */

loc_0057C353: ;
    MEM16(esi + 0x10) = 0;

loc_0057C359: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057C360
 * Original: 0x0057C360 - 0x0057C3C8 (104 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057C360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057C360: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057C36Fu); RECOMP_ABI_CALL(0x005EE900u, sub_005EE900); /* call 0x005EE900 */

loc_0057C36F: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C39F; /* je: equal / zero */

loc_0057C37C: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    ecx = MEM32(esi + 0x2C);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x40)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057C39Du); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0057C39D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0057C39F: ;
    eax = MEM32(esi + 0x2C);
    fp_push(MEMF(eax + 0x84)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x80)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057C3C6u); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0057C3C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C3D0
 * Original: 0x0057C3D0 - 0x0057C3FD (45 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C3D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C3DF; /* je: equal / zero */

loc_0057C3DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0057C3DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C3DCu); } /* indirect call */
    }

loc_0057C3DF: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0057C3E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C3E4u); } /* indirect call */
    }

loc_0057C3E7: ;
    MEM32(esi + 0x30) = 0;
    MEM16(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057C400
 * Original: 0x0057C400 - 0x0057C439 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C400: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057C415; /* jne: not equal / not zero */

loc_0057C40C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0057C415: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057C433; /* jne: not equal / not zero */

loc_0057C41C: ;
    _fa = (uint32_t)(MEM32(eax + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x88), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C42C; /* je: equal / zero */

loc_0057C424: ;
    _fa = (uint32_t)(MEM32(eax + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057C433; /* jne: not equal / not zero */

loc_0057C42C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0057C433: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C440
 * Original: 0x0057C440 - 0x0057C48F (79 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651B7C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0057C45Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C45E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x651B70);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C474u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C474: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x651B64);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C48Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C48A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C490
 * Original: 0x0057C490 - 0x0057C4AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057C498u); RECOMP_ABI_CALL(0x0057C250u, sub_0057C250); /* call 0x0057C250 */

loc_0057C498: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057C4A8; /* je: equal / zero */

loc_0057C49F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057C4A5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057C4A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057C4A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C4B0
 * Original: 0x0057C4B0 - 0x0057C53C (140 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057C4B8u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0057C4B8: ;
    MEM32(esi) = 0x651B8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = 0x3F99999A;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = 0x42820000;
    MEM32(esi + 0x80) = 0x3F000000;
    MEM32(esi + 0x84) = 0x44160000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057C540
 * Original: 0x0057C540 - 0x0057C54B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C540: ;
    MEM32(ecx) = 0x651B8C;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0057C550
 * Original: 0x0057C550 - 0x0057C556 (6 bytes, 2 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C550(void)
{

loc_0057C550: ;
    eax = 0x651BC0;
    esp += 4; return; /* ret */

}

/**
 * sub_0057C560
 * Original: 0x0057C560 - 0x0057C576 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0057C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0057C560: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C573; /* je: equal / zero */

loc_0057C567: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x2C)));
    eax = eax - MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0057C573: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0057C580
 * Original: 0x0057C580 - 0x0057C5B5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057C580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057C580: ;
    eax = ecx;
    ecx = MEM32(eax + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C5B4; /* je: equal / zero */

loc_0057C589: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C5B4; /* je: equal / zero */

loc_0057C590: ;
    fp_push(MEMF(eax + 0x84)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x80)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0057C5B4u); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0057C5B4: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C5C0
 * Original: 0x0057C5C0 - 0x0057C5FB (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057C5C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057C5C0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x38)); /* fadd dword ptr [ecx + 0x38] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x64)); /* fadd dword ptr [ecx + 0x64] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x68)); /* fadd dword ptr [ecx + 0x68] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C600
 * Original: 0x0057C600 - 0x0057C681 (129 bytes, 47 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D698);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C61Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C61E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D68C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C634u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C634: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x651BE4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C64Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C64A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x651BD8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C663u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C663: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x651BCC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0057C67Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0057C67C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C690
 * Original: 0x0057C690 - 0x0057C695 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C690: ;
    g_seh_ebp = ebp; sub_0057C580(); return; /* tail jmp 0x0057C580 */

}

/**
 * sub_0057C6A0
 * Original: 0x0057C6A0 - 0x0057C704 (100 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C6A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057C6A8u); RECOMP_ABI_CALL(0x0057C4B0u, sub_0057C4B0); /* call 0x0057C4B0 */

loc_0057C6A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x651BF0;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0057C710
 * Original: 0x0057C710 - 0x0057C71B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C710: ;
    MEM32(ecx) = 0x651BF0;
    g_seh_ebp = ebp; sub_0057C540(); return; /* tail jmp 0x0057C540 */

}

/**
 * sub_0057C720
 * Original: 0x0057C720 - 0x0057C770 (80 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C720: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    edx = 0x3F800000;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0057C770
 * Original: 0x0057C770 - 0x0057C79D (45 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C770(void)
{

loc_0057C770: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esi + 0x88);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0057C784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C781u); } /* indirect call */
    }

loc_0057C784: ;
    ecx = MEM32(esi + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0057C790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C78Du); } /* indirect call */
    }

loc_0057C790: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0057C798u); RECOMP_ABI_CALL(0x0057C5C0u, sub_0057C5C0); /* call 0x0057C5C0 */

loc_0057C798: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0057C7A0
 * Original: 0x0057C7A0 - 0x0057C828 (136 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057C7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057C7BE; /* jne: not equal / not zero */

loc_0057C7AD: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057C7BCu); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0057C7BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0057C7BE: ;
    edx = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM16(edx + 0x10)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x10), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0057C81E; /* je: equal / zero */

loc_0057C7C8: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0057C81E; /* jnp: not parity */

loc_0057C7D8: ;
    eax = MEM32(esi + 0x88);
    MEM32(esi + 0x94) = 0;
    fp_push(MEMF(eax + 0x78)); /* fld float */
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edx + 0x14);
    MEM32(esi + 0x9C) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0057C7FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C7FCu); } /* indirect call */
    }

loc_0057C7FF: ;
    ecx = MEM32(esi + 0x8C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0057C80Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0057C807u); } /* indirect call */
    }

loc_0057C80A: ;
    eax = MEM32(esi + 0x88);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0057C81Cu); RECOMP_ABI_CALL(0x0040ADD0u, sub_0040ADD0); /* call 0x0040ADD0 */

loc_0057C81C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0057C81E: ;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0057C826u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0057C826: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C830
 * Original: 0x0057C830 - 0x0057C865 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0057C830: ;
    eax = MEM32(ecx + 0x8C);
    edx = MEM32(ecx + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0057C84A; /* jne: not equal / not zero */

loc_0057C840: ;
    ecx = MEM32(ecx + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0057C849u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0057C849: ;
    esp += 4; return; /* ret */

loc_0057C84A: ;
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = edx;
    MEM32(ecx + 0x90) = 0;
    g_seh_ebp = ebp; sub_0057C7A0(); return; /* tail jmp 0x0057C7A0 */

}

/**
 * sub_0057C870
 * Original: 0x0057C870 - 0x0057C8B6 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0057C870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0057C870: ;
    eax = MEM32(ecx + 0x88);
    fp_push(MEMF(eax + 0x78)); /* fld float */
    edx = MEM32(ecx + 0x70);
    MEMF(ecx + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    edx = MEM32(ecx + 0x8C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    MEM32(ecx + 0x88) = edx;
    MEM32(ecx + 0x8C) = eax;
    MEMF(ecx + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x94)); /* fsub dword ptr [ecx + 0x94] */
    MEMF(ecx + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0057C8C0
 * Original: 0x0057C8C0 - 0x0057C8DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0057C8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0057C8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0057C8C8u); RECOMP_ABI_CALL(0x0057C710u, sub_0057C710); /* call 0x0057C710 */

loc_0057C8C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0057C8D8; /* je: equal / zero */

loc_0057C8CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0057C8D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0057C8D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0057C8D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
