/**
 * Midnight Club II (PC) - Recompiled code chunk 25
 * Functions: 250 (0x005427A0 - 0x0054A9D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005427A0
 * Original: 0x005427A0 - 0x005427BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005427A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005427A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005427A8u); RECOMP_ABI_CALL(0x00542350u, sub_00542350); /* call 0x00542350 */

loc_005427A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005427B8; /* je: equal / zero */

loc_005427AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005427B5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005427B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005427B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005427C0
 * Original: 0x005427C0 - 0x005427D6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005427C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005427C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x18;
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    MEM16(ecx + 6) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_005427E0
 * Original: 0x005427E0 - 0x00542804 (36 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005427E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005427E0: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 4) = LO8(edx);
    MEM8(ecx + 5) = LO8(eax);
    MEM16(ecx + 6) = 0;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00542810
 * Original: 0x00542810 - 0x005428B1 (161 bytes, 52 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00542810(void)
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

loc_00542810: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x2C);
    edx = MEM32(eax + edx * 4 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542827; /* jne: not equal / not zero */

loc_00542822: ;
    eax = MEM32(eax + 0x10);
    goto loc_00542829;

loc_00542827: ;
    eax = edx;

loc_00542829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D674)); /* fmul dword ptr [0x62d674] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005428AD; /* je: equal / zero */

loc_00542844: ;
    eax = ZX16(MEM16(eax));
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    MEMF(esp) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00542868; /* jp: parity */

loc_00542862: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */

loc_00542868: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005428A1; /* jne: not equal / not zero */

loc_0054287A: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542895; /* je: equal / zero */

loc_00542881: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEM16(ecx + 6) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00542895: ;
    fp_pop(); /* fstp st(0) */
    MEM16(ecx + 6) = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_005428A1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEM16(ecx + 6) = 0;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_005428AD: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005428C0
 * Original: 0x005428C0 - 0x005428EB (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005428C0(void)
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

loc_005428C0: ;
    _fa = (uint32_t)(MEM32(0x675030)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x675030), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005428D2; /* jne: not equal / not zero */

loc_005428C9: ;
    MEM32(ecx + 8) = 0x3F000000;
    goto loc_005428D9;

loc_005428D2: ;
    MEM32(ecx + 8) = 0x3F800000;

loc_005428D9: ;
    SET_LO8(eax, MEM8(0x6C38D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005428EA; /* je: equal / zero */

loc_005428E2: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_005428EA: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005428F0
 * Original: 0x005428F0 - 0x00542C00 (784 bytes, 305 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005428F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005428F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x64EC04;
    esi = eax;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0054290D; /* jne: not equal / not zero */

loc_00542908: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054290D: ;
    edi = 0x64EBF8;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542927; /* jne: not equal / not zero */

loc_0054291F: ;
    POP32(esp, edi);
    eax = 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542927: ;
    edi = 0x64EBF0;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542941; /* jne: not equal / not zero */

loc_00542939: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542941: ;
    edi = 0x64EBE8;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0054295B; /* jne: not equal / not zero */

loc_00542953: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054295B: ;
    edi = 0x64EBDC;
    esi = eax;
    ecx = 0xB;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542975; /* jne: not equal / not zero */

loc_0054296D: ;
    POP32(esp, edi);
    eax = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542975: ;
    edi = 0x64EBD0;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0054298F; /* jne: not equal / not zero */

loc_00542987: ;
    POP32(esp, edi);
    eax = 0x19;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054298F: ;
    edi = 0x64EBC4;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005429A9; /* jne: not equal / not zero */

loc_005429A1: ;
    POP32(esp, edi);
    eax = 0x1A;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005429A9: ;
    edi = 0x64EBBC;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005429C3; /* jne: not equal / not zero */

loc_005429BB: ;
    POP32(esp, edi);
    eax = 6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005429C3: ;
    edi = 0x64EBB4;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005429DD; /* jne: not equal / not zero */

loc_005429D5: ;
    POP32(esp, edi);
    eax = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005429DD: ;
    edi = 0x64EBA8;
    esi = eax;
    ecx = 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005429F7; /* jne: not equal / not zero */

loc_005429EF: ;
    POP32(esp, edi);
    eax = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005429F7: ;
    edi = 0x64EB9C;
    esi = eax;
    ecx = 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A11; /* jne: not equal / not zero */

loc_00542A09: ;
    POP32(esp, edi);
    eax = 9;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A11: ;
    edi = 0x64EB8C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A2B; /* jne: not equal / not zero */

loc_00542A23: ;
    POP32(esp, edi);
    eax = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A2B: ;
    edi = 0x64EB7C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A45; /* jne: not equal / not zero */

loc_00542A3D: ;
    POP32(esp, edi);
    eax = 0xB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A45: ;
    edi = 0x64EB6C;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A5F; /* jne: not equal / not zero */

loc_00542A57: ;
    POP32(esp, edi);
    eax = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A5F: ;
    edi = 0x64EB5C;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A79; /* jne: not equal / not zero */

loc_00542A71: ;
    POP32(esp, edi);
    eax = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A79: ;
    edi = 0x64EB4C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542A93; /* jne: not equal / not zero */

loc_00542A8B: ;
    POP32(esp, edi);
    eax = 0xE;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542A93: ;
    edi = 0x64EB3C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542AAD; /* jne: not equal / not zero */

loc_00542AA5: ;
    POP32(esp, edi);
    eax = 0xF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542AAD: ;
    edi = 0x64EB2C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542AC7; /* jne: not equal / not zero */

loc_00542ABF: ;
    POP32(esp, edi);
    eax = 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542AC7: ;
    edi = 0x64EB1C;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542AE1; /* jne: not equal / not zero */

loc_00542AD9: ;
    POP32(esp, edi);
    eax = 0x11;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542AE1: ;
    edi = 0x64EB10;
    esi = eax;
    ecx = 0xB;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542AFB; /* jne: not equal / not zero */

loc_00542AF3: ;
    POP32(esp, edi);
    eax = 0x12;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542AFB: ;
    edi = 0x64EB04;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B15; /* jne: not equal / not zero */

loc_00542B0D: ;
    POP32(esp, edi);
    eax = 0x13;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B15: ;
    edi = 0x64EAF8;
    esi = eax;
    ecx = 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B2F; /* jne: not equal / not zero */

loc_00542B27: ;
    POP32(esp, edi);
    eax = 0x14;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B2F: ;
    edi = 0x64EAF0;
    esi = eax;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B49; /* jne: not equal / not zero */

loc_00542B41: ;
    POP32(esp, edi);
    eax = 0x15;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B49: ;
    edi = 0x64EAE8;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B63; /* jne: not equal / not zero */

loc_00542B5B: ;
    POP32(esp, edi);
    eax = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B63: ;
    edi = 0x64EAE4;
    esi = eax;
    ecx = 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B7D; /* jne: not equal / not zero */

loc_00542B75: ;
    POP32(esp, edi);
    eax = 0x17;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B7D: ;
    edi = 0x64EAD8;
    esi = eax;
    ecx = 0xB;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542B97; /* jne: not equal / not zero */

loc_00542B8F: ;
    POP32(esp, edi);
    eax = 0x1B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542B97: ;
    edi = 0x64EACC;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542BB1; /* jne: not equal / not zero */

loc_00542BA9: ;
    POP32(esp, edi);
    eax = 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542BB1: ;
    edi = 0x64EAC0;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542BCB; /* jne: not equal / not zero */

loc_00542BC3: ;
    POP32(esp, edi);
    eax = 0x1D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542BCB: ;
    edi = 0x64EAB4;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00542BE5; /* jne: not equal / not zero */

loc_00542BDD: ;
    POP32(esp, edi);
    eax = 0x1E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00542BE5: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x64EAA8;
    ecx = 0xA;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00542C00
 * Original: 0x00542C00 - 0x00542C0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542C00(void)
{

loc_00542C00: ;
    PUSH32(esp, 0x00542C05u); RECOMP_ABI_CALL(0x005428C0u, sub_005428C0); /* call 0x005428C0 */

loc_00542C05: ;
    PUSH32(esp, 0x00542C0Au); RECOMP_ABI_CALL(0x005427C0u, sub_005427C0); /* call 0x005427C0 */

loc_00542C0A: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00542C10
 * Original: 0x00542C10 - 0x00542C5E (78 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542C10(void)
{

loc_00542C10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x68) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00542C60
 * Original: 0x00542C60 - 0x00542C78 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00542C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x64EC18;
    PUSH32(esp, 0x00542C70u); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_00542C70: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0058FE10(); return; /* tail jmp 0x0058FE10 */

}

/**
 * sub_00542C80
 * Original: 0x00542C80 - 0x00542C86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542C80(void)
{

loc_00542C80: ;
    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00542C90
 * Original: 0x00542C90 - 0x00542C97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00542C90: ;
    fp_push(MEMF(0x63DF84)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00542CA0
 * Original: 0x00542CA0 - 0x00542CB9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542CA0(void)
{

loc_00542CA0: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x118);
    eax = MEM32(edx + 0x2C);
    edx = MEM32(eax + 0x90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00542CB8u); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_00542CB8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00542CC0
 * Original: 0x00542CC0 - 0x00542CDA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542CC0: ;
    SET_LO16(eax, MEM16(ecx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542CD9; /* je: equal / zero */

loc_00542CCA: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00542CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00542CD6u); } /* indirect call */
    }

loc_00542CD9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00542CE0
 * Original: 0x00542CE0 - 0x00542D17 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542CE0: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x174);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x3C) = eax;
    SET_LO16(eax, MEM16(ecx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542D16; /* je: equal / zero */

loc_00542D07: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00542D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00542D13u); } /* indirect call */
    }

loc_00542D16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00542D20
 * Original: 0x00542D20 - 0x00542D61 (65 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542D20(void)
{

loc_00542D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x118);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(edx + 0x90);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00542D3Du); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_00542D3D: ;
    PUSH32(esp, 0x3F7D70A4);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00542D4Au); RECOMP_ABI_CALL(0x00607250u, sub_00607250); /* call 0x00607250 */

loc_00542D4A: ;
    eax = ZX16(MEM16(esi + 0x40));
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00542D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00542D5Au); } /* indirect call */
    }

loc_00542D5D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00542D70
 * Original: 0x00542D70 - 0x00542D75 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00542D70: ;
    g_seh_ebp = ebp; sub_00542D20(); return; /* tail jmp 0x00542D20 */

}

/**
 * sub_00542D80
 * Original: 0x00542D80 - 0x00542E7D (253 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00542D80: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00542E75; /* jne: not equal / not zero */

loc_00542D92: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x118);
    edx = MEM32(ecx + 0x2C);
    edi = MEM32(edx + 0x94);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542E68; /* je: equal / zero */

loc_00542DAC: ;
    ecx = MEM32(0x6C8EB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00542DB8u); RECOMP_ABI_CALL(0x0057E1D0u, sub_0057E1D0); /* call 0x0057E1D0 */

loc_00542DB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00542E53; /* je: equal / zero */

loc_00542DC3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x50);
    eax = ebx + 0x150;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00542DD7u); RECOMP_ABI_CALL(0x0040AD90u, sub_0040AD90); /* call 0x0040AD90 */

loc_00542DD7: ;
    ecx = MEM32(edi + 0x44);
    edx = MEM32(edi + 0x48);
    eax = MEM32(edi + 0x4C);
    edi = MEM32(edi + 0x50);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebx + 0x13C);
    ecx = edi + edi * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, 0x00542E07u); RECOMP_ABI_CALL(0x00491DD0u, sub_00491DD0); /* call 0x00491DD0 */

loc_00542E07: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00542E13u); RECOMP_ABI_CALL(0x0040AE20u, sub_0040AE20); /* call 0x0040AE20 */

loc_00542E13: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(eax + 0xCC);
    MEM8(ecx + 0x1EC) = 0;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x130;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00542E38u); RECOMP_ABI_CALL(0x0057E830u, sub_0057E830); /* call 0x0057E830 */

loc_00542E38: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(eax + 0xD0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00542E4Au); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_00542E4A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00542E53: ;
    PUSH32(esp, 0x64EC7C);
    PUSH32(esp, 0x00542E5Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00542E5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00542E68: ;
    PUSH32(esp, 0x64EC44);
    PUSH32(esp, 0x00542E72u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00542E72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00542E75: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00542E80
 * Original: 0x00542E80 - 0x0054302B (427 bytes, 141 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00542E80(void)
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

loc_00542E80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00542EB4; /* jne: not equal / not zero */

loc_00542E91: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    ecx = eax + 0x10;
    PUSH32(esp, 0x00542EA1u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00542EA1: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00542EB4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542F2C; /* je: equal / zero */

loc_00542EB9: ;
    SET_LO8(ecx, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542F09; /* je: equal / zero */

loc_00542EC0: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00542EFF; /* je: equal / zero */

loc_00542EC7: ;
    fp_push(MEMF(eax + 0xE0)); /* fld float */
    edx = esp + 4;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC4)); /* fmul dword ptr [eax + 0xc4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC8)); /* fmul dword ptr [eax + 0xc8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xCC)); /* fmul dword ptr [eax + 0xcc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xCC);
    PUSH32(esp, 0x00542EFFu); RECOMP_ABI_CALL(0x00595950u, sub_00595950); /* call 0x00595950 */

loc_00542EFF: ;
    eax = MEM32(esi + 0x50);
    MEM32(eax + 0x30) = 7;

loc_00542F09: ;
    ecx = MEM32(0x6796C0);
    MEM32(esi + 0x5C) = ecx;
    edx = MEM32(0x6796C4);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(0x6796C8);
    MEM32(esi + 0x64) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00542F2C: ;
    ecx = MEM32(esp + 0x18);
    edx = ZX16(MEM16(ecx + 8));
    eax = MEM32(0x6C8EB8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00543022; /* jne: not equal / not zero */

loc_00542F46: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x38);
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    edx = ecx + 0x38;
    MEM32(esp + 4) = eax;
    eax = MEM32(edx + 4);
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(ecx);
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00542FF8; /* jle: less or equal (signed <=) */

loc_00542F71: ;
    eax = ecx + 0xB0;
    ecx = MEM32(ecx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ecx + 1;
    edi = edi;

loc_00542F80: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -116)); /* fadd dword ptr [eax - 0x74] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -112)); /* fadd dword ptr [eax - 0x70] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    if ((_fa != 0)) goto loc_00542F80; /* jne: not equal / not zero */

loc_00542F97: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00542FF8; /* jle: less or equal (signed <=) */

loc_00542F9D: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x638140)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x638140] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00542FD0; /* jne: not equal / not zero */

loc_00542FBC: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    goto loc_00542FF8;

loc_00542FD0: ;
    ecx = MEM32(edx);
    fp_pop(); /* fstp st(0) */
    eax = MEM32(edx + 4);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(edx + 8);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00542FF8: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D0F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d0f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543022; /* jne: not equal / not zero */

loc_00543017: ;
    ecx = MEM32(esi + 0x50);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00543022u); RECOMP_ABI_CALL(0x005453E0u, sub_005453E0); /* call 0x005453E0 */

loc_00543022: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543030
 * Original: 0x00543030 - 0x0054305A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00543030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00543038u); RECOMP_ABI_CALL(0x005913B0u, sub_005913B0); /* call 0x005913B0 */

loc_00543038: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    MEM8(esi + 0x54) = LO8(eax);
    MEM32(esi + 0x58) = eax;
    MEM32(esi) = 0x64EC18;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00543060
 * Original: 0x00543060 - 0x0054307E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00543060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00543068u); RECOMP_ABI_CALL(0x00542C60u, sub_00542C60); /* call 0x00542C60 */

loc_00543068: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00543078; /* je: equal / zero */

loc_0054306F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00543075u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00543075: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00543078: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00543080
 * Original: 0x00543080 - 0x005430E2 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00543080: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0x3F800000;
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x005430BDu); RECOMP_ABI_CALL(0x00542CE0u, sub_00542CE0); /* call 0x00542CE0 */

loc_005430BD: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005430D2; /* je: equal / zero */

loc_005430C2: ;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x005430CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005430CCu); } /* indirect call */
    }

loc_005430CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005430D2: ;
    PUSH32(esp, 0x64ECB4);
    PUSH32(esp, 0x005430DCu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005430DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005430F0
 * Original: 0x005430F0 - 0x00543136 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005430F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005430F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00543134; /* je: equal / zero */

loc_005430FA: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00543122; /* je: equal / zero */

loc_00543101: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00543111u); RECOMP_ABI_CALL(0x0057E4B0u, sub_0057E4B0); /* call 0x0057E4B0 */

loc_00543111: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0054311Bu); RECOMP_ABI_CALL(0x0057E460u, sub_0057E460); /* call 0x0057E460 */

loc_0054311B: ;
    MEM32(esi + 0x58) = 0;

loc_00543122: ;
    ecx = MEM32(0x6C8EB8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00543130u); RECOMP_ABI_CALL(0x00542D20u, sub_00542D20); /* call 0x00542D20 */

loc_00543130: ;
    MEM8(esi + 0x54) = 0;

loc_00543134: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00543140
 * Original: 0x00543140 - 0x00543360 (544 bytes, 175 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543140(void)
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

loc_00543140: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054335B; /* je: equal / zero */

loc_00543151: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054317A; /* jne: not equal / not zero */

loc_00543159: ;
    ecx = edi;
    PUSH32(esp, 0x00543160u); RECOMP_ABI_CALL(0x005430F0u, sub_005430F0); /* call 0x005430F0 */

loc_00543160: ;
    edx = MEM32(edi + 0x50);
    MEM32(edx + 0x30) = 8;
    ecx = MEM32(edi + 0x50);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00543175u); RECOMP_ABI_CALL(0x00545C20u, sub_00545C20); /* call 0x00545C20 */

loc_00543175: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054317A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xD0);
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00543196u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00543193u); } /* indirect call */
    }

loc_00543196: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x0054319Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00543199u); } /* indirect call */
    }

loc_0054319C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x005431A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005431A0u); } /* indirect call */
    }

loc_005431A3: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6306E8)); /* fmul dword ptr [0x6306e8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x005431E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005431E2u); } /* indirect call */
    }

loc_005431E5: ;
    edx = MEM32(edi + 0x58);
    ebx = MEM32(edx + 0xCC);
    eax = MEM32(esi);
    ebp = MEM32(ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x005431F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005431F4u); } /* indirect call */
    }

loc_005431F7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005431FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005431FCu); } /* indirect call */
    }

loc_005431FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00543207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00543204u); } /* indirect call */
    }

loc_00543207: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00543212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054320Fu); } /* indirect call */
    }

loc_00543212: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x0054321Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00543218u); } /* indirect call */
    }

loc_0054321B: ;
    eax = MEM32(edi + 0x58);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0054322Eu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_0054322E: ;
    edx = MEM32(0x6797CC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    eax = edi + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00543247u); RECOMP_ABI_CALL(0x00609900u, sub_00609900); /* call 0x00609900 */

loc_00543247: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00543250u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00543250: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    ecx = esp + 0x28;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0054329Bu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0054329B: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = esp + 0x40;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005432E6u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005432E6: ;
    edx = MEM32(edi + 0x58);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x18);
    PUSH32(esp, 0x005432F6u); RECOMP_ABI_CALL(0x004685F0u, sub_004685F0); /* call 0x004685F0 */

loc_005432F6: ;
    ecx = MEM32(edi + 0x50);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00543308u); RECOMP_ABI_CALL(0x00542C10u, sub_00542C10); /* call 0x00542C10 */

loc_00543308: ;
    esi = MEM32(edi + 0x50);
    ebp = MEM32(esi + 0x118);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x110;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    ebx = esi + 0x20;
    PUSH32(esp, 0x00543321u); RECOMP_ABI_CALL(0x00541C10u, sub_00541C10); /* call 0x00541C10 */

loc_00543321: ;
    ecx = MEM32(ebp + 0x2C);
    eax = MEM32(ecx + eax * 4 + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00543331; /* jne: not equal / not zero */

loc_0054332C: ;
    ebp = MEM32(ecx + 0x10);
    goto loc_00543333;

loc_00543331: ;
    ebp = eax;

loc_00543333: ;
    ecx = esi;
    PUSH32(esp, 0x0054333Au); RECOMP_ABI_CALL(0x00541C20u, sub_00541C20); /* call 0x00541C20 */

loc_0054333A: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x00543348u); RECOMP_ABI_CALL(0x005DDE10u, sub_005DDE10); /* call 0x005DDE10 */

loc_00543348: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0054334Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054334Cu); } /* indirect call */
    }

loc_0054334F: ;
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00543358u); RECOMP_ABI_CALL(0x0057E550u, sub_0057E550); /* call 0x0057E550 */

loc_00543358: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0054335B: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543360
 * Original: 0x00543360 - 0x005433DB (123 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00543360: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005433D5; /* jne: not equal / not zero */

loc_0054336A: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00543383; /* jne: not equal / not zero */

loc_00543373: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00543383: ;
    ecx = esi;
    PUSH32(esp, 0x0054338Au); RECOMP_ABI_CALL(0x00542D80u, sub_00542D80); /* call 0x00542D80 */

loc_0054338A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005433BD; /* je: equal / zero */

loc_0054338E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = 4;
    edx = MEM32(esi + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C9060) = edx;
    eax = 1;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esi + 0x50);
    MEM8(esi + 0x54) = LO8(eax);
    MEM32(ecx + 0x30) = 7;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005433BD: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM32(edx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_005433D5; /* je: equal / zero */

loc_005433CF: ;
    MEM32(eax) = 0;

loc_005433D5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005433E0
 * Original: 0x005433E0 - 0x00543462 (130 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005433E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005433E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x84;
    PUSH32(esp, 0x005433EEu); RECOMP_ABI_CALL(0x00546BF0u, sub_00546BF0); /* call 0x00546BF0 */

loc_005433EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM16(esi + 0xC) = LO16(eax);
    MEM16(esi + 0xE) = LO16(eax);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x18) = LO16(eax);
    MEM16(esi + 0x1A) = LO16(eax);
    ecx = 0x3F800000;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x78) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00543470
 * Original: 0x00543470 - 0x0054347B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543470: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x84;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00546C10(); return; /* tail jmp 0x00546C10 */

}

/**
 * sub_00543480
 * Original: 0x00543480 - 0x0054348F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00543480: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xA8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00543490
 * Original: 0x00543490 - 0x005434D3 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543490(void)
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

loc_00543490: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005434C5; /* je: equal / zero */

loc_0054349A: ;
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 6) = MEM16(eax + 6) + 0xFFFFFFCEu;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005434C5; /* jp: parity */

loc_005434BE: ;
    eax = MEM32(ecx + 0x10);
    MEM16(eax + 6) = LO16(edx);

loc_005434C5: ;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x10) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00543480(); return; /* tail jmp 0x00543480 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005434E0
 * Original: 0x005434E0 - 0x00543507 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005434E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005434E0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00543506; /* je: equal / zero */

loc_005434E7: ;
    eax = ZX16(MEM16(eax));
    edx = MEM32(0x69C7D0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edx = MEM32(edx + 0x34);
    _fa = (uint32_t)(MEM8(eax + edx + 0x1B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edx + 0x1B), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543506; /* jne: not equal / not zero */

loc_005434FD: ;
    eax = MEM32(ecx);
    MEM32(eax + 0x30) = 2;

loc_00543506: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00543510
 * Original: 0x00543510 - 0x0054364E (318 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543510(void)
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

loc_00543510: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    fp_push(MEMF(edi + 0x60)); /* fld float */
    eax = MEM32(esi + 0x15C);
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(esi + 0x160);
    edx = MEM32(esi + 0x164);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x16C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esi + 0x170);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x174);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x178);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x17C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi + 0x68);
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 8;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00543594u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00543594: ;
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_push(MEMF(0x6796C4)); /* fld float */
    edx = MEM32(edi + 0x60);
    fp_push(MEMF(edi + 0x6C)); /* fld float */
    eax = MEM32(edi + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x54)); /* fadd dword ptr [edi + 0x54] */
    ecx = MEM32(0x6796C8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(edi + 0x58)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x70)); /* fadd dword ptr [edi + 0x70] */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x74)); /* fadd dword ptr [edi + 0x74] */
    MEM32(esi + 0x150) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x154) = edx;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x158) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(esp + 0x28);
    MEMF(esi + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x164) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEMF(esi + 0x160) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x168) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esi + 0x170) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esi + 0x16C) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x174) = ecx;
    MEM32(esi + 0x178) = edx;
    MEM32(esi + 0x17C) = eax;
    POP32(esp, esi);
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
 * sub_00543650
 * Original: 0x00543650 - 0x00543655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543650: ;
    g_seh_ebp = ebp; sub_00543480(); return; /* tail jmp 0x00543480 */

}

/**
 * sub_00543660
 * Original: 0x00543660 - 0x00543751 (241 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543660(void)
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

loc_00543660: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    eax = MEM32(0x6796C0);
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    edx = MEM32(0x6796C4);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    eax = MEM32(0x6796C8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x6C)); /* fadd dword ptr [ecx + 0x6c] */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x68);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x70)); /* fadd dword ptr [ecx + 0x70] */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x60);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x74)); /* fadd dword ptr [ecx + 0x74] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = esi;
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(eax + 0x2C) = esi;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0054374A; /* jne: not equal / not zero */

loc_00543716: ;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(ecx + 0x80) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00543744; /* jp: parity */

loc_00543735: ;
    MEM32(ecx + 0x80) = edx;
    eax = 1;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00543744: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054374A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00543760
 * Original: 0x00543760 - 0x00543926 (454 bytes, 137 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00543760: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xC), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00543785; /* jne: not equal / not zero */

loc_00543778: ;
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebx + 0x18) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 2));
    goto loc_00543790;

loc_00543785: ;
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(ebx + 0x18) = LO16(ecx);
    SET_LO16(edx, MEM16(eax));

loc_00543790: ;
    eax = MEM32(esp + 0x64);
    MEM16(ebx + 0x1A) = LO16(edx);
    ecx = ZX16(MEM16(eax + 0x10));
    PUSH32(esp, ecx);
    ecx = MEM32(0x69C7D0);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x005437B0u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_005437B0: ;
    edx = eax;
    eax = ZX8(MEM8(edx + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00543822; /* jle: less or equal (signed <=) */

loc_005437BE: ;
    SET_LO16(esi, MEM16(ebx + 0x1A));
    SET_LO16(ecx, MEM16(ebx + 0xC));
    edx = MEM32(edx + 0x34);
    MEM16(esp + 0x18) = LO16(esi);
    esi = MEM32(0x69C7D0);
    edi = MEM32(esi + 0x3C);
    ebp = eax;
    /* nop */

loc_005437E0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    eax = ZX16(MEM16(edx));
    eax = eax + eax * 4;
    eax = edi + eax * 4;
    if (CMP_NE(_fa, _fb)) goto loc_005437F3; /* jne: not equal / not zero */

loc_005437EE: ;
    SET_LO16(esi, MEM16(eax));
    goto loc_005437F7;

loc_005437F3: ;
    SET_LO16(esi, MEM16(eax + 2));

loc_005437F7: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(esp + 0x18) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00543814; /* jne: not equal / not zero */

loc_005437FE: ;
    _fa = (uint32_t)(MEM8(eax + 0x12)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x12), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00543814; /* je: equal / zero */

loc_00543804: ;
    esi = MEM32(esp + 0x10);
    ebx = ZX16(LO16(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + ebx * 4 + 0x20) = eax;
    MEM32(esp + 0x10) = esi;

loc_00543814: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005437E0; /* jne: not equal / not zero */

loc_0054381A: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);

loc_00543822: ;
    SET_LO8(eax, MEM8(edx + 7));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_005438CC; /* jbe: below or equal (unsigned <=) */

loc_00543833: ;
    goto loc_00543840;

loc_00543835: ;
    edx = MEM32(esp + 0x14);
    /* nop */

loc_00543840: ;
    ecx = MEM32(edx + 0x38);
    edx = ZX16(MEM16(ecx + edi * 2));
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00543853u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00543853: ;
    esi = ZX8(MEM8(eax + 8));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005438B7; /* jle: less or equal (signed <=) */

loc_0054385B: ;
    ecx = MEM32(0x69C7D0);
    edi = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 0x34);
    ebp = esi;
    /* nop */

loc_00543870: ;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xC), 0 (16-bit) */
    eax = ZX16(MEM16(edx));
    if (CMP_NE(_fa, _fb)) goto loc_00543886; /* jne: not equal / not zero */

loc_0054387A: ;
    eax = eax + eax * 4;
    SET_LO16(esi, MEM16(edi + eax * 4));
    eax = edi + eax * 4;
    goto loc_00543891;

loc_00543886: ;
    ecx = eax + eax * 4;
    SET_LO16(esi, MEM16(edi + ecx * 4 + 2));
    eax = edi + ecx * 4;

loc_00543891: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0x1A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebx + 0x1A) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005438AD; /* jne: not equal / not zero */

loc_00543897: ;
    _fa = (uint32_t)(MEM8(eax + 0x12)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x12), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005438AD; /* je: equal / zero */

loc_0054389D: ;
    esi = MEM32(esp + 0x10);
    ecx = ZX16(LO16(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + ecx * 4 + 0x20) = eax;
    MEM32(esp + 0x10) = esi;

loc_005438AD: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00543870; /* jne: not equal / not zero */

loc_005438B3: ;
    edi = MEM32(esp + 0x18);

loc_005438B7: ;
    edx = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edx + 7));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00543835; /* jl: less (signed <) */

loc_005438CC: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_005438E4; /* jae: above or equal (unsigned >=) */

loc_005438DA: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_005438E4: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005438F4; /* jae: above or equal (unsigned >=) */

loc_005438EA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_005438F4: ;
    edx = MEM32(0x67967C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x67967C) = edx;
    ecx = ZX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + edx * 4 + 0x10);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00543930
 * Original: 0x00543930 - 0x00543B13 (483 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543930(void)
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

loc_00543930: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x69C7D0);
    edx = ZX16(MEM16(ecx + 0x18));
    PUSH32(esp, ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    eax = ZX16(MEM16(ecx + 0x1A));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 0x10);
    esi = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, edi);
    edi = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    esi = ecx + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    ebx = MEM32(edi + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esi + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(esi + 8) = edi;
    esi = ecx + 0x2C;
    edi = edx + 0xC;
    MEM32(esp + 0x14) = edi;
    ebp = MEM32(edi);
    ebx = esi;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0 (16-bit) */
    edi = MEM32(ecx + 0x1C);
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    edi = MEM32(ecx + 0x1C);
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00543A41; /* je: equal / zero */

loc_005439FF: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00543A41: ;
    fp_push(MEMF(edx)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    POP32(esp, esi);
    fp_push(MEMF(eax)); /* fld float */
    POP32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    POP32(esp, ebx);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00543B09; /* jp: parity */

loc_00543AFC: ;
    eax = 1;
    MEM16(ecx + 0xE) = LO16(eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00543B09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0xE) = LO16(eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543B20
 * Original: 0x00543B20 - 0x00543BC5 (165 bytes, 46 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00543B20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00543B20: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3C)); /* fmul dword ptr [ecx + 0x3c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x30)); /* fadd dword ptr [ecx + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x646E10)); /* fmul dword ptr [0x646e10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    MEM32(eax + 4) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x646E10)); /* fmul dword ptr [0x646e10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543BD0
 * Original: 0x00543BD0 - 0x00543C53 (131 bytes, 37 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00543BD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00543BD0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x646E10)); /* fmul dword ptr [0x646e10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x646E10)); /* fmul dword ptr [0x646e10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543C60
 * Original: 0x00543C60 - 0x00543DDF (383 bytes, 140 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543C60(void)
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

loc_00543C60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x20;
    eax = ebx;
    edi = MEM32(eax);
    edx = esi;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x24);
    ebp = MEM32(edx);
    eax = ecx + 0x2C;
    edi = eax;
    MEM32(edi) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(edi + 4) = ebp;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    fp_push(MEMF(esi)); /* fld float */
    edx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    edi = MEM32(esp + 0x2C);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 8)); /* fsub dword ptr [edx + 8] */
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
    MEMF(ecx + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    edi = MEM32(edi + 8);
    MEM32(esp + 0x18) = edi;
    edi = MEM32(ecx + 0x1C);
    MEM32(esp + 0x20) = edi;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    POP32(esp, edi);
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x34)); /* fadd dword ptr [ecx + 0x34] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(esi)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    POP32(esp, ebp);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebx + 4)); /* fld float */
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 4)); /* fsub dword ptr [edx + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x636EB0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x636eb0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00543DD3; /* jp: parity */

loc_00543DC4: ;
    eax = 1;
    MEM16(ecx + 0xE) = LO16(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00543DD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0xE) = LO16(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00543DE0
 * Original: 0x00543DE0 - 0x00543E61 (129 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543DE0(void)
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

loc_00543DE0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    eax = MEM32(ecx + 0x60);
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    edx = MEM32(ecx + 0x68);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x70)); /* fadd dword ptr [ecx + 0x70] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x74)); /* fadd dword ptr [ecx + 0x74] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = 0x3F800000;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
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
 * sub_00543E70
 * Original: 0x00543E70 - 0x00544062 (498 bytes, 163 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00543E70(void)
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

loc_00543E70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00543E83u); RECOMP_ABI_CALL(0x00541850u, sub_00541850); /* call 0x00541850 */

loc_00543E83: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00543FAF; /* je: equal / zero */

loc_00543E8D: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x24)); /* fsub dword ptr [eax + 0x24] */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x2C)); /* fsub dword ptr [eax + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543F74; /* jne: not equal / not zero */

loc_00543EDF: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    if (TEST_Z(_fa, _fb)) goto loc_00543F00; /* je: equal / zero */

loc_00543EF6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x64ECE4)); /* fld float */
    goto loc_00543F1A;

loc_00543F00: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543F1A; /* jne: not equal / not zero */

loc_00543F05: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64ECE8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x64ece8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543F1A; /* jne: not equal / not zero */

loc_00543F12: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x64ECE8)); /* fld float */

loc_00543F1A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543F3A; /* jne: not equal / not zero */

loc_00543F29: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00543F51; /* jnp: not parity */

loc_00543F38: ;
    goto loc_00543F49;

loc_00543F3A: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00543F51; /* je: equal / zero */

loc_00543F49: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00543F51: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543F66; /* jne: not equal / not zero */

loc_00543F60: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    goto loc_00543F6A;

loc_00543F66: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_00543F6A: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00543F74: ;
    fp_pop(); /* fstp st(0) */
    ecx = esi + 8;
    fp_push(MEMD(0x6443A8)); /* fld double */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00544006; /* jp: parity */

loc_00543F94: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00543FC9; /* jp: parity */

loc_00543FA3: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = 0;
    goto loc_00543FE8;

loc_00543FAF: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00543FC9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64ECEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x64ecec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00543FE4; /* jne: not equal / not zero */

loc_00543FD6: ;
    edx = MEM32(0x64ECEC);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = edx;
    goto loc_00543FE8;

loc_00543FE4: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00543FE8: ;
    eax = MEM32(0x6797CC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00543FFEu); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_00543FFE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00544006: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00544025; /* jp: parity */

loc_00544019: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = 0;
    goto loc_00544043;

loc_00544025: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64ECEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x64ecec] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0054403F; /* jne: not equal / not zero */

loc_00544032: ;
    eax = MEM32(0x64ECEC);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = eax;
    goto loc_00544043;

loc_0054403F: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00544043: ;
    edx = MEM32(0x6797CC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054405Au); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_0054405A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544070
 * Original: 0x00544070 - 0x00544155 (229 bytes, 81 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00544070(void)
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

loc_00544070: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 0x18));
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x50)); /* fsub dword ptr [esi + 0x50] */
    SET_LO16(ecx, MEM16(esi + 0x1A));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(edx) (16-bit) */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(esi + 0x1A) = LO16(eax);
    eax = MEM32(esi + 0x10);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM16(esi + 0x18) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM16(esi + 0xC) = LO16(edx);
    PUSH32(esp, 0x005440A7u); RECOMP_ABI_CALL(0x00543760u, sub_00543760); /* call 0x00543760 */

loc_005440A7: ;
    ecx = esi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x005440B1u); RECOMP_ABI_CALL(0x00543930u, sub_00543930); /* call 0x00543930 */

loc_005440B1: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = MEM32(esi + 0x50);
    fp_top() = -fp_top(); /* fchs */
    edx = esi + 0x60;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005440CCu); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_005440CC: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00544101; /* jnp: not parity */

loc_005440F7: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00544109;

loc_00544101: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00544109: ;
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    ecx = esi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEM32(esi + 0x70) = 0;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00543DE0(); return; /* tail jmp 0x00543DE0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544160
 * Original: 0x00544160 - 0x0054432E (462 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544160(void)
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

loc_00544160: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0054417C; /* jp: parity */

loc_00544177: ;
    PUSH32(esp, 0x0054417Cu); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_0054417C: ;
    edi = MEM32(esp + 0x6C);
    fp_push(MEMF(edi)); /* fld float */
    MEM32(esp + 0x44) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736D4)); /* fsub dword ptr [0x6736d4] */
    MEM32(esp + 0x20) = 0;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736D8)); /* fsub dword ptr [0x6736d8] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736DC)); /* fsub dword ptr [0x6736dc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6736D4)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEM32(esp + 0x38) = ecx;
    fp_push(MEMF(0x6736D8)); /* fld float */
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(0x6736DC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00544225; /* je: equal / zero */

loc_005441FA: ;
    PUSH32(esp, 0x40000000);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xA8);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00544215u); RECOMP_ABI_CALL(0x005D1A80u, sub_005D1A80); /* call 0x005D1A80 */

loc_00544215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00544225; /* jne: not equal / not zero */

loc_00544219: ;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;

loc_00544225: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054431D; /* jne: not equal / not zero */

loc_00544233: ;
    edx = MEM32(esi);
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x184;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00544256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00544250u); } /* indirect call */
    }

loc_00544256: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005442A5; /* jne: not equal / not zero */

loc_0054425A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    ecx = MEM32(0x6C8EB8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x184;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edx = esp + 0x44;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x630D68)); /* fsub dword ptr [0x630d68] */
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00544299u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00544293u); } /* indirect call */
    }

loc_00544299: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005442A5; /* jne: not equal / not zero */

loc_0054429D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_005442A5: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054431D; /* je: equal / zero */

loc_005442B3: ;
    eax = ZX8(MEM8(ecx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005442F3; /* jne: not equal / not zero */

loc_005442BC: ;
    edx = ZX16(MEM16(esp + 0x66));
    PUSH32(esp, edx);
    PUSH32(esp, 0x005442C7u); RECOMP_ABI_CALL(0x005A4700u, sub_005A4700); /* call 0x005A4700 */

loc_005442C7: ;
    edx = MEM32(eax + 0x78);
    ecx = MEM32(esp + 0x60);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = ecx;
    edx = MEM32(eax + 0x74);
    MEM32(esi + 0xA8) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_005442F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544302; /* je: equal / zero */

loc_005442F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544302; /* je: equal / zero */

loc_005442FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054431D; /* jne: not equal / not zero */

loc_00544302: ;
    edx = MEM32(ecx + 0x78);
    eax = MEM32(esp + 0x60);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = eax;
    ecx = MEM32(ecx + 0x74);
    MEM32(esi + 0xA8) = ecx;

loc_0054431D: ;
    edx = MEM32(esp + 0x44);
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544330
 * Original: 0x00544330 - 0x00544475 (325 bytes, 118 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544330(void)
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

loc_00544330: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, edi);
    ebp = esi + 0x54;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x6C) = ebx;
    eax = MEM32(0x67967C);
    edi = esi + 0x60;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = eax;
    eax = ZX16(MEM16(esp + 0x14));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x67967E));
    eax = eax + eax * 4;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(ecx)));
    MEM16(esi + 0xC) = LO16(edx);
    ecx = MEM32(0x69C7D0);
    edx = MEM32(ecx + 0x3C);
    eax = edx + eax * 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x005443A9u); RECOMP_ABI_CALL(0x00543760u, sub_00543760); /* call 0x00543760 */

loc_005443A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005443BC; /* jne: not equal / not zero */

loc_005443B0: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_005443BC: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x32) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 6) = MEM16(eax + 6) + 0x32;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x005443CEu); RECOMP_ABI_CALL(0x00543930u, sub_00543930); /* call 0x00543930 */

loc_005443CE: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x005443E1u); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_005443E1: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00544416; /* jnp: not parity */

loc_0054440C: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_0054441E;

loc_00544416: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_0054441E: ;
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    ecx = esi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEM32(esi + 0x70) = ebx;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00544465u); RECOMP_ABI_CALL(0x00543DE0u, sub_00543DE0); /* call 0x00543DE0 */

loc_00544465: ;
    ecx = esi;
    PUSH32(esp, 0x0054446Cu); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_0054446C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544480
 * Original: 0x00544480 - 0x00544836 (950 bytes, 292 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544480(void)
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

loc_00544480: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    ecx = MEM32(eax + 0x150);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    edx = MEM32(eax + 0x154);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x2C);
    eax = MEM32(esi + 0x50);
    MEM32(esp + 0xC) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005446B8; /* jnp: not parity */

loc_00544503: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x78)); /* fmul dword ptr [esi + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0054461C; /* jne: not equal / not zero */

loc_0054452A: ;
    ecx = esi;
    PUSH32(esp, 0x00544531u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00544531: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    eax = MEM32(esi + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    ecx = ZX16(MEM16(eax + 2));
    edx = MEM32(0x69C7D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = MEM32(edx + 0x34);
    ecx = ZX8(MEM8(ecx + edx + 0x1B));
    MEMF(esi + 0x50) = (float)fp_top(); /* fst */
    edx = MEM32(esi + 0x14);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 8);
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 6) = MEM16(eax + 6) + 0xFFFFFFCEu;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005445AC; /* jp: parity */

loc_005445A3: ;
    eax = MEM32(esi + 0x10);
    MEM16(eax + 6) = 0;

loc_005445AC: ;
    eax = MEM32(esi + 0x14);
    MEM32(esi + 0x10) = eax;
    _fb = (uint32_t)(0x32) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 6) = MEM16(eax + 6) + 0x32;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005445C2u); RECOMP_ABI_CALL(0x00543760u, sub_00543760); /* call 0x00543760 */

loc_005445C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005445D6; /* jne: not equal / not zero */

loc_005445C9: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x005445D0u); RECOMP_ABI_CALL(0x005415B0u, sub_005415B0); /* call 0x005415B0 */

loc_005445D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005445D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005445EF; /* je: equal / zero */

loc_005445DA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM16(edx + 8)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 8), 0x32 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005445EF; /* jle: less or equal (signed <=) */

loc_005445E4: ;
    eax = MEM32(esi);
    MEM32(eax + 0x30) = 1;
    goto loc_00544600;

loc_005445EF: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x2C);
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544600; /* je: equal / zero */

loc_005445FD: ;
    MEM32(eax + 0x30) = ecx;

loc_00544600: ;
    ecx = esi;
    PUSH32(esp, 0x00544607u); RECOMP_ABI_CALL(0x00543930u, sub_00543930); /* call 0x00543930 */

loc_00544607: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054461C; /* jne: not equal / not zero */

loc_0054460F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(edx) (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM16(esi + 0xC) = LO16(edx);

loc_0054461C: ;
    eax = MEM32(esi);
    ecx = MEM32(0x69C7D0);
    ecx = MEM32(ecx + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054462Du); RECOMP_ABI_CALL(0x004FB970u, sub_004FB970); /* call 0x004FB970 */

loc_0054462D: ;
    edx = MEM32(esi + 0x10);
    eax = ZX16(MEM16(edx + 0x10));
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00544640u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00544640: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00544657; /* jne: not equal / not zero */

loc_00544646: ;
    ecx = MEM32(esi);
    edx = MEM32(0x69C7D0);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x58);
    PUSH32(esp, 0x00544657u); RECOMP_ABI_CALL(0x004FBA00u, sub_004FBA00); /* call 0x004FBA00 */

loc_00544657: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0054466Du); RECOMP_ABI_CALL(0x00543E70u, sub_00543E70); /* call 0x00543E70 */

loc_0054466D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0x12)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x12), 2 (8-bit) */
    edx = esi + 0x54;
    if (TEST_Z(_fa, _fb)) goto loc_005446A2; /* je: equal / zero */

loc_00544679: ;
    eax = MEM32(esi + 0x50);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00544689u); RECOMP_ABI_CALL(0x00543BD0u, sub_00543BD0); /* call 0x00543BD0 */

loc_00544689: ;
    ecx = ZX16(MEM16(esi + 0x1A));
    edx = MEM32(0x69C7D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = MEM32(edx + 0x34);
    ecx = MEM32(ecx + eax + 4);
    MEM32(esi + 0x58) = ecx;
    goto loc_005446B8;

loc_005446A2: ;
    ecx = MEM32(esi + 0x50);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005446B2u); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_005446B2: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x005446B8u); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_005446B8: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    edi = esi + 0x60;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005446F0; /* jnp: not parity */

loc_005446E6: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_005446F8;

loc_005446F0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_005446F8: ;
    ecx = edi;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00544702u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00544702: ;
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(esi + 0x68);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x6C) = edx;
    MEM32(esi + 0x70) = 0;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEM32(esp + 0x18) = 0;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x68);
    fp_push(MEMF(edi)); /* fld float */
    MEM32(esp + 0x14) = eax;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0054474Fu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0054474F: ;
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_push(MEMF(0x6796C4)); /* fld float */
    eax = MEM32(esi + 0x68);
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(0x6796C8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x54)); /* fadd dword ptr [esi + 0x54] */
    edx = MEM32(edi);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esp + 0x2C);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x34);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ZX16(MEM16(ecx));
    edx = MEM32(0x69C7D0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = MEM32(edx + 0x34);
    SET_LO8(edx, MEM8(eax + edi + 0x1B));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00544830; /* je: equal / zero */

loc_00544801: ;
    SET_LO8(edx, MEM8(eax + 0x1A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00544830; /* jbe: below or equal (unsigned <=) */

loc_00544808: ;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00544830; /* jne: not equal / not zero */

loc_00544818: ;
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0x32 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00544830; /* jle: less or equal (signed <=) */

loc_0054481F: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x2C);
    eax = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544830; /* je: equal / zero */

loc_0054482D: ;
    MEM32(esi + 0x30) = eax;

loc_00544830: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544840
 * Original: 0x00544840 - 0x005449E9 (425 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544840(void)
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

loc_00544840: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x158);
    fp_push(MEMF(eax + 0x150)); /* fld float */
    edx = MEM32(eax + 0x15C);
    fp_push(MEMF(eax + 0x154)); /* fld float */
    fp_push(MEMF(0x6797CC)); /* fld float */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x14);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(eax + 0x18);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x1C);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 0x2C);
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x005448CFu); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005448CF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    edi = esi + 0x54;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x6C) = ebx;
    PUSH32(esp, 0x00544933u); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_00544933: ;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    ecx = MEM32(esi + 0x68);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00544950u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00544950: ;
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_push(MEMF(0x6796C4)); /* fld float */
    eax = MEM32(esi + 0x60);
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esi + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    edx = MEM32(0x6796C8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    esi = MEM32(esi);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 4) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(esp + 0x30);
    MEM32(esi + 8) = ecx;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    MEM32(esi + 0x14) = edx;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x3C);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_005449F0
 * Original: 0x005449F0 - 0x00544C58 (616 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005449F0(void)
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

loc_005449F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    ecx = MEM32(eax + 0x150);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    edx = MEM32(eax + 0x154);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x2C);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00544B3F; /* jnp: not parity */

loc_00544A6F: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x78)); /* fmul dword ptr [esi + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00544B0C; /* jne: not equal / not zero */

loc_00544A92: ;
    ecx = esi;
    PUSH32(esp, 0x00544A99u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00544A99: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544AB9; /* je: equal / zero */

loc_00544A9E: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544AB9; /* je: equal / zero */

loc_00544AA3: ;
    PUSH32(esp, 0x00544AA8u); RECOMP_ABI_CALL(0x00543930u, sub_00543930); /* call 0x00543930 */

loc_00544AA8: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = 2;
    goto loc_00544B07;

loc_00544AB9: ;
    edi = esi + 0x84;
    ecx = edi;
    PUSH32(esp, 0x00544AC6u); RECOMP_ABI_CALL(0x00546CA0u, sub_00546CA0); /* call 0x00546CA0 */

loc_00544AC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00544AF7; /* je: equal / zero */

loc_00544ACA: ;
    ecx = edi;
    PUSH32(esp, 0x00544AD1u); RECOMP_ABI_CALL(0x00546D70u, sub_00546D70); /* call 0x00546D70 */

loc_00544AD1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00544AD9u); RECOMP_ABI_CALL(0x00546D60u, sub_00546D60); /* call 0x00546D60 */

loc_00544AD9: ;
    PUSH32(esp, eax);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00544AE9u); RECOMP_ABI_CALL(0x00543C60u, sub_00543C60); /* call 0x00543C60 */

loc_00544AE9: ;
    edx = MEM32(esi);
    MEM32(esi + 0x50) = ebx;
    MEM32(edx + 0x30) = 0xB;
    goto loc_00544B07;

loc_00544AF7: ;
    eax = MEM32(esi);
    MEM32(esi + 0x50) = 0x3F800000;
    MEM32(eax + 0x30) = 0xA;

loc_00544B07: ;
    ecx = MEM32(esi);
    MEM8(ecx + 0x50) = LO8(ebx);

loc_00544B0C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x50);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00544B21u); RECOMP_ABI_CALL(0x00543E70u, sub_00543E70); /* call 0x00543E70 */

loc_00544B21: ;
    ecx = MEM32(esi + 0x50);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00544B34u); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_00544B34: ;
    PUSH32(esp, 0x00544B39u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00544B39: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00544B3Fu); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_00544B3F: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    edi = esi + 0x60;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00544B77; /* jnp: not parity */

loc_00544B6D: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00544B7F;

loc_00544B77: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00544B7F: ;
    ecx = edi;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00544B89u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00544B89: ;
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(esi + 0x68);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 8) = ebx;
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x6C) = edx;
    MEM32(esi + 0x70) = ebx;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x6796C4);
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = MEM32(0x6796C0);
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(0x6796C8);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    ecx = MEM32(esi + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEM32(esp + 0x28) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    esi = MEM32(esi);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
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
 * sub_00544C60
 * Original: 0x00544C60 - 0x00544E6C (524 bytes, 169 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544C60(void)
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

loc_00544C60: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    ebx = esi + 0x54;
    PUSH32(esp, edi);
    edi = esi + 0x60;
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi) = eax;
    ebp = esi + 0x84;
    ecx = ebp;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x6C) = eax;
    PUSH32(esp, 0x00544C9Eu); RECOMP_ABI_CALL(0x00546C50u, sub_00546C50); /* call 0x00546C50 */

loc_00544C9E: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00544CAEu); RECOMP_ABI_CALL(0x00546D50u, sub_00546D50); /* call 0x00546D50 */

loc_00544CAE: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = ebp;
    PUSH32(esp, 0x00544CBCu); RECOMP_ABI_CALL(0x00546D00u, sub_00546D00); /* call 0x00546D00 */

loc_00544CBC: ;
    ecx = MEM32(eax);
    edx = ebx;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    ecx = ebp;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00544CD5u); RECOMP_ABI_CALL(0x00546D30u, sub_00546D30); /* call 0x00546D30 */

loc_00544CD5: ;
    edx = MEM32(eax);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = ebp;
    PUSH32(esp, 0x00544CEEu); RECOMP_ABI_CALL(0x00546D40u, sub_00546D40); /* call 0x00546D40 */

loc_00544CEE: ;
    MEMF(esi + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    PUSH32(esp, 0x00544CFBu); RECOMP_ABI_CALL(0x00546D70u, sub_00546D70); /* call 0x00546D70 */

loc_00544CFB: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00544D03u); RECOMP_ABI_CALL(0x00546D60u, sub_00546D60); /* call 0x00546D60 */

loc_00544D03: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00544D0Du); RECOMP_ABI_CALL(0x00543C60u, sub_00543C60); /* call 0x00543C60 */

loc_00544D0D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x50) = ebp;
    PUSH32(esp, 0x00544D18u); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_00544D18: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00544D55; /* jle: less or equal (signed <=) */

loc_00544D22: ;
    edx = MEM32(0x67967C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x48) = eax;
    MEM32(0x67967C) = edx;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */

loc_00544D55: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00544D8A; /* jnp: not parity */

loc_00544D80: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00544D92;

loc_00544D8A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00544D92: ;
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    MEM32(esp + 0x18) = 0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x68);
    fp_push(MEMF(edi)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x14;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00544DC9u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00544DC9: ;
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_push(MEMF(0x6796C4)); /* fld float */
    eax = MEM32(edi);
    fp_push(MEMF(ebx)); /* fld float */
    edx = MEM32(0x6796C8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    ecx = MEM32(esi + 0x68);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(ebx + 4)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x2C);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x34);
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x1C) = ebp;
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(eax + 0x28) = ecx;
    ecx = esi;
    MEM32(eax + 0x2C) = edx;
    PUSH32(esp, 0x00544E60u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00544E60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00544E70
 * Original: 0x00544E70 - 0x0054516B (763 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00544E70(void)
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

loc_00544E70: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    ecx = MEM32(eax + 0x150);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    edx = MEM32(eax + 0x154);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + 0x2C);
    eax = MEM32(esi + 0x50);
    MEM32(esp + 0x14) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00545028; /* jnp: not parity */

loc_00544EF7: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x78)); /* fmul dword ptr [esi + 0x78] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x50)); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00544FF3; /* jne: not equal / not zero */

loc_00544F1E: ;
    ecx = esi;
    PUSH32(esp, 0x00544F25u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00544F25: ;
    edi = esi + 0x84;
    ecx = edi;
    PUSH32(esp, 0x00544F32u); RECOMP_ABI_CALL(0x00546D80u, sub_00546D80); /* call 0x00546D80 */

loc_00544F32: ;
    MEMF(esi + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x00544F3Fu); RECOMP_ABI_CALL(0x00546D90u, sub_00546D90); /* call 0x00546D90 */

loc_00544F3F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00544F4E; /* jne: not equal / not zero */

loc_00544F46: ;
    MEM32(esi + 0x80) = ebp;
    goto loc_00544F66;

loc_00544F4E: ;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00544F66; /* jp: parity */

loc_00544F61: ;
    ebx = 0xB;

loc_00544F66: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = ebx;
    ecx = edi;
    PUSH32(esp, 0x00544F72u); RECOMP_ABI_CALL(0x00546C60u, sub_00546C60); /* call 0x00546C60 */

loc_00544F72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00544F9D; /* jne: not equal / not zero */

loc_00544F76: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545163; /* jne: not equal / not zero */

loc_00544F7F: ;
    PUSH32(esp, 0x64ECF0);
    PUSH32(esp, 0x00544F89u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00544F89: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x30) = 0xA;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00544F9D: ;
    eax = MEM32(esi + 0x1C);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00544FABu); RECOMP_ABI_CALL(0x00546D70u, sub_00546D70); /* call 0x00546D70 */

loc_00544FAB: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00544FB3u); RECOMP_ABI_CALL(0x00546D60u, sub_00546D60); /* call 0x00546D60 */

loc_00544FB3: ;
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00544FC3u); RECOMP_ABI_CALL(0x00543C60u, sub_00543C60); /* call 0x00543C60 */

loc_00544FC3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00544FF0; /* jne: not equal / not zero */

loc_00544FC8: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x14)); /* fdiv dword ptr [esp + 0x14] */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 0x50) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00544FF3; /* jne: not equal / not zero */

loc_00544FF0: ;
    MEM32(esi + 0x50) = ebp;

loc_00544FF3: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00545009u); RECOMP_ABI_CALL(0x00543E70u, sub_00543E70); /* call 0x00543E70 */

loc_00545009: ;
    ecx = MEM32(esi + 0x50);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0054501Cu); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_0054501C: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545028; /* jne: not equal / not zero */

loc_00545022: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00545028u); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_00545028: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    edi = esi + 0x60;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00545060; /* jnp: not parity */

loc_00545056: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00545068;

loc_00545060: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00545068: ;
    ecx = edi;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00545072u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00545072: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x630320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0054508C; /* jp: parity */

loc_00545082: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x630320)); /* fld float */
    goto loc_005450A1;

loc_0054508C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005450A1; /* jne: not equal / not zero */

loc_00545099: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005450A1: ;
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(esi + 0x68);
    MEM32(esi + 0x6C) = edx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x70) = ebp;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x6796C4);
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = MEM32(0x6796C0);
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(0x6796C8);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    ecx = MEM32(esi + 0x68);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    MEM32(esp + 0x34) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    esi = MEM32(esi);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ebp;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = eax;

loc_00545163: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545170
 * Original: 0x00545170 - 0x00545196 (38 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545170(void)
{

loc_00545170: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ecx + 0x60;
    PUSH32(esp, eax);
    edx = ecx + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00545187u); RECOMP_ABI_CALL(0x00543C60u, sub_00543C60); /* call 0x00543C60 */

loc_00545187: ;
    MEM32(ecx + 0x50) = 0;
    PUSH32(esp, 0x00545193u); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_00545193: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005451A0
 * Original: 0x005451A0 - 0x0054538F (495 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005451A0(void)
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

loc_005451A0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x84;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x005451B6u); RECOMP_ABI_CALL(0x00546D90u, sub_00546D90); /* call 0x00546D90 */

loc_005451B6: ;
    ecx = esi;
    edx = eax;
    PUSH32(esp, 0x005451BFu); RECOMP_ABI_CALL(0x00543480u, sub_00543480); /* call 0x00543480 */

loc_005451BF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545214; /* je: equal / zero */

loc_005451C4: ;
    ecx = ebx;
    PUSH32(esp, 0x005451CBu); RECOMP_ABI_CALL(0x00546D80u, sub_00546D80); /* call 0x00546D80 */

loc_005451CB: ;
    MEMF(esi + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x005451D8u); RECOMP_ABI_CALL(0x00546D90u, sub_00546D90); /* call 0x00546D90 */

loc_005451D8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005451EB; /* jne: not equal / not zero */

loc_005451DF: ;
    MEM32(esi + 0x80) = 0;
    goto loc_00545203;

loc_005451EB: ;
    fp_push(MEMF(esi + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00545203; /* jp: parity */

loc_005451FE: ;
    edi = 0xB;

loc_00545203: ;
    eax = MEM32(esi);
    ecx = ebx;
    MEM32(eax + 0x30) = edi;
    PUSH32(esp, 0x0054520Fu); RECOMP_ABI_CALL(0x00546C60u, sub_00546C60); /* call 0x00546C60 */

loc_0054520F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005451C4; /* jne: not equal / not zero */

loc_00545214: ;
    ecx = ebx;
    edi = esi + 0x60;
    ebp = esi + 0x54;
    PUSH32(esp, 0x00545221u); RECOMP_ABI_CALL(0x00546D70u, sub_00546D70); /* call 0x00546D70 */

loc_00545221: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00545229u); RECOMP_ABI_CALL(0x00546D60u, sub_00546D60); /* call 0x00546D60 */

loc_00545229: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00545233u); RECOMP_ABI_CALL(0x00543C60u, sub_00543C60); /* call 0x00543C60 */

loc_00545233: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F800000);
    MEM32(esi + 0x50) = 0x3F800000;
    PUSH32(esp, 0x00545246u); RECOMP_ABI_CALL(0x00543B20u, sub_00543B20); /* call 0x00543B20 */

loc_00545246: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0054524Cu); RECOMP_ABI_CALL(0x00544160u, sub_00544160); /* call 0x00544160 */

loc_0054524C: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00545281; /* jnp: not parity */

loc_00545277: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00545289;

loc_00545281: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00545289: ;
    ecx = edi;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00545293u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00545293: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630320)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x630320] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005452AD; /* jp: parity */

loc_005452A3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x630320)); /* fld float */
    goto loc_005452C2;

loc_005452AD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005452C2; /* jne: not equal / not zero */

loc_005452BA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_005452C2: ;
    fp_push(MEMF(edi)); /* fld float */
    ecx = MEM32(esi + 0x68);
    MEM32(esi + 0x6C) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x70) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x70)); /* fmul dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x74)); /* fmul dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x6796C0);
    fp_push(MEMF(esi + 0x68)); /* fld float */
    ecx = MEM32(0x6796C4);
    fp_push(MEMF(edi)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(0x6796C8);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ebp)); /* fld float */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x6C)); /* fadd dword ptr [esi + 0x6c] */
    edx = MEM32(esi + 0x68);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(ebp + 4)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    esi = MEM32(esi);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00545390
 * Original: 0x00545390 - 0x005453C3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545390: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM8(ecx + 0x30) = LO8(eax);
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005453D0
 * Original: 0x005453D0 - 0x005453DE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005453D0(void)
{

loc_005453D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x005453DBu); RECOMP_ABI_CALL(0x00545390u, sub_00545390); /* call 0x00545390 */

loc_005453DB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005453E0
 * Original: 0x005453E0 - 0x0054542C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005453E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005453E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054542A; /* jne: not equal / not zero */

loc_005453E9: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    ecx = eax + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00545411; /* je: equal / zero */

loc_005453F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00545403u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545403: ;
    eax = MEM32(esi);
    MEM32(eax + 0xE0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00545411: ;
    eax = MEM32(eax + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054542A; /* je: equal / zero */

loc_0054541B: ;
    ecx = MEM32(eax + 0xD0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0054542Au); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_0054542A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00545430
 * Original: 0x00545430 - 0x005454A5 (117 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545430(void)
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

loc_00545430: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ebx = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    edi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x00545452u); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_00545452: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edx + ebx * 8 + -8;
    PUSH32(esp, 0x00545465u); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_00545465: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    POP32(esp, ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005454B0
 * Original: 0x005454B0 - 0x00545575 (197 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005454B0(void)
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

loc_005454B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ZX16(MEM16(edi));
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x28) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0054554F; /* jle: less or equal (signed <=) */

loc_005454CB: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005454DAu); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_005454DA: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edx + esi * 8 + -8;
    PUSH32(esp, 0x005454EDu); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_005454ED: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    POP32(esp, esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D674) / fp_top()); /* fdivr dword ptr [0x62d674] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0054554F: ;
    fp_push(MEMF(0x8600B0)); /* fld float */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8600B4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x8600B8);
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545580
 * Original: 0x00545580 - 0x005455F7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00545580(void)
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

loc_00545580: ;
    eax = MEM32(0x67967C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(0x67967C) = eax;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005455ABu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_005455AB: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0xE0) = 0;
    eax = MEM32(esi);
    edx = eax + 0xB8;
    edi = MEM32(edx);
    ecx = esi + 0x14;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = eax + 0xC4;
    edi = MEM32(ecx);
    edx = esi + 0x20;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    fp_push(MEMF(eax + 0xB4)); /* fld float */
    POP32(esp, edi);
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545600
 * Original: 0x00545600 - 0x0054561D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0054560Du); RECOMP_ABI_CALL(0x005434E0u, sub_005434E0); /* call 0x005434E0 */

loc_0054560D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054561B; /* jle: less or equal (signed <=) */

loc_00545614: ;
    MEM32(esi + 0x10) = 4;

loc_0054561B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00545620
 * Original: 0x00545620 - 0x005456C4 (164 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545620(void)
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

loc_00545620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545636u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545636: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = 0x400F0D84;
    if (CMP_NE(_fa, _fb)) goto loc_00545655; /* jne: not equal / not zero */

loc_00545650: ;
    eax = MEM32(eax + 0x10);
    goto loc_00545657;

loc_00545655: ;
    eax = ecx;

loc_00545657: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545667; /* je: equal / zero */

loc_0054565B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00545663u); RECOMP_ABI_CALL(0x00545430u, sub_00545430); /* call 0x00545430 */

loc_00545663: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00545667: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x118);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054567C; /* jne: not equal / not zero */

loc_00545679: ;
    eax = MEM32(ecx + 0x10);

loc_0054567C: ;
    edx = MEM32(0x67967C);
    ecx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x67967C) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x005456B5u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_005456B5: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xE0) = ecx;
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
 * sub_005456D0
 * Original: 0x005456D0 - 0x00545739 (105 bytes, 35 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005456D0(void)
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

loc_005456D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005456DEu); RECOMP_ABI_CALL(0x00544480u, sub_00544480); /* call 0x00544480 */

loc_005456DE: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005456EBu); RECOMP_ABI_CALL(0x00542CE0u, sub_00542CE0); /* call 0x00542CE0 */

loc_005456EB: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005456F9; /* jle: less or equal (signed <=) */

loc_005456F2: ;
    MEM32(esi + 0x10) = 4;

loc_005456F9: ;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = eax + 0xC4;
    edi = MEM32(edx);
    ecx = esi + 0x20;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    fp_push(MEMF(eax + 0xB4)); /* fld float */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545740
 * Original: 0x00545740 - 0x005457E4 (164 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545740(void)
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

loc_00545740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545756u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545756: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = 0x400F0D84;
    if (CMP_NE(_fa, _fb)) goto loc_00545775; /* jne: not equal / not zero */

loc_00545770: ;
    eax = MEM32(eax + 0x10);
    goto loc_00545777;

loc_00545775: ;
    eax = ecx;

loc_00545777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545787; /* je: equal / zero */

loc_0054577B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00545783u); RECOMP_ABI_CALL(0x00545430u, sub_00545430); /* call 0x00545430 */

loc_00545783: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00545787: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x118);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054579C; /* jne: not equal / not zero */

loc_00545799: ;
    eax = MEM32(ecx + 0x10);

loc_0054579C: ;
    edx = MEM32(0x67967C);
    ecx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x67967C) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x005457D5u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_005457D5: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xE0) = ecx;
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
 * sub_005457F0
 * Original: 0x005457F0 - 0x0054591D (301 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005457F0(void)
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

loc_005457F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(0x67967C) = ecx;
    eax = MEM32(esi);
    edi = MEM32(edx * 4 + 0x64ED34);
    edx = MEM32(eax + 0x118);
    eax = MEM32(edx + 0x2C);
    edx = MEM32(eax + edi * 4 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054583E; /* jne: not equal / not zero */

loc_0054583B: ;
    edx = MEM32(eax + 0x10);

loc_0054583E: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00545849; /* ja: above (unsigned >) */

loc_00545844: ;
    edi = 5;

loc_00545849: ;
    edx = MEM32(eax + edi * 4 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545856; /* jne: not equal / not zero */

loc_00545851: ;
    eax = MEM32(eax + 0x10);
    goto loc_00545858;

loc_00545856: ;
    eax = edx;

loc_00545858: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax));
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, 1);
    MEM32(0x67967C) = ecx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054588Bu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_0054588B: ;
    eax = MEM32(esi);
    MEM32(eax + 0xE0) = 0;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x69585C);
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005458AC; /* je: equal / zero */

loc_005458A9: ;
    PUSH32(esp, eax);
    goto loc_005458B3;

loc_005458AC: ;
    edx = MEM32(0x6C3424);
    PUSH32(esp, edx);

loc_005458B3: ;
    PUSH32(esp, 0x005458B8u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_005458B8: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 4);
    esi = MEM32(esi);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x174)); /* fsub dword ptr [esi + 0x174] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x178)); /* fsub dword ptr [esi + 0x178] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x17C)); /* fsub dword ptr [esi + 0x17c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005458F9u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005458F9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0xC4) = edx;
    MEM32(esi + 0xC8) = 0;
    MEM32(esi + 0xCC) = eax;
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
 * sub_00545920
 * Original: 0x00545920 - 0x005459BD (157 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00545920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0054595F; /* jne: not equal / not zero */

loc_0054592B: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630D68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630d68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_005459A5; /* jne: not equal / not zero */

loc_0054593B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005459A5; /* jne: not equal / not zero */

loc_00545947: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005459A5; /* jne: not equal / not zero */

loc_0054594E: ;
    ecx = eax + 0x64;
    PUSH32(esp, 0x00545956u); RECOMP_ABI_CALL(0x00544070u, sub_00544070); /* call 0x00544070 */

loc_00545956: ;
    MEM32(esi + 0x10) = 2;
    goto loc_005459A5;

loc_0054595F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0054596A; /* jle: less or equal (signed <=) */

loc_00545961: ;
    MEM32(esi + 0x10) = 5;
    goto loc_005459A5;

loc_0054596A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005459A5; /* jne: not equal / not zero */

loc_0054596E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00545990; /* je: equal / zero */

loc_0054597A: ;
    ecx = eax + 0xE8;
    PUSH32(esp, 0x00545985u); RECOMP_ABI_CALL(0x00546CA0u, sub_00546CA0); /* call 0x00546CA0 */

loc_00545985: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA)) >> 32) & 1);
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005459A2;

loc_00545990: ;
    SET_LO8(ecx, MEM8(esi + 0x30));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 4 + 2;

loc_005459A2: ;
    MEM32(esi + 0x10) = eax;

loc_005459A5: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x64)) >> 32) & 1);
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005459AFu); RECOMP_ABI_CALL(0x00543510u, sub_00543510); /* call 0x00543510 */

loc_005459AF: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x184)) >> 32) & 1);
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542CE0(); return; /* tail jmp 0x00542CE0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005459C0
 * Original: 0x005459C0 - 0x00545A72 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005459C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005459C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545A5C; /* je: equal / zero */

loc_005459D0: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545A40; /* je: equal / zero */

loc_005459D6: ;
    eax = MEM32(eax + 0x118);
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005459EB; /* jne: not equal / not zero */

loc_005459E6: ;
    eax = MEM32(eax + 0x10);
    goto loc_005459ED;

loc_005459EB: ;
    eax = ecx;

loc_005459ED: ;
    edx = MEM32(0x67967C);
    ecx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x67967C) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00545A26u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545A26: ;
    eax = MEM32(esi);
    MEM32(eax + 0xE0) = 0;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542CE0(); return; /* tail jmp 0x00542CE0 */

loc_00545A40: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545A64; /* jne: not equal / not zero */

loc_00545A47: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x10) = 6;
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542CE0(); return; /* tail jmp 0x00542CE0 */

loc_00545A5C: ;
    ecx = eax + 0x64;
    PUSH32(esp, 0x00545A64u); RECOMP_ABI_CALL(0x00544840u, sub_00544840); /* call 0x00544840 */

loc_00545A64: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00542CE0(); return; /* tail jmp 0x00542CE0 */

}

/**
 * sub_00545A80
 * Original: 0x00545A80 - 0x00545AAA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545A8Du); RECOMP_ABI_CALL(0x005449F0u, sub_005449F0); /* call 0x005449F0 */

loc_00545A8D: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545A9Au); RECOMP_ABI_CALL(0x00542CE0u, sub_00542CE0); /* call 0x00542CE0 */

loc_00545A9A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00545AA8; /* jle: less or equal (signed <=) */

loc_00545AA1: ;
    MEM32(esi + 0x10) = 4;

loc_00545AA8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00545AB0
 * Original: 0x00545AB0 - 0x00545C07 (343 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545AB0(void)
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

loc_00545AB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x118);
    ecx = MEM32(edi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545AE9; /* je: equal / zero */

loc_00545AC6: ;
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x174;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    edx = ecx + 0x38;
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM8(ecx + 0x14) = MEM8(ecx + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edx + 8) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00545AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00545AE5u); } /* indirect call */
    }

loc_00545AE8: ;
    POP32(esp, ebx);

loc_00545AE9: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0x00545B02u); RECOMP_ABI_CALL(0x0052B2E0u, sub_0052B2E0); /* call 0x0052B2E0 */

loc_00545B02: ;
    edx = MEM32(0x67967C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    MEM32(0x67967C) = edx;
    PUSH32(esp, 0);
    if ((_fas >= 0)) goto loc_00545B36; /* jns: not sign (positive) */

loc_00545B31: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00545B36: ;
    ecx = MEM32(eax * 4 + 0x64ED78);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545B48u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545B48: ;
    edx = MEM32(esi);
    MEM32(edx + 0xE0) = 0;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545C01; /* je: equal / zero */

loc_00545B64: ;
    eax = MEM32(eax + 0x10);
    edi = MEM32(edi + 0x2C);
    eax = MEM32(edi + eax * 4 + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545B75; /* jne: not equal / not zero */

loc_00545B72: ;
    eax = MEM32(edi + 0x10);

loc_00545B75: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00545B82u); RECOMP_ABI_CALL(0x005454B0u, sub_005454B0); /* call 0x005454B0 */

loc_00545B82: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x1DC);
    eax = MEM32(ecx + 0xCC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x58)); /* fmul dword ptr [eax + 0x58] */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = esp + 8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    PUSH32(esp, edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x1C)); /* fmul dword ptr [eax + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1DC);
    ecx = MEM32(eax + 0xCC);
    PUSH32(esp, 0x00545C01u); RECOMP_ABI_CALL(0x00595950u, sub_00595950); /* call 0x00595950 */

loc_00545C01: ;
    POP32(esp, edi);
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
 * sub_00545C10
 * Original: 0x00545C10 - 0x00545C1D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00545C10: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00543140(); return; /* tail jmp 0x00543140 */

}

/**
 * sub_00545C20
 * Original: 0x00545C20 - 0x00545C36 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00545C20: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545C31; /* je: equal / zero */

loc_00545C2C: ;
    g_seh_ebp = ebp; sub_00541810(); return; /* tail jmp 0x00541810 */

loc_00545C31: ;
    g_seh_ebp = ebp; sub_005415B0(); return; /* tail jmp 0x005415B0 */

}

/**
 * sub_00545C40
 * Original: 0x00545C40 - 0x00545CCC (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545C40(void)
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

loc_00545C40: ;
    fp_push(MEMF(0x64EDA0)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545C60; /* jne: not equal / not zero */

loc_00545C5B: ;
    eax = MEM32(eax + 0x10);
    goto loc_00545C62;

loc_00545C60: ;
    eax = ecx;

loc_00545C62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545C70; /* je: equal / zero */

loc_00545C66: ;
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    ecx = esi;
    PUSH32(esp, 0x00545C70u); RECOMP_ABI_CALL(0x00545430u, sub_00545430); /* call 0x00545430 */

loc_00545C70: ;
    edx = MEM32(esi);
    MEMF(edx + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545C8F; /* jne: not equal / not zero */

loc_00545C8A: ;
    eax = MEM32(eax + 0x10);
    goto loc_00545C91;

loc_00545C8F: ;
    eax = ecx;

loc_00545C91: ;
    edx = MEM32(0x67967C);
    ecx = ZX16(MEM16(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x67967C) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00545CCAu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545CCA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545CD0
 * Original: 0x00545CD0 - 0x00545D4D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00545CD0(void)
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

loc_00545CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545CDEu); RECOMP_ABI_CALL(0x00544E70u, sub_00544E70); /* call 0x00544E70 */

loc_00545CDE: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x184;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545CEBu); RECOMP_ABI_CALL(0x00542CE0u, sub_00542CE0); /* call 0x00542CE0 */

loc_00545CEB: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x84;
    PUSH32(esp, 0x00545CFBu); RECOMP_ABI_CALL(0x00546CD0u, sub_00546CD0); /* call 0x00546CD0 */

loc_00545CFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545D0D; /* je: equal / zero */

loc_00545CFF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00545D0D; /* jle: less or equal (signed <=) */

loc_00545D06: ;
    MEM32(esi + 0x10) = 4;

loc_00545D0D: ;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = eax + 0xC4;
    edi = MEM32(edx);
    ecx = esi + 0x20;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    fp_push(MEMF(eax + 0xB4)); /* fld float */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00545D50
 * Original: 0x00545D50 - 0x00545DC4 (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545D50: ;
    eax = MEM32(0x67967C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(0x67967C) = eax;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545D7Bu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545D7B: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0xE0) = 0;
    eax = MEM32(esi);
    edx = eax + 0xB8;
    ebx = MEM32(edx);
    ecx = esi + 0x14;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = esi + 0x20;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00545DD0
 * Original: 0x00545DD0 - 0x00545E84 (180 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545DDEu); RECOMP_ABI_CALL(0x00543660u, sub_00543660); /* call 0x00543660 */

loc_00545DDE: ;
    edi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x84;
    PUSH32(esp, 0x00545DF0u); RECOMP_ABI_CALL(0x00546CD0u, sub_00546CD0); /* call 0x00546CD0 */

loc_00545DF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545E04; /* je: equal / zero */

loc_00545DF4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00545E04; /* jle: less or equal (signed <=) */

loc_00545DFB: ;
    MEM32(esi + 0x10) = 4;
    goto loc_00545E47;

loc_00545E04: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545E17; /* je: equal / zero */

loc_00545E09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545E47; /* jne: not equal / not zero */

loc_00545E0E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545E47; /* je: equal / zero */

loc_00545E17: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545E24u); RECOMP_ABI_CALL(0x00546CB0u, sub_00546CB0); /* call 0x00546CB0 */

loc_00545E24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00545E31; /* je: equal / zero */

loc_00545E2A: ;
    PUSH32(esp, 0x00545E2Fu); RECOMP_ABI_CALL(0x00541810u, sub_00541810); /* call 0x00541810 */

loc_00545E2F: ;
    goto loc_00545E47;

loc_00545E31: ;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545E3Cu); RECOMP_ABI_CALL(0x00546CA0u, sub_00546CA0); /* call 0x00546CA0 */

loc_00545E3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545E47; /* je: equal / zero */

loc_00545E40: ;
    MEM32(esi + 0x10) = 0xB;

loc_00545E47: ;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00545E90
 * Original: 0x00545E90 - 0x00545EFA (106 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545E90: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545EAFu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545EAF: ;
    eax = MEM32(esi);
    MEM32(eax + 0xE0) = 0;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    ebx = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    MEM32(edx + 8) = eax;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00545F00
 * Original: 0x00545F00 - 0x00545FB8 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    edx = MEM32(eax + 0x10);
    ecx = eax + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_00545F26; /* je: equal / zero */

loc_00545F12: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545F26; /* jne: not equal / not zero */

loc_00545F17: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x00545F24u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_00545F24: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00545F26: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x17 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545FB6; /* jne: not equal / not zero */

loc_00545F2F: ;
    ecx = eax + 0x64;
    PUSH32(esp, 0x00545F37u); RECOMP_ABI_CALL(0x00543660u, sub_00543660); /* call 0x00543660 */

loc_00545F37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545F4A; /* je: equal / zero */

loc_00545F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00545F7A; /* jne: not equal / not zero */

loc_00545F41: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545F7A; /* je: equal / zero */

loc_00545F4A: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545F57u); RECOMP_ABI_CALL(0x00546CB0u, sub_00546CB0); /* call 0x00546CB0 */

loc_00545F57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00545F64; /* je: equal / zero */

loc_00545F5D: ;
    PUSH32(esp, 0x00545F62u); RECOMP_ABI_CALL(0x00541810u, sub_00541810); /* call 0x00541810 */

loc_00545F62: ;
    goto loc_00545F7A;

loc_00545F64: ;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00545F6Fu); RECOMP_ABI_CALL(0x00546CA0u, sub_00546CA0); /* call 0x00546CA0 */

loc_00545F6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00545F7A; /* je: equal / zero */

loc_00545F73: ;
    MEM32(esi + 0x10) = 0xB;

loc_00545F7A: ;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    MEM32(esi + 0x2C) = 0;
    POP32(esp, edi);

loc_00545FB6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00545FC0
 * Original: 0x00545FC0 - 0x005460AB (235 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00545FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00545FC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x3C) = edi;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(0x67967C) = ecx;
    eax = MEM32(esi + 0x38);
    edi = MEM32(eax + edx * 4);
    eax = MEM32(esi);
    eax = MEM32(eax + 0x118);
    eax = MEM32(eax + 0x2C);
    ebx = MEM32(eax + edi * 4 + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054601A; /* jne: not equal / not zero */

loc_00546013: ;
    ebx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054604F; /* je: equal / zero */

loc_0054601A: ;
    edx = MEM32(eax + edi * 4 + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00546027; /* jne: not equal / not zero */

loc_00546022: ;
    eax = MEM32(eax + 0x10);
    goto loc_00546029;

loc_00546027: ;
    eax = edx;

loc_00546029: ;
    edx = ZX16(MEM16(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x67967C) = ecx;
    ecx = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_0054604F: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0054605Fu); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_0054605F: ;
    edx = MEM32(esi);
    MEM32(edx + 0xE0) = 0;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    MEM32(edx + 8) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005460B0
 * Original: 0x005460B0 - 0x00546183 (211 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005460B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005460B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005460BEu); RECOMP_ABI_CALL(0x00543660u, sub_00543660); /* call 0x00543660 */

loc_005460BE: ;
    edi = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0x84;
    PUSH32(esp, 0x005460D0u); RECOMP_ABI_CALL(0x00546CD0u, sub_00546CD0); /* call 0x00546CD0 */

loc_005460D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005460E4; /* je: equal / zero */

loc_005460D4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005460E4; /* jle: less or equal (signed <=) */

loc_005460DB: ;
    MEM32(esi + 0x10) = 4;
    goto loc_0054612E;

loc_005460E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005460FE; /* je: equal / zero */

loc_005460E9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054612E; /* jne: not equal / not zero */

loc_005460EE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054612E; /* je: equal / zero */

loc_005460F7: ;
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054612E; /* je: equal / zero */

loc_005460FE: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0054610Bu); RECOMP_ABI_CALL(0x00546CB0u, sub_00546CB0); /* call 0x00546CB0 */

loc_0054610B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00546118; /* je: equal / zero */

loc_00546111: ;
    PUSH32(esp, 0x00546116u); RECOMP_ABI_CALL(0x00541810u, sub_00541810); /* call 0x00541810 */

loc_00546116: ;
    goto loc_0054612E;

loc_00546118: ;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00546123u); RECOMP_ABI_CALL(0x00546CA0u, sub_00546CA0); /* call 0x00546CA0 */

loc_00546123: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054612E; /* je: equal / zero */

loc_00546127: ;
    MEM32(esi + 0x10) = 0xB;

loc_0054612E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546146; /* je: equal / zero */

loc_00546137: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00546146u); RECOMP_ABI_CALL(0x00545FC0u, sub_00545FC0); /* call 0x00545FC0 */

loc_00546146: ;
    eax = MEM32(esi);
    ecx = eax + 0xB8;
    edi = MEM32(ecx);
    edx = esi + 0x14;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x20;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546190
 * Original: 0x00546190 - 0x005464E4 (852 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546190(void)
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

loc_00546190: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x69585C);
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005461AE; /* jne: not equal / not zero */

loc_005461A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005461AE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005461B5u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_005461B5: ;
    edi = MEM32(eax + 0x10);
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1B8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005464DC; /* je: equal / zero */

loc_005461C8: ;
    fp_push(MEMF(0x6736E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6736E4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6736e4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005461E3; /* jp: parity */

loc_005461DB: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_00546235;

loc_005461E3: ;
    eax = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1EE);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D678)); /* fmul dword ptr [0x62d678] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xB0)); /* fmul dword ptr [ecx + 0xb0] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736E0)); /* fsub dword ptr [0x6736e0] */
    fp_push(MEMF(0x6736E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736E0)); /* fsub dword ptr [0x6736e0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00546235; /* jp: parity */

loc_0054622D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00546235: ;
    fp_push(MEMF(0x6736F4)); /* fld float */
    eax = MEM32(ecx + 0x6C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736F0)); /* fsub dword ptr [0x6736f0] */
    edx = MEM32(esi);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x174;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6736F0)); /* fadd dword ptr [0x6736f0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x673700)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736FC)); /* fsub dword ptr [0x6736fc] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6736FC)); /* fadd dword ptr [0x6736fc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6736EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6736E8)); /* fsub dword ptr [0x6736e8] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6736E8)); /* fadd dword ptr [0x6736e8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005464DC; /* jp: parity */

loc_005462CD: ;
    ecx = MEM32(ecx + 0x6C);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005462E8; /* je: equal / zero */

loc_005462D7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ebx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x005462E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005462E2u); } /* indirect call */
    }

loc_005462E5: ;
    POP32(esp, ebx);
    goto loc_00546300;

loc_005462E8: ;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 0;

loc_00546300: ;
    esi = MEM32(esi);
    fp_push(MEMF(esi + 0xE0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC8)); /* fmul dword ptr [esi + 0xc8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xCC)); /* fmul dword ptr [esi + 0xcc] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00546384; /* jp: parity */

loc_0054634F: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    MEM32(esp + 0x14) = ecx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x30)); /* fld float */
    edx = MEM32(esp + 0x3C);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    goto loc_005463CD;

loc_00546384: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005463ADu); RECOMP_ABI_CALL(0x00457260u, sub_00457260); /* call 0x00457260 */

loc_005463AD: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */

loc_005463CD: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x630320)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005464DC; /* jne: not equal / not zero */

loc_00546406: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0054640Fu); RECOMP_ABI_CALL(0x00457260u, sub_00457260); /* call 0x00457260 */

loc_0054640F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005464B3; /* jne: not equal / not zero */

loc_0054643C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005464A8; /* jp: parity */

loc_00546447: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6736F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6736f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00546485; /* jp: parity */

loc_00546478: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    eax = 3;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00546485: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0054649D; /* jp: parity */

loc_00546492: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054649D: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005464A8: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005464B3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6736F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6736f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005464CB; /* jp: parity */

loc_005464C0: ;
    POP32(esp, edi);
    eax = 5;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005464CB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6736E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6736e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005464A8; /* jnp: not parity */

loc_005464DC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005464F0
 * Original: 0x005464F0 - 0x005464FE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005464F0(void)
{

loc_005464F0: ;
    MEM32(ecx) = 0;
    PUSH32(esp, 0x005464FBu); RECOMP_ABI_CALL(0x00545390u, sub_00545390); /* call 0x00545390 */

loc_005464FB: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00546500
 * Original: 0x00546500 - 0x0054669A (410 bytes, 109 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546500(void)
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

loc_00546500: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    ebx = ZX16(MEM16(esi));
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    edi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054651Eu); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_0054651E: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edx + ebx * 8 + -8;
    PUSH32(esp, 0x00546531u); RECOMP_ABI_CALL(0x005DDEC0u, sub_005DDEC0); /* call 0x005DDEC0 */

loc_00546531: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x24) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x168)); /* fmul dword ptr [eax + 0x168] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x15C)); /* fmul dword ptr [eax + 0x15c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x150)); /* fmul dword ptr [eax + 0x150] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x174)); /* fadd dword ptr [eax + 0x174] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x16C)); /* fmul dword ptr [eax + 0x16c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x160)); /* fmul dword ptr [eax + 0x160] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x154)); /* fmul dword ptr [eax + 0x154] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x178)); /* fadd dword ptr [eax + 0x178] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x170)); /* fmul dword ptr [eax + 0x170] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x164)); /* fmul dword ptr [eax + 0x164] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x158)); /* fmul dword ptr [eax + 0x158] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x17C)); /* fadd dword ptr [eax + 0x17c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x168)); /* fmul dword ptr [eax + 0x168] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x15C)); /* fmul dword ptr [eax + 0x15c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x150)); /* fmul dword ptr [eax + 0x150] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x174)); /* fadd dword ptr [eax + 0x174] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x16C)); /* fmul dword ptr [eax + 0x16c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x160)); /* fmul dword ptr [eax + 0x160] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x154)); /* fmul dword ptr [eax + 0x154] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x178)); /* fadd dword ptr [eax + 0x178] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x170)); /* fmul dword ptr [eax + 0x170] */
    ecx = MEM32(0x6C8EB8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x164)); /* fmul dword ptr [eax + 0x164] */
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x184;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + -44)); /* fmul dword ptr [eax - 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + -8)); /* fadd dword ptr [eax - 8] */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00546691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054668Bu); } /* indirect call */
    }

loc_00546691: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005466A0
 * Original: 0x005466A0 - 0x0054682F (399 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005466A0(void)
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

loc_005466A0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = MEM32(eax + 0x118);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ebp = 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0054670B; /* jne: not equal / not zero */

loc_005466C2: ;
    ecx = MEM32(ebx + 0x4C);
    edx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005466DAu); RECOMP_ABI_CALL(0x0052B2F0u, sub_0052B2F0); /* call 0x0052B2F0 */

loc_005466DA: ;
    eax = MEM32(0x67967C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(edx * 4 + 0x64ED60);
    goto loc_005467AC;

loc_0054670B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054675B; /* jne: not equal / not zero */

loc_00546710: ;
    ecx = MEM32(ebx + 0x4C);
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    ecx = MEM32(0x6CE2E4);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546728u); RECOMP_ABI_CALL(0x0052B2F0u, sub_0052B2F0); /* call 0x0052B2F0 */

loc_00546728: ;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x67967C) = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(edx * 4 + 0x64ED48);
    goto loc_005467B4;

loc_0054675B: ;
    eax = MEM32(ebx + 0x4C);
    ecx = MEM32(0x6CE2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    eax = MEM32(esi + 0x40);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546773u); RECOMP_ABI_CALL(0x0052B2F0u, sub_0052B2F0); /* call 0x0052B2F0 */

loc_00546773: ;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x67967C) = ecx;
    if ((_fas >= 0)) goto loc_005467A1; /* jns: not sign (positive) */

loc_0054679C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005467A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edi = MEM32(eax * 4 + 0x64ED40);
    if (CMP_NE(_fa, _fb)) goto loc_005467B4; /* jne: not equal / not zero */

loc_005467AC: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_005467B4: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005467C4u); RECOMP_ABI_CALL(0x005427E0u, sub_005427E0); /* call 0x005427E0 */

loc_005467C4: ;
    fp_push(MEMF(0x64EDA0)); /* fld float */
    ebx = MEM32(ebx + 0x2C);
    edi = MEM32(ebx + edi * 4 + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005467DC; /* jne: not equal / not zero */

loc_005467D5: ;
    edi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546815; /* je: equal / zero */

loc_005467DC: ;
    PUSH32(esp, edi);
    fp_pop(); /* fstp st(0) */
    ecx = esi;
    PUSH32(esp, 0x005467E6u); RECOMP_ABI_CALL(0x00545430u, sub_00545430); /* call 0x00545430 */

loc_005467E6: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005467F7u); RECOMP_ABI_CALL(0x00546500u, sub_00546500); /* call 0x00546500 */

loc_005467F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054680B; /* je: equal / zero */

loc_005467FB: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D0F0)); /* fmul dword ptr [0x63d0f0] */
    goto loc_00546815;

loc_0054680B: ;
    fp_push(MEMF(0x673704)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */

loc_00546815: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0054681F; /* jge: greater or equal (signed >=) */

loc_0054681D: ;
    fp_top() = -fp_top(); /* fchs */

loc_0054681F: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    MEMF(eax + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00546830
 * Original: 0x00546830 - 0x00546869 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546830: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00546845u); RECOMP_ABI_CALL(0x00545170u, sub_00545170); /* call 0x00545170 */

loc_00546845: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0054685E; /* je: equal / zero */

loc_00546853: ;
    PUSH32(esp, 0x00546858u); RECOMP_ABI_CALL(0x00545C40u, sub_00545C40); /* call 0x00545C40 */

loc_00546858: ;
    MEM8(esi + 0x30) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054685E: ;
    PUSH32(esp, 0x00546863u); RECOMP_ABI_CALL(0x00545620u, sub_00545620); /* call 0x00545620 */

loc_00546863: ;
    MEM8(esi + 0x30) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546870
 * Original: 0x00546870 - 0x00546B64 (756 bytes, 217 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00546870(void)
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

loc_00546870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x69585C);
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054689B; /* je: equal / zero */

loc_00546885: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054691F; /* je: equal / zero */

loc_00546890: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054691F; /* jne: not equal / not zero */

loc_0054689B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x28);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 8) = 0x7F7FFFFF;
    if ((_fas < 0)) goto loc_0054691E; /* js: sign (negative) */

loc_005468AA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = ebx * 4 + 8;

loc_005468B3: ;
    _fa = (uint32_t)(MEM32(ecx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546914; /* je: equal / zero */

loc_005468B9: ;
    edi = MEM32(esi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x174;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005468C7u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_005468C7: ;
    ecx = eax;
    PUSH32(esp, 0x005468CEu); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_005468CE: ;
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0054690C; /* jp: parity */

loc_00546903: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x40) = ebx;
    goto loc_0054690E;

loc_0054690C: ;
    fp_pop(); /* fstp st(0) */

loc_0054690E: ;
    ecx = MEM32(0x69585C);

loc_00546914: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005468B3; /* jge: greater or equal (signed >=) */

loc_0054691C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0054691E: ;
    POP32(esp, ebx);

loc_0054691F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546AA5; /* je: equal / zero */

loc_0054692A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546AA5; /* je: equal / zero */

loc_00546933: ;
    MEM32(esi + 0xC) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esi + 0x10) = 0;
    if (CMP_A(_fa, _fb)) goto loc_00546A99; /* ja: above (unsigned >) */

loc_00546947: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x546B64); /* switch: 34 entries, 29 targets */
    if (_jt == 0x0054694Eu) goto loc_0054694E;
    if (_jt == 0x00546961u) goto loc_00546961;
    if (_jt == 0x00546974u) goto loc_00546974;
    if (_jt == 0x00546987u) goto loc_00546987;
    if (_jt == 0x0054699Au) goto loc_0054699A;
    if (_jt == 0x005469ADu) goto loc_005469AD;
    if (_jt == 0x005469C0u) goto loc_005469C0;
    if (_jt == 0x005469D3u) goto loc_005469D3;
    if (_jt == 0x005469E6u) goto loc_005469E6;
    if (_jt == 0x005469F9u) goto loc_005469F9;
    if (_jt == 0x00546A0Cu) goto loc_00546A0C;
    if (_jt == 0x00546A25u) goto loc_00546A25;
    if (_jt == 0x00546A3Eu) goto loc_00546A3E;
    if (_jt == 0x00546A57u) goto loc_00546A57;
    if (_jt == 0x00546A71u) goto loc_00546A71;
    if (_jt == 0x00546A8Bu) goto loc_00546A8B;
    if (_jt == 0x00546A99u) goto loc_00546A99;
    if (_jt == 0x00546AB5u) goto loc_00546AB5;
    if (_jt == 0x00546ABEu) goto loc_00546ABE;
    if (_jt == 0x00546AC7u) goto loc_00546AC7;
    if (_jt == 0x00546AD0u) goto loc_00546AD0;
    if (_jt == 0x00546AD9u) goto loc_00546AD9;
    if (_jt == 0x00546AE2u) goto loc_00546AE2;
    if (_jt == 0x00546AEBu) goto loc_00546AEB;
    if (_jt == 0x00546AF4u) goto loc_00546AF4;
    if (_jt == 0x00546AFDu) goto loc_00546AFD;
    if (_jt == 0x00546B06u) goto loc_00546B06;
    if (_jt == 0x00546B0Fu) goto loc_00546B0F;
    if (_jt == 0x00546B16u) goto loc_00546B16;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0054694E: ;
    ecx = esi;
    PUSH32(esp, 0x00546955u); RECOMP_ABI_CALL(0x00545580u, sub_00545580); /* call 0x00545580 */

loc_00546955: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546961: ;
    ecx = esi;
    PUSH32(esp, 0x00546968u); RECOMP_ABI_CALL(0x00545620u, sub_00545620); /* call 0x00545620 */

loc_00546968: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546974: ;
    ecx = esi;
    PUSH32(esp, 0x0054697Bu); RECOMP_ABI_CALL(0x00545740u, sub_00545740); /* call 0x00545740 */

loc_0054697B: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546987: ;
    ecx = esi;
    PUSH32(esp, 0x0054698Eu); RECOMP_ABI_CALL(0x005457F0u, sub_005457F0); /* call 0x005457F0 */

loc_0054698E: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_0054699A: ;
    ecx = esi;
    PUSH32(esp, 0x005469A1u); RECOMP_ABI_CALL(0x005466A0u, sub_005466A0); /* call 0x005466A0 */

loc_005469A1: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_005469AD: ;
    ecx = esi;
    PUSH32(esp, 0x005469B4u); RECOMP_ABI_CALL(0x00546830u, sub_00546830); /* call 0x00546830 */

loc_005469B4: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_005469C0: ;
    ecx = esi;
    PUSH32(esp, 0x005469C7u); RECOMP_ABI_CALL(0x00545AB0u, sub_00545AB0); /* call 0x00545AB0 */

loc_005469C7: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_005469D3: ;
    ecx = esi;
    PUSH32(esp, 0x005469DAu); RECOMP_ABI_CALL(0x00545C20u, sub_00545C20); /* call 0x00545C20 */

loc_005469DA: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_005469E6: ;
    ecx = esi;
    PUSH32(esp, 0x005469EDu); RECOMP_ABI_CALL(0x00545C40u, sub_00545C40); /* call 0x00545C40 */

loc_005469ED: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_005469F9: ;
    ecx = esi;
    PUSH32(esp, 0x00546A00u); RECOMP_ABI_CALL(0x00545D50u, sub_00545D50); /* call 0x00545D50 */

loc_00546A00: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A0C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1A);
    ecx = esi;
    PUSH32(esp, 0x00546A19u); RECOMP_ABI_CALL(0x00545E90u, sub_00545E90); /* call 0x00545E90 */

loc_00546A19: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A25: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    ecx = esi;
    PUSH32(esp, 0x00546A32u); RECOMP_ABI_CALL(0x00545E90u, sub_00545E90); /* call 0x00545E90 */

loc_00546A32: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x00546A4Bu); RECOMP_ABI_CALL(0x00545E90u, sub_00545E90); /* call 0x00545E90 */

loc_00546A4B: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A57: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x64ED80);
    ecx = esi;
    PUSH32(esp, 0x00546A65u); RECOMP_ABI_CALL(0x00545FC0u, sub_00545FC0); /* call 0x00545FC0 */

loc_00546A65: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A71: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64ED98);
    ecx = esi;
    PUSH32(esp, 0x00546A7Fu); RECOMP_ABI_CALL(0x00545FC0u, sub_00545FC0); /* call 0x00545FC0 */

loc_00546A7F: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546A8B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64ED9C);
    ecx = esi;
    PUSH32(esp, 0x00546A99u); RECOMP_ABI_CALL(0x00545FC0u, sub_00545FC0); /* call 0x00545FC0 */

loc_00546A99: ;
    MEM32(esi + 0x34) = 0;
    goto loc_00546B22;

loc_00546AA5: ;
    eax = MEM32(esi + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00546B16; /* ja: above (unsigned >) */

loc_00546AAE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x546BA8); /* switch: 17 entries, 12 targets */
    if (_jt == 0x00546AB5u) goto loc_00546AB5;
    if (_jt == 0x00546ABEu) goto loc_00546ABE;
    if (_jt == 0x00546AC7u) goto loc_00546AC7;
    if (_jt == 0x00546AD0u) goto loc_00546AD0;
    if (_jt == 0x00546AD9u) goto loc_00546AD9;
    if (_jt == 0x00546AE2u) goto loc_00546AE2;
    if (_jt == 0x00546AEBu) goto loc_00546AEB;
    if (_jt == 0x00546AF4u) goto loc_00546AF4;
    if (_jt == 0x00546AFDu) goto loc_00546AFD;
    if (_jt == 0x00546B06u) goto loc_00546B06;
    if (_jt == 0x00546B0Fu) goto loc_00546B0F;
    if (_jt == 0x00546B16u) goto loc_00546B16;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00546AB5: ;
    ecx = esi;
    PUSH32(esp, 0x00546ABCu); RECOMP_ABI_CALL(0x00545600u, sub_00545600); /* call 0x00545600 */

loc_00546ABC: ;
    goto loc_00546B16;

loc_00546ABE: ;
    ecx = esi;
    PUSH32(esp, 0x00546AC5u); RECOMP_ABI_CALL(0x005456D0u, sub_005456D0); /* call 0x005456D0 */

loc_00546AC5: ;
    goto loc_00546B16;

loc_00546AC7: ;
    ecx = esi;
    PUSH32(esp, 0x00546ACEu); RECOMP_ABI_CALL(0x005456D0u, sub_005456D0); /* call 0x005456D0 */

loc_00546ACE: ;
    goto loc_00546B16;

loc_00546AD0: ;
    ecx = esi;
    PUSH32(esp, 0x00546AD7u); RECOMP_ABI_CALL(0x00545920u, sub_00545920); /* call 0x00545920 */

loc_00546AD7: ;
    goto loc_00546B16;

loc_00546AD9: ;
    ecx = esi;
    PUSH32(esp, 0x00546AE0u); RECOMP_ABI_CALL(0x005459C0u, sub_005459C0); /* call 0x005459C0 */

loc_00546AE0: ;
    goto loc_00546B16;

loc_00546AE2: ;
    ecx = esi;
    PUSH32(esp, 0x00546AE9u); RECOMP_ABI_CALL(0x00545A80u, sub_00545A80); /* call 0x00545A80 */

loc_00546AE9: ;
    goto loc_00546B16;

loc_00546AEB: ;
    ecx = esi;
    PUSH32(esp, 0x00546AF2u); RECOMP_ABI_CALL(0x00545C10u, sub_00545C10); /* call 0x00545C10 */

loc_00546AF2: ;
    goto loc_00546B16;

loc_00546AF4: ;
    ecx = esi;
    PUSH32(esp, 0x00546AFBu); RECOMP_ABI_CALL(0x00545CD0u, sub_00545CD0); /* call 0x00545CD0 */

loc_00546AFB: ;
    goto loc_00546B16;

loc_00546AFD: ;
    ecx = esi;
    PUSH32(esp, 0x00546B04u); RECOMP_ABI_CALL(0x00545DD0u, sub_00545DD0); /* call 0x00545DD0 */

loc_00546B04: ;
    goto loc_00546B16;

loc_00546B06: ;
    ecx = esi;
    PUSH32(esp, 0x00546B0Du); RECOMP_ABI_CALL(0x00545F00u, sub_00545F00); /* call 0x00545F00 */

loc_00546B0D: ;
    goto loc_00546B16;

loc_00546B0F: ;
    ecx = esi;
    PUSH32(esp, 0x00546B16u); RECOMP_ABI_CALL(0x005460B0u, sub_005460B0); /* call 0x005460B0 */

loc_00546B16: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x34)); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00546B22: ;
    ecx = esi;
    PUSH32(esp, 0x00546B29u); RECOMP_ABI_CALL(0x00546190u, sub_00546190); /* call 0x00546190 */

loc_00546B29: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546B4E; /* je: equal / zero */

loc_00546B30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00546B44; /* jne: not equal / not zero */

loc_00546B34: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00546B4E; /* jne: not equal / not zero */

loc_00546B44: ;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = 0;

loc_00546B4E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00546B61; /* jle: less or equal (signed <=) */

loc_00546B55: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00546B61: ;
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
 * sub_00546BF0
 * Original: 0x00546BF0 - 0x00546C10 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546BF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00546C10
 * Original: 0x00546C10 - 0x00546C4E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546C10: ;
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = 1;
    eax = MEM32(edx + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 0xC) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(edx + 0x44);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00546C50
 * Original: 0x00546C50 - 0x00546C58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546C50(void)
{

loc_00546C50: ;
    MEM32(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00546C60
 * Original: 0x00546C60 - 0x00546C99 (57 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546C60: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 0x40);
    ebx = edx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_00546C95; /* jle: less or equal (signed <=) */

loc_00546C7A: ;
    SET_LO8(ebx, MEM8(esi + 0x3D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546C90; /* je: equal / zero */

loc_00546C81: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(ebx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00546C90: ;
    MEM32(ecx + 4) = edx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00546C95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00546CA0
 * Original: 0x00546CA0 - 0x00546CB0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546CA0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x40);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00546CB0
 * Original: 0x00546CB0 - 0x00546CC4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546CB0: ;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x40);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00546CC3; /* jle: less or equal (signed <=) */

loc_00546CBC: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00546CC3; /* jne: not equal / not zero */

loc_00546CC1: ;
    SET_LO8(eax, 1);

loc_00546CC3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00546CD0
 * Original: 0x00546CD0 - 0x00546CD6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546CD0(void)
{

loc_00546CD0: ;
    eax = MEM32(ecx);
    SET_LO8(eax, MEM8(eax + 0x3E));
    esp += 4; return; /* ret */

}

/**
 * sub_00546CE0
 * Original: 0x00546CE0 - 0x00546CF8 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546CE0(void)
{

loc_00546CE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00546D00
 * Original: 0x00546D00 - 0x00546D04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D00(void)
{

loc_00546D00: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00546D10
 * Original: 0x00546D10 - 0x00546D28 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D10(void)
{

loc_00546D10: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00546D30
 * Original: 0x00546D30 - 0x00546D34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D30(void)
{

loc_00546D30: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00546D40
 * Original: 0x00546D40 - 0x00546D49 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00546D40: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x44);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00546D50
 * Original: 0x00546D50 - 0x00546D59 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D50(void)
{

loc_00546D50: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00546D60
 * Original: 0x00546D60 - 0x00546D6E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546D60: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00546D70
 * Original: 0x00546D70 - 0x00546D80 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546D70: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00546D80
 * Original: 0x00546D80 - 0x00546D90 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D80(void)
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

loc_00546D80: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(eax + edx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00546D90
 * Original: 0x00546D90 - 0x00546DA0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546D90: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00546DA0
 * Original: 0x00546DA0 - 0x00546DCE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546DA0: ;
    edx = ecx;
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = eax;
    edi = edx + 0x10;
    ecx = 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x90) = eax;
    MEM32(edx + 0x94) = eax;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546DD0
 * Original: 0x00546DD0 - 0x00546E05 (53 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00546DE9; /* je: equal / zero */

loc_00546DDC: ;
    SET_LO8(eax, MEM8(0x6CE210));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546DE9; /* je: equal / zero */

loc_00546DE5: ;
    MEM16(edi + 0x14) = MEM16(edi + 0x14) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00546DE9: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546DFA; /* je: equal / zero */

loc_00546DF3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00546DFAu); RECOMP_ABI_CALL(0x0058EE90u, sub_0058EE90); /* call 0x0058EE90 */

loc_00546DFA: ;
    MEM32(esi + 0x90) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00546E10
 * Original: 0x00546E10 - 0x00546EAB (155 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00546E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = ebp + 0x10;
    ebx = 0x20;
    edi = edi;

loc_00546E20: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546E3B; /* je: equal / zero */

loc_00546E26: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00546E3B; /* jne: not equal / not zero */

loc_00546E2B: ;
    ecx = esi;
    PUSH32(esp, 0x00546E32u); RECOMP_ABI_CALL(0x005DCAA0u, sub_005DCAA0); /* call 0x005DCAA0 */

loc_00546E32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546E38u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00546E38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00546E3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00546E20; /* jne: not equal / not zero */

loc_00546E41: ;
    esi = ebp + 4;
    edi = 3;
    /* nop */

loc_00546E50: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546E5F; /* je: equal / zero */

loc_00546E56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546E5Cu); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_00546E5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00546E5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00546E50; /* jne: not equal / not zero */

loc_00546E65: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546E87; /* je: equal / zero */

loc_00546E6C: ;
    MEM16(esi + 4) = MEM16(esi + 4) - 1;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00546E87; /* jne: not equal / not zero */

loc_00546E77: ;
    ecx = esi;
    PUSH32(esp, 0x00546E7Eu); RECOMP_ABI_CALL(0x005DE800u, sub_005DE800); /* call 0x005DE800 */

loc_00546E7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546E84u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00546E84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00546E87: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x00546E90u); RECOMP_ABI_CALL(0x00546DD0u, sub_00546DD0); /* call 0x00546DD0 */

loc_00546E90: ;
    eax = MEM32(ebp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00546EAA; /* je: equal / zero */

loc_00546E9E: ;
    ecx = MEM32(0x6C8EB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546EAAu); RECOMP_ABI_CALL(0x0057DCF0u, sub_0057DCF0); /* call 0x0057DCF0 */

loc_00546EAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00546EB0
 * Original: 0x00546EB0 - 0x00546EEC (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546EB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546EEA; /* je: equal / zero */

loc_00546EBC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546EDD; /* je: equal / zero */

loc_00546EC5: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546EDD; /* je: equal / zero */

loc_00546ECA: ;
    PUSH32(esp, 0x40);
    eax = edi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546ED6u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00546ED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x43) = 0;

loc_00546EDD: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00546EE6u); RECOMP_ABI_CALL(0x0054B050u, sub_0054B050); /* call 0x0054B050 */

loc_00546EE6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00546EEA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546EF0
 * Original: 0x00546EF0 - 0x00546F23 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546EFBu); RECOMP_ABI_CALL(0x005499E0u, sub_005499E0); /* call 0x005499E0 */

loc_00546EFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546F0F; /* je: equal / zero */

loc_00546F02: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F08u); RECOMP_ABI_CALL(0x00549610u, sub_00549610); /* call 0x00549610 */

loc_00546F08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00546F13; /* jne: not equal / not zero */

loc_00546F0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00546F13: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F19u); RECOMP_ABI_CALL(0x00548DD0u, sub_00548DD0); /* call 0x00548DD0 */

loc_00546F19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546F30
 * Original: 0x00546F30 - 0x00546F4C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546F30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F3Bu); RECOMP_ABI_CALL(0x00549F20u, sub_00549F20); /* call 0x00549F20 */

loc_00546F3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F41u); RECOMP_ABI_CALL(0x00549660u, sub_00549660); /* call 0x00549660 */

loc_00546F41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F47u); RECOMP_ABI_CALL(0x00548E50u, sub_00548E50); /* call 0x00548E50 */

loc_00546F47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546F50
 * Original: 0x00546F50 - 0x00546F84 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546F50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546F68; /* je: equal / zero */

loc_00546F5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F65u); RECOMP_ABI_CALL(0x00549D10u, sub_00549D10); /* call 0x00549D10 */

loc_00546F65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00546F68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F6Eu); RECOMP_ABI_CALL(0x0054A440u, sub_0054A440); /* call 0x0054A440 */

loc_00546F6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546F74u); RECOMP_ABI_CALL(0x00546F30u, sub_00546F30); /* call 0x00546F30 */

loc_00546F74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x5C) = 0;
    MEM8(esi + 0xB24) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00546F90
 * Original: 0x00546F90 - 0x00546FD6 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546F90: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00546FA2; /* je: equal / zero */

loc_00546F99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00546F9Fu); RECOMP_ABI_CALL(0x0054B0D0u, sub_0054B0D0); /* call 0x0054B0D0 */

loc_00546F9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00546FA2: ;
    PUSH32(esp, esi);
    MEM32(esi) = ebx;
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    PUSH32(esp, 0x00546FB3u); RECOMP_ABI_CALL(0x00548AF0u, sub_00548AF0); /* call 0x00548AF0 */

loc_00546FB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FB9u); RECOMP_ABI_CALL(0x00546F30u, sub_00546F30); /* call 0x00546F30 */

loc_00546FB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FBFu); RECOMP_ABI_CALL(0x00546F30u, sub_00546F30); /* call 0x00546F30 */

loc_00546FBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1854) = ebx;
    MEM8(esi + 0x1858) = LO8(ebx);
    MEM32(esi + 0x1900) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00546FE0
 * Original: 0x00546FE0 - 0x00547001 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00546FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00546FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FE6u); RECOMP_ABI_CALL(0x00548B10u, sub_00548B10); /* call 0x00548B10 */

loc_00546FE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FECu); RECOMP_ABI_CALL(0x00548690u, sub_00548690); /* call 0x00548690 */

loc_00546FEC: ;
    PUSH32(esp, 0x00546FF1u); RECOMP_ABI_CALL(0x005571C0u, sub_005571C0); /* call 0x005571C0 */

loc_00546FF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FF7u); RECOMP_ABI_CALL(0x0054A8A0u, sub_0054A8A0); /* call 0x0054A8A0 */

loc_00546FF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00546FFDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00546FFD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547010
 * Original: 0x00547010 - 0x005470C7 (183 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547010: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054701E; /* jne: not equal / not zero */

loc_00547017: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547075; /* je: equal / zero */

loc_0054701E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547026u); RECOMP_ABI_CALL(0x0054B150u, sub_0054B150); /* call 0x0054B150 */

loc_00547026: ;
    eax = MEM32(esi + 0x1900);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547075; /* jne: not equal / not zero */

loc_00547033: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547043; /* je: equal / zero */

loc_0054703A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547040u); RECOMP_ABI_CALL(0x00549350u, sub_00549350); /* call 0x00549350 */

loc_00547040: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547043: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547075; /* je: equal / zero */

loc_0054704A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00547050u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00547050: ;
    edx = MEM32(esi + 0x50);
    edi = eax;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x493E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x493E0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00547074; /* jbe: below or equal (unsigned <=) */

loc_00547061: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x64EDA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0054706Eu); RECOMP_ABI_CALL(0x0054B170u, sub_0054B170); /* call 0x0054B170 */

loc_0054706E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = edi;

loc_00547074: ;
    POP32(esp, edi);

loc_00547075: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054707Bu); RECOMP_ABI_CALL(0x0054A3C0u, sub_0054A3C0); /* call 0x0054A3C0 */

loc_0054707B: ;
    eax = MEM32(esi + 0xB68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054709B; /* je: equal / zero */

loc_00547088: ;
    eax = MEM32(esi + 0xB20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054709B; /* je: equal / zero */

loc_00547092: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547098u); RECOMP_ABI_CALL(0x00557140u, sub_00557140); /* call 0x00557140 */

loc_00547098: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054709B: ;
    eax = MEM32(esi + 0x1900);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005470B8; /* je: equal / zero */

loc_005470A5: ;
    eax = MEM32(esi + 0x1850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005470B8; /* jne: not equal / not zero */

loc_005470AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005470B5u); RECOMP_ABI_CALL(0x005476C0u, sub_005476C0); /* call 0x005476C0 */

loc_005470B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005470B8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005470C3u); RECOMP_ABI_CALL(0x00548710u, sub_00548710); /* call 0x00548710 */

loc_005470C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005470D0
 * Original: 0x005470D0 - 0x005470DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005470D0(void)
{

loc_005470D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1790);
    esp += 4; return; /* ret */

}

/**
 * sub_005470E0
 * Original: 0x005470E0 - 0x005470FC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005470E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005470E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005470FB; /* je: equal / zero */

loc_005470E8: ;
    eax = MEM32(eax + 0xB20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005470FB; /* je: equal / zero */

loc_005470F2: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_005567E0(); return; /* tail jmp 0x005567E0 */

loc_005470FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00547100
 * Original: 0x00547100 - 0x00547105 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547100: ;
    g_seh_ebp = ebp; sub_0054A400(); return; /* tail jmp 0x0054A400 */

}

/**
 * sub_00547110
 * Original: 0x00547110 - 0x00547166 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547110: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547158; /* je: equal / zero */

loc_0054711B: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547158; /* je: equal / zero */

loc_00547122: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4 + 0x3A0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547142; /* jne: not equal / not zero */

loc_00547131: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 0x3AC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00547158; /* je: equal / zero */

loc_0054713E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547159; /* je: equal / zero */

loc_00547142: ;
    MEM32(eax + ecx * 4 + 0x9B8) = 1;
    MEM32(eax + ecx * 4 + 0x9C4) = 0;

loc_00547158: ;
    esp += 4; return; /* ret */

loc_00547159: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00549E30(); return; /* tail jmp 0x00549E30 */

}

/**
 * sub_00547170
 * Original: 0x00547170 - 0x005471D1 (97 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005471CF; /* je: equal / zero */

loc_0054717C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054718B; /* je: equal / zero */

loc_00547184: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054718B; /* jne: not equal / not zero */

loc_00547189: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0054718B: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054719B; /* je: equal / zero */

loc_00547193: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0054719D; /* jg: greater (signed >) */

loc_0054719B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0054719D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x17B4) = edi;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x17B8) = edi;
    PUSH32(esp, 0x005471BBu); RECOMP_ABI_CALL(0x0054A490u, sub_0054A490); /* call 0x0054A490 */

loc_005471BB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_005471CF; /* jne: not equal / not zero */

loc_005471C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005471CCu); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_005471CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005471CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005471E0
 * Original: 0x005471E0 - 0x005471F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005471E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005471E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005471F4; /* je: equal / zero */

loc_005471EB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0054A300(); return; /* tail jmp 0x0054A300 */

loc_005471F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00547200
 * Original: 0x00547200 - 0x00547215 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547200: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547214; /* je: equal / zero */

loc_0054720B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0054A340(); return; /* tail jmp 0x0054A340 */

loc_00547214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00547220
 * Original: 0x00547220 - 0x00547262 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547220: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547261; /* je: equal / zero */

loc_00547228: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547261; /* je: equal / zero */

loc_0054722D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x3AC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547260; /* je: equal / zero */

loc_00547241: ;
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x101);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = eax + ecx + 0x9C;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054725Du); RECOMP_ABI_CALL(0x0054B1D0u, sub_0054B1D0); /* call 0x0054B1D0 */

loc_0054725D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547260: ;
    POP32(esp, esi);

loc_00547261: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00547270
 * Original: 0x00547270 - 0x005472A7 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547270: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00547284; /* je: equal / zero */

loc_0054727E: ;
    ecx = MEM32(eax + esi * 4 + 0x5C);
    goto loc_00547288;

loc_00547284: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00547288: ;
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005472A1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0054729Fu); } /* indirect call */
    }

loc_005472A1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005472B0
 * Original: 0x005472B0 - 0x00547308 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005472B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005472B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4 + 0x3AC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005472E0; /* jne: not equal / not zero */

loc_005472C6: ;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x30); PUSH32(esp, 0x005472D9u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005472D5u); } /* indirect call */
    }

loc_005472D9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005472E0: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 4) = edx;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x547270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547301u); RECOMP_ABI_CALL(0x00549750u, sub_00549750); /* call 0x00549750 */

loc_00547301: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547310
 * Original: 0x00547310 - 0x0054734C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00547310: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0054731E; /* jne: not equal / not zero */

loc_0054731B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0054731E: ;
    ecx = MEM32(eax + 0xB68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0054731B; /* jne: not equal / not zero */

loc_00547328: ;
    ecx = MEM32(eax + 0x3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0054731B; /* jne: not equal / not zero */

loc_00547332: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547342u); RECOMP_ABI_CALL(0x00549FA0u, sub_00549FA0); /* call 0x00549FA0 */

loc_00547342: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547350
 * Original: 0x00547350 - 0x00547391 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi + 0xB74) = 0;
    PUSH32(esp, 0x00547365u); RECOMP_ABI_CALL(0x00549AB0u, sub_00549AB0); /* call 0x00549AB0 */

loc_00547365: ;
    eax = MEM32(esi + 0xB68);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054738F; /* je: equal / zero */

loc_00547372: ;
    eax = MEM32(esi + 0x3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00547387; /* je: equal / zero */

loc_0054737D: ;
    PUSH32(esp, 0x00547382u); RECOMP_ABI_CALL(0x00549A50u, sub_00549A50); /* call 0x00549A50 */

loc_00547382: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547387: ;
    PUSH32(esp, 0x0054738Cu); RECOMP_ABI_CALL(0x00549D10u, sub_00549D10); /* call 0x00549D10 */

loc_0054738C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054738F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005473A0
 * Original: 0x005473A0 - 0x005473B8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005473A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005473A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xB20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005473B7; /* je: equal / zero */

loc_005473AE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00557090(); return; /* tail jmp 0x00557090 */

loc_005473B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005473C0
 * Original: 0x005473C0 - 0x0054748C (204 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005473C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005473C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547485; /* je: equal / zero */

loc_005473D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x210);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00547482; /* je: equal / zero */

loc_005473E7: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547482; /* je: equal / zero */

loc_005473F1: ;
    ebx = MEM32(esp + 0x218);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547482; /* je: equal / zero */

loc_00547400: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547482; /* je: equal / zero */

loc_00547405: ;
    edi = MEM32(esp + 0x21C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547415; /* jne: not equal / not zero */

loc_00547410: ;
    edi = 0x62DF21;

loc_00547415: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_00547420: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547420; /* jne: not equal / not zero */

loc_00547427: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = edi;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00547431: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547431; /* jne: not equal / not zero */

loc_00547438: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00547482; /* ja: above (unsigned >) */

loc_00547447: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, 0x630298);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00547458u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_00547458: ;
    ecx = MEM32(esp + 0x230);
    edx = MEM32(esp + 0x220);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x1C;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054747Fu); RECOMP_ABI_CALL(0x0054B1D0u, sub_0054B1D0); /* call 0x0054B1D0 */

loc_0054747F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547482: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00547485: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547490
 * Original: 0x00547490 - 0x00547528 (152 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00547497u); RECOMP_ABI_CALL(0x005571A0u, sub_005571A0); /* call 0x005571A0 */

loc_00547497: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x64EDAC);
    PUSH32(esp, 0x1908);
    PUSH32(esp, 0x005474A8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005474A8: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547525; /* je: equal / zero */

loc_005474B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x642;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, ebp);
    MEM32(ebp) = ebx;
    MEM8(ebp + 4) = LO8(ebx);
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x48) = ebx;
    MEM8(ebp + 0x5C) = LO8(ebx);
    MEM32(ebp + 0x17C4) = ebx;
    PUSH32(esp, 0x005474DBu); RECOMP_ABI_CALL(0x00548AB0u, sub_00548AB0); /* call 0x00548AB0 */

loc_005474DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005474F0; /* jne: not equal / not zero */

loc_005474E2: ;
    esi = ebp;
    PUSH32(esp, 0x005474E9u); RECOMP_ABI_CALL(0x00546FE0u, sub_00546FE0); /* call 0x00546FE0 */

loc_005474E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_005474F0: ;
    esi = MEM32(esp + 0x14);
    edi = ebp + 0x17D4;
    ecx = 0x1C;
    PUSH32(esp, ebp);
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
    PUSH32(esp, 0x00547507u); RECOMP_ABI_CALL(0x00548640u, sub_00548640); /* call 0x00548640 */

loc_00547507: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005474E2; /* je: equal / zero */

loc_0054750E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00547514u); RECOMP_ABI_CALL(0x0054A7B0u, sub_0054A7B0); /* call 0x0054A7B0 */

loc_00547514: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005474E2; /* je: equal / zero */

loc_0054751B: ;
    POP32(esp, edi);
    MEM32(ebp + 0x1904) = ebx;
    eax = ebp;
    POP32(esp, esi);

loc_00547525: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00547530
 * Original: 0x00547530 - 0x005476BF (399 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x5C));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = esi + 0x5C;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00547557; /* je: equal / zero */

loc_0054754E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547554u); RECOMP_ABI_CALL(0x00546F50u, sub_00546F50); /* call 0x00546F50 */

loc_00547554: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547557: ;
    eax = MEM32(esp + 0x1C);
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00547560: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547560; /* jne: not equal / not zero */

loc_0054756A: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547577; /* jne: not equal / not zero */

loc_00547572: ;
    ecx = 0x6C39D8;

loc_00547577: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547584; /* jne: not equal / not zero */

loc_0054757F: ;
    eax = 0x6C39D8;

loc_00547584: ;
    edi = MEM32(esi + 0xAE4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005475A2; /* je: equal / zero */

loc_0054758E: ;
    edx = MEM32(esi + 0xB00);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi + 0xB0C);
    MEM32(esp + 0x10) = edx;

loc_005475A2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    edx = esi + 0xB00;
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(ebx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(ebx + 8) = ecx;
    ebp = MEM32(eax);
    ecx = esi + 0xB0C;
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_005475E6; /* je: equal / zero */

loc_005475DA: ;
    eax = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;

loc_005475E6: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esi + 0xBA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005475F9u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_005475F9: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    eax = esi + 0xBC0;
    PUSH32(esp, eax);
    MEM8(esi + 0xBBF) = LO8(ebx);
    PUSH32(esp, 0x00547612u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00547612: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    MEM8(esi + 0xBDF) = LO8(ebx);
    MEM32(esi + 0xBE0) = ecx;
    MEM32(esi + 0xBE4) = edx;
    PUSH32(esp, 0x00547632u); RECOMP_ABI_CALL(0x0054A270u, sub_0054A270); /* call 0x0054A270 */

loc_00547632: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547654; /* je: equal / zero */

loc_00547639: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054765D; /* je: equal / zero */

loc_0054763E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547644u); RECOMP_ABI_CALL(0x00546EF0u, sub_00546EF0); /* call 0x00546EF0 */

loc_00547644: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054765D; /* jne: not equal / not zero */

loc_0054764B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547651u); RECOMP_ABI_CALL(0x00546F50u, sub_00546F50); /* call 0x00546F50 */

loc_00547651: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547654: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054765D: ;
    eax = MEM32(esp + 0x20);
    edx = esi + 0xB24;
    MEM32(esi + 0xB20) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00547670: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547670; /* jne: not equal / not zero */

loc_0054767A: ;
    _fa = (uint32_t)(MEM32(esi + 0xB68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054768B; /* je: equal / zero */

loc_00547682: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547688u); RECOMP_ABI_CALL(0x00549D10u, sub_00549D10); /* call 0x00549D10 */

loc_00547688: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054768B: ;
    eax = MEM32(esp + 0x34);
    POP32(esp, edi);
    MEM32(esi + 0xB68) = ebx;
    MEM32(esi + 0xB6C) = ebx;
    MEM32(esi + 0xB74) = ebx;
    MEM32(esi + 0xB64) = eax;
    MEM32(esi + 0xB9C) = ebx;
    MEM32(esi + 0xAE4) = ebx;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005476C0
 * Original: 0x005476C0 - 0x005476F6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005476C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005476C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005476DB; /* jle: less or equal (signed <=) */

loc_005476CF: ;
    MEM32(esi + 0x1900) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005476DB: ;
    MEM32(esi + 0xAE4) = 0;
    PUSH32(esp, 0x005476EAu); RECOMP_ABI_CALL(0x00546F90u, sub_00546F90); /* call 0x00546F90 */

loc_005476EA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x005476F1u); RECOMP_ABI_CALL(0x00547010u, sub_00547010); /* call 0x00547010 */

loc_005476F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547700
 * Original: 0x00547700 - 0x00547761 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547700: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547715; /* je: equal / zero */

loc_0054770C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547712u); RECOMP_ABI_CALL(0x00546F50u, sub_00546F50); /* call 0x00546F50 */

loc_00547712: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547715: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547723; /* jne: not equal / not zero */

loc_0054771C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547744; /* je: equal / zero */

loc_00547723: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x17D4);
    PUSH32(esp, esi);
    MEM32(esi + 0x17D4) = 0;
    PUSH32(esp, 0x0054773Au); RECOMP_ABI_CALL(0x005476C0u, sub_005476C0); /* call 0x005476C0 */

loc_0054773A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x17D4) = edi;
    POP32(esp, edi);

loc_00547744: ;
    eax = MEM32(esi + 0x1850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054775A; /* jle: less or equal (signed <=) */

loc_0054774E: ;
    MEM32(esi + 0x1904) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054775A: ;
    PUSH32(esp, 0x0054775Fu); RECOMP_ABI_CALL(0x00546FE0u, sub_00546FE0); /* call 0x00546FE0 */

loc_0054775F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547770
 * Original: 0x00547770 - 0x0054779E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0054777Cu); RECOMP_ABI_CALL(0x00547010u, sub_00547010); /* call 0x00547010 */

loc_0054777C: ;
    eax = MEM32(esi + 0x1904);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054779C; /* je: equal / zero */

loc_00547789: ;
    eax = MEM32(esi + 0x1850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054779C; /* jne: not equal / not zero */

loc_00547793: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00547799u); RECOMP_ABI_CALL(0x00547700u, sub_00547700); /* call 0x00547700 */

loc_00547799: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054779C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005477A0
 * Original: 0x005477A0 - 0x005477CD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005477A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005477A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005477ABu); RECOMP_ABI_CALL(0x005476C0u, sub_005476C0); /* call 0x005476C0 */

loc_005477AB: ;
    eax = MEM32(esi + 0x1904);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005477CB; /* je: equal / zero */

loc_005477B8: ;
    eax = MEM32(esi + 0x1850);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005477CB; /* jne: not equal / not zero */

loc_005477C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005477C8u); RECOMP_ABI_CALL(0x00547700u, sub_00547700); /* call 0x00547700 */

loc_005477C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005477CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005477D0
 * Original: 0x005477D0 - 0x005477E8 (24 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005477D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005477D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005477E4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005477E1u); } /* indirect call */
    }

loc_005477E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005477F0
 * Original: 0x005477F0 - 0x00547808 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005477F0(void)
{

loc_005477F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00547810
 * Original: 0x00547810 - 0x0054786C (92 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054785D; /* je: equal / zero */

loc_00547843: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547849u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547849: ;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547864; /* je: equal / zero */

loc_00547856: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547864; /* jne: not equal / not zero */

loc_0054785A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054785D: ;
    MEM32(edi + 8) = 0;

loc_00547864: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547870
 * Original: 0x00547870 - 0x005478A6 (54 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547870: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005478A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0054789Fu); } /* indirect call */
    }

loc_005478A2: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005478B0
 * Original: 0x005478B0 - 0x005478FF (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005478B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005478B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005478D6; /* je: equal / zero */

loc_005478BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005478C1u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_005478C1: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005478E0; /* je: equal / zero */

loc_005478D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005478E0; /* jne: not equal / not zero */

loc_005478D4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005478D6: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0;

loc_005478E0: ;
    eax = MEM32(esi + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 0xC) = eax;
    edx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = edx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547900
 * Original: 0x00547900 - 0x0054792E (46 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547900: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0054792Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547927u); } /* indirect call */
    }

loc_0054792A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547930
 * Original: 0x00547930 - 0x0054797A (74 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547930: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054796B; /* je: equal / zero */

loc_00547951: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547957u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547957: ;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547972; /* je: equal / zero */

loc_00547964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00547972; /* jne: not equal / not zero */

loc_00547968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054796B: ;
    MEM32(edi + 8) = 0;

loc_00547972: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547980
 * Original: 0x00547980 - 0x00547990 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547990
 * Original: 0x00547990 - 0x005479BA (42 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547990: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005479B6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005479B3u); } /* indirect call */
    }

loc_005479B6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005479C0
 * Original: 0x005479C0 - 0x005479E2 (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005479C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005479C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005479DEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005479DBu); } /* indirect call */
    }

loc_005479DE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005479F0
 * Original: 0x005479F0 - 0x00547A5C (108 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005479F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005479F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547A1E; /* je: equal / zero */

loc_00547A0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547A11u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547A11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547A25; /* jne: not equal / not zero */

loc_00547A1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547A1E: ;
    MEM32(esi + 4) = 0;

loc_00547A25: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547A4D; /* je: equal / zero */

loc_00547A2C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00547A32u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547A32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547A54; /* jne: not equal / not zero */

loc_00547A3C: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00547A45u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547A45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547A4D: ;
    MEM32(esi + 8) = 0;

loc_00547A54: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547A60
 * Original: 0x00547A60 - 0x00547A7E (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547A60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547A6Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547A6E: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547A80
 * Original: 0x00547A80 - 0x00547AA6 (38 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547A80: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00547AA2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547A9Fu); } /* indirect call */
    }

loc_00547AA2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547AB0
 * Original: 0x00547AB0 - 0x00547B54 (164 bytes, 64 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi);
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547ADE; /* je: equal / zero */

loc_00547ACB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547AD1u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547AD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547AE5; /* jne: not equal / not zero */

loc_00547ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547ADE: ;
    MEM32(esi + 4) = 0;

loc_00547AE5: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547B0D; /* je: equal / zero */

loc_00547AEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547AF2u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547AF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547B14; /* jne: not equal / not zero */

loc_00547AFC: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00547B05u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547B05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547B0D: ;
    MEM32(esi + 8) = 0;

loc_00547B14: ;
    edi = MEM32(edi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547B45; /* je: equal / zero */

loc_00547B1B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00547B21u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547B21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547B4C; /* jne: not equal / not zero */

loc_00547B2B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547B34u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547B34: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547B3Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547B3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547B45: ;
    MEM32(esi + 0xC) = 0;

loc_00547B4C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547B60
 * Original: 0x00547B60 - 0x00547B87 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547B6Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547B6E: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547B77u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547B77: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547B90
 * Original: 0x00547B90 - 0x00547BBA (42 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547B90: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00547BB6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547BB3u); } /* indirect call */
    }

loc_00547BB6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547BC0
 * Original: 0x00547BC0 - 0x00547BE3 (35 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547BC0(void)
{

loc_00547BC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = edx;
    edi = ecx + 4;
    esi = eax + 4;
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
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547BF0
 * Original: 0x00547BF0 - 0x00547C0E (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547BF0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ecx + 4;
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00547C0Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547C07u); } /* indirect call */
    }

loc_00547C0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547C10
 * Original: 0x00547C10 - 0x00547C74 (100 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547C38; /* je: equal / zero */

loc_00547C26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547C2Cu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547C2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547C3E; /* jne: not equal / not zero */

loc_00547C35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547C38: ;
    MEM32(esi) = 0;

loc_00547C3E: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547C65; /* je: equal / zero */

loc_00547C45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547C4Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547C4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547C6C; /* jne: not equal / not zero */

loc_00547C55: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547C5Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547C5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547C65: ;
    MEM32(esi + 4) = 0;

loc_00547C6C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547C80
 * Original: 0x00547C80 - 0x00547C9D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547C80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547C8Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547C8D: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547CA0
 * Original: 0x00547CA0 - 0x00547CC2 (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547CA0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00547CBEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547CBBu); } /* indirect call */
    }

loc_00547CBE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547CD0
 * Original: 0x00547CD0 - 0x00547D6B (155 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547CF8; /* je: equal / zero */

loc_00547CE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547CECu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547CEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547CFE; /* jne: not equal / not zero */

loc_00547CF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547CF8: ;
    MEM32(esi) = 0;

loc_00547CFE: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547D25; /* je: equal / zero */

loc_00547D05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547D0Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547D0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547D2C; /* jne: not equal / not zero */

loc_00547D15: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547D1Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547D1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547D25: ;
    MEM32(esi + 4) = 0;

loc_00547D2C: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547D5C; /* je: equal / zero */

loc_00547D33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547D39u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547D39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547D63; /* jne: not equal / not zero */

loc_00547D43: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00547D4Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547D4B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547D54u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547D54: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547D5C: ;
    MEM32(esi + 8) = 0;

loc_00547D63: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547D70
 * Original: 0x00547D70 - 0x00547D96 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547D70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547D7Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547D7D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547D86u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547D86: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547DA0
 * Original: 0x00547DA0 - 0x00547DD7 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547DA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547DC0; /* je: equal / zero */

loc_00547DAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547DB1u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547DB1: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547DCA; /* jne: not equal / not zero */

loc_00547DBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547DC0: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0;

loc_00547DCA: ;
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547DE0
 * Original: 0x00547DE0 - 0x00547E46 (102 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547E08; /* je: equal / zero */

loc_00547DF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547DFBu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547DFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547E0F; /* jne: not equal / not zero */

loc_00547E05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547E08: ;
    MEM32(esi + 4) = 0;

loc_00547E0F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547E37; /* je: equal / zero */

loc_00547E16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547E1Cu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547E1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547E3E; /* jne: not equal / not zero */

loc_00547E26: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00547E2Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547E2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547E37: ;
    MEM32(esi + 8) = 0;

loc_00547E3E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547E50
 * Original: 0x00547E50 - 0x00547E62 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547E50(void)
{

loc_00547E50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00547E70
 * Original: 0x00547E70 - 0x00547EB3 (67 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547E70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547E98; /* je: equal / zero */

loc_00547E85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547E8Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547E8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547E9F; /* jne: not equal / not zero */

loc_00547E95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547E98: ;
    MEM32(esi + 4) = 0;

loc_00547E9F: ;
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0xC);
    POP32(esp, edi);
    MEM32(esi + 0xC) = edx;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547EC0
 * Original: 0x00547EC0 - 0x00547EF5 (53 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547EC0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + edx * 4 + 0x3AC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547EF2; /* je: equal / zero */

loc_00547EDA: ;
    edi = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00547EEFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547EECu); } /* indirect call */
    }

loc_00547EEF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00547EF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547F00
 * Original: 0x00547F00 - 0x00547F2E (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547F00: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547F1E; /* je: equal / zero */

loc_00547F0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547F10u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547F10: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547F28; /* jne: not equal / not zero */

loc_00547F1D: ;
    esp += 4; return; /* ret */

loc_00547F1E: ;
    edx = MEM32(esp + 4);
    MEM32(edx) = 0;

loc_00547F28: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00547F30
 * Original: 0x00547F30 - 0x00547F4A (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547F30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00547F46u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00547F43u); } /* indirect call */
    }

loc_00547F46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00547F50
 * Original: 0x00547F50 - 0x00547F83 (51 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547F50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547F76; /* je: equal / zero */

loc_00547F65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547F6Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547F6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547F7C; /* jne: not equal / not zero */

loc_00547F74: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547F76: ;
    MEM32(esi) = 0;

loc_00547F7C: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00547F90
 * Original: 0x00547F90 - 0x00547F9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00547F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00547FA0
 * Original: 0x00547FA0 - 0x00548003 (99 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00547FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00547FA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547FC4; /* je: equal / zero */

loc_00547FAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547FB3u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547FB3: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547FCF; /* jne: not equal / not zero */

loc_00547FC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547FC4: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0;

loc_00547FCF: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00547FF5; /* je: equal / zero */

loc_00547FD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547FDBu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00547FDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00547FFB; /* jne: not equal / not zero */

loc_00547FE4: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00547FEDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00547FED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00547FF5: ;
    MEM32(esi) = 0;

loc_00547FFB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548010
 * Original: 0x00548010 - 0x0054802D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054801Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054801E: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00548030
 * Original: 0x00548030 - 0x005480CE (158 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548058; /* je: equal / zero */

loc_00548045: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054804Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_0054804B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0054805F; /* jne: not equal / not zero */

loc_00548055: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00548058: ;
    MEM32(esi + 4) = 0;

loc_0054805F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548087; /* je: equal / zero */

loc_00548066: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054806Cu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_0054806C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0054808E; /* jne: not equal / not zero */

loc_00548076: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054807Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054807F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00548087: ;
    MEM32(esi + 8) = 0;

loc_0054808E: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005480BF; /* je: equal / zero */

loc_00548095: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054809Bu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_0054809B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005480C6; /* jne: not equal / not zero */

loc_005480A5: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005480AEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005480AE: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005480B7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005480B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005480BF: ;
    MEM32(esi + 0xC) = 0;

loc_005480C6: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005480D0
 * Original: 0x005480D0 - 0x005480F3 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005480D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005480D0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005480EFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005480ECu); } /* indirect call */
    }

loc_005480EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548100
 * Original: 0x00548100 - 0x005482B2 (434 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    MEM32(ebx + 4) = edi;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 1;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0054814E; /* je: equal / zero */

loc_00548136: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054813Cu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_0054813C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00548154; /* jne: not equal / not zero */

loc_00548145: ;
    MEM32(esp + 0x10) = eax;
    goto loc_0054824D;

loc_0054814E: ;
    MEM32(ebx) = 0;

loc_00548154: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005482AA; /* je: equal / zero */

loc_0054815C: ;
    PUSH32(esp, 0x8DB);
    esi = edi * 4;
    PUSH32(esp, 0x64EFC8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00548173u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00548173: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00548188; /* jne: not equal / not zero */

loc_0054817F: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00548249;

loc_00548188: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005482A0; /* je: equal / zero */

loc_005481A7: ;
    PUSH32(esp, 0x8E4);
    PUSH32(esp, 0x64EFC8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005481B7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005481B7: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_005481CC; /* jne: not equal / not zero */

loc_005481C3: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00548249;

loc_005481CC: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005482A0; /* je: equal / zero */

loc_005481EB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005481F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00548243; /* jge: greater or equal (signed >=) */

loc_005481F6: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548202u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548202: ;
    edx = MEM32(ebx + 8);
    MEM32(edx + esi * 4) = eax;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548234; /* je: equal / zero */

loc_00548215: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548221u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548221: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(edx + esi * 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548238; /* jne: not equal / not zero */

loc_00548234: ;
    MEM32(esp + 0x10) = edi;

loc_00548238: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005481F0; /* jne: not equal / not zero */

loc_00548241: ;
    goto loc_00548249;

loc_00548243: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005482A0; /* jne: not equal / not zero */

loc_00548249: ;
    edi = MEM32(esp + 0x18);

loc_0054824D: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548255u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054828B; /* jle: less or equal (signed <=) */

loc_0054825E: ;
    edi = edi;

loc_00548260: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548273; /* je: equal / zero */

loc_00548267: ;
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548270u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548270: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548273: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548286; /* je: equal / zero */

loc_0054827A: ;
    edx = MEM32(eax + esi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548283u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548283: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548286: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00548260; /* jl: less (signed <) */

loc_0054828B: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548294u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548294: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054829Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054829D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005482A0: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005482AA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005482C0
 * Original: 0x005482C0 - 0x00548324 (100 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005482C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005482C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005482CEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005482CE: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054830A; /* jle: less or equal (signed <=) */

loc_005482DA: ;
    /* nop */

loc_005482E0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005482ECu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005482EC: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548302; /* je: equal / zero */

loc_005482F6: ;
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005482FFu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005482FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548302: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005482E0; /* jl: less (signed <) */

loc_0054830A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548313u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548313: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00548330
 * Original: 0x00548330 - 0x005484EA (442 bytes, 164 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ebx = MEM32(ebp + 8);
    MEM32(esi + 8) = ebx;
    edx = MEM32(ebp);
    MEM32(esi) = edx;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 1;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00548387; /* je: equal / zero */

loc_0054836E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548374u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548374: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0054838E; /* jne: not equal / not zero */

loc_0054837E: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00548486;

loc_00548387: ;
    MEM32(esi + 4) = 0;

loc_0054838E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005484E2; /* je: equal / zero */

loc_00548396: ;
    PUSH32(esp, 0x963);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x64EFC8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005483A9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005483A9: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_005483BE; /* jne: not equal / not zero */

loc_005483B5: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00548482;

loc_005483BE: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005484D8; /* je: equal / zero */

loc_005483DB: ;
    PUSH32(esp, 0x96C);
    PUSH32(esp, 0x64EFC8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005483EBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005483EB: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00548400; /* jne: not equal / not zero */

loc_005483F7: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00548482;

loc_00548400: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005484D8; /* je: equal / zero */

loc_0054841D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00548420: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0054847A; /* jge: greater or equal (signed >=) */

loc_00548426: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548432u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548432: ;
    edx = MEM32(esi + 0xC);
    MEM32(edx + edi * 4) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + edi * 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054846B; /* je: equal / zero */

loc_00548447: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054846F; /* je: equal / zero */

loc_0054844C: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548458u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548458: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = eax;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + edi * 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054846F; /* jne: not equal / not zero */

loc_0054846B: ;
    MEM32(esp + 0x10) = ebx;

loc_0054846F: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548420; /* jne: not equal / not zero */

loc_00548478: ;
    goto loc_00548482;

loc_0054847A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005484D8; /* jne: not equal / not zero */

loc_00548482: ;
    ebx = MEM32(esp + 0x18);

loc_00548486: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054848Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054848F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005484C3; /* jle: less or equal (signed <=) */

loc_00548498: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005484AB; /* je: equal / zero */

loc_0054849F: ;
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005484A8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005484A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005484AB: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005484BE; /* je: equal / zero */

loc_005484B2: ;
    edx = MEM32(eax + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005484BBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005484BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005484BE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00548498; /* jl: less (signed <) */

loc_005484C3: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005484CCu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005484CC: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005484D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005484D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005484D8: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005484E2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005484F0
 * Original: 0x005484F0 - 0x00548554 (100 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005484F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005484F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005484FFu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005484FF: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054853A; /* jle: less or equal (signed <=) */

loc_0054850B: ;
    goto loc_00548510;

    /* nop */

loc_00548510: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0054851Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054851C: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548532; /* je: equal / zero */

loc_00548526: ;
    eax = MEM32(eax + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054852Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0054852F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548532: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00548510; /* jl: less (signed <) */

loc_0054853A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548543u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548543: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00548560
 * Original: 0x00548560 - 0x005485A0 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548560: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548592; /* je: equal / zero */

loc_00548580: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548586u); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_00548586: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00548599; /* jne: not equal / not zero */

loc_00548590: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00548592: ;
    MEM32(esi + 4) = 0;

loc_00548599: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005485A0
 * Original: 0x005485A0 - 0x005485D4 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005485A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005485A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = ecx;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005485C6; /* je: equal / zero */

loc_005485B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005485BAu); RECOMP_ABI_CALL(0x005571D0u, sub_005571D0); /* call 0x005571D0 */

loc_005485BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005485CD; /* jne: not equal / not zero */

loc_005485C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005485C6: ;
    MEM32(esi + 4) = 0;

loc_005485CD: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005485E0
 * Original: 0x005485E0 - 0x005485F0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005485E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005485E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_005485F0
 * Original: 0x005485F0 - 0x0054860E (30 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005485F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005485F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0054860Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00548607u); } /* indirect call */
    }

loc_0054860A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548610
 * Original: 0x00548610 - 0x00548634 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548610: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x64EDC0); PUSH32(esp, 0x00548624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0054861Eu); } /* indirect call */
    }

loc_00548624: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00577320(); return; /* tail jmp 0x00577320 */

}

/**
 * sub_00548640
 * Original: 0x00548640 - 0x00548685 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x548610);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x1848) = 0;
    MEM32(esi + 0x184C) = 0;
    MEM32(esi + 0x1850) = 0;
    PUSH32(esp, 0x00548671u); RECOMP_ABI_CALL(0x005575F0u, sub_005575F0); /* call 0x005575F0 */

loc_00548671: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x1844) = eax;
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00548690
 * Original: 0x00548690 - 0x005486A8 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548690: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1844);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005486A7; /* je: equal / zero */

loc_0054869E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00557860(); return; /* tail jmp 0x00557860 */

loc_005486A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005486B0
 * Original: 0x005486B0 - 0x00548704 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005486B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005486B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = eax;
    MEM32(edi + 0x18) = 1;
    MEM32(esi + 0x1850) = MEM32(esi + 0x1850) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1850)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    PUSH32(esp, edi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x64EDC4); PUSH32(esp, 0x005486CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005486C7u); } /* indirect call */
    }

loc_005486CD: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x18) = 0;
    eax = MEM32(esi + 0x1850);
    edi = MEM32(esi + 0x184C);
    edx = MEM32(esi + 0x1844);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi + 0x1850) = eax;
    MEM32(esi + 0x184C) = edi;
    PUSH32(esp, 0x005486FFu); RECOMP_ABI_CALL(0x00557900u, sub_00557900); /* call 0x00557900 */

loc_005486FF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548710
 * Original: 0x00548710 - 0x005487BC (172 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0054876C; /* je: equal / zero */

loc_00548721: ;
    eax = MEM32(esi + 0x1844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054872Du); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_0054872D: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005487B7; /* jle: less or equal (signed <=) */

loc_00548738: ;
    ecx = MEM32(esi + 0x1844);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548745u); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_00548745: ;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054875E; /* je: equal / zero */

loc_0054874F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054875E; /* je: equal / zero */

loc_00548754: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00548738; /* jl: less (signed <) */

loc_00548759: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0054875E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00548764u); RECOMP_ABI_CALL(0x005486B0u, sub_005486B0); /* call 0x005486B0 */

loc_00548764: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0054876C: ;
    edx = MEM32(esi + 0x1844);
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0054877Au); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_0054877A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005487B7; /* jle: less or equal (signed <=) */

loc_00548781: ;
    eax = MEM32(esi + 0x1844);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054878Eu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_0054878E: ;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054879B; /* je: equal / zero */

loc_00548798: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005487A4;

loc_0054879B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005487A1u); RECOMP_ABI_CALL(0x005486B0u, sub_005486B0); /* call 0x005486B0 */

loc_005487A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005487A4: ;
    ecx = MEM32(esi + 0x1844);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005487B0u); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_005487B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00548781; /* jg: greater (signed >) */

loc_005487B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005487C0
 * Original: 0x005487C0 - 0x0054888D (205 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005487C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005487C0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005487D8; /* jne: not equal / not zero */

loc_005487CF: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005487D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBDF);
    PUSH32(esp, 0x64EFC8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005487E9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005487E9: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054882B; /* je: equal / zero */

loc_005487F2: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x64EDBC); PUSH32(esp, 0x0054881Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00548815u); } /* indirect call */
    }

loc_0054881B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548835; /* jne: not equal / not zero */

loc_00548822: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00548828u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548828: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054882B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00548835: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0xC;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x1844);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00548872u); RECOMP_ABI_CALL(0x00557A10u, sub_00557A10); /* call 0x00557A10 */

loc_00548872: ;
    eax = MEM32(ebx + 0x1848);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ebx + 0x1848) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548890
 * Original: 0x00548890 - 0x005488DD (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1844);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005488A2u); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_005488A2: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_005488DA; /* js: sign (negative) */

loc_005488AA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    /* nop */

loc_005488B0: ;
    ecx = MEM32(edi + 0x1844);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005488BDu); RECOMP_ABI_CALL(0x00557670u, sub_00557670); /* call 0x00557670 */

loc_005488BD: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005488D6; /* jne: not equal / not zero */

loc_005488C6: ;
    edx = MEM32(edi + 0x1844);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005488D3u); RECOMP_ABI_CALL(0x00557900u, sub_00557900); /* call 0x00557900 */

loc_005488D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005488D6: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_005488B0; /* jns: not sign (positive) */

loc_005488D9: ;
    POP32(esp, ebx);

loc_005488DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005488E0
 * Original: 0x005488E0 - 0x0054894D (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005488E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005488E0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x28);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x1C;
    PUSH32(esp, 0x00548945u); RECOMP_ABI_CALL(0x005487C0u, sub_005487C0); /* call 0x005487C0 */

loc_00548945: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548950
 * Original: 0x00548950 - 0x00548A25 (213 bytes, 73 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548950: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00548998; /* je: equal / zero */

loc_0054895F: ;
    PUSH32(esp, 0x64EFE4);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054896Fu); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_0054896F: ;
    PUSH32(esp, 0x62DF21);
    PUSH32(esp, 0x64EFD8);
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x00548981u); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_00548981: ;
    PUSH32(esp, 0x632A84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054898Cu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0054898C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0054899C;

loc_00548998: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0054899C: ;
    ebx = MEM32(esp + 0x28);
    eax = MEM32(ebx + 0x17BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005489D7; /* je: equal / zero */

loc_005489AA: ;
    eax = ebx + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005489B6u); RECOMP_ABI_CALL(0x00554190u, sub_00554190); /* call 0x00554190 */

loc_005489B6: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005489D3; /* je: equal / zero */

loc_005489BF: ;
    _fb = (uint32_t)(MEM32(ebx + 0x1788)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebx + 0x1788)));
    eax = eax - MEM32(ebx + 0x1788);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebx + 0x177C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebx + 0x177C)));
    eax = eax - MEM32(ebx + 0x177C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_005489DC;

loc_005489D3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005489DC;

loc_005489D7: ;
    eax = 0x64;

loc_005489DC: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ebx + 0x17B8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx + 0x17B4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x14;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0x00548A1Au); RECOMP_ABI_CALL(0x005487C0u, sub_005487C0); /* call 0x005487C0 */

loc_00548A1A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548A30
 * Original: 0x00548A30 - 0x00548A77 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x1814);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548A72; /* je: equal / zero */

loc_00548A42: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx + 0x1840);
    PUSH32(esp, 0x17);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = 8;
    PUSH32(esp, 0x00548A6Fu); RECOMP_ABI_CALL(0x005487C0u, sub_005487C0); /* call 0x005487C0 */

loc_00548A6F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548A72: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548A80
 * Original: 0x00548A80 - 0x00548AA4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548A90u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548A90: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548A99u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548A99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00548A9Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00548A9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548AB0
 * Original: 0x00548AB0 - 0x00548AEB (59 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548AB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x548A80);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esi + 0x17CC) = 0;
    MEM32(esi + 0x17D0) = 0;
    PUSH32(esp, 0x00548AD7u); RECOMP_ABI_CALL(0x005575F0u, sub_005575F0); /* call 0x005575F0 */

loc_00548AD7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x17C8) = eax;
    POP32(esp, esi);
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00548AF0
 * Original: 0x00548AF0 - 0x00548B03 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548AF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x17C8);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_005579E0(); return; /* tail jmp 0x005579E0 */

}

/**
 * sub_00548B10
 * Original: 0x00548B10 - 0x00548B28 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548B10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x17C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548B27; /* je: equal / zero */

loc_00548B1E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00557860(); return; /* tail jmp 0x00557860 */

loc_00548B27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00548B30
 * Original: 0x00548B30 - 0x00548B50 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548B30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548B50
 * Original: 0x00548B50 - 0x00548B9E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548B50: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x17C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x548B30);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00548B77u); RECOMP_ABI_CALL(0x00557950u, sub_00557950); /* call 0x00557950 */

loc_00548B77: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548B9C; /* je: equal / zero */

loc_00548B7F: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x17C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548B8Cu); RECOMP_ABI_CALL(0x00557900u, sub_00557900); /* call 0x00557900 */

loc_00548B8C: ;
    eax = MEM32(esi + 0x17D0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x17D0) = eax;

loc_00548B9C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548BA0
 * Original: 0x00548BA0 - 0x00548C3B (155 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548BA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    edx = edi + 0x40;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edx;
    esi = edi;
    eax = edx;
    /* nop */

loc_00548BC0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00548BE4; /* jne: not equal / not zero */

loc_00548BC8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00548BE0; /* je: equal / zero */

loc_00548BCC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00548BE4; /* jne: not equal / not zero */

loc_00548BD6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00548BC0; /* jne: not equal / not zero */

loc_00548BE0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00548BE9;

loc_00548BE4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00548BE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00548BF5; /* jge: greater or equal (signed >=) */

loc_00548BED: ;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edi;

loc_00548BF5: ;
    ebx = MEM32(esp + 0x20);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00548C00;

    /* nop */

loc_00548C00: ;
    esi = MEM32(esp + edi * 4 + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00548C23; /* je: equal / zero */

loc_00548C0B: ;
    goto loc_00548C10;

    /* nop */

loc_00548C10: ;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00548C17u); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_00548C17: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(eax)) >> 32) & 1);
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00548C10; /* jne: not equal / not zero */

loc_00548C23: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00548C00; /* jl: less (signed <) */

loc_00548C31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548C40
 * Original: 0x00548C40 - 0x00548CE4 (164 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00548C40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    MEM32(esp) = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = eax;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_00548C70;

    /* nop */

loc_00548C70: ;
    edi = MEM32(esp + edx * 8 + 0x10);
    ebp = MEM32(esp + edx * 8 + 0x14);
    esi = edi;
    eax = ebp;
    /* nop */

loc_00548C80: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00548CA4; /* jne: not equal / not zero */

loc_00548C88: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00548CA0; /* je: equal / zero */

loc_00548C8C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00548CA4; /* jne: not equal / not zero */

loc_00548C96: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00548C80; /* jne: not equal / not zero */

loc_00548CA0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00548CA9;

loc_00548CA4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00548CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00548CB5; /* jge: greater or equal (signed >=) */

loc_00548CAD: ;
    MEM32(esp + edx * 8 + 0x10) = ebp;
    MEM32(esp + edx * 8 + 0x14) = edi;

loc_00548CB5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00548C70; /* jl: less (signed <) */

loc_00548CBB: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00548CC0: ;
    eax = MEM32(esp + esi * 4 + 0x18);
    ecx = MEM32(esp + esi * 4 + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548CCFu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00548CCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00548CDC; /* jne: not equal / not zero */

loc_00548CD6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00548CC0; /* jl: less (signed <) */

loc_00548CDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548CF0
 * Original: 0x00548CF0 - 0x00548D9C (172 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548CF0: ;
    edx = MEM32(esi + 0x98);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x78);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x7C) = 0;
    MEM32(esi + 0x98) = edx;
    PUSH32(esp, 0x00548D11u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00548D11: ;
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00548D42; /* jle: less or equal (signed <=) */

loc_00548D1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00548D28; /* jl: less (signed <) */

loc_00548D23: ;
    eax = 3;

loc_00548D28: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    edx = esi + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548D3Fu); RECOMP_ABI_CALL(0x00619BF0u, sub_00619BF0); /* call 0x00619BF0 */

loc_00548D3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548D42: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = esi + 0x84;
    MEM32(ecx) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00548D5C; /* jge: greater or equal (signed >=) */

loc_00548D55: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x94) = eax;

loc_00548D5C: ;
    edi = MEM32(esi + 0x94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00548D78; /* jle: less or equal (signed <=) */

loc_00548D68: ;
    edx = edi;
    /* nop */

loc_00548D70: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00548D70; /* jne: not equal / not zero */

loc_00548D78: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548D8Du); RECOMP_ABI_CALL(0x00548A30u, sub_00548A30); /* call 0x00548A30 */

loc_00548D8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9C) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548DA0
 * Original: 0x00548DA0 - 0x00548DCA (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548DA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00548DB0u); RECOMP_ABI_CALL(0x005497D0u, sub_005497D0); /* call 0x005497D0 */

loc_00548DB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548DC8; /* je: equal / zero */

loc_00548DB7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x00548DC4u); RECOMP_ABI_CALL(0x00548CF0u, sub_00548CF0); /* call 0x00548CF0 */

loc_00548DC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00548DC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548DD0
 * Original: 0x00548DD0 - 0x00548E49 (121 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5C3530);
    PUSH32(esp, 0x548C40);
    PUSH32(esp, 0x548BA0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x84);
    PUSH32(esp, 0x00548DECu); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_00548DEC: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xB18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00548E1A; /* je: equal / zero */

loc_00548DFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x548DA0);
    PUSH32(esp, 0x3353);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00548E13u); RECOMP_ABI_CALL(0x00552460u, sub_00552460); /* call 0x00552460 */

loc_00548E13: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548E1E; /* jne: not equal / not zero */

loc_00548E1A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00548E1E: ;
    MEM32(esi + 0xAFC) = 0;
    MEM32(esi + 0xB1C) = 0;
    PUSH32(esp, 0x00548E37u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00548E37: ;
    MEM32(0x679680) = eax;
    eax = 1;
    MEM32(esi + 0xAF8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548E50
 * Original: 0x00548E50 - 0x00548E95 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xAE4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548E92; /* jne: not equal / not zero */

loc_00548E62: ;
    eax = MEM32(esi + 0xB18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0xAFC) = edi;
    MEM32(esi + 0xB1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00548E81; /* je: equal / zero */

loc_00548E78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00548E7Eu); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_00548E7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00548E81: ;
    MEM32(esi + 0xB18) = edi;
    PUSH32(esp, 0x00548E8Cu); RECOMP_ABI_CALL(0x00552580u, sub_00552580); /* call 0x00552580 */

loc_00548E8C: ;
    MEM32(esi + 0xAF8) = edi;

loc_00548E92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548EA0
 * Original: 0x00548EA0 - 0x00548EE7 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548EA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548EE5; /* je: equal / zero */

loc_00548EAC: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548EE5; /* je: equal / zero */

loc_00548EB3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548EE5; /* jne: not equal / not zero */

loc_00548EBF: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x74) = 0;
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548ED9; /* jne: not equal / not zero */

loc_00548ECF: ;
    eax = MEM32(esi + 0x7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(esi + 0x7C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00548ED9: ;
    edx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00548EE1u); RECOMP_ABI_CALL(0x00548CF0u, sub_00548CF0); /* call 0x00548CF0 */

loc_00548EE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00548EE5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00548EF0
 * Original: 0x00548EF0 - 0x00548F25 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548EF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 4) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0xAE8);
    PUSH32(esp, 0x548EA0);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00548F21u); RECOMP_ABI_CALL(0x00557C20u, sub_00557C20); /* call 0x00557C20 */

loc_00548F21: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00548F30
 * Original: 0x00548F30 - 0x00548F73 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00548F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548F30: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00548F72; /* jne: not equal / not zero */

loc_00548F37: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0x1388);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x548EF0);
    PUSH32(esp, 0x3353);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00548F56u); RECOMP_ABI_CALL(0x00552A80u, sub_00552A80); /* call 0x00552A80 */

loc_00548F56: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x74) = 1;
    PUSH32(esp, 0x00548F65u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00548F65: ;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0xA8) = 0;

loc_00548F72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00548F80
 * Original: 0x00548F80 - 0x00549108 (392 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00548F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00548F80: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549105; /* je: equal / zero */

loc_00548F9F: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549105; /* je: equal / zero */

loc_00548FAA: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549105; /* jne: not equal / not zero */

loc_00548FB5: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549105; /* jne: not equal / not zero */

loc_00548FC0: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00548FD2; /* je: equal / zero */

loc_00548FC9: ;
    _fa = (uint32_t)(MEM8(esi + 0x5C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x5C), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00549105; /* jne: not equal / not zero */

loc_00548FD2: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548FE2; /* je: equal / zero */

loc_00548FD9: ;
    _fa = (uint32_t)(MEM8(esi + 0x60)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x60), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00549105; /* jne: not equal / not zero */

loc_00548FE2: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00548FF2; /* je: equal / zero */

loc_00548FE9: ;
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x64), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00549105; /* jne: not equal / not zero */

loc_00548FF2: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00549062; /* jne: not equal / not zero */

loc_00548FFE: ;
    PUSH32(esp, 0x00549003u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00549003: ;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7C), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0054901C; /* jl: less (signed <) */

loc_00549009: ;
    edi = MEM32(esi + 0x68);
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D4C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D4C0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00549103; /* jb: below (unsigned <) */

loc_0054901C: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054902A; /* je: equal / zero */

loc_00549023: ;
    ecx = 0x7D0;
    goto loc_00549042;

loc_0054902A: ;
    edx = MEM32(esi + 0x78);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFF9E58u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549042: ;
    ebx = MEM32(esi + 0x68);
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00549103; /* jb: below (unsigned <) */

loc_00549051: ;
    _fb = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x5DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5DC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00549103; /* jb: below (unsigned <) */

loc_00549062: ;
    ebx = MEM32(ebp + 8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_005490CD; /* js: sign (negative) */

loc_00549068: ;
    eax = MEM32(ebp + 4);
    edi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005490CA; /* je: equal / zero */

loc_00549072: ;
    eax = MEM32(edi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549086; /* jne: not equal / not zero */

loc_0054907C: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005490CD; /* jne: not equal / not zero */

loc_00549086: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549094; /* je: equal / zero */

loc_0054908D: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005490CD; /* je: equal / zero */

loc_00549094: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005490A1u); RECOMP_ABI_CALL(0x00549850u, sub_00549850); /* call 0x00549850 */

loc_005490A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005490BC; /* je: equal / zero */

loc_005490A8: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005490B5u); RECOMP_ABI_CALL(0x00549850u, sub_00549850); /* call 0x00549850 */

loc_005490B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005490CD; /* je: equal / zero */

loc_005490BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005490C3u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_005490C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005490CD; /* jl: less (signed <) */

loc_005490CA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00549068; /* jns: not sign (positive) */

loc_005490CD: ;
    eax = MEM32(ebp + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549103; /* je: equal / zero */

loc_005490D5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005490F1; /* jle: less or equal (signed <=) */

loc_005490DA: ;
    /* nop */

loc_005490E0: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + eax * 4 + -4);
    ecx = ecx + eax * 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_005490E0; /* jg: greater (signed >) */

loc_005490F1: ;
    eax = MEM32(ebp + 4);
    MEM32(eax + ebx * 4) = esi;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00549103; /* jge: greater or equal (signed >=) */

loc_005490FF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;

loc_00549103: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00549105: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00549110
 * Original: 0x00549110 - 0x00549197 (135 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00549110: ;
    eax = MEM32(ebx + 0xAE8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0054918B; /* je: equal / zero */

loc_0054911D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0054918B; /* je: equal / zero */

loc_00549122: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549128u); RECOMP_ABI_CALL(0x00557AF0u, sub_00557AF0); /* call 0x00557AF0 */

loc_00549128: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0054918B; /* je: equal / zero */

loc_0054912F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = 0x6C39E4;
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00549149; /* jle: less or equal (signed <=) */

loc_00549144: ;
    eax = 0xC;

loc_00549149: ;
    ecx = eax;
    MEM32(esp + 0xC) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 0xAE8);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x548F80);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00549171u); RECOMP_ABI_CALL(0x00557C20u, sub_00557C20); /* call 0x00557C20 */

loc_00549171: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    eax = MEM32(ecx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054918B: ;
    MEM32(esi) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005491A0
 * Original: 0x005491A0 - 0x00549293 (243 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005491A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005491A0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xBC);
    eax = MEM32(ebp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054928B; /* je: equal / zero */

loc_005491BC: ;
    eax = MEM32(ebp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005491CDu); RECOMP_ABI_CALL(0x0054AAF0u, sub_0054AAF0); /* call 0x0054AAF0 */

loc_005491CD: ;
    edx = MEM32(ebp + 0x80);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x62E008);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005491E8u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_005491E8: ;
    eax = MEM32(esp + 0xDC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x9C;
    esi = eax + 0xAEC;
    ebx = ebp + 0x40;
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_00549210: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549252; /* je: equal / zero */

loc_00549215: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549252; /* je: equal / zero */

loc_0054921C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x20 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00549252; /* jg: greater (signed >) */

loc_00549221: ;
    ecx = MEM32(esi + -1856);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549235; /* jne: not equal / not zero */

loc_0054922B: ;
    ecx = MEM32(esi + -1868);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549252; /* je: equal / zero */

loc_00549235: ;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64EFF0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549248u); RECOMP_ABI_CALL(0x005473C0u, sub_005473C0); /* call 0x005473C0 */

loc_00549248: ;
    eax = MEM32(esp + 0xD8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549252: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x101) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x101;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00549210; /* jne: not equal / not zero */

loc_00549269: ;
    MEM32(ebp + 0x9C) = 1;
    PUSH32(esp, 0x00549278u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00549278: ;
    ecx = MEM32(esp + 0xC4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x70) = eax;
    MEM32(ecx + 0xB1C) = eax;
    POP32(esp, ebx);

loc_0054928B: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005492A0
 * Original: 0x005492A0 - 0x005492F7 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005492A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005492A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005492F5; /* je: equal / zero */

loc_005492AF: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005492F5; /* jne: not equal / not zero */

loc_005492B6: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005492F5; /* je: equal / zero */

loc_005492C0: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005492F5; /* jne: not equal / not zero */

loc_005492CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005492D0u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_005492D0: ;
    edi = MEM32(esi + 0x70);
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1388 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005492F4; /* jb: below (unsigned <) */

loc_005492DF: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005492F1; /* je: equal / zero */

loc_005492EA: ;
    _fb = (uint32_t)(MEM32(edx + 0x70)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005492F4; /* jbe: below or equal (unsigned <=) */

loc_005492F1: ;
    MEM32(edi + 4) = esi;

loc_005492F4: ;
    POP32(esp, edi);

loc_005492F5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549300
 * Original: 0x00549300 - 0x0054934D (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549300: ;
    eax = MEM32(esi + 0xAE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549347; /* je: equal / zero */

loc_0054930D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549313u); RECOMP_ABI_CALL(0x00557AF0u, sub_00557AF0); /* call 0x00557AF0 */

loc_00549313: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549347; /* je: equal / zero */

loc_0054931A: ;
    ecx = MEM32(esi + 0xAE8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5492A0);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0054933Cu); RECOMP_ABI_CALL(0x00557C20u, sub_00557C20); /* call 0x00557C20 */

loc_0054933C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00549347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549350
 * Original: 0x00549350 - 0x0054942A (218 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549350: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0xAF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549427; /* je: equal / zero */

loc_00549364: ;
    eax = MEM32(ebx + 0xB74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549427; /* jne: not equal / not zero */

loc_00549372: ;
    eax = MEM32(ebx + 0x1854);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549427; /* jne: not equal / not zero */

loc_00549380: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549388u); RECOMP_ABI_CALL(0x00557190u, sub_00557190); /* call 0x00557190 */

loc_00549388: ;
    edi = eax;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebx + 0xAFC);
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0054941D; /* je: equal / zero */

loc_005493A2: ;
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005493B4; /* je: equal / zero */

loc_005493AE: ;
    MEM32(ebx + 0xAFC) = edx;

loc_005493B4: ;
    esi = esp + 0x18;
    PUSH32(esp, 0x005493BDu); RECOMP_ABI_CALL(0x00549110u, sub_00549110); /* call 0x00549110 */

loc_005493BD: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005493EE; /* je: equal / zero */

loc_005493C3: ;
    eax = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005493EA; /* jle: less or equal (signed <=) */

loc_005493CD: ;
    /* nop */

loc_005493D0: ;
    esi = MEM32(ebp + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005493EA; /* je: equal / zero */

loc_005493D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005493DEu); RECOMP_ABI_CALL(0x00548F30u, sub_00548F30); /* call 0x00548F30 */

loc_005493DE: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005493D0; /* jl: less (signed <) */

loc_005493EA: ;
    edi = MEM32(esp + 0x10);

loc_005493EE: ;
    _fb = (uint32_t)(MEM32(ebx + 0xB1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + 0xB1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7D0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00549411; /* jbe: below or equal (unsigned <=) */

loc_005493FC: ;
    esi = ebx;
    PUSH32(esp, 0x00549403u); RECOMP_ABI_CALL(0x00549300u, sub_00549300); /* call 0x00549300 */

loc_00549403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549411; /* je: equal / zero */

loc_00549407: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054940Eu); RECOMP_ABI_CALL(0x005491A0u, sub_005491A0); /* call 0x005491A0 */

loc_0054940E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549411: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00552A50(); return; /* tail jmp 0x00552A50 */

loc_0054941D: ;
    MEM32(esp + 0x18) = 1;
    goto loc_005493AE;

loc_00549427: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00549430
 * Original: 0x00549430 - 0x00549441 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549430: ;
    edx = MEM32(ecx + 0xB18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0054943Du); RECOMP_ABI_CALL(0x00557B80u, sub_00557B80); /* call 0x00557B80 */

loc_0054943D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549450
 * Original: 0x00549450 - 0x005494D4 (132 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549450: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    esi = edi;
    ecx = ebp;

loc_00549463: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00549487; /* jne: not equal / not zero */

loc_0054946B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00549483; /* je: equal / zero */

loc_0054946F: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00549487; /* jne: not equal / not zero */

loc_00549479: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00549463; /* jne: not equal / not zero */

loc_00549483: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0054948C;

loc_00549487: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0054948C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005494C2; /* je: equal / zero */

loc_00549490: ;
    esi = edi;
    ecx = ebp + 0x40;

loc_00549495: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005494B9; /* jne: not equal / not zero */

loc_0054949D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005494B5; /* je: equal / zero */

loc_005494A1: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005494B9; /* jne: not equal / not zero */

loc_005494AB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00549495; /* jne: not equal / not zero */

loc_005494B5: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005494BE;

loc_005494B9: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005494BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005494CF; /* jne: not equal / not zero */

loc_005494C2: ;
    ecx = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00549430(); return; /* tail jmp 0x00549430 */

loc_005494CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005494E0
 * Original: 0x005494E0 - 0x005495CC (236 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005494E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005494E0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xAF8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005495C8; /* je: equal / zero */

loc_005494F5: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0054954E; /* je: equal / zero */

loc_00549504: ;
    esi = MEM32(eax + 0x40);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054951C; /* je: equal / zero */

loc_0054950D: ;
    esi = MEM32(edx + 0xB00);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054951C; /* je: equal / zero */

loc_00549517: ;
    ecx = 1;

loc_0054951C: ;
    esi = MEM32(eax + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549532; /* je: equal / zero */

loc_00549523: ;
    esi = MEM32(edx + 0xB04);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549532; /* je: equal / zero */

loc_0054952D: ;
    ecx = 1;

loc_00549532: ;
    esi = MEM32(eax + 0x48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549548; /* je: equal / zero */

loc_00549539: ;
    esi = MEM32(edx + 0xB08);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549548; /* je: equal / zero */

loc_00549543: ;
    ecx = 1;

loc_00549548: ;
    MEM32(eax + 0xA0) = ecx;

loc_0054954E: ;
    ecx = MEM32(eax + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005495C7; /* je: equal / zero */

loc_00549558: ;
    esi = MEM32(eax + 0x40);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549570; /* je: equal / zero */

loc_00549561: ;
    esi = MEM32(edx + 0xB0C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549570; /* je: equal / zero */

loc_0054956B: ;
    ecx = 1;

loc_00549570: ;
    esi = MEM32(eax + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549586; /* je: equal / zero */

loc_00549577: ;
    esi = MEM32(edx + 0xB10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549586; /* je: equal / zero */

loc_00549581: ;
    ecx = 1;

loc_00549586: ;
    esi = MEM32(eax + 0x48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054959C; /* je: equal / zero */

loc_0054958D: ;
    esi = MEM32(edx + 0xB14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054959C; /* je: equal / zero */

loc_00549597: ;
    ecx = 1;

loc_0054959C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0xA4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005495C7; /* jne: not equal / not zero */

loc_005495A6: ;
    ecx = MEM32(edx + 0xB18);
    MEM32(esp + 8) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x549450);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x005495C4u); RECOMP_ABI_CALL(0x00557C60u, sub_00557C60); /* call 0x00557C60 */

loc_005495C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005495C7: ;
    POP32(esp, esi);

loc_005495C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005495D0
 * Original: 0x005495D0 - 0x00549600 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005495D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005495D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005495F3; /* je: equal / zero */

loc_005495DF: ;
    /* nop */

loc_005495E0: ;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005495E7u); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_005495E7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005495E0; /* jne: not equal / not zero */

loc_005495F3: ;
    eax = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x10)); }
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00549600
 * Original: 0x00549600 - 0x00549605 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549600: ;
    g_seh_ebp = ebp; sub_00627145(); return; /* tail jmp 0x00627145 */

}

/**
 * sub_00549610
 * Original: 0x00549610 - 0x00549660 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549610: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xAE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549659; /* jne: not equal / not zero */

loc_0054961F: ;
    PUSH32(esp, 0x5C3530);
    PUSH32(esp, 0x549600);
    PUSH32(esp, 0x5495D0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 0x0054963Au); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_0054963A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xAE8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00549649; /* jne: not equal / not zero */

loc_00549647: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00549649: ;
    eax = esi + 0xAEC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;

loc_00549659: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549660
 * Original: 0x00549660 - 0x0054969E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xAE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054969C; /* jne: not equal / not zero */

loc_0054966F: ;
    eax = MEM32(esi + 0xAE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549682; /* je: equal / zero */

loc_00549679: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054967Fu); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_0054967F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549682: ;
    eax = esi + 0xAEC;
    MEM32(esi + 0xAE8) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;

loc_0054969C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005496A0
 * Original: 0x005496A0 - 0x005496B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005496A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005496A0: ;
    edx = MEM32(ecx + 0xAE8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005496ADu); RECOMP_ABI_CALL(0x00557B80u, sub_00557B80); /* call 0x00557B80 */

loc_005496AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005496C0
 * Original: 0x005496C0 - 0x00549717 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005496C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005496C0: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB4);
    eax = MEM32(esi + 0xAE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005496E2; /* jne: not equal / not zero */

loc_005496D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005496E2: ;
    eax = MEM32(esp + 0xB8);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005496F6u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_005496F6: ;
    eax = MEM32(esi + 0xAE8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(esp + 0x57) = 0;
    PUSH32(esp, 0x0054970Cu); RECOMP_ABI_CALL(0x00557BD0u, sub_00557BD0); /* call 0x00557BD0 */

loc_0054970C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549720
 * Original: 0x00549720 - 0x00549750 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549720: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx + eax * 4 + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054974E; /* je: equal / zero */

loc_00549734: ;
    edx = MEM32(esi + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xC); PUSH32(esp, 0x00549744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00549741u); } /* indirect call */
    }

loc_00549744: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;

loc_0054974E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549750
 * Original: 0x00549750 - 0x005497A9 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549750: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0xAE8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x549720);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x00549795u); RECOMP_ABI_CALL(0x00557C20u, sub_00557C20); /* call 0x00557C20 */

loc_00549795: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0054979Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0054979Cu); } /* indirect call */
    }

loc_0054979E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005497B0
 * Original: 0x005497B0 - 0x005497CF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005497B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005497B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005497C9; /* je: equal / zero */

loc_005497BB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005497C9; /* jne: not equal / not zero */

loc_005497C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005497C9: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005497D0
 * Original: 0x005497D0 - 0x005497EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005497D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005497D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xAE8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5497B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005497EAu); RECOMP_ABI_CALL(0x00557CA0u, sub_00557CA0); /* call 0x00557CA0 */

loc_005497EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005497F0
 * Original: 0x005497F0 - 0x00549847 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005497F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005497F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x73);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00549800u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_00549800: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054980C; /* je: equal / zero */

loc_00549807: ;
    esi = 1;

loc_0054980C: ;
    PUSH32(esp, 0x72);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549814u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_00549814: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054981E; /* je: equal / zero */

loc_0054981B: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0054981E: ;
    PUSH32(esp, 0x67);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549826u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_00549826: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549830; /* je: equal / zero */

loc_0054982D: ;
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00549830: ;
    PUSH32(esp, 0x61);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549838u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_00549838: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549842; /* je: equal / zero */

loc_0054983F: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00549842: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549850
 * Original: 0x00549850 - 0x00549885 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00549850: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00549875; /* je: equal / zero */

loc_00549858: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x3AC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00549875; /* je: equal / zero */

loc_0054986D: ;
    edx = MEM32(ecx + eax * 4 + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00549878; /* jne: not equal / not zero */

loc_00549875: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00549878: ;
    eax = MEM32(ecx + eax * 4 + 0x5C);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549890
 * Original: 0x00549890 - 0x005498B9 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx * 4 + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005498B3; /* je: equal / zero */

loc_005498A5: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005498AF; /* jne: not equal / not zero */

loc_005498AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005498AF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;

loc_005498B3: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005498C0
 * Original: 0x005498C0 - 0x005498F9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005498C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005498C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = esp;
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0xAE8);
    PUSH32(esp, 0x549890);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x005498F5u); RECOMP_ABI_CALL(0x00557CA0u, sub_00557CA0); /* call 0x00557CA0 */

loc_005498F5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549900
 * Original: 0x00549900 - 0x00549972 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549900: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549911u); RECOMP_ABI_CALL(0x005496C0u, sub_005496C0); /* call 0x005496C0 */

loc_00549911: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054996F; /* je: equal / zero */

loc_0054991A: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + eax * 4 + 0x40) = 0;
    edx = MEM32(edi + eax * 4 + 0xAEC);
    PUSH32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(edi + eax * 4 + 0xAEC) = edx;
    PUSH32(esp, edi);
    MEM32(esi + eax * 4 + 0x5C) = 0;
    PUSH32(esp, 0x00549945u); RECOMP_ABI_CALL(0x005494E0u, sub_005494E0); /* call 0x005494E0 */

loc_00549945: ;
    eax = MEM32(esi + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549966; /* jne: not equal / not zero */

loc_0054994F: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549966; /* jne: not equal / not zero */

loc_00549956: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549966; /* jne: not equal / not zero */

loc_0054995D: ;
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x00549966u); RECOMP_ABI_CALL(0x005496A0u, sub_005496A0); /* call 0x005496A0 */

loc_00549966: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054996Cu); RECOMP_ABI_CALL(0x0054A9D0u, sub_0054A9D0); /* call 0x0054A9D0 */

loc_0054996C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054996F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549980
 * Original: 0x00549980 - 0x005499A3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549980: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4 + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005499A2; /* je: equal / zero */

loc_00549995: ;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054999Fu); RECOMP_ABI_CALL(0x00549900u, sub_00549900); /* call 0x00549900 */

loc_0054999F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005499A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005499B0
 * Original: 0x005499B0 - 0x005499DD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005499B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005499B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = eax;
    eax = MEM32(eax + 0xAE8);
    PUSH32(esp, 0x549980);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x005499D9u); RECOMP_ABI_CALL(0x00557C60u, sub_00557C60); /* call 0x00557C60 */

loc_005499D9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005499E0
 * Original: 0x005499E0 - 0x00549A4B (107 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005499E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005499E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x3AC;
    esi = edi + 0x3B8;
    edx = edi + 0x9C;
    /* nop */

loc_00549A00: ;
    _fa = (uint32_t)(MEM32(edi + 0xAE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xAE4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549A0C; /* je: equal / zero */

loc_00549A08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549A21; /* je: equal / zero */

loc_00549A0C: ;
    MEM8(edx) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    MEM32(eax + -12) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 0x60C) = ebx;
    MEM32(eax + 0x624) = ebx;

loc_00549A21: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x101) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x101;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00549A00; /* jl: less (signed <) */

loc_00549A36: ;
    MEM32(edi + 0x9DC) = ebx;
    MEM8(edi + 0x9E0) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00549A50
 * Original: 0x00549A50 - 0x00549A6E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549A50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xB68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549A6D; /* je: equal / zero */

loc_00549A5E: ;
    eax = MEM32(eax + 0xB20);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00557090(); return; /* tail jmp 0x00557090 */

loc_00549A6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00549A70
 * Original: 0x00549A70 - 0x00549AA4 (52 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549AA2; /* je: equal / zero */

loc_00549A7F: ;
    eax = MEM32(esi + 0xB20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549A8Bu); RECOMP_ABI_CALL(0x005570D0u, sub_005570D0); /* call 0x005570D0 */

loc_00549A8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB20) = 0;
    MEM32(esi + 0xB6C) = 0;

loc_00549AA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549AB0
 * Original: 0x00549AB0 - 0x00549D04 (596 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549AB0: ;
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x198);
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0x64EFF4;
    if (CMP_EQ(_fa, _fb)) goto loc_00549CFC; /* je: equal / zero */

loc_00549AD1: ;
    eax = MEM32(esi + 0x3AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549AE9; /* jne: not equal / not zero */

loc_00549ADB: ;
    eax = MEM32(esi + 0x3A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549AE9; /* jne: not equal / not zero */

loc_00549AE5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00549AED;

loc_00549AE9: ;
    ecx = esp + 0x14;

loc_00549AED: ;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00549B0F; /* jne: not equal / not zero */

loc_00549AFB: ;
    eax = MEM32(esi + 0x3A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549B0F; /* jne: not equal / not zero */

loc_00549B05: ;
    MEM32(esp + 8) = 0;
    goto loc_00549B1A;

loc_00549B0F: ;
    eax = esp + 0x94;
    MEM32(esp + 8) = eax;

loc_00549B1A: ;
    eax = MEM32(esi + 0x3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549B34; /* jne: not equal / not zero */

loc_00549B24: ;
    edx = MEM32(esi + 0x3A8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549B34; /* jne: not equal / not zero */

loc_00549B2E: ;
    MEM32(esp + 4) = eax;
    goto loc_00549B3F;

loc_00549B34: ;
    edx = esp + 0x114;
    MEM32(esp + 4) = edx;

loc_00549B3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549B7E; /* je: equal / zero */

loc_00549B43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549B4E; /* je: equal / zero */

loc_00549B47: ;
    MEM8(ecx) = 0x73;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549B4E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549B5D; /* je: equal / zero */

loc_00549B56: ;
    MEM8(eax) = 0x73;
    MEM32(esp + 8) = MEM32(esp + 8) + 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549B5D: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x73;
    ecx = MEM32(esp + 4);
    eax = MEM32(esi + 0xB9C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00549B7E; /* je: equal / zero */

loc_00549B77: ;
    MEM8(ecx) = 0x72;
    MEM32(esp + 4) = MEM32(esp + 4) + 1;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549B7E: ;
    eax = MEM32(esi + 0xB74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BB5; /* je: equal / zero */

loc_00549B88: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549B97; /* je: equal / zero */

loc_00549B90: ;
    MEM8(eax) = 0x67;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549B97: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BA6; /* je: equal / zero */

loc_00549B9F: ;
    MEM8(eax) = 0x67;
    MEM32(esp + 8) = MEM32(esp + 8) + 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549BA6: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BB5; /* je: equal / zero */

loc_00549BAE: ;
    MEM8(eax) = 0x67;
    MEM32(esp + 4) = MEM32(esp + 4) + 1;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549BB5: ;
    eax = MEM32(esi + 0x1854);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BEC; /* je: equal / zero */

loc_00549BBF: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BCE; /* je: equal / zero */

loc_00549BC7: ;
    MEM8(eax) = 0x61;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549BCE: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BDD; /* je: equal / zero */

loc_00549BD6: ;
    MEM8(eax) = 0x61;
    MEM32(esp + 8) = MEM32(esp + 8) + 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549BDD: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BEC; /* je: equal / zero */

loc_00549BE5: ;
    MEM8(eax) = 0x61;
    MEM32(esp + 4) = MEM32(esp + 4) + 1;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00549BEC: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549BFF; /* je: equal / zero */

loc_00549BF4: ;
    edx = esp + 0x14;
    MEM8(eax) = 0;
    MEM32(esp + 0xC) = edx;

loc_00549BFF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549C15; /* je: equal / zero */

loc_00549C07: ;
    MEM8(eax) = 0;
    eax = esp + 0x94;
    MEM32(esp + 8) = eax;

loc_00549C15: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549C2B; /* je: equal / zero */

loc_00549C1D: ;
    ecx = esp + 0x114;
    MEM8(eax) = 0;
    MEM32(esp + 4) = ecx;

loc_00549C2B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00549C71; /* je: equal / zero */

loc_00549C34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549C3Au); RECOMP_ABI_CALL(0x005497F0u, sub_005497F0); /* call 0x005497F0 */

loc_00549C3A: ;
    edi = eax;
    eax = MEM32(esi + 0x9D0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549C71; /* je: equal / zero */

loc_00549C49: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 1);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    edx = esi + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549C68u); RECOMP_ABI_CALL(0x0054B2C0u, sub_0054B2C0); /* call 0x0054B2C0 */

loc_00549C68: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9D0) = edi;

loc_00549C71: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549CB6; /* je: equal / zero */

loc_00549C79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549C7Fu); RECOMP_ABI_CALL(0x005497F0u, sub_005497F0); /* call 0x005497F0 */

loc_00549C7F: ;
    edi = eax;
    eax = MEM32(esi + 0x9D4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549CB6; /* je: equal / zero */

loc_00549C8E: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x19D;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00549CADu); RECOMP_ABI_CALL(0x0054B2C0u, sub_0054B2C0); /* call 0x0054B2C0 */

loc_00549CAD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9D4) = edi;

loc_00549CB6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549CFB; /* je: equal / zero */

loc_00549CBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549CC4u); RECOMP_ABI_CALL(0x005497F0u, sub_005497F0); /* call 0x005497F0 */

loc_00549CC4: ;
    edi = eax;
    eax = MEM32(esi + 0x9D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549CFB; /* je: equal / zero */

loc_00549CD3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    edx = esi + 4;
    PUSH32(esp, edx);
    eax = esi + 0x29E;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00549CF2u); RECOMP_ABI_CALL(0x0054B2C0u, sub_0054B2C0); /* call 0x0054B2C0 */

loc_00549CF2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9D8) = edi;

loc_00549CFB: ;
    POP32(esp, edi);

loc_00549CFC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x190;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00549D10
 * Original: 0x00549D10 - 0x00549D5B (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549D10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549D59; /* je: equal / zero */

loc_00549D1F: ;
    eax = MEM32(esi + 0xB6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549D32; /* je: equal / zero */

loc_00549D29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549D2Fu); RECOMP_ABI_CALL(0x00549A70u, sub_00549A70); /* call 0x00549A70 */

loc_00549D2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549D32: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xB68) = 0;
    MEM32(esi + 0xB74) = 0;
    MEM32(esi + 0xB9C) = 0;
    PUSH32(esp, 0x00549D56u); RECOMP_ABI_CALL(0x00549AB0u, sub_00549AB0); /* call 0x00549AB0 */

loc_00549D56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549D59: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549D60
 * Original: 0x00549D60 - 0x00549E23 (195 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549D60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00549D79; /* je: equal / zero */

loc_00549D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549D76u); RECOMP_ABI_CALL(0x00549A70u, sub_00549A70); /* call 0x00549A70 */

loc_00549D76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549D79: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x54AE10);
    PUSH32(esp, 0x54ADC0);
    PUSH32(esp, 0x54AD10);
    PUSH32(esp, 0x54ACE0);
    PUSH32(esp, 0x54AC30);
    edi = esi + 0xB20;
    PUSH32(esp, 0x54AB00);
    if (CMP_NE(_fa, _fb)) goto loc_00549DCA; /* jne: not equal / not zero */

loc_00549DA7: ;
    eax = MEM32(esi + 0xB64);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi + 0xB24;
    PUSH32(esp, ecx);
    edx = esi + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1964);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549DC8u); RECOMP_ABI_CALL(0x00556C80u, sub_00556C80); /* call 0x00556C80 */

loc_00549DC8: ;
    goto loc_00549DEB;

loc_00549DCA: ;
    ecx = MEM32(esi + 0xB64);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    edx = esi + 0xB24;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esp + 0x3C));
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00549DEBu); RECOMP_ABI_CALL(0x00556AD0u, sub_00556AD0); /* call 0x00556AD0 */

loc_00549DEB: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549DF7; /* je: equal / zero */

loc_00549DF2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00549DF7: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x54AE40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549E04u); RECOMP_ABI_CALL(0x00555DB0u, sub_00555DB0); /* call 0x00555DB0 */

loc_00549E04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xB6C) = 1;
    MEM32(esi + 0xB70) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00549E30
 * Original: 0x00549E30 - 0x00549F1B (235 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(esi + edi * 4 + 0x3A0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549E55; /* jne: not equal / not zero */

loc_00549E48: ;
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x3AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x3AC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549F17; /* je: equal / zero */

loc_00549E55: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549E7A; /* je: equal / zero */

loc_00549E5A: ;
    eax = MEM32(esp + 0x18);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x101);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    edx = ecx + esi + 0x9C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549E77u); RECOMP_ABI_CALL(0x0054B190u, sub_0054B190); /* call 0x0054B190 */

loc_00549E77: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549E7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549E81u); RECOMP_ABI_CALL(0x005499B0u, sub_005499B0); /* call 0x005499B0 */

loc_00549E81: ;
    eax = MEM32(esi + edi * 4 + 0x3AC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549E98; /* je: equal / zero */

loc_00549E8F: ;
    MEM32(esi + edi * 4 + 0x3AC) = ebx;
    goto loc_00549E9F;

loc_00549E98: ;
    MEM32(esi + edi * 4 + 0x3A0) = ebx;

loc_00549E9F: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x101);
    edx = edi;
    edx = edx << 9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM8(ecx + esi + 0x9C) = LO8(ebx);
    MEM8(edx + esi + 0x3B8) = LO8(ebx);
    MEM32(esi + edi * 4 + 0x9D0) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00549F0E; /* jne: not equal / not zero */

loc_00549EC6: ;
    _fa = (uint32_t)(MEM32(esi + 0xB68)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB68), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549EF5; /* je: equal / zero */

loc_00549ECE: ;
    eax = MEM32(esi + 0xB74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549EE4; /* je: equal / zero */

loc_00549ED8: ;
    _fa = (uint32_t)(MEM32(esi + 0xB6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549EEC; /* je: equal / zero */

loc_00549EE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549EF5; /* jne: not equal / not zero */

loc_00549EE4: ;
    _fa = (uint32_t)(MEM32(esi + 0xB6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB6C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549EF5; /* je: equal / zero */

loc_00549EEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549EF2u); RECOMP_ABI_CALL(0x00549D10u, sub_00549D10); /* call 0x00549D10 */

loc_00549EF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549EF5: ;
    PUSH32(esp, esi);
    MEM32(esi + 0xB98) = 0xFFFFFFFFu;
    MEM32(esi + 0xB9C) = ebx;
    PUSH32(esp, 0x00549F0Bu); RECOMP_ABI_CALL(0x00549AB0u, sub_00549AB0); /* call 0x00549AB0 */

loc_00549F0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549F0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549F14u); RECOMP_ABI_CALL(0x0054A9D0u, sub_0054A9D0); /* call 0x0054A9D0 */

loc_00549F14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00549F17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00549F20
 * Original: 0x00549F20 - 0x00549F99 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00549F20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x3AC;
    ebx = eax + 0x3B8;
    ebp = eax + 0x9C;
    edi = edi;

loc_00549F40: ;
    _fa = (uint32_t)(MEM32(eax + 0xAE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAE4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549F4C; /* je: equal / zero */

loc_00549F48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549F78; /* je: equal / zero */

loc_00549F4C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549F55; /* jne: not equal / not zero */

loc_00549F50: ;
    _fa = (uint32_t)(MEM32(esi + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -12), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549F66; /* je: equal / zero */

loc_00549F55: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00549F5Du); RECOMP_ABI_CALL(0x00549E30u, sub_00549E30); /* call 0x00549E30 */

loc_00549F5D: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00549F66: ;
    MEM8(ebp) = 0;
    MEM8(ebx) = 0;
    MEM32(esi + -12) = ecx;
    MEM32(esi) = ecx;
    MEM32(esi + 0x60C) = ecx;

loc_00549F78: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x101) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x101;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00549F40; /* jl: less (signed <) */

loc_00549F8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x9E0) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00549FA0
 * Original: 0x00549FA0 - 0x0054A01B (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00549FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00549FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A010; /* jne: not equal / not zero */

loc_00549FAF: ;
    eax = esi + 0x5C;
    edx = esi + 0x7C;
    MEM32(esi + 0xB68) = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00549FC1: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00549FC1; /* jne: not equal / not zero */

loc_00549FCB: ;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00549FE3; /* je: equal / zero */

loc_00549FD5: ;
    eax = MEM32(esi + 0x9DC);
    MEM32(esi + 0xB94) = eax;
    goto loc_00549FED;

loc_00549FE3: ;
    MEM32(esi + 0xB94) = 0;

loc_00549FED: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00549FFDu); RECOMP_ABI_CALL(0x00549D60u, sub_00549D60); /* call 0x00549D60 */

loc_00549FFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A014; /* jne: not equal / not zero */

loc_0054A004: ;
    MEM32(esi + 0xB68) = eax;
    MEM32(esi + 0xB94) = eax;

loc_0054A010: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A014: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A020
 * Original: 0x0054A020 - 0x0054A10F (239 bytes, 82 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A020: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0054A10C; /* ja: above (unsigned >) */

loc_0054A02F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x54A110); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0054A036u) goto loc_0054A036;
    if (_jt == 0x0054A060u) goto loc_0054A060;
    if (_jt == 0x0054A079u) goto loc_0054A079;
    if (_jt == 0x0054A0A8u) goto loc_0054A0A8;
    if (_jt == 0x0054A0D9u) goto loc_0054A0D9;
    if (_jt == 0x0054A0EFu) goto loc_0054A0EF;
    if (_jt == 0x0054A10Cu) goto loc_0054A10C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0054A036: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054A049u); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A049: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x176C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x176C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054A05Au); RECOMP_ABI_CALL(0x00554D00u, sub_00554D00); /* call 0x00554D00 */

loc_0054A05A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A060: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A073u); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A073: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A079: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0xC (8-bit) */
    edi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_0054A097; /* je: equal / zero */

loc_0054A087: ;
    edx = edi + 0x176C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0054A094u); RECOMP_ABI_CALL(0x005550B0u, sub_005550B0); /* call 0x005550B0 */

loc_0054A094: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A097: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054A0A2u); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A0A2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A0A8: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax + 0x17BC) = 0;
    POP32(esp, esi);
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00548950(); return; /* tail jmp 0x00548950 */

loc_0054A0D9: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A0E9u); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A0E9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A0EF: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x490);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x176C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x176C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A109u); RECOMP_ABI_CALL(0x00554C70u, sub_00554C70); /* call 0x00554C70 */

loc_0054A109: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A10C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A130
 * Original: 0x0054A130 - 0x0054A14F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A130: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A14E; /* jne: not equal / not zero */

loc_0054A138: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A14Bu); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A14B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A14E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054A150
 * Original: 0x0054A150 - 0x0054A267 (279 bytes, 111 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A150: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x17C0);
    if ((_fa == 0)) goto loc_0054A1C6; /* je: equal / zero */

loc_0054A168: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0054A1A8; /* je: equal / zero */

loc_0054A16D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0054A261; /* jne: not equal / not zero */

loc_0054A176: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_0054A192: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054A198u); RECOMP_ABI_CALL(0x005488E0u, sub_005488E0); /* call 0x005488E0 */

loc_0054A198: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054A19Fu); RECOMP_ABI_CALL(0x00548B50u, sub_00548B50); /* call 0x00548B50 */

loc_0054A19F: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054A1A8: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_0054A192;

loc_0054A1C6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A1D2u); RECOMP_ABI_CALL(0x00557660u, sub_00557660); /* call 0x00557660 */

loc_0054A1D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A1DBu); RECOMP_ABI_CALL(0x00627E26u, sub_00627E26); /* call 0x00627E26 */

loc_0054A1DB: ;
    PUSH32(esp, 0x64EFE4);
    PUSH32(esp, 0x630CB4);
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x0054A1EDu); RECOMP_ABI_CALL(0x00552CA0u, sub_00552CA0); /* call 0x00552CA0 */

loc_0054A1ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64F014);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0054A1FEu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_0054A1FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64F008);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0054A20Fu); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_0054A20F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64EFFC);
    PUSH32(esp, esi);
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0x0054A220u); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_0054A220: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x630D4C);
    PUSH32(esp, esi);
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, 0x0054A231u); RECOMP_ABI_CALL(0x005531E0u, sub_005531E0); /* call 0x005531E0 */

loc_0054A231: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054A25Cu); RECOMP_ABI_CALL(0x005488E0u, sub_005488E0); /* call 0x005488E0 */

loc_0054A25C: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0054A261: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0054A270
 * Original: 0x0054A270 - 0x0054A2F1 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xBE0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x54A020);
    PUSH32(esp, eax);
    edi = esi + 0xBC0;
    PUSH32(esp, edi);
    ebx = esi + 0xBA0;
    PUSH32(esp, ebx);
    ebp = esi + 0x5C;
    ecx = esi + 0xBEC;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(esi + 0xBE8) = 1;
    PUSH32(esp, 0x0054A2ADu); RECOMP_ABI_CALL(0x00553300u, sub_00553300); /* call 0x00553300 */

loc_0054A2AD: ;
    edx = MEM32(esi + 0xBE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x54A150);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi + 0x11AC;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A2C9u); RECOMP_ABI_CALL(0x00553300u, sub_00553300); /* call 0x00553300 */

loc_0054A2C9: ;
    ecx = MEM32(esi + 0xBE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x54A130);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x176C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x176C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A2E4u); RECOMP_ABI_CALL(0x00554C20u, sub_00554C20); /* call 0x00554C20 */

loc_0054A2E4: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A300
 * Original: 0x0054A300 - 0x0054A334 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A332; /* je: equal / zero */

loc_0054A30F: ;
    eax = esi + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A31Bu); RECOMP_ABI_CALL(0x00553730u, sub_00553730); /* call 0x00553730 */

loc_0054A31B: ;
    ecx = esi + 0x176C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A327u); RECOMP_ABI_CALL(0x00554CB0u, sub_00554CB0); /* call 0x00554CB0 */

loc_0054A327: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A32Fu); RECOMP_ABI_CALL(0x00548890u, sub_00548890); /* call 0x00548890 */

loc_0054A32F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A332: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A340
 * Original: 0x0054A340 - 0x0054A39C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A340: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xBE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A39B; /* je: equal / zero */

loc_0054A34E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x15), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0054A382; /* je: equal / zero */

loc_0054A359: ;
    PUSH32(esp, edi);
    edi = eax + 0x176C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054A367u); RECOMP_ABI_CALL(0x005550B0u, sub_005550B0); /* call 0x005550B0 */

loc_0054A367: ;
    edx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0054A37Cu); RECOMP_ABI_CALL(0x00554D00u, sub_00554D00); /* call 0x00554D00 */

loc_0054A37C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A382: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 4));
    _fb = (uint32_t)(0xBEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xBEC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A397u); RECOMP_ABI_CALL(0x005548D0u, sub_005548D0); /* call 0x005548D0 */

loc_0054A397: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0054A39B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054A3A0
 * Original: 0x0054A3A0 - 0x0054A3BD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A3A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xBE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A3BC; /* je: equal / zero */

loc_0054A3AE: ;
    _fb = (uint32_t)(0x11AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x11AC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00553730(); return; /* tail jmp 0x00553730 */

loc_0054A3BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0054A3C0
 * Original: 0x0054A3C0 - 0x0054A400 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDDDDDDDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xDDDDDDDDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A3FE; /* je: equal / zero */

loc_0054A3CD: ;
    eax = MEM32(esi + 0xBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A3FE; /* je: equal / zero */

loc_0054A3D7: ;
    eax = esi + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A3E3u); RECOMP_ABI_CALL(0x00554820u, sub_00554820); /* call 0x00554820 */

loc_0054A3E3: ;
    ecx = esi + 0x11AC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A3EFu); RECOMP_ABI_CALL(0x00554820u, sub_00554820); /* call 0x00554820 */

loc_0054A3EF: ;
    _fb = (uint32_t)(0x176C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x176C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A3FBu); RECOMP_ABI_CALL(0x00555040u, sub_00555040); /* call 0x00555040 */

loc_0054A3FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A3FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A400
 * Original: 0x0054A400 - 0x0054A435 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A433; /* je: equal / zero */

loc_0054A40F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A41Eu); RECOMP_ABI_CALL(0x00627E2Cu, sub_00627E2C); /* call 0x00627E2C */

loc_0054A41E: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xBEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xBEC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A430u); RECOMP_ABI_CALL(0x005549E0u, sub_005549E0); /* call 0x005549E0 */

loc_0054A430: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A433: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A440
 * Original: 0x0054A440 - 0x0054A487 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A440: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A44Bu); RECOMP_ABI_CALL(0x0054A300u, sub_0054A300); /* call 0x0054A300 */

loc_0054A44B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A451u); RECOMP_ABI_CALL(0x0054A3A0u, sub_0054A3A0); /* call 0x0054A3A0 */

loc_0054A451: ;
    eax = MEM32(esi + 0xBE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A485; /* je: equal / zero */

loc_0054A45E: ;
    eax = esi + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A46Au); RECOMP_ABI_CALL(0x005545E0u, sub_005545E0); /* call 0x005545E0 */

loc_0054A46A: ;
    ecx = esi + 0x176C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A476u); RECOMP_ABI_CALL(0x00554CD0u, sub_00554CD0); /* call 0x00554CD0 */

loc_0054A476: ;
    _fb = (uint32_t)(0x11AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x11AC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0054A482u); RECOMP_ABI_CALL(0x005545E0u, sub_005545E0); /* call 0x005545E0 */

loc_0054A482: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A485: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A490
 * Original: 0x0054A490 - 0x0054A6F6 (614 bytes, 177 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A490: ;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x228);
    eax = MEM32(ebx + 0xBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x223) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0054A6C6; /* je: equal / zero */

loc_0054A4B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054A4BAu); RECOMP_ABI_CALL(0x0054A300u, sub_0054A300); /* call 0x0054A300 */

loc_0054A4BA: ;
    eax = ebx + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A4C6u); RECOMP_ABI_CALL(0x005537A0u, sub_005537A0); /* call 0x005537A0 */

loc_0054A4C6: ;
    eax = MEM32(ebx + 0x3B0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A4EE; /* je: equal / zero */

loc_0054A4D3: ;
    eax = MEM32(ebx + 0x9DC);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x64F054);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A4E9u); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_0054A4E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0054A515;

loc_0054A4EE: ;
    edx = MEM32(0x64F044);
    eax = MEM32(0x64F048);
    ecx = MEM32(0x64F04C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x64F050);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;

loc_0054A515: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x23C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0054A594; /* je: equal / zero */

loc_0054A523: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    PUSH32(esp, 0x64F038);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A53Au); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_0054A53A: ;
    eax = esp + 0x13C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_0054A547: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A547; /* jne: not equal / not zero */

loc_0054A54E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0xFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = esp + 0x134;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A566u); RECOMP_ABI_CALL(0x0061ADB0u, sub_0061ADB0); /* call 0x0061ADB0 */

loc_0054A566: ;
    edi = esp + 0x13C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x22E) = 0;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0054A580: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A580; /* jne: not equal / not zero */

loc_0054A588: ;
    SET_LO16(ecx, MEM16(0x630C14));
    MEM16(edi) = LO16(ecx);
    goto loc_0054A5B0;

loc_0054A594: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0054A5A0;

    /* nop */
    /* nop */

loc_0054A5A0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x10));
    MEM8(esp + eax + 0x130) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A5A0; /* jne: not equal / not zero */

loc_0054A5B0: ;
    MEM32(ebx + 0x17A8) = 0;
    eax = MEM32(0x64F028);
    edx = MEM32(0x64F024);
    ecx = MEM32(0x64F02C);
    MEM32(esp + 0x34) = eax;
    SET_LO16(eax, MEM16(0x64F034));
    MEM32(esp + 0x30) = edx;
    edx = MEM32(0x64F030);
    MEM32(esp + 0x38) = ecx;
    SET_LO8(ecx, MEM8(0x64F036));
    MEM16(esp + 0x40) = LO16(eax);
    eax = esp + 0x30;
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0x42) = LO8(ecx);
    edx = eax + 1;
    /* nop */

loc_0054A600: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A600; /* jne: not equal / not zero */

loc_0054A607: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebx + 0x176C;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0054A619u); RECOMP_ABI_CALL(0x00555090u, sub_00555090); /* call 0x00555090 */

loc_0054A619: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0054A621u); RECOMP_ABI_CALL(0x00555090u, sub_00555090); /* call 0x00555090 */

loc_0054A621: ;
    eax = MEM32(esp + 0x24C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0054A698; /* jle: less or equal (signed <=) */

loc_0054A631: ;
    edx = MEM32(esp + 0x238);
    eax = (uint32_t)(int32_t)SMEM8(esi + edx);
    edx = MEM32(eax * 4 + 0x6739B8);
    eax = edx;
    ebx = eax + 1;

loc_0054A648: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A648; /* jne: not equal / not zero */

loc_0054A64F: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0054A691; /* jge: greater or equal (signed >=) */

loc_0054A65D: ;
    PUSH32(esp, edx);
    edx = esp + edi + 0x34;
    PUSH32(esp, 0x64F020);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0054A66Du); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_0054A66D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x244);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + eax));
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0054A682u); RECOMP_ABI_CALL(0x00555090u, sub_00555090); /* call 0x00555090 */

loc_0054A682: ;
    eax = MEM32(esp + 0x250);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0054A631; /* jl: less (signed <) */

loc_0054A691: ;
    ebx = MEM32(esp + 0x234);

loc_0054A698: ;
    PUSH32(esp, 4);
    edx = esp + 0x134;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = ebx + 0xBEC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A6B3u); RECOMP_ABI_CALL(0x005543D0u, sub_005543D0); /* call 0x005543D0 */

loc_0054A6B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0054A6D0; /* je: equal / zero */

loc_0054A6BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0054A6C3u); RECOMP_ABI_CALL(0x0054A300u, sub_0054A300); /* call 0x0054A300 */

loc_0054A6C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A6C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0054A6D0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x17BC) = 1;
    PUSH32(esp, 0x0054A6E6u); RECOMP_ABI_CALL(0x00548950u, sub_00548950); /* call 0x00548950 */

loc_0054A6E6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x220;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0054A700
 * Original: 0x0054A700 - 0x0054A731 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A724; /* je: equal / zero */

loc_0054A711: ;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0054A718u); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_0054A718: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A711; /* jne: not equal / not zero */

loc_0054A724: ;
    eax = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x10)); }
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0054A740
 * Original: 0x0054A740 - 0x0054A772 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A765; /* je: equal / zero */

loc_0054A752: ;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0054A759u); RECOMP_ABI_CALL(0x0061AF0Fu, sub_0061AF0F); /* call 0x0061AF0F */

loc_0054A759: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A752; /* jne: not equal / not zero */

loc_0054A765: ;
    eax = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x10)); }
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0054A780
 * Original: 0x0054A780 - 0x0054A7AF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A795u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0054A795: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A7AC; /* jne: not equal / not zero */

loc_0054A79C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A7A9u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0054A7A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A7AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A7B0
 * Original: 0x0054A7B0 - 0x0054A89D (237 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x18D8;
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x18E4;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x547D70);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x54A780);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi + 0x18F4;
    MEM32(edx) = ecx;
    PUSH32(esp, 0x54A740);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xC);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0x0054A803u); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_0054A803: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x18F0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0054A898; /* je: equal / zero */

loc_0054A814: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0054A820;

    /* nop */
    /* nop */

loc_0054A820: ;
    PUSH32(esp, 0x547F90);
    PUSH32(esp, 0x552B90);
    PUSH32(esp, 0x54A700);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0054A838u); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_0054A838: ;
    PUSH32(esp, 0x547F90);
    PUSH32(esp, 0x552B90);
    PUSH32(esp, 0x54A700);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0054A852u); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_0054A852: ;
    PUSH32(esp, 0x547D70);
    PUSH32(esp, 0x54A780);
    PUSH32(esp, 0x54A740);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xC);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0054A870u); RECOMP_ABI_CALL(0x00557D20u, sub_00557D20); /* call 0x00557D20 */

loc_0054A870: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0054A898; /* je: equal / zero */

loc_0054A87C: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A898; /* je: equal / zero */

loc_0054A883: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A898; /* je: equal / zero */

loc_0054A887: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0054A820; /* jl: less (signed <) */

loc_0054A890: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0054A898: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A8A0
 * Original: 0x0054A8A0 - 0x0054A8FC (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A8A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0054A8B9; /* je: equal / zero */

loc_0054A8B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A8B6u); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_0054A8B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A8B9: ;
    _fb = (uint32_t)(0x18E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18E4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 3;

loc_0054A8C4: ;
    eax = MEM32(esi + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A8D4; /* je: equal / zero */

loc_0054A8CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A8D1u); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_0054A8D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A8D4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A8E3; /* je: equal / zero */

loc_0054A8DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A8E0u); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_0054A8E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A8E3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A8F3; /* je: equal / zero */

loc_0054A8EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A8F0u); RECOMP_ABI_CALL(0x00557AB0u, sub_00557AB0); /* call 0x00557AB0 */

loc_0054A8F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A8F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0054A8C4; /* jne: not equal / not zero */

loc_0054A8F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A900
 * Original: 0x0054A900 - 0x0054A96F (111 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0054A900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0054A91Du); RECOMP_ABI_CALL(0x005496C0u, sub_005496C0); /* call 0x005496C0 */

loc_0054A91D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A959; /* je: equal / zero */

loc_0054A924: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x18D8;
    edi = eax + 0x40;
    /* nop */

loc_0054A930: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A949; /* je: equal / zero */

loc_0054A935: ;
    eax = MEM32(ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A942u); RECOMP_ABI_CALL(0x00557BD0u, sub_00557BD0); /* call 0x00557BD0 */

loc_0054A942: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A969; /* jne: not equal / not zero */

loc_0054A949: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0054A930; /* jl: less (signed <) */

loc_0054A955: ;
    esi = MEM32(esp + 0x18);

loc_0054A959: ;
    ecx = MEM32(ebp + 0x18F0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A966u); RECOMP_ABI_CALL(0x00557B80u, sub_00557B80); /* call 0x00557B80 */

loc_0054A966: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A969: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A970
 * Original: 0x0054A970 - 0x0054A9CC (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A970: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0054A98Du); RECOMP_ABI_CALL(0x005496C0u, sub_005496C0); /* call 0x005496C0 */

loc_0054A98D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A9B8; /* je: equal / zero */

loc_0054A994: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(eax + ecx * 4 + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0054A9B8; /* je: equal / zero */

loc_0054A99F: ;
    eax = MEM32(esi + ecx * 4 + 0x18E4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A9B1u); RECOMP_ABI_CALL(0x00557BD0u, sub_00557BD0); /* call 0x00557BD0 */

loc_0054A9B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054A9C8; /* jne: not equal / not zero */

loc_0054A9B8: ;
    ecx = MEM32(esi + 0x18F0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054A9C5u); RECOMP_ABI_CALL(0x00557B80u, sub_00557B80); /* call 0x00557B80 */

loc_0054A9C5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054A9C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0054A9D0
 * Original: 0x0054A9D0 - 0x0054AA49 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0054A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0054A9D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x18F0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x54A900);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0054A9EBu); RECOMP_ABI_CALL(0x00557C60u, sub_00557C60); /* call 0x00557C60 */

loc_0054A9EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18F4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0054AA00: ;
    eax = MEM32(esi + -5448);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054AA21; /* jne: not equal / not zero */

loc_0054AA0A: ;
    eax = MEM32(esi + -5460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0054AA21; /* jne: not equal / not zero */

loc_0054AA14: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0054AA1Cu); RECOMP_ABI_CALL(0x00557CF0u, sub_00557CF0); /* call 0x00557CF0 */

loc_0054AA1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0054AA3A;

loc_0054AA21: ;
    eax = MEM32(esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x54A970);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0054AA37u); RECOMP_ABI_CALL(0x00557C60u, sub_00557C60); /* call 0x00557C60 */

loc_0054AA37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0054AA3A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0054AA00; /* jl: less (signed <) */

loc_0054AA43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
