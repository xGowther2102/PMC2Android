/**
 * Midnight Club II (PC) - Recompiled code chunk 22
 * Functions: 250 (0x0052BC80 - 0x005347D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0052BC80
 * Original: 0x0052BC80 - 0x0052BC95 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x52));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052BC8F; /* jne: not equal / not zero */

loc_0052BC8A: ;
    PUSH32(esp, 0x0052BC8Fu); RECOMP_ABI_CALL(0x0052B050u, sub_0052B050); /* call 0x0052B050 */

loc_0052BC8F: ;
    MEM8(esi + 0x53) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BCA0
 * Original: 0x0052BCA0 - 0x0052BD19 (121 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BCA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x95) = LO8(ebx);
    MEM8(esi + 0x96) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BCC1; /* je: equal / zero */

loc_0052BCB9: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x0052BCC1u); RECOMP_ABI_CALL(0x0052DE90u, sub_0052DE90); /* call 0x0052DE90 */

loc_0052BCC1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x42C80000);
    ecx = esi;
    MEM32(esi + 0x5C) = ebx;
    PUSH32(esp, 0x0052BCDBu); RECOMP_ABI_CALL(0x0052B4C0u, sub_0052B4C0); /* call 0x0052B4C0 */

loc_0052BCDB: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x0052BCE5u); RECOMP_ABI_CALL(0x005D5B90u, sub_005D5B90); /* call 0x005D5B90 */

loc_0052BCE5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052BCEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052BCECu); } /* indirect call */
    }

loc_0052BCEF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x42C80000);
    ecx = esi;
    MEM32(esi + 0x5C) = ebx;
    PUSH32(esp, 0x0052BD09u); RECOMP_ABI_CALL(0x0052B4C0u, sub_0052B4C0); /* call 0x0052B4C0 */

loc_0052BD09: ;
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x0052BD13u); RECOMP_ABI_CALL(0x005D5B90u, sub_005D5B90); /* call 0x005D5B90 */

loc_0052BD13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BD20
 * Original: 0x0052BD20 - 0x0052BD53 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BD20(void)
{

loc_0052BD20: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052BD39u); RECOMP_ABI_CALL(0x005D6650u, sub_005D6650); /* call 0x005D6650 */

loc_0052BD39: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x64AB1C;
    MEM32(esi + 0x30) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052BD60
 * Original: 0x0052BD60 - 0x0052BD66 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BD60(void)
{

loc_0052BD60: ;
    eax = 0x64AB44;
    esp += 4; return; /* ret */

}

/**
 * sub_0052BD70
 * Original: 0x0052BD70 - 0x0052BD7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BD70: ;
    MEM32(ecx) = 0x64AB1C;
    g_seh_ebp = ebp; sub_005D66C0(); return; /* tail jmp 0x005D66C0 */

}

/**
 * sub_0052BD80
 * Original: 0x0052BD80 - 0x0052BDA5 (37 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BD80(void)
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

loc_0052BD80: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0052BDA2; /* jnp: not parity */

loc_0052BD8E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_005D6720(); return; /* tail jmp 0x005D6720 */

loc_0052BDA2: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052BDB0
 * Original: 0x0052BDB0 - 0x0052BDE1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BDB0(void)
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

loc_0052BDB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052BDC7; /* jl: less (signed <) */

loc_0052BDBC: ;
    PUSH32(esp, 0x0052BDC1u); RECOMP_ABI_CALL(0x005D6700u, sub_005D6700); /* call 0x005D6700 */

loc_0052BDC1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x30)); /* fmul dword ptr [esi + 0x30] */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0052BDC7: ;
    fp_push(MEMF(eax * 4 + 0x6C2E70)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052BDD7u); RECOMP_ABI_CALL(0x005D6700u, sub_005D6700); /* call 0x005D6700 */

loc_0052BDD7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x30)); /* fmul dword ptr [esi + 0x30] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052BDF0
 * Original: 0x0052BDF0 - 0x0052BDF5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BDF0: ;
    g_seh_ebp = ebp; sub_005D68A0(); return; /* tail jmp 0x005D68A0 */

}

/**
 * sub_0052BE00
 * Original: 0x0052BE00 - 0x0052BE32 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BE00: ;
    SET_LO8(eax, MEM8(0x6C2E80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE31; /* je: equal / zero */

loc_0052BE09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = 0x6C2C70;
    PUSH32(esp, 0x0052BE16u); RECOMP_ABI_CALL(0x0053DF10u, sub_0053DF10); /* call 0x0053DF10 */

loc_0052BE16: ;
    esi = MEM32(0x6CE514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE30; /* je: equal / zero */

loc_0052BE20: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0052BE29u); RECOMP_ABI_CALL(0x005D6720u, sub_005D6720); /* call 0x005D6720 */

loc_0052BE29: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052BE20; /* jne: not equal / not zero */

loc_0052BE30: ;
    POP32(esp, esi);

loc_0052BE31: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052BE40
 * Original: 0x0052BE40 - 0x0052BE8E (78 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BE40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6CE514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE8C; /* je: equal / zero */

loc_0052BE4B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    /* nop */

loc_0052BE60: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE82; /* je: equal / zero */

loc_0052BE67: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE75; /* je: equal / zero */

loc_0052BE6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BE75; /* je: equal / zero */

loc_0052BE72: ;
    PUSH32(esp, ebx);
    goto loc_0052BE7B;

loc_0052BE75: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);

loc_0052BE7B: ;
    ecx = esi;
    PUSH32(esp, 0x0052BE82u); RECOMP_ABI_CALL(0x005D67B0u, sub_005D67B0); /* call 0x005D67B0 */

loc_0052BE82: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052BE60; /* jne: not equal / not zero */

loc_0052BE89: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0052BE8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BE90
 * Original: 0x0052BE90 - 0x0052BEAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052BE98u); RECOMP_ABI_CALL(0x0052BD70u, sub_0052BD70); /* call 0x0052BD70 */

loc_0052BE98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052BEA8; /* je: equal / zero */

loc_0052BE9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052BEA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052BEA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052BEA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052BEB0
 * Original: 0x0052BEB0 - 0x0052BEBF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BEB0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052BEBBu); RECOMP_ABI_CALL(0x0052BE40u, sub_0052BE40); /* call 0x0052BE40 */

loc_0052BEBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052BEC0
 * Original: 0x0052BEC0 - 0x0052BECF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BEC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052BECBu); RECOMP_ABI_CALL(0x0052BE40u, sub_0052BE40); /* call 0x0052BE40 */

loc_0052BECB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052BED0
 * Original: 0x0052BED0 - 0x0052BEDF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BED0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052BEDBu); RECOMP_ABI_CALL(0x0052BE40u, sub_0052BE40); /* call 0x0052BE40 */

loc_0052BEDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052BEE0
 * Original: 0x0052BEE0 - 0x0052BF04 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052BEE8u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_0052BEE8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0x2C) = LO8(eax);
    MEM8(esi + 0x50) = LO8(eax);
    MEM32(esi) = 0x64ABE8;
    MEM32(esi + 0x4C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BF10
 * Original: 0x0052BF10 - 0x0052BF16 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BF10(void)
{

loc_0052BF10: ;
    eax = 0x64AC08;
    esp += 4; return; /* ret */

}

/**
 * sub_0052BF20
 * Original: 0x0052BF20 - 0x0052BF2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052BF20: ;
    MEM32(ecx) = 0x64ABE8;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_0052BF30
 * Original: 0x0052BF30 - 0x0052BF36 (6 bytes, 2 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BF30(void)
{

loc_0052BF30: ;
    eax = 0x64AC20;
    esp += 4; return; /* ret */

}

/**
 * sub_0052BF40
 * Original: 0x0052BF40 - 0x0052BFB7 (119 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BF40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64AC54);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0052BF5Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052BF5E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64AC48);
    PUSH32(esp, 0);
    ecx = edi;
    MEM16(eax + 0xA) = 0x20;
    PUSH32(esp, 0x0052BF7Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052BF7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64AC3C);
    PUSH32(esp, 6);
    ecx = edi;
    MEM16(eax + 0xA) = 0x20;
    PUSH32(esp, 0x0052BF96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052BF96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64AC2C);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0052BFACu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052BFAC: ;
    POP32(esp, edi);
    MEM16(eax + 0xA) = 0x20;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052BFC0
 * Original: 0x0052BFC0 - 0x0052BFD2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BFC0: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BFE0
 * Original: 0x0052BFE0 - 0x0052BFFC (28 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052BFE6: ;
    ecx = MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BFF3; /* je: equal / zero */

loc_0052BFED: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052BFF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052BFF1u); } /* indirect call */
    }

loc_0052BFF3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052BFE6; /* jl: less (signed <) */

loc_0052BFF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052C000
 * Original: 0x0052C000 - 0x0052C09C (156 bytes, 59 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C000: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x64AB50;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ecx;

loc_0052C016: ;
    PUSH32(esp, 0x56);
    PUSH32(esp, 0x64AC60);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0052C024u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052C024: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C036; /* je: equal / zero */

loc_0052C02B: ;
    ecx = eax;
    PUSH32(esp, 0x0052C032u); RECOMP_ABI_CALL(0x0052BEE0u, sub_0052BEE0); /* call 0x0052BEE0 */

loc_0052C032: ;
    esi = eax;
    goto loc_0052C038;

loc_0052C036: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052C038: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C06B; /* je: equal / zero */

loc_0052C03E: ;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x63B81C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052C053u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052C053: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052C062u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0052C062: ;
    ecx = esi;
    PUSH32(esp, 0x0052C069u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_0052C069: ;
    SET_LO8(ebx, LO8(eax));

loc_0052C06B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052C075u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0052C075: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C080; /* jne: not equal / not zero */

loc_0052C079: ;
    ecx = esi;
    PUSH32(esp, 0x0052C080u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_0052C080: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + edi) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64AB84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x64AB84 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052C016; /* jl: less (signed <) */

loc_0052C092: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C0A0
 * Original: 0x0052C0A0 - 0x0052C0B8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0052C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C0A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052C0B3; /* jl: less (signed <) */

loc_0052C0A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052C0B3; /* jge: greater or equal (signed >=) */

loc_0052C0AD: ;
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

loc_0052C0B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C0C0
 * Original: 0x0052C0C0 - 0x0052C0DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052C0C8u); RECOMP_ABI_CALL(0x0052BF20u, sub_0052BF20); /* call 0x0052BF20 */

loc_0052C0C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052C0D8; /* je: equal / zero */

loc_0052C0CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052C0D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052C0D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052C0D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C0E0
 * Original: 0x0052C0E0 - 0x0052C11B (59 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C0E0: ;
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x64AC60);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x0052C0EEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052C0EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C10B; /* je: equal / zero */

loc_0052C0F5: ;
    ecx = eax;
    PUSH32(esp, 0x0052C0FCu); RECOMP_ABI_CALL(0x0052BFC0u, sub_0052BFC0); /* call 0x0052BFC0 */

loc_0052C0FC: ;
    PUSH32(esp, 0);
    ecx = eax;
    MEM32(0x6C2B98) = eax;
    PUSH32(esp, 0x0052C10Au); RECOMP_ABI_CALL(0x0052C000u, sub_0052C000); /* call 0x0052C000 */

loc_0052C10A: ;
    esp += 4; return; /* ret */

loc_0052C10B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = eax;
    MEM32(0x6C2B98) = eax;
    PUSH32(esp, 0x0052C11Au); RECOMP_ABI_CALL(0x0052C000u, sub_0052C000); /* call 0x0052C000 */

loc_0052C11A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052C120
 * Original: 0x0052C120 - 0x0052C147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C120: ;
    ecx = MEM32(0x6C2B98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052C13B; /* je: equal / zero */

loc_0052C12D: ;
    PUSH32(esp, 0x0052C132u); RECOMP_ABI_CALL(0x0052BFE0u, sub_0052BFE0); /* call 0x0052BFE0 */

loc_0052C132: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052C138u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052C138: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052C13B: ;
    MEM32(0x6C2B98) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052C150
 * Original: 0x0052C150 - 0x0052C183 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C150: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    MEM32(esi) = 0x64ACE4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C16E; /* je: equal / zero */

loc_0052C162: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C16Eu); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052C16E: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C17B; /* je: equal / zero */

loc_0052C175: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052C17Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C179u); } /* indirect call */
    }

loc_0052C17B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0052C190
 * Original: 0x0052C190 - 0x0052C1B7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C190: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C1B4; /* je: equal / zero */

loc_0052C197: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax + 0x38;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM8(eax + 0x14) = MEM8(eax + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);

loc_0052C1B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C1C0
 * Original: 0x0052C1C0 - 0x0052C1E4 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C1C0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C1E1; /* je: equal / zero */

loc_0052C1C7: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax + 0x68);
    if (CMP_EQ(_fa, _fb)) goto loc_0052C1DB; /* je: equal / zero */

loc_0052C1D2: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x68) = ecx;
    esp += 8; return; /* ret 4 */

loc_0052C1DB: ;
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x68) = ecx;

loc_0052C1E1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C1F0
 * Original: 0x0052C1F0 - 0x0052C293 (163 bytes, 57 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C22B; /* je: equal / zero */

loc_0052C1FD: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052C21E; /* jle: less or equal (signed <=) */

loc_0052C203: ;
    eax = MEM32(esi + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64ACF8);
    ecx = esi + 0x14;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052C219u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052C219: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0052C22B;

loc_0052C21E: ;
    edx = esi + 0x14;

loc_0052C221: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C221; /* jne: not equal / not zero */

loc_0052C22B: ;
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x64ACE8);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0052C239u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052C239: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C24D; /* je: equal / zero */

loc_0052C240: ;
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0052C24Bu); RECOMP_ABI_CALL(0x005D6500u, sub_005D6500); /* call 0x005D6500 */

loc_0052C24B: ;
    goto loc_0052C24F;

loc_0052C24D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052C24F: ;
    MEM32(esi + 0x10) = eax;
    MEM32(eax + 0x68) = MEM32(eax + 0x68) | 8;
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C262u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052C262: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x0052C274u); RECOMP_ABI_CALL(0x005D6460u, sub_005D6460); /* call 0x005D6460 */

loc_0052C274: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0052C281u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052C281: ;
    MEM32(esi + 0x44) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C2A0
 * Original: 0x0052C2A0 - 0x0052C2FC (92 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C2A0(void)
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

loc_0052C2A0: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 8) = LO8(eax);
    MEM8(ecx + 0x50) = LO8(eax);
    edx = MEM32(0x679680);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = edx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = edx;
    MEM32(ecx + 0xC) = 1;
    MEM32(ecx + 0x44) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64AD00)); /* fmul dword ptr [0x64ad00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D0F0)); /* fadd dword ptr [0x63d0f0] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C2FA; /* je: equal / zero */

loc_0052C2F2: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0052C2FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052C300
 * Original: 0x0052C300 - 0x0052C543 (579 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C300(void)
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

loc_0052C300: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C518; /* je: equal / zero */

loc_0052C311: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C533; /* je: equal / zero */

loc_0052C31C: ;
    eax = MEM32(esi + 0x38);
    fp_push(MEMF(esi + 0x54)); /* fld float */
    MEM32(esp + 4) = eax;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C352; /* je: equal / zero */

loc_0052C32D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64021C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64021c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052C348; /* jne: not equal / not zero */

loc_0052C33A: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x54) - fp_top()); /* fsubr dword ptr [esi + 0x54] */
    goto loc_0052C373;

loc_0052C348: ;
    MEM32(esp + 4) = 0;
    goto loc_0052C376;

loc_0052C352: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D0F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d0f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052C376; /* jp: parity */

loc_0052C35F: ;
    PUSH32(esp, 0x3F8CCCCD);
    PUSH32(esp, 0x3F666666);
    ecx = 0x679680;
    PUSH32(esp, 0x0052C373u); RECOMP_ABI_CALL(0x0043B550u, sub_0043B550); /* call 0x0043B550 */

loc_0052C373: ;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */

loc_0052C376: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C476; /* je: equal / zero */

loc_0052C384: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052C476; /* jp: parity */

loc_0052C398: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C3A8; /* je: equal / zero */

loc_0052C39F: ;
    MEM32(esi + 0xC) = 0;
    goto loc_0052C3CE;

loc_0052C3A8: ;
    edx = MEM32(0x679680);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x679680) = edx;
    SET_LO8(eax, MEM8(0x679682));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;

loc_0052C3CE: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052C3D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C3D3u); } /* indirect call */
    }

loc_0052C3D6: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0052C421; /* je: equal / zero */

loc_0052C3DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0052C403; /* je: equal / zero */

loc_0052C3E1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052C44B; /* jne: not equal / not zero */

loc_0052C3E4: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052C3F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C3F0u); } /* indirect call */
    }

loc_0052C3F3: ;
    eax = MEM32(esi + 0x40);
    MEM32(esp + 4) = eax;
    MEM32(esi + 0x44) = 0x40000000;
    goto loc_0052C44B;

loc_0052C403: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052C412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C40Fu); } /* indirect call */
    }

loc_0052C412: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x40000000);
    goto loc_0052C43A;

loc_0052C421: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    eax = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052C42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C42Au); } /* indirect call */
    }

loc_0052C42D: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x41700000);
    PUSH32(esp, 0x40C00000);

loc_0052C43A: ;
    MEM32(esp + 0xC) = ecx;
    ecx = 0x679680;
    PUSH32(esp, 0x0052C448u); RECOMP_ABI_CALL(0x0043B550u, sub_0043B550); /* call 0x0043B550 */

loc_0052C448: ;
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */

loc_0052C44B: ;
    ecx = 0x679680;
    PUSH32(esp, 0x0052C455u); RECOMP_ABI_CALL(0x0043B4E0u, sub_0043B4E0); /* call 0x0043B4E0 */

loc_0052C455: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    edx = MEM32(esp + 4);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052C468u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052C468: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C474u); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052C474: ;
    goto loc_0052C4A6;

loc_0052C476: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052C4A6; /* jne: not equal / not zero */

loc_0052C486: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0x44) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052C4A6; /* jp: parity */

loc_0052C49F: ;
    MEM32(esi + 0x44) = 0;

loc_0052C4A6: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C51D; /* jne: not equal / not zero */

loc_0052C4B0: ;
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    ecx = MEM32(ecx + 0x5C);
    fp_push(MEMF(esi + 0x48)); /* fld float */
    MEM32(esp + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052C4E4; /* jne: not equal / not zero */

loc_0052C4DC: ;
    MEM32(esp + 8) = 0x3F800000;

loc_0052C4E4: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C4FFu); RECOMP_ABI_CALL(0x0052B4C0u, sub_0052B4C0); /* call 0x0052B4C0 */

loc_0052C4FF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0052C50Cu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052C50C: ;
    edx = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052C518u); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052C518: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0052C51D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C527u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052C527: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_0052C533: ;
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C518; /* jne: not equal / not zero */

loc_0052C53A: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052C550
 * Original: 0x0052C550 - 0x0052C589 (57 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64AD14);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0052C56Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C56E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64AD04);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0052C584u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C590
 * Original: 0x0052C590 - 0x0052C634 (164 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C590: ;
    PUSH32(esp, ebx);
    eax = 0x3F800000;
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    MEM32(esi) = 0x64ACE4;
    MEM32(esi + 0x48) = 0x3E4CCCCD;
    MEM32(esi + 0x4C) = 0x3F4CCCCD;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 0x50) = LO8(ebx);
    MEM8(esi + 0x14) = LO8(ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0052C5E2; /* jge: greater or equal (signed >=) */

loc_0052C5D3: ;
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x662F28;
    MEM32(esi + 4) = ecx;
    goto loc_0052C5E9;

loc_0052C5E2: ;
    MEM32(esi + 4) = 0x662F28;

loc_0052C5E9: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C601; /* je: equal / zero */

loc_0052C5F2: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052C601u); RECOMP_ABI_CALL(0x005D5060u, sub_005D5060); /* call 0x005D5060 */

loc_0052C601: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C624; /* je: equal / zero */

loc_0052C60B: ;
    eax = MEM32(0x6C2B9C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x34) = edx;
    MEM32(0x6C2B9C) = MEM32(0x6C2B9C) + 1;
    _fa = (uint32_t)(MEM32(0x6C2B9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0052C624: ;
    MEM32(esi + 0x34) = ebx;
    MEM32(0x6C2B9C) = MEM32(0x6C2B9C) + 1;
    _fa = (uint32_t)(MEM32(0x6C2B9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C640
 * Original: 0x0052C640 - 0x0052C65E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052C648u); RECOMP_ABI_CALL(0x0052C150u, sub_0052C150); /* call 0x0052C150 */

loc_0052C648: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052C658; /* je: equal / zero */

loc_0052C64F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052C655u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052C655: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052C658: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C660
 * Original: 0x0052C660 - 0x0052C6E8 (136 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C660: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64AD30;
    if (CMP_EQ(_fa, _fb)) goto loc_0052C676; /* je: equal / zero */

loc_0052C670: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052C676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C674u); } /* indirect call */
    }

loc_0052C676: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C683; /* je: equal / zero */

loc_0052C67D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052C683u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C681u); } /* indirect call */
    }

loc_0052C683: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C693; /* je: equal / zero */

loc_0052C68D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052C693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C691u); } /* indirect call */
    }

loc_0052C693: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C6A3; /* je: equal / zero */

loc_0052C69D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052C6A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C6A1u); } /* indirect call */
    }

loc_0052C6A3: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C6B3; /* je: equal / zero */

loc_0052C6AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052C6B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C6B1u); } /* indirect call */
    }

loc_0052C6B3: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C6C3; /* je: equal / zero */

loc_0052C6BD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052C6C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C6C1u); } /* indirect call */
    }

loc_0052C6C3: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C6D0; /* je: equal / zero */

loc_0052C6CA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052C6D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C6CEu); } /* indirect call */
    }

loc_0052C6D0: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C6E0; /* je: equal / zero */

loc_0052C6DA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052C6E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C6DEu); } /* indirect call */
    }

loc_0052C6E0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0052C6F0
 * Original: 0x0052C6F0 - 0x0052C702 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C6F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x22) = LO8(eax);
    MEM8(ecx + 0x20) = LO8(eax);
    MEM8(ecx + 0x23) = LO8(eax);
    MEM32(ecx + 0xA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0052C710
 * Original: 0x0052C710 - 0x0052C736 (38 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C710(void)
{

loc_0052C710: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 0x21) = LO8(eax);
    MEM8(ecx + 0xAD) = LO8(edx);
    MEM8(ecx + 0x22) = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0052C740
 * Original: 0x0052C740 - 0x0052C75A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C740: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C760
 * Original: 0x0052C760 - 0x0052C7A3 (67 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C760: ;
    eax = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0052C78A; /* je: equal / zero */

loc_0052C76B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    ebx = MEM32(edi);
    esi = eax + 0x38;
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esi + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM8(eax + 0x14) = MEM8(eax + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0052C78A: ;
    eax = MEM32(edx);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C7B0
 * Original: 0x0052C7B0 - 0x0052C820 (112 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C7B0(void)
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

loc_0052C7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052C81C; /* je: equal / zero */

loc_0052C7C6: ;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 0x0052C7D1u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C7D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C7D5: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, 0x0052C7DDu); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C7DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C7E1: ;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, 0x0052C7E9u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C7E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C7ED: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0x0052C7F8u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C7F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C7FC: ;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, 0x0052C807u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C807: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C80B: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0x0052C816u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052C816: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C81C; /* jne: not equal / not zero */

loc_0052C81A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052C81C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052C820
 * Original: 0x0052C820 - 0x0052C8F4 (212 bytes, 78 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C820: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    ebx = 0x64AD24;
    edi = ecx + 0x5C;

loc_0052C835: ;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0052C841u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0052C841: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x64AD7C);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052C859u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C859: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64AD70);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052C86Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C86C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = edi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64AD64);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052C882u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C882: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64AD58);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0052C898u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C898: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64AD30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x64AD30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052C835; /* jl: less (signed <) */

loc_0052C8A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64AD50);
    ecx = ebp;
    PUSH32(esp, 0x0052C8B4u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0052C8B4: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi + 0x9C;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x64AD44);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052C8D3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C8D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x64AD38);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052C8ECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052C8EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052C900
 * Original: 0x0052C900 - 0x0052C912 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C900(void)
{

loc_0052C900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052C908u); RECOMP_ABI_CALL(0x0052DB40u, sub_0052DB40); /* call 0x0052DB40 */

loc_0052C908: ;
    MEM32(esi) = 0x64AD88;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052C920
 * Original: 0x0052C920 - 0x0052C92B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052C920: ;
    MEM32(ecx) = 0x64AD88;
    g_seh_ebp = ebp; sub_0052D830(); return; /* tail jmp 0x0052D830 */

}

/**
 * sub_0052C930
 * Original: 0x0052C930 - 0x0052C9B9 (137 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052C930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0052C93Au); RECOMP_ABI_CALL(0x0052D8A0u, sub_0052D8A0); /* call 0x0052D8A0 */

loc_0052C93A: ;
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0052C948u); RECOMP_ABI_CALL(0x0052DA40u, sub_0052DA40); /* call 0x0052DA40 */

loc_0052C948: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C98D; /* je: equal / zero */

loc_0052C950: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052C95Cu); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052C95C: ;
    edx = MEM32(edi + 0x28);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052C96Bu); RECOMP_ABI_CALL(0x005D6460u, sub_005D6460); /* call 0x005D6460 */

loc_0052C96B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052C977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C974u); } /* indirect call */
    }

loc_0052C977: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052C982u); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052C982: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052C98Du); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052C98D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052C9B3; /* je: equal / zero */

loc_0052C991: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esi + 0x38;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esi);
    MEM8(esi + 0x14) = MEM8(esi + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052C9B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052C9B0u); } /* indirect call */
    }

loc_0052C9B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052C9C0
 * Original: 0x0052C9C0 - 0x0052C9D9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C9C0(void)
{

loc_0052C9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052C9C8u); RECOMP_ABI_CALL(0x005D6580u, sub_005D6580); /* call 0x005D6580 */

loc_0052C9C8: ;
    MEM32(esi) = 0x64ADAC;
    MEM32(esi + 0x6C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052C9E0
 * Original: 0x0052C9E0 - 0x0052C9E4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C9E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0052C9E0: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052C9F0
 * Original: 0x0052C9F0 - 0x0052CA00 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052C9F0(void)
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

loc_0052C9F0: ;
    SET_LO8(eax, MEM8(0x6CE318));
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052C9FF; /* jne: not equal / not zero */

loc_0052C9FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x60)); /* fmul dword ptr [ecx + 0x60] */

loc_0052C9FF: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052CA00
 * Original: 0x0052CA00 - 0x0052CA5B (91 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CA00(void)
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

loc_0052CA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x64));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (CMP_NE(_fa, _fb)) goto loc_0052CA40; /* jne: not equal / not zero */

loc_0052CA15: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052CA53; /* jne: not equal / not zero */

loc_0052CA1A: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0x6C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052CA53; /* jp: parity */

loc_0052CA33: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052CA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CA35u); } /* indirect call */
    }

loc_0052CA38: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D63E0(); return; /* tail jmp 0x005D63E0 */

loc_0052CA40: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052CA53; /* jne: not equal / not zero */

loc_0052CA45: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052CA4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CA49u); } /* indirect call */
    }

loc_0052CA4C: ;
    MEM32(esi + 0x6C) = 0;

loc_0052CA53: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D63E0(); return; /* tail jmp 0x005D63E0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052CA60
 * Original: 0x0052CA60 - 0x0052CAAA (74 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CA68u); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CA68: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64ADF4;
    if (CMP_EQ(_fa, _fb)) goto loc_0052CA7B; /* je: equal / zero */

loc_0052CA75: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052CA7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CA79u); } /* indirect call */
    }

loc_0052CA7B: ;
    PUSH32(esp, 0x221);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x0052CA8Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CA8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CAA1; /* je: equal / zero */

loc_0052CA93: ;
    ecx = eax;
    PUSH32(esp, 0x0052CA9Au); RECOMP_ABI_CALL(0x0052C9C0u, sub_0052C9C0); /* call 0x0052C9C0 */

loc_0052CA9A: ;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052CAA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052CAB0
 * Original: 0x0052CAB0 - 0x0052CABB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CAB0: ;
    MEM32(ecx) = 0x64ADF4;
    g_seh_ebp = ebp; sub_0052C920(); return; /* tail jmp 0x0052C920 */

}

/**
 * sub_0052CAC0
 * Original: 0x0052CAC0 - 0x0052CAD1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CAC0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CACE; /* je: equal / zero */

loc_0052CAC7: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x6C) = ecx;

loc_0052CACE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CAE0
 * Original: 0x0052CAE0 - 0x0052CB40 (96 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CAE0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 4) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64AD30;
    MEM32(eax + 0xB0) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xA0) = 0x3DCCCCCD;
    MEM8(eax + 0x22) = LO8(ecx);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM32(eax + 0xB4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CB40
 * Original: 0x0052CB40 - 0x0052CB5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CB48u); RECOMP_ABI_CALL(0x0052C660u, sub_0052C660); /* call 0x0052C660 */

loc_0052CB48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052CB58; /* je: equal / zero */

loc_0052CB4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052CB55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052CB55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052CB58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CB60
 * Original: 0x0052CB60 - 0x0052CEB5 (853 bytes, 241 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CB60(void)
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

loc_0052CB60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CB78; /* je: equal / zero */

loc_0052CB6B: ;
    eax = MEM32(0x6CE2E4);
    ecx = MEM32(eax + 0x38);
    MEM32(esi + 8) = ecx;
    goto loc_0052CB84;

loc_0052CB78: ;
    edx = MEM32(0x6CE2E4);
    eax = MEM32(edx + 0x3C);
    MEM32(esi + 8) = eax;

loc_0052CB84: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x50) = 0x3F800000;
    MEM32(esi + 0x54) = 0;
    MEM8(esi + 0x22) = 0;
    MEM32(esp + 0xC) = ebp;
    edi = esi + 0x5C;

loc_0052CBA1: ;
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0052CBAFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CBAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CBBF; /* je: equal / zero */

loc_0052CBB6: ;
    ecx = eax;
    PUSH32(esp, 0x0052CBBDu); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CBBD: ;
    goto loc_0052CBC1;

loc_0052CBBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052CBC1: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(edi + 0xC) = ebp;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + -4) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    fp_push(MEMF(0x639994)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEM32(esp + 0xC) = ebp;
    MEMF(edi + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63030C)); /* fadd dword ptr [0x63030c] */
    MEMF(edi + -16) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0052CBA1; /* jl: less (signed <) */

loc_0052CBF2: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0052CBFEu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CBFE: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax + 0x24) = 0x41200000;
    MEM32(eax + 0x28) = 0x42200000;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF98);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CC1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CC19u); } /* indirect call */
    }

loc_0052CC1C: ;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF80);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CC29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CC26u); } /* indirect call */
    }

loc_0052CC29: ;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    MEM32(esi + 0x64) = 0x469C4000;
    PUSH32(esp, 0x0052CC3Cu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CC3C: ;
    eax = MEM32(esi + 0x6C);
    ebp = 0x41700000;
    MEM32(eax + 0x24) = ebp;
    edi = 0x42480000;
    MEM32(eax + 0x28) = edi;
    ecx = MEM32(esi + 0x6C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF6C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CC5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CC59u); } /* indirect call */
    }

loc_0052CC5C: ;
    ecx = MEM32(esi + 0x6C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF54);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CC69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CC66u); } /* indirect call */
    }

loc_0052CC69: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    MEM32(esi + 0x78) = 0x47435000;
    PUSH32(esp, 0x0052CC7Fu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CC7F: ;
    eax = MEM32(esi + 0x80);
    MEM32(eax + 0x24) = 0x41A00000;
    MEM32(eax + 0x28) = edi;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF3C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CC9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CC9Cu); } /* indirect call */
    }

loc_0052CC9F: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF24);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CCAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CCACu); } /* indirect call */
    }

loc_0052CCAF: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AF0C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CCBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CCBCu); } /* indirect call */
    }

loc_0052CCBF: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x2C);
    MEM32(esi + 0x8C) = 0x479C4000;
    PUSH32(esp, 0x0052CCD7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CCD7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CCE7; /* je: equal / zero */

loc_0052CCDE: ;
    ecx = eax;
    PUSH32(esp, 0x0052CCE5u); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CCE5: ;
    goto loc_0052CCE9;

loc_0052CCE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052CCE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = eax;
    MEM32(esi + 0x98) = eax;
    PUSH32(esp, 0x0052CCFAu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CCFA: ;
    eax = MEM32(esi + 0x98);
    MEM32(eax + 0x24) = ebp;
    MEM32(eax + 0x28) = edi;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AEF0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CD16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD13u); } /* indirect call */
    }

loc_0052CD16: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AED4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CD26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD23u); } /* indirect call */
    }

loc_0052CD26: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AEB8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CD36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD33u); } /* indirect call */
    }

loc_0052CD36: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AE9C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CD46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD43u); } /* indirect call */
    }

loc_0052CD46: ;
    PUSH32(esp, 0x6F);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0052CD54u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CD54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CD64; /* je: equal / zero */

loc_0052CD5B: ;
    ecx = eax;
    PUSH32(esp, 0x0052CD62u); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CD62: ;
    goto loc_0052CD66;

loc_0052CD64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052CD66: ;
    MEM32(esi + 0xB0) = eax;
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ebp;
    MEM32(eax + 0x28) = edi;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0052CD81u); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CD81: ;
    ecx = MEM32(esi + 0xB0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AE78);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CD91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD8Eu); } /* indirect call */
    }

loc_0052CD91: ;
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AE54);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CDA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CD9Eu); } /* indirect call */
    }

loc_0052CDA1: ;
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0052CDAFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CDAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CDBF; /* je: equal / zero */

loc_0052CDB6: ;
    ecx = eax;
    PUSH32(esp, 0x0052CDBDu); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CDBD: ;
    goto loc_0052CDC1;

loc_0052CDBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052CDC1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 0x0052CDD2u); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CDD2: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AE44);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052CDE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CDDFu); } /* indirect call */
    }

loc_0052CDE2: ;
    PUSH32(esp, 0x82);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x2C);
    MEM8(esi + 0xAC) = 1;
    MEM8(esi + 0xAD) = 1;
    MEM32(esi + 0x24) = 0x40A00000;
    MEM32(esi + 0x28) = 0x3E99999A;
    MEM32(esi + 0x2C) = 0x3F333333;
    MEM32(esi + 0x30) = 0x3F19999A;
    MEM32(esi + 0x34) = 0x3F800000;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = 0x42C80000;
    PUSH32(esp, 0x0052CE2Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CE2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CE3E; /* je: equal / zero */

loc_0052CE35: ;
    ecx = eax;
    PUSH32(esp, 0x0052CE3Cu); RECOMP_ABI_CALL(0x0052C900u, sub_0052C900); /* call 0x0052C900 */

loc_0052CE3C: ;
    goto loc_0052CE40;

loc_0052CE3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052CE40: ;
    MEM32(esi + 0xB4) = eax;
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ebp;
    MEM32(eax + 0x28) = edi;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052CE5Bu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_0052CE5B: ;
    ecx = MEM32(esi + 0xB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64AE30);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052CE6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CE68u); } /* indirect call */
    }

loc_0052CE6B: ;
    PUSH32(esp, 0x89);
    PUSH32(esp, 0x64ADE4);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0052CE7Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052CE7C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0052CEA2; /* je: equal / zero */

loc_0052CE85: ;
    PUSH32(esp, 0x64AE18);
    ecx = eax;
    PUSH32(esp, 0x0052CE91u); RECOMP_ABI_CALL(0x005D6500u, sub_005D6500); /* call 0x005D6500 */

loc_0052CE91: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0052CE9Fu); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052CE9F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0052CEA2: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0052CEB2u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052CEB2: ;
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
 * sub_0052CEC0
 * Original: 0x0052CEC0 - 0x0052CEDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CEC8u); RECOMP_ABI_CALL(0x0052C920u, sub_0052C920); /* call 0x0052C920 */

loc_0052CEC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052CED8; /* je: equal / zero */

loc_0052CECF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052CED5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052CED5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052CED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CEE0
 * Original: 0x0052CEE0 - 0x0052CF14 (52 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CEE8u); RECOMP_ABI_CALL(0x0052D8A0u, sub_0052D8A0); /* call 0x0052D8A0 */

loc_0052CEE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CEFA; /* je: equal / zero */

loc_0052CEEC: ;
    SET_LO8(ecx, MEM8(eax + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052CEFA; /* jne: not equal / not zero */

loc_0052CEF3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052CEFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052CEF7u); } /* indirect call */
    }

loc_0052CEFA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052CF10u); RECOMP_ABI_CALL(0x0052C930u, sub_0052C930); /* call 0x0052C930 */

loc_0052CF10: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052CF20
 * Original: 0x0052CF20 - 0x0052CF3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CF20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CF28u); RECOMP_ABI_CALL(0x005D5CC0u, sub_005D5CC0); /* call 0x005D5CC0 */

loc_0052CF28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052CF38; /* je: equal / zero */

loc_0052CF2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052CF35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052CF35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052CF38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CF40
 * Original: 0x0052CF40 - 0x0052CF5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052CF40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052CF48u); RECOMP_ABI_CALL(0x0052CAB0u, sub_0052CAB0); /* call 0x0052CAB0 */

loc_0052CF48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052CF58; /* je: equal / zero */

loc_0052CF4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052CF55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052CF55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052CF58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052CF60
 * Original: 0x0052CF60 - 0x0052CF73 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052CF60: ;
    PUSH32(esp, 0x3F800000);
    edx = ecx;
    PUSH32(esp, 0x0052CF6Cu); RECOMP_ABI_CALL(0x0052CAC0u, sub_0052CAC0); /* call 0x0052CAC0 */

loc_0052CF6C: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_0052D870(); return; /* tail jmp 0x0052D870 */

}

/**
 * sub_0052CF80
 * Original: 0x0052CF80 - 0x0052D39C (1052 bytes, 324 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052CF80(void)
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

loc_0052CF80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CF96; /* je: equal / zero */

loc_0052CF8E: ;
    MEM8(esi + 0x20) = 0;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0052CFA4;

loc_0052CF96: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052CFA1; /* je: equal / zero */

loc_0052CF9D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0052CFA4;

loc_0052CFA1: ;
    SET_LO8(ebx, MEM8(esi + 0x22));

loc_0052CFA4: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEM32(esp + 0xC) = 0;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_push(MEMF(esi + 0x10)); /* fld float */
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
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052CFE9; /* jne: not equal / not zero */

loc_0052CFDF: ;
    MEM32(esp + 0xC) = 0x3F800000;
    goto loc_0052D010;

loc_0052CFE9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052CFFD; /* jp: parity */

loc_0052CFF7: ;
    MEM8(esi + 0x20) = 0;
    goto loc_0052D010;

loc_0052CFFD: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0052D010: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D06E; /* jne: not equal / not zero */

loc_0052D017: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630DB8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630db8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052D0FE; /* jne: not equal / not zero */

loc_0052D02B: ;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D370)); /* fsub dword ptr [0x62d370] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630DB8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x630db8] */
    MEMF(esi + 0x44) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052D05A; /* jp: parity */

loc_0052D044: ;
    ecx = MEM32(esi + 0x4C);
    fp_pop(); /* fstp st(0) */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052D04Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D04Bu); } /* indirect call */
    }

loc_0052D04E: ;
    MEM32(esi + 0x40) = 0;
    goto loc_0052D0FE;

loc_0052D05A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052D069u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052D069: ;
    goto loc_0052D0FE;

loc_0052D06E: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D077; /* jne: not equal / not zero */

loc_0052D075: ;
    SET_LO8(ebx, 1);

loc_0052D077: ;
    ecx = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = eax;
    SET_LO8(eax, MEM8(ecx + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D08A; /* je: equal / zero */

loc_0052D085: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052D08Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D087u); } /* indirect call */
    }

loc_0052D08A: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x28)); /* fsub dword ptr [esi + 0x28] */
    ecx = MEM32(esi + 0x4C);
    MEM32(esi + 0x44) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052D0AAu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052D0AA: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052D0C0; /* jne: not equal / not zero */

loc_0052D0B8: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_0052D0E5;

loc_0052D0C0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052D0D6; /* jp: parity */

loc_0052D0CE: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_0052D0E5;

loc_0052D0D6: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */

loc_0052D0E5: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x30)); /* fsub dword ptr [esi + 0x30] */
    ecx = MEM32(esi + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x30)); /* fadd dword ptr [esi + 0x30] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0052D0FEu); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052D0FE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D267; /* je: equal / zero */

loc_0052D106: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x64;

loc_0052D118: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0x0052D120u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052D120: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D12D; /* je: equal / zero */

loc_0052D124: ;
    eax = MEM32(ebp);
    ebx = edi;
    MEM32(esp + 0x10) = eax;

loc_0052D12D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052D118; /* jl: less (signed <) */

loc_0052D136: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D143; /* je: equal / zero */

loc_0052D13D: ;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052D143: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052D265; /* jne: not equal / not zero */

loc_0052D155: ;
    ecx = ebx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052D265; /* jge: greater or equal (signed >=) */

loc_0052D161: ;
    edx = ecx + ecx * 4 + 0x19;
    edx = esi + edx * 4;

loc_0052D168: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0052D18D; /* jnp: not parity */

loc_0052D174: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D18D; /* je: equal / zero */

loc_0052D179: ;
    eax = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0052D168; /* jl: less (signed <) */

loc_0052D188: ;
    goto loc_0052D265;

loc_0052D18D: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    edx = ecx + ecx * 4 + 0x19;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esi + edx * 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052D1B6; /* jne: not equal / not zero */

loc_0052D1AE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0052D1B6: ;
    eax = ecx + ecx * 4;
    fp_push(MEMF(esi + eax * 4 + 0x60)); /* fld float */
    ecx = MEM32(esi + eax * 4 + 0x58);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + eax * 4 + 0x5C)); /* fsub dword ptr [esi + eax*4 + 0x5c] */
    edi = esi + eax * 4;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x5C)); /* fadd dword ptr [edi + 0x5c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0052D1D8u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0052D1D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D265; /* jne: not equal / not zero */

loc_0052D1E0: ;
    ebp = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052D1EDu); RECOMP_ABI_CALL(0x0052D770u, sub_0052D770); /* call 0x0052D770 */

loc_0052D1ED: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    eax = esi + 0xB8;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052D206u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_0052D206: ;
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052D212u); RECOMP_ABI_CALL(0x0052D770u, sub_0052D770); /* call 0x0052D770 */

loc_0052D212: ;
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    ecx = MEM32(edi + 0x68);
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    MEM32(esi + 0xA4) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x679680);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEM32(0x679680) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x14)); /* fimul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0052D265: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0052D267: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D367; /* je: equal / zero */

loc_0052D275: ;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0xA8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052D367; /* jp: parity */

loc_0052D298: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = MEM32(esi + 0xA4);
    SET_LO8(ecx, MEM8(esi + 0xAD));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xA0)); /* fsub dword ptr [esi + 0xa0] */
    MEM32(esi + 0xA4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D324; /* je: equal / zero */

loc_0052D30B: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    ecx = esi + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    goto loc_0052D362;

loc_0052D324: ;
    SET_LO8(ecx, MEM8(esi + 0xAC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D34B; /* je: equal / zero */

loc_0052D32E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052D34B; /* je: equal / zero */

loc_0052D332: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    ecx = esi + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB0);
    goto loc_0052D362;

loc_0052D34B: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    ecx = esi + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x98);

loc_0052D362: ;
    PUSH32(esp, 0x0052D367u); RECOMP_ABI_CALL(0x0052C930u, sub_0052C930); /* call 0x0052C930 */

loc_0052D367: ;
    SET_LO8(eax, MEM8(esi + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D38A; /* je: equal / zero */

loc_0052D36E: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    ecx = esi + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0x0052D38Au); RECOMP_ABI_CALL(0x0052C930u, sub_0052C930); /* call 0x0052C930 */

loc_0052D38A: ;
    MEM8(esi + 0x22) = 0;
    MEM8(esi + 0x20) = 0;
    MEM8(esi + 0x23) = 0;
    POP32(esp, esi);
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
 * sub_0052D3A0
 * Original: 0x0052D3A0 - 0x0052D3E3 (67 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x64AFB0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052D3DB; /* je: equal / zero */

loc_0052D3B0: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052D3CE; /* jle: less or equal (signed <=) */

loc_0052D3B7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052D3C3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D3C3: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052D3B7; /* jl: less (signed <) */

loc_0052D3CE: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052D3D7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D3D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0052D3DB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0052D3F0
 * Original: 0x0052D3F0 - 0x0052D43D (77 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052D439; /* jge: greater or equal (signed >=) */

loc_0052D3FB: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D42C; /* je: equal / zero */

loc_0052D403: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D42C; /* je: equal / zero */

loc_0052D408: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052D415u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_0052D415: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D42C: ;
    eax = MEM32(esi + 4);
    MEM32(eax + ecx * 4) = 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052D439: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D440
 * Original: 0x0052D440 - 0x0052D5A4 (356 bytes, 121 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D440: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x6C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x64AFE0);
    ecx = ebx;
    PUSH32(esp, 0x0052D45Bu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D45B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D46C; /* je: equal / zero */

loc_0052D45F: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052D466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D463u); } /* indirect call */
    }

loc_0052D466: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D471; /* jne: not equal / not zero */

loc_0052D46C: ;
    ebp = 1;

loc_0052D471: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D4C1; /* je: equal / zero */

loc_0052D478: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052D4A2; /* jle: less or equal (signed <=) */

loc_0052D481: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052D48Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D48D: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi * 4) = 0;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052D481; /* jl: less (signed <) */

loc_0052D4A2: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D4BA; /* je: equal / zero */

loc_0052D4A7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052D4B0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D4B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0052D4BA: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D4E1; /* jne: not equal / not zero */

loc_0052D4C1: ;
    PUSH32(esp, 0xEA);
    edx = ebp * 4;
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, edx);
    MEM32(esi + 8) = ebp;
    PUSH32(esp, 0x0052D4DBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052D4DB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_0052D4E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64AFD4);
    ecx = ebx;
    PUSH32(esp, 0x0052D4EFu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D4EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D4FF; /* je: equal / zero */

loc_0052D4F3: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052D4FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D4F7u); } /* indirect call */
    }

loc_0052D4FA: ;
    MEM32(esi + 0xC) = eax;
    goto loc_0052D506;

loc_0052D4FF: ;
    MEM32(esi + 0xC) = 0;

loc_0052D506: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052D59A; /* jle: less or equal (signed <=) */

loc_0052D513: ;
    ebp = edi + 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64AFCC);
    ecx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052D528u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052D528: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0052D539u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D57E; /* je: equal / zero */

loc_0052D53D: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052D54Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D548u); } /* indirect call */
    }

loc_0052D54B: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D572; /* je: equal / zero */

loc_0052D553: ;
    PUSH32(esp, 0x104);
    edx = esp + 0x14;
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052D567u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_0052D567: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + edi * 4) = eax;
    goto loc_0052D58D;

loc_0052D572: ;
    edx = MEM32(esi + 4);
    MEM32(edx + edi * 4) = 0;
    goto loc_0052D58D;

loc_0052D57E: ;
    eax = MEM32(esi + 4);
    MEM8(esp + 0x10) = 0;
    MEM32(eax + edi * 4) = 0;

loc_0052D58D: ;
    eax = MEM32(esi + 8);
    edi = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052D513; /* jl: less (signed <) */

loc_0052D59A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D5B0
 * Original: 0x0052D5B0 - 0x0052D617 (103 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D5B0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = ecx;
    ecx = MEM32(0x860220);
    eax = MEM32(ecx);
    PUSH32(esp, 0x64AFEC);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0052D5D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D5D4u); } /* indirect call */
    }

loc_0052D5D7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D5EB; /* jne: not equal / not zero */

loc_0052D5DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0052D5EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0052D5F6u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0052D5F6: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052D602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D5FFu); } /* indirect call */
    }

loc_0052D602: ;
    ecx = esi;
    PUSH32(esp, 0x0052D609u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0052D609: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D620
 * Original: 0x0052D620 - 0x0052D62B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D620: ;
    MEM32(ecx) = 0x64AFF4;
    g_seh_ebp = ebp; sub_0052D3A0(); return; /* tail jmp 0x0052D3A0 */

}

/**
 * sub_0052D630
 * Original: 0x0052D630 - 0x0052D6BC (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D630: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0052D653; /* jne: not equal / not zero */

loc_0052D637: ;
    esi = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0052D64E; /* jl: less (signed <) */

loc_0052D647: ;
    MEM32(ecx + 0x14) = 0;

loc_0052D64E: ;
    eax = MEM32(ecx + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052D653: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052D65F; /* jg: greater (signed >) */

loc_0052D65B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052D65F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D685; /* jne: not equal / not zero */

loc_0052D664: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x679682));
    POP32(esp, esi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0052D685: ;
    esi = MEM32(0x679680);
    goto loc_0052D690;

    /* nop */

loc_0052D690: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x269EC3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(0x679680) = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0xC))); }
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D690; /* je: equal / zero */

loc_0052D6B7: ;
    MEM32(ecx + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052D6C0
 * Original: 0x0052D6C0 - 0x0052D6FB (59 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0052D6CEu); RECOMP_ABI_CALL(0x0052D440u, sub_0052D440); /* call 0x0052D440 */

loc_0052D6CE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B004);
    ecx = esi;
    PUSH32(esp, 0x0052D6DCu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D6DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D6EF; /* je: equal / zero */

loc_0052D6E0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052D6E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D6E4u); } /* indirect call */
    }

loc_0052D6E7: ;
    MEM32(edi + 0x10) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D6EF: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D700
 * Original: 0x0052D700 - 0x0052D71E (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64B010;
    if (CMP_EQ(_fa, _fb)) goto loc_0052D716; /* je: equal / zero */

loc_0052D710: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052D716u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D714u); } /* indirect call */
    }

loc_0052D716: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052D620(); return; /* tail jmp 0x0052D620 */

}

/**
 * sub_0052D720
 * Original: 0x0052D720 - 0x0052D74B (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D720: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D73B; /* je: equal / zero */

loc_0052D72A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0052D72Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D72Cu); } /* indirect call */
    }

loc_0052D72F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D73B; /* je: equal / zero */

loc_0052D733: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052D73Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D738u); } /* indirect call */
    }

loc_0052D73B: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0052D747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D744u); } /* indirect call */
    }

loc_0052D747: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D750
 * Original: 0x0052D750 - 0x0052D766 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D750: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D763; /* je: equal / zero */

loc_0052D757: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0052D75Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D759u); } /* indirect call */
    }

loc_0052D75C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D763; /* je: equal / zero */

loc_0052D760: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0052D763: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052D770
 * Original: 0x0052D770 - 0x0052D79A (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D770: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D78F; /* je: equal / zero */

loc_0052D77A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052D784u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052D784: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D78F: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 0x18) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D7A0
 * Original: 0x0052D7A0 - 0x0052D7CA (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D7BF; /* je: equal / zero */

loc_0052D7AA: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052D7B4u); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052D7B4: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D7BF: ;
    edx = MEM32(esp + 8);
    MEM32(esi + 0x1C) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D7D0
 * Original: 0x0052D7D0 - 0x0052D830 (96 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D7D0(void)
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

loc_0052D7D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0052D7DEu); RECOMP_ABI_CALL(0x0052D6C0u, sub_0052D6C0); /* call 0x0052D6C0 */

loc_0052D7DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x644EB8);
    ecx = esi;
    PUSH32(esp, 0x0052D7ECu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D7EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D7FC; /* je: equal / zero */

loc_0052D7F0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0052D7F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D7F4u); } /* indirect call */
    }

loc_0052D7F7: ;
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0052D803;

loc_0052D7FC: ;
    MEM32(edi + 0x18) = 0x3F800000;

loc_0052D803: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B028);
    ecx = esi;
    PUSH32(esp, 0x0052D811u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D811: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D824; /* je: equal / zero */

loc_0052D815: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0052D81Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D819u); } /* indirect call */
    }

loc_0052D81C: ;
    MEMF(edi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D824: ;
    MEM32(edi + 0x1C) = 0x3F800000;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052D830
 * Original: 0x0052D830 - 0x0052D83B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D830: ;
    MEM32(ecx) = 0x64B034;
    g_seh_ebp = ebp; sub_0052D700(); return; /* tail jmp 0x0052D700 */

}

/**
 * sub_0052D840
 * Original: 0x0052D840 - 0x0052D870 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D840: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D85B; /* je: equal / zero */

loc_0052D84A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0052D84Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D84Cu); } /* indirect call */
    }

loc_0052D84F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D85B; /* je: equal / zero */

loc_0052D853: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052D85Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D858u); } /* indirect call */
    }

loc_0052D85B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0052D86Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D869u); } /* indirect call */
    }

loc_0052D86C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052D870
 * Original: 0x0052D870 - 0x0052D897 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D870: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D894; /* je: equal / zero */

loc_0052D877: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax + 0x38;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM8(eax + 0x14) = MEM8(eax + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);

loc_0052D894: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D8A0
 * Original: 0x0052D8A0 - 0x0052D8A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D8A0(void)
{

loc_0052D8A0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_0052D8B0
 * Original: 0x0052D8B0 - 0x0052D910 (96 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D8B0(void)
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

loc_0052D8B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0052D8BEu); RECOMP_ABI_CALL(0x0052D7D0u, sub_0052D7D0); /* call 0x0052D7D0 */

loc_0052D8BE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B064);
    ecx = esi;
    PUSH32(esp, 0x0052D8CCu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D8CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D8DC; /* je: equal / zero */

loc_0052D8D0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0052D8D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D8D4u); } /* indirect call */
    }

loc_0052D8D7: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0052D8E3;

loc_0052D8DC: ;
    MEM32(edi + 0x24) = 0x41200000;

loc_0052D8E3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B058);
    ecx = esi;
    PUSH32(esp, 0x0052D8F1u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052D8F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D904; /* je: equal / zero */

loc_0052D8F5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0052D8FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052D8F9u); } /* indirect call */
    }

loc_0052D8FC: ;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052D904: ;
    MEM32(edi + 0x28) = 0x42200000;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052D910
 * Original: 0x0052D910 - 0x0052D924 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D910: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64AFB0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0052D930
 * Original: 0x0052D930 - 0x0052D94E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052D930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052D938u); RECOMP_ABI_CALL(0x0052D3A0u, sub_0052D3A0); /* call 0x0052D3A0 */

loc_0052D938: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052D948; /* je: equal / zero */

loc_0052D93F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052D945u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D945: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052D948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052D950
 * Original: 0x0052D950 - 0x0052D9F4 (164 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052D950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052D950: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052D969; /* je: equal / zero */

loc_0052D95B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052D961u); RECOMP_ABI_CALL(0x0052D5B0u, sub_0052D5B0); /* call 0x0052D5B0 */

loc_0052D961: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052D9F0; /* jne: not equal / not zero */

loc_0052D969: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052D9A3; /* je: equal / zero */

loc_0052D972: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052D997; /* jle: less or equal (signed <=) */

loc_0052D97B: ;
    goto loc_0052D980;

    /* nop */

loc_0052D980: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052D98Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D98C: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052D980; /* jl: less (signed <) */

loc_0052D997: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052D9A0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052D9A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052D9A3: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052D9E4; /* je: equal / zero */

loc_0052D9AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E);
    ebx = ebp * 4;
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052D9C0u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052D9C0: ;
    ecx = ebx;
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    POP32(esp, ebx);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0052D9E4: ;
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    MEM32(esi + 4) = 0;
    POP32(esp, ebp);

loc_0052D9F0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052DA00
 * Original: 0x0052DA00 - 0x0052DA18 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DA00: ;
    edx = ecx;
    PUSH32(esp, 0x0052DA07u); RECOMP_ABI_CALL(0x0052D910u, sub_0052D910); /* call 0x0052D910 */

loc_0052DA07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = 0x64AFF4;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DA20
 * Original: 0x0052DA20 - 0x0052DA3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052DA28u); RECOMP_ABI_CALL(0x0052D620u, sub_0052D620); /* call 0x0052D620 */

loc_0052DA28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052DA38; /* je: equal / zero */

loc_0052DA2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052DA35u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052DA35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052DA38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DA40
 * Original: 0x0052DA40 - 0x0052DA68 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DA40: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DA5B; /* je: equal / zero */

loc_0052DA47: ;
    PUSH32(esp, 0x0052DA4Cu); RECOMP_ABI_CALL(0x0052D630u, sub_0052D630); /* call 0x0052D630 */

loc_0052DA4C: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

loc_0052DA5B: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DA70
 * Original: 0x0052DA70 - 0x0052DAB8 (72 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DA70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052DA78u); RECOMP_ABI_CALL(0x0052DA00u, sub_0052DA00); /* call 0x0052DA00 */

loc_0052DA78: ;
    PUSH32(esp, 0x1A6);
    eax = 0x3F800000;
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, 0x38);
    MEM32(esi) = 0x64B010;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0052DA9Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052DA9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DAAF; /* je: equal / zero */

loc_0052DAA1: ;
    ecx = eax;
    PUSH32(esp, 0x0052DAA8u); RECOMP_ABI_CALL(0x005D5C30u, sub_005D5C30); /* call 0x005D5C30 */

loc_0052DAA8: ;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052DAAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DAC0
 * Original: 0x0052DAC0 - 0x0052DADE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DAC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052DAC8u); RECOMP_ABI_CALL(0x0052D700u, sub_0052D700); /* call 0x0052D700 */

loc_0052DAC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052DAD8; /* je: equal / zero */

loc_0052DACF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052DAD5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052DAD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052DAD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DAE0
 * Original: 0x0052DAE0 - 0x0052DB37 (87 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DAE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0052DAEEu); RECOMP_ABI_CALL(0x0052DA40u, sub_0052DA40); /* call 0x0052DA40 */

loc_0052DAEE: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DB32; /* je: equal / zero */

loc_0052DAF5: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DB29; /* je: equal / zero */

loc_0052DAFE: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052DB08u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052DB08: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052DB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DB0Eu); } /* indirect call */
    }

loc_0052DB11: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0052DB1Du); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052DB1D: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052DB29u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052DB29: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0052DB31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DB2Eu); } /* indirect call */
    }

loc_0052DB31: ;
    POP32(esp, edi);

loc_0052DB32: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DB40
 * Original: 0x0052DB40 - 0x0052DB98 (88 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052DB48u); RECOMP_ABI_CALL(0x0052DA70u, sub_0052DA70); /* call 0x0052DA70 */

loc_0052DB48: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64B034;
    MEM32(esi + 0x24) = 0x41200000;
    MEM32(esi + 0x28) = 0x42200000;
    if (CMP_EQ(_fa, _fb)) goto loc_0052DB69; /* je: equal / zero */

loc_0052DB63: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052DB69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DB67u); } /* indirect call */
    }

loc_0052DB69: ;
    PUSH32(esp, 0x221);
    PUSH32(esp, 0x64AFC0);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0052DB7Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052DB7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DB8F; /* je: equal / zero */

loc_0052DB81: ;
    ecx = eax;
    PUSH32(esp, 0x0052DB88u); RECOMP_ABI_CALL(0x005D6580u, sub_005D6580); /* call 0x005D6580 */

loc_0052DB88: ;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052DB8F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DBA0
 * Original: 0x0052DBA0 - 0x0052DBBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DBA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052DBA8u); RECOMP_ABI_CALL(0x0052D830u, sub_0052D830); /* call 0x0052D830 */

loc_0052DBA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052DBB8; /* je: equal / zero */

loc_0052DBAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052DBB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052DBB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052DBB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DBC0
 * Original: 0x0052DBC0 - 0x0052DC32 (114 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DBC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    edi = ecx;
    esi = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052DBD2u); RECOMP_ABI_CALL(0x0052DA40u, sub_0052DA40); /* call 0x0052DA40 */

loc_0052DBD2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC2C; /* je: equal / zero */

loc_0052DBD6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC18; /* je: equal / zero */

loc_0052DBDF: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052DBEBu); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052DBEB: ;
    edx = MEM32(edi + 0x28);
    eax = MEM32(edi + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052DBFAu); RECOMP_ABI_CALL(0x005D6460u, sub_005D6460); /* call 0x005D6460 */

loc_0052DBFA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052DC02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DBFFu); } /* indirect call */
    }

loc_0052DC02: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052DC0Du); RECOMP_ABI_CALL(0x005D57B0u, sub_005D57B0); /* call 0x005D57B0 */

loc_0052DC0D: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052DC18u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052DC18: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0052DC24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DC21u); } /* indirect call */
    }

loc_0052DC24: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052DC2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DC28u); } /* indirect call */
    }

loc_0052DC2B: ;
    POP32(esp, ebx);

loc_0052DC2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052DC40
 * Original: 0x0052DC40 - 0x0052DC4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DC40(void)
{

loc_0052DC40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DC50
 * Original: 0x0052DC50 - 0x0052DC67 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DC50: ;
    MEM32(ecx + 0x94) = 0;
    ecx = MEM32(ecx + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC66; /* je: equal / zero */

loc_0052DC61: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0052DC66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DC70
 * Original: 0x0052DC70 - 0x0052DC80 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DC70: ;
    ecx = MEM32(ecx + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC7F; /* je: equal / zero */

loc_0052DC7A: ;
    g_seh_ebp = ebp; sub_005347C0(); return; /* tail jmp 0x005347C0 */

loc_0052DC7F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DC80
 * Original: 0x0052DC80 - 0x0052DC90 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DC80: ;
    ecx = MEM32(ecx + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC8F; /* je: equal / zero */

loc_0052DC8A: ;
    g_seh_ebp = ebp; sub_005347D0(); return; /* tail jmp 0x005347D0 */

loc_0052DC8F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DC90
 * Original: 0x0052DC90 - 0x0052DCA0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DC90: ;
    ecx = MEM32(ecx + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DC9F; /* je: equal / zero */

loc_0052DC9A: ;
    g_seh_ebp = ebp; sub_00534800(); return; /* tail jmp 0x00534800 */

loc_0052DC9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DCA0
 * Original: 0x0052DCA0 - 0x0052DCEE (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DCA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052DCD1; /* jne: not equal / not zero */

loc_0052DCB1: ;
    ecx = MEM32(esi + 0xA8);
    MEM32(esi + 0x98) = 0;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x88) = 0x3F800000;

loc_0052DCD1: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DCEC; /* je: equal / zero */

loc_0052DCDB: ;
    PUSH32(esp, 0x0052DCE0u); RECOMP_ABI_CALL(0x005347F0u, sub_005347F0); /* call 0x005347F0 */

loc_0052DCE0: ;
    ecx = MEM32(esi + 0xD8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005347E0(); return; /* tail jmp 0x005347E0 */

loc_0052DCEC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DCF0
 * Original: 0x0052DCF0 - 0x0052DD3E (78 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DCF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xA4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052DD21; /* jne: not equal / not zero */

loc_0052DD01: ;
    ecx = MEM32(esi + 0xA8);
    MEM32(esi + 0x98) = 0;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x88) = 0x3F800000;

loc_0052DD21: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DD3C; /* je: equal / zero */

loc_0052DD2B: ;
    PUSH32(esp, 0x0052DD30u); RECOMP_ABI_CALL(0x00534840u, sub_00534840); /* call 0x00534840 */

loc_0052DD30: ;
    ecx = MEM32(esi + 0xD8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005347E0(); return; /* tail jmp 0x005347E0 */

loc_0052DD3C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DD40
 * Original: 0x0052DD40 - 0x0052DD50 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DD40: ;
    ecx = MEM32(ecx + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DD4F; /* je: equal / zero */

loc_0052DD4A: ;
    g_seh_ebp = ebp; sub_005347E0(); return; /* tail jmp 0x005347E0 */

loc_0052DD4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052DD50
 * Original: 0x0052DD50 - 0x0052DDA0 (80 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DD50(void)
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

loc_0052DD50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DD9A; /* je: equal / zero */

loc_0052DD5D: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DD9A; /* je: equal / zero */

loc_0052DD66: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052DD6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DD68u); } /* indirect call */
    }

loc_0052DD6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052DD9A; /* jle: less or equal (signed <=) */

loc_0052DD6F: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052DD8E; /* je: equal / zero */

loc_0052DD76: ;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0052DD81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DD7Eu); } /* indirect call */
    }

loc_0052DD81: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0052DD9A; /* jnp: not parity */

loc_0052DD8E: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

loc_0052DD9A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052DDA0
 * Original: 0x0052DDA0 - 0x0052DE59 (185 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DDA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esi + 0xD4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 0x7D) = 1;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    PUSH32(esp, 0x0052DDD6u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052DDD6: ;
    ecx = MEM32(esi + 0xD4);
    ebp = esi + 0x3C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0052DDE7u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_0052DDE7: ;
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x80), 1 (8-bit) */
    MEM32(esi + 0x78) = ebx;
    eax = 0x64B098;
    if (TEST_NZ(_fa, _fb)) goto loc_0052DDFD; /* jne: not equal / not zero */

loc_0052DDF8: ;
    eax = 0x64B084;

loc_0052DDFD: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052DE09u); RECOMP_ABI_CALL(0x005D4540u, sub_005D4540); /* call 0x005D4540 */

loc_0052DE09: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052DE11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE0Eu); } /* indirect call */
    }

loc_0052DE11: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64B070);
    PUSH32(esp, 0x0052DE21u); RECOMP_ABI_CALL(0x005D4540u, sub_005D4540); /* call 0x005D4540 */

loc_0052DE21: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052DE2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE27u); } /* indirect call */
    }

loc_0052DE2A: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052DE4B; /* je: equal / zero */

loc_0052DE3C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0052DE44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE41u); } /* indirect call */
    }

loc_0052DE44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0052DE4B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052DE52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE4Fu); } /* indirect call */
    }

loc_0052DE52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052DE60
 * Original: 0x0052DE60 - 0x0052DE8F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DE60(void)
{

loc_0052DE60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    MEM8(esi + 0x7D) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052DE70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE6Du); } /* indirect call */
    }

loc_0052DE70: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052DE79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE76u); } /* indirect call */
    }

loc_0052DE79: ;
    MEM32(esi + 0x94) = 0;
    MEM32(esi + 0x98) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DE90
 * Original: 0x0052DE90 - 0x0052DEA6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052DE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052DE9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DE99u); } /* indirect call */
    }

loc_0052DE9C: ;
    edx = MEM32(esi + 0x3C);
    ecx = esi + 0x3C;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_0052DEB0
 * Original: 0x0052DEB0 - 0x0052DED6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DEB0(void)
{

loc_0052DEB0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = ecx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64B0AC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052DEC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DEBEu); } /* indirect call */
    }

loc_0052DEC1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052DEC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DEC5u); } /* indirect call */
    }

loc_0052DEC8: ;
    PUSH32(esp, 0x3F333333);
    ecx = esi;
    PUSH32(esp, 0x0052DED4u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052DED4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052DEE0
 * Original: 0x0052DEE0 - 0x0052DF3A (90 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DEE0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F800000);
    if (CMP_EQ(_fa, _fb)) goto loc_0052DF15; /* je: equal / zero */

loc_0052DEF0: ;
    esi = ecx + 0x3C;
    MEM32(ecx + 0x88) = 0x3F800000;
    MEM32(ecx + 0x8C) = eax;
    ecx = esi;
    PUSH32(esp, 0x0052DF0Au); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052DF0A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0052DF11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DF0Eu); } /* indirect call */
    }

loc_0052DF11: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052DF15: ;
    esi = ecx + 4;
    MEM32(ecx + 0x8C) = 0x3F800000;
    MEM32(ecx + 0x88) = eax;
    ecx = esi;
    PUSH32(esp, 0x0052DF2Fu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052DF2F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052DF36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DF33u); } /* indirect call */
    }

loc_0052DF36: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052DF40
 * Original: 0x0052DF40 - 0x0052DF57 (23 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DF40(void)
{

loc_0052DF40: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0052DF54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DF51u); } /* indirect call */
    }

loc_0052DF54: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052DF60
 * Original: 0x0052DF60 - 0x0052E127 (455 bytes, 152 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052DF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052DF60: ;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x210);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052E119; /* je: equal / zero */

loc_0052DF7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052DF7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DF7Cu); } /* indirect call */
    }

loc_0052DF7F: ;
    edi = MEM32(esp + 0x21C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E119; /* jge: greater or equal (signed >=) */

loc_0052DF8E: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xC) = LO16(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052DF99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DF96u); } /* indirect call */
    }

loc_0052DF99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052DFAA; /* jge: greater or equal (signed >=) */

loc_0052DF9E: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) ^ eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052DFAA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0052DFB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DFAEu); } /* indirect call */
    }

loc_0052DFB1: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x100);
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0052DFC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052DFC3u); } /* indirect call */
    }

loc_0052DFC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E0F9; /* je: equal / zero */

loc_0052DFCE: ;
    edx = esp + 0x114;
    PUSH32(esp, 0x3A);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052DFDDu); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052DFDD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E04E; /* je: equal / zero */

loc_0052DFE4: ;
    PUSH32(esp, 7);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63F68C);
    PUSH32(esp, 0x0052DFF8u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0052DFF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E042; /* jne: not equal / not zero */

loc_0052DFFF: ;
    edi = esp + 0x114;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0052E007: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E007; /* jne: not equal / not zero */

loc_0052E00F: ;
    ecx = MEM32(0x64B0C0);
    SET_LO8(edx, MEM8(0x64B0C4));
    MEM32(edi) = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM8(edi + 4) = LO8(edx);
    PUSH32(esp, ecx);
    edx = esp + 0x123;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052E037u); RECOMP_ABI_CALL(0x005D8040u, sub_005D8040); /* call 0x005D8040 */

loc_0052E037: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E119; /* je: equal / zero */

loc_0052E042: ;
    ecx = esp + 0x114;
    goto loc_0052E0F1;

loc_0052E04E: ;
    eax = MEM32(0x63F690);
    edx = MEM32(0x63F68C);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x114;
    MEM32(esp + 0x14) = edx;
    edx = eax;
    /* nop */

loc_0052E070: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E070; /* jne: not equal / not zero */

loc_0052E077: ;
    edi = esp + 0x14;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_0052E080: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E080; /* jne: not equal / not zero */

loc_0052E088: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx;
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0052E0A0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E0A0; /* jne: not equal / not zero */

loc_0052E0A8: ;
    ecx = MEM32(0x64B0C0);
    SET_LO8(edx, MEM8(0x64B0C4));
    MEM32(edi) = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM8(edi + 4) = LO8(edx);
    PUSH32(esp, ecx);
    edx = esp + 0x23;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052E0CDu); RECOMP_ABI_CALL(0x005D8040u, sub_005D8040); /* call 0x005D8040 */

loc_0052E0CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E119; /* je: equal / zero */

loc_0052E0D4: ;
    eax = esp + 0x14;
    edx = eax + 1;
    goto loc_0052E0E0;

    /* nop */

loc_0052E0E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E0E0; /* jne: not equal / not zero */

loc_0052E0E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + eax + 0x10) = LO8(ecx);
    ecx = esp + 0x14;

loc_0052E0F1: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052E0F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E0F6u); } /* indirect call */
    }

loc_0052E0F9: ;
    SET_LO8(eax, MEM8(esp + 0x220));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E10B; /* jne: not equal / not zero */

loc_0052E104: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052E10Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E108u); } /* indirect call */
    }

loc_0052E10B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0052E119: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052E130
 * Original: 0x0052E130 - 0x0052E192 (98 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E130: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0052E158; /* jle: less or equal (signed <=) */

loc_0052E13F: ;
    PUSH32(esp, 0x77);
    eax = ebx * 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E153u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052E153: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_0052E158: ;
    ecx = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E162; /* jge: greater or equal (signed >=) */

loc_0052E160: ;
    ecx = ebx;

loc_0052E162: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052E175; /* jle: less or equal (signed <=) */

loc_0052E168: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(edi + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E168; /* jl: less (signed <) */

loc_0052E175: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM16(esi + 6) = LO16(ebx);
    MEM16(esi + 4) = LO16(ecx);
    PUSH32(esp, 0x0052E185u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052E185: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052E1A0
 * Original: 0x0052E1A0 - 0x0052E209 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E207; /* je: equal / zero */

loc_0052E1AA: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E1BA; /* jne: not equal / not zero */

loc_0052E1B4: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0052E1BA: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0052E1C4u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052E1C4: ;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E1CCu); } /* indirect call */
    }

loc_0052E1CF: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E1E1; /* jl: less (signed <) */

loc_0052E1D7: ;
    MEM32(esi + 0x90) = 0;

loc_0052E1E1: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x78);
    if (CMP_GE(_fas, _fbs)) goto loc_0052E1F4; /* jge: greater or equal (signed >=) */

loc_0052E1EE: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0052E1F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    MEM8(esi + 0x7C) = 0;
    PUSH32(esp, 0x0052E207u); RECOMP_ABI_CALL(0x0052DF60u, sub_0052DF60); /* call 0x0052DF60 */

loc_0052E207: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052E210
 * Original: 0x0052E210 - 0x0052E2E5 (213 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E2E0; /* je: equal / zero */

loc_0052E226: ;
    eax = MEM32(0x6CE2E4);
    MEM8(eax + 0x96) = 0;
    _fa = (uint32_t)(MEM16(esi + 0xC4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E25F; /* je: equal / zero */

loc_0052E23C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E261; /* jge: greater or equal (signed >=) */

loc_0052E240: ;
    edx = MEM32(esi + 0xC0);
    ecx = edi * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x9C) = edi;
    eax = MEM32(edx);
    MEM32(esi + 0x94) = eax;
    goto loc_0052E2C7;

loc_0052E25F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_0052E261: ;
    if (CMP_NE(_fa, _fb)) goto loc_0052E275; /* jne: not equal / not zero */

loc_0052E263: ;
    ecx = MEM32(esi + 0xAC);
    MEM32(esi + 0x9C) = 0;
    goto loc_0052E2C1;

loc_0052E275: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E28E; /* jne: not equal / not zero */

loc_0052E27A: ;
    edx = MEM32(esi + 0x98);
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0x94) = edx;
    goto loc_0052E2C7;

loc_0052E28E: ;
    eax = ZX16(MEM16(esi + 0xBC));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052E2E0; /* jg: greater (signed >) */

loc_0052E29A: ;
    ecx = MEM32(esi + 0xB8);
    ecx = MEM32(ecx + edi * 4 + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E2E0; /* je: equal / zero */

loc_0052E2A8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E2ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E2AAu); } /* indirect call */
    }

loc_0052E2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E2E0; /* je: equal / zero */

loc_0052E2B1: ;
    eax = MEM32(esi + 0xB8);
    MEM32(esi + 0x9C) = edi;
    ecx = MEM32(eax + edi * 4 + -8);

loc_0052E2C1: ;
    MEM32(esi + 0x94) = ecx;

loc_0052E2C7: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E2E0; /* je: equal / zero */

loc_0052E2CF: ;
    ecx = esi;
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, 0x0052E2E0u); RECOMP_ABI_CALL(0x0052E1A0u, sub_0052E1A0); /* call 0x0052E1A0 */

loc_0052E2E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052E2F0
 * Original: 0x0052E2F0 - 0x0052E2FB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E2F0: ;
    eax = ZX16(MEM16(ecx + 0xBC));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E300
 * Original: 0x0052E300 - 0x0052E308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E300(void)
{

loc_0052E300: ;
    eax = ZX16(MEM16(ecx + 0xC4));
    esp += 4; return; /* ret */

}

/**
 * sub_0052E310
 * Original: 0x0052E310 - 0x0052E379 (105 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E310(void)
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

loc_0052E310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63E95C);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0052E329u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052E329: ;
    eax = MEM32(esi + 0x94);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E371; /* je: equal / zero */

loc_0052E336: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E371; /* je: equal / zero */

loc_0052E33F: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E35E; /* je: equal / zero */

loc_0052E346: ;
    ecx = MEM32(esi + 0xD4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0052E351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E34Eu); } /* indirect call */
    }

loc_0052E351: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0052E371; /* jnp: not parity */

loc_0052E35E: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052E36Bu); RECOMP_ABI_CALL(0x0052DF40u, sub_0052DF40); /* call 0x0052DF40 */

loc_0052E36B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0052E371: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0052E380
 * Original: 0x0052E380 - 0x0052E466 (230 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E380: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E399u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0052E399: ;
    eax = MEM32(eax + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E45C; /* je: equal / zero */

loc_0052E3A4: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E45B; /* je: equal / zero */

loc_0052E3B0: ;
    PUSH32(esp, 0x5A);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052E3C1u); RECOMP_ABI_CALL(0x0052DD50u, sub_0052DD50); /* call 0x0052DD50 */

loc_0052E3C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E3CF; /* je: equal / zero */

loc_0052E3C5: ;
    edx = esp + 0x88;
    PUSH32(esp, edx);
    goto loc_0052E449;

loc_0052E3CF: ;
    PUSH32(esp, 0x80);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052E3E0u); RECOMP_ABI_CALL(0x0052E310u, sub_0052E310); /* call 0x0052E310 */

loc_0052E3E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E45B; /* je: equal / zero */

loc_0052E3E4: ;
    ecx = esp + 8;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052E3F0u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052E3F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E40A; /* jne: not equal / not zero */

loc_0052E3F7: ;
    edx = esp + 8;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052E403u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052E403: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E40D; /* je: equal / zero */

loc_0052E40A: ;
    MEM8(eax) = 0x5F;

loc_0052E40D: ;
    eax = esp + 8;
    PUSH32(esp, 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E419u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052E419: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E433; /* jne: not equal / not zero */

loc_0052E420: ;
    ecx = esp + 8;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052E42Cu); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052E42C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E436; /* je: equal / zero */

loc_0052E433: ;
    MEM8(eax) = 0;

loc_0052E436: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x8582C8;
    PUSH32(esp, 0x0052E445u); RECOMP_ABI_CALL(0x005E17F0u, sub_005E17F0); /* call 0x005E17F0 */

loc_0052E445: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);

loc_0052E449: ;
    ecx = edi;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x0052E452u); RECOMP_ABI_CALL(0x0049D460u, sub_0049D460); /* call 0x0049D460 */

loc_0052E452: ;
    PUSH32(esp, 0x16);
    ecx = edi;
    PUSH32(esp, 0x0052E45Bu); RECOMP_ABI_CALL(0x0049C470u, sub_0049C470); /* call 0x0049C470 */

loc_0052E45B: ;
    POP32(esp, edi);

loc_0052E45C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052E470
 * Original: 0x0052E470 - 0x0052E4CD (93 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052E4C8; /* jbe: below or equal (unsigned <=) */

loc_0052E47C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    goto loc_0052E490;

    /* nop */
    /* nop */

loc_0052E490: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(eax + esi * 8 + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + esi * 8 + 4), 0 (16-bit) */
    eax = eax + esi * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0052E4AF; /* je: equal / zero */

loc_0052E49E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E4BD; /* je: equal / zero */

loc_0052E4A4: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E4AF; /* je: equal / zero */

loc_0052E4AB: ;
    eax = ecx;
    goto loc_0052E4B4;

loc_0052E4AF: ;
    eax = 0x62DF21;

loc_0052E4B4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0052E4BDu); RECOMP_ABI_CALL(0x005D4A70u, sub_005D4A70); /* call 0x005D4A70 */

loc_0052E4BD: ;
    ecx = ZX16(MEM16(edi + 8));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E490; /* jl: less (signed <) */

loc_0052E4C6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0052E4C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052E4D0
 * Original: 0x0052E4D0 - 0x0052E514 (68 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E4D0: ;
    edx = ZX16(MEM16(ecx + 8));
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E50F; /* jge: greater or equal (signed >=) */

loc_0052E4DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E50F; /* jl: less (signed <) */

loc_0052E4E0: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM16(ecx + eax * 8 + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax * 8 + 4), 0 (16-bit) */
    eax = ecx + eax * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0052E4F2; /* je: equal / zero */

loc_0052E4EE: ;
    eax = MEM32(eax);
    goto loc_0052E4F7;

loc_0052E4F2: ;
    eax = 0x62DF21;

loc_0052E4F7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E507u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052E507: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

loc_0052E50F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052E520
 * Original: 0x0052E520 - 0x0052E65E (318 bytes, 114 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0xC) = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052E534: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E655; /* je: equal / zero */

loc_0052E53F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052E54Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E547u); } /* indirect call */
    }

loc_0052E54A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E630; /* je: equal / zero */

loc_0052E552: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E556u); } /* indirect call */
    }

loc_0052E559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E565; /* jne: not equal / not zero */

loc_0052E55E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0052E630;

loc_0052E565: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052E56Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E569u); } /* indirect call */
    }

loc_0052E56C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E57F; /* jne: not equal / not zero */

loc_0052E571: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) ^ 1;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    edi = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    goto loc_0052E630;

loc_0052E57F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E583u); } /* indirect call */
    }

loc_0052E586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E5CA; /* jl: less (signed <) */

loc_0052E58B: ;
    goto loc_0052E590;

    /* nop */

loc_0052E590: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E5ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E5A9u); } /* indirect call */
    }

loc_0052E5AC: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x679682));
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E590; /* je: equal / zero */

loc_0052E5C8: ;
    goto loc_0052E630;

loc_0052E5CA: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E5F0; /* jne: not equal / not zero */

loc_0052E5D1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052E5D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E5D5u); } /* indirect call */
    }

loc_0052E5D8: ;
    edx = 1;
    ecx = eax;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = edx;
    goto loc_0052E5F0;

    /* nop */
    edi = edi;

loc_0052E5F0: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052E60Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E609u); } /* indirect call */
    }

loc_0052E60C: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x679682));
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x10);
    edi = edx;
    edx = 1;
    ecx = edi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052E5F0; /* je: equal / zero */

loc_0052E630: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0052E63Eu); RECOMP_ABI_CALL(0x0052DF60u, sub_0052DF60); /* call 0x0052DF60 */

loc_0052E63E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052E64C; /* jne: not equal / not zero */

loc_0052E642: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052E534; /* jne: not equal / not zero */

loc_0052E64C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0052E655: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052E660
 * Original: 0x0052E660 - 0x0052E69E (62 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E660: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E66D; /* jl: less (signed <) */

loc_0052E668: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E672; /* jl: less (signed <) */

loc_0052E66D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0052E672: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x64B0C8);
    MEM32(eax) = esi;
    esi = MEM32(0x64B0CC);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFF9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF9u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052E69Au); RECOMP_ABI_CALL(0x0052E4D0u, sub_0052E4D0); /* call 0x0052E4D0 */

loc_0052E69A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052E6A0
 * Original: 0x0052E6A0 - 0x0052E708 (104 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E6A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E6AD; /* jge: greater or equal (signed >=) */

loc_0052E6A8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0052E6AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E6A8; /* jge: greater or equal (signed >=) */

loc_0052E6B2: ;
    edx = ZX16(MEM16(ecx + 0x24));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E6A8; /* jge: greater or equal (signed >=) */

loc_0052E6BA: ;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(esp + 0xC);
    ecx = ecx + eax * 8;
    eax = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E6CF; /* jl: less (signed <) */

loc_0052E6CC: ;
    eax = edx + -1;

loc_0052E6CF: ;
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), 0 (16-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052E6DD; /* je: equal / zero */

loc_0052E6D9: ;
    esi = MEM32(ecx);
    goto loc_0052E6E2;

loc_0052E6DD: ;
    esi = 0x8600AC;

loc_0052E6E2: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + edx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052E710
 * Original: 0x0052E710 - 0x0052E7DC (204 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E710: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebx = ecx;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0052E757; /* jle: less or equal (signed <=) */

loc_0052E725: ;
    PUSH32(esp, 0x77);
    eax = edi * 8 + 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E739u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052E739: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E753; /* je: equal / zero */

loc_0052E740: ;
    PUSH32(esp, 0x4F5BF0);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0052E753u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_0052E753: ;
    MEM32(esp + 0x10) = esi;

loc_0052E757: ;
    ebp = ZX16(MEM16(ebx + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E761; /* jge: greater or equal (signed >=) */

loc_0052E75F: ;
    ebp = edi;

loc_0052E761: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052E796; /* jle: less or equal (signed <=) */

loc_0052E767: ;
    edi = MEM32(esp + 0x10);
    goto loc_0052E770;

    /* nop */

loc_0052E770: ;
    ecx = MEM32(ebx);
    eax = ecx + esi * 8;
    MEM16(edi + 4) = 0;
    edx = ZX16(MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0052E78Au); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052E78A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E770; /* jl: less (signed <) */

loc_0052E792: ;
    edi = MEM32(esp + 0x18);

loc_0052E796: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(ebx + 6) = LO16(edi);
    MEM16(ebx + 4) = LO16(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0052E7CE; /* je: equal / zero */

loc_0052E7A4: ;
    ecx = MEM32(eax + -4);
    ebp = eax + -4;
    esi = eax + ecx * 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052E7C5; /* js: sign (negative) */

loc_0052E7B0: ;
    edi = ecx + 1;

loc_0052E7B3: ;
    ecx = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052E7BFu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052E7BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052E7B3; /* jne: not equal / not zero */

loc_0052E7C5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052E7CBu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052E7CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052E7CE: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052E7E0
 * Original: 0x0052E7E0 - 0x0052E8AC (204 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E7E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebx = ecx;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0052E827; /* jle: less or equal (signed <=) */

loc_0052E7F5: ;
    PUSH32(esp, 0x77);
    eax = edi * 8 + 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E809u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052E809: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052E823; /* je: equal / zero */

loc_0052E810: ;
    PUSH32(esp, 0x4F5BF0);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0052E823u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_0052E823: ;
    MEM32(esp + 0x10) = esi;

loc_0052E827: ;
    ebp = ZX16(MEM16(ebx + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052E831; /* jge: greater or equal (signed >=) */

loc_0052E82F: ;
    ebp = edi;

loc_0052E831: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052E866; /* jle: less or equal (signed <=) */

loc_0052E837: ;
    edi = MEM32(esp + 0x10);
    goto loc_0052E840;

    /* nop */

loc_0052E840: ;
    ecx = MEM32(ebx);
    eax = ecx + esi * 8;
    MEM16(edi + 4) = 0;
    edx = ZX16(MEM16(eax + 4));
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0052E85Au); RECOMP_ABI_CALL(0x00606160u, sub_00606160); /* call 0x00606160 */

loc_0052E85A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052E840; /* jl: less (signed <) */

loc_0052E862: ;
    edi = MEM32(esp + 0x18);

loc_0052E866: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(ebx + 6) = LO16(edi);
    MEM16(ebx + 4) = LO16(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0052E89E; /* je: equal / zero */

loc_0052E874: ;
    ecx = MEM32(eax + -4);
    ebp = eax + -4;
    esi = eax + ecx * 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052E895; /* js: sign (negative) */

loc_0052E880: ;
    edi = ecx + 1;

loc_0052E883: ;
    ecx = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052E88Fu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052E88F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052E883; /* jne: not equal / not zero */

loc_0052E895: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052E89Bu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052E89B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052E89E: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052E8B0
 * Original: 0x0052E8B0 - 0x0052E9DB (299 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052E8B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x64B0E4;
    edi = esi + 4;
    ebx = 2;

loc_0052E8C6: ;
    ecx = edi;
    PUSH32(esp, 0x0052E8CDu); RECOMP_ABI_CALL(0x005D5C30u, sub_005D5C30); /* call 0x005D5C30 */

loc_0052E8CD: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052E8C6; /* jne: not equal / not zero */

loc_0052E8D3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = ebx;
    MEM16(esi + 0xB4) = LO16(ebx);
    MEM16(esi + 0xB6) = LO16(ebx);
    MEM32(esi + 0xB8) = ebx;
    MEM16(esi + 0xBC) = LO16(ebx);
    MEM16(esi + 0xBE) = LO16(ebx);
    MEM32(esi + 0xC0) = ebx;
    MEM16(esi + 0xC4) = LO16(ebx);
    MEM16(esi + 0xC6) = LO16(ebx);
    MEM32(esi + 0xC8) = ebx;
    MEM16(esi + 0xCC) = LO16(ebx);
    MEM16(esi + 0xCE) = LO16(ebx);
    PUSH32(esp, 1);
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = 1;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM8(esi + 0x7D) = LO8(ebx);
    MEM32(esi + 0x80) = ebx;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64B0DC);
    PUSH32(esp, 0x0052E98Cu); RECOMP_ABI_CALL(0x005D5160u, sub_005D5160); /* call 0x005D5160 */

loc_0052E98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0052E9D2; /* je: equal / zero */

loc_0052E996: ;
    edi = 1;
    goto loc_0052E9A0;

    /* nop */

loc_0052E9A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64B0D0);
    eax = esp + 0x14;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052E9B2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052E9B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B0DC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, 0x0052E9CCu); RECOMP_ABI_CALL(0x005D4BD0u, sub_005D4BD0); /* call 0x005D4BD0 */

loc_0052E9CC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052E9A0; /* jle: less or equal (signed <=) */

loc_0052E9D2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052E9E0
 * Original: 0x0052E9E0 - 0x0052EAE7 (263 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052E9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052E9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x64B0E4;
    if (CMP_EQ(_fa, _fb)) goto loc_0052E9FB; /* je: equal / zero */

loc_0052E9F5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052E9FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052E9F9u); } /* indirect call */
    }

loc_0052E9FB: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA0B; /* je: equal / zero */

loc_0052EA05: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EA0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EA09u); } /* indirect call */
    }

loc_0052EA0B: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA1B; /* je: equal / zero */

loc_0052EA15: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052EA1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EA19u); } /* indirect call */
    }

loc_0052EA1B: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA2B; /* je: equal / zero */

loc_0052EA25: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EA29u); } /* indirect call */
    }

loc_0052EA2B: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA38; /* je: equal / zero */

loc_0052EA32: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052EA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EA36u); } /* indirect call */
    }

loc_0052EA38: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA48; /* je: equal / zero */

loc_0052EA42: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EA48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EA46u); } /* indirect call */
    }

loc_0052EA48: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64B0DC);
    PUSH32(esp, 0x0052EA58u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052EA58: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64B0E8);
    PUSH32(esp, 0x0052EA68u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052EA68: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EA9E; /* je: equal / zero */

loc_0052EA72: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebp);
    ebp = ecx + -4;
    edi = ecx + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052EA94; /* js: sign (negative) */

loc_0052EA7F: ;
    ebx = eax + 1;

loc_0052EA82: ;
    eax = MEM32(edi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052EA8Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052EA8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052EA82; /* jne: not equal / not zero */

loc_0052EA94: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052EA9Au); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EA9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);

loc_0052EA9E: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052EAAAu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EAAA: ;
    edx = MEM32(esi + 0xB8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052EAB6u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EAB6: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052EAC2u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EAC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x74;
    ebx = 2;
    /* nop */

loc_0052EAD0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    PUSH32(esp, 0x0052EADAu); RECOMP_ABI_CALL(0x005D5C40u, sub_005D5C40); /* call 0x005D5C40 */

loc_0052EADA: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052EAD0; /* jne: not equal / not zero */

loc_0052EADD: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0052EAF0
 * Original: 0x0052EAF0 - 0x0052ED3E (590 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052EAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052EB12; /* je: equal / zero */

loc_0052EB0C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052EB12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EB10u); } /* indirect call */
    }

loc_0052EB12: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xB4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xB4), LO16(ebx) (16-bit) */
    MEM32(esi + 0x74) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0052EB49; /* jbe: below or equal (unsigned <=) */

loc_0052EB21: ;
    ecx = MEM32(esi + 0xB0);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EB34; /* je: equal / zero */

loc_0052EB2E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EB34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EB32u); } /* indirect call */
    }

loc_0052EB34: ;
    eax = MEM32(esi + 0xB0);
    MEM32(eax + edi * 4) = ebx;
    ecx = ZX16(MEM16(esi + 0xB4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EB21; /* jl: less (signed <) */

loc_0052EB49: ;
    eax = ZX16(MEM16(esi + 0xB4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052EB75; /* jle: less or equal (signed <=) */

loc_0052EB60: ;
    edx = MEM32(esi + 0xB0);
    edx = MEM32(edx + eax * 4);
    MEM32(eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EB60; /* jl: less (signed <) */

loc_0052EB75: ;
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    MEM16(esi + 0xB6) = LO16(ebx);
    MEM16(esi + 0xB4) = LO16(ecx);
    PUSH32(esp, 0x0052EB8Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EB8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB0) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xBC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xBC), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052EBCB; /* jbe: below or equal (unsigned <=) */

loc_0052EBA3: ;
    ecx = MEM32(esi + 0xB8);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EBB6; /* je: equal / zero */

loc_0052EBB0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EBB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EBB4u); } /* indirect call */
    }

loc_0052EBB6: ;
    eax = MEM32(esi + 0xB8);
    MEM32(eax + edi * 4) = ebx;
    ecx = ZX16(MEM16(esi + 0xBC));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EBA3; /* jl: less (signed <) */

loc_0052EBCB: ;
    eax = ZX16(MEM16(esi + 0xBC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052EC05; /* jle: less or equal (signed <=) */

loc_0052EBE2: ;
    goto loc_0052EBF0;

    /* nop */
    goto loc_0052EBF0;

    /* nop */

loc_0052EBF0: ;
    edx = MEM32(esi + 0xB8);
    edx = MEM32(edx + eax * 4);
    MEM32(eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EBF0; /* jl: less (signed <) */

loc_0052EC05: ;
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, eax);
    MEM16(esi + 0xBE) = LO16(ebx);
    MEM16(esi + 0xBC) = LO16(ecx);
    PUSH32(esp, 0x0052EC1Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EC1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB8) = ebx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xC4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC4), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052EC52; /* jbe: below or equal (unsigned <=) */

loc_0052EC33: ;
    ecx = MEM32(esi + 0xC0);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EC46; /* je: equal / zero */

loc_0052EC40: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052EC46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EC44u); } /* indirect call */
    }

loc_0052EC46: ;
    eax = ZX16(MEM16(esi + 0xC4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EC33; /* jl: less (signed <) */

loc_0052EC52: ;
    eax = ZX16(MEM16(esi + 0xC4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052EC85; /* jle: less or equal (signed <=) */

loc_0052EC6A: ;
    /* nop */

loc_0052EC70: ;
    edx = MEM32(esi + 0xC0);
    edx = MEM32(edx + eax * 4);
    MEM32(eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EC70; /* jl: less (signed <) */

loc_0052EC85: ;
    eax = MEM32(esi + 0xC0);
    PUSH32(esp, eax);
    MEM16(esi + 0xC6) = LO16(ebx);
    MEM16(esi + 0xC4) = LO16(ecx);
    PUSH32(esp, 0x0052EC9Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052EC9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi + 0xC8;
    MEM32(esi + 0xC0) = ebx;
    PUSH32(esp, 0x0052ECB4u); RECOMP_ABI_CALL(0x0052E7E0u, sub_0052E7E0); /* call 0x0052E7E0 */

loc_0052ECB4: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xD0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052ECCA; /* je: equal / zero */

loc_0052ECC4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052ECCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052ECC8u); } /* indirect call */
    }

loc_0052ECCA: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xAC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052ECE0; /* je: equal / zero */

loc_0052ECDA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052ECE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052ECDEu); } /* indirect call */
    }

loc_0052ECE0: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xA0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052ECF6; /* je: equal / zero */

loc_0052ECF0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052ECF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052ECF4u); } /* indirect call */
    }

loc_0052ECF6: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xA4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052ED0C; /* je: equal / zero */

loc_0052ED06: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052ED0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052ED0Au); } /* indirect call */
    }

loc_0052ED0C: ;
    ecx = MEM32(esi + 0xD8);
    MEM32(esi + 0xA8) = ebx;
    POP32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0052ED23; /* je: equal / zero */

loc_0052ED1E: ;
    PUSH32(esp, 0x0052ED23u); RECOMP_ABI_CALL(0x005347B0u, sub_005347B0); /* call 0x005347B0 */

loc_0052ED23: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64B0E8);
    PUSH32(esp, 0x0052ED33u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052ED33: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0052ED40
 * Original: 0x0052ED40 - 0x0052EDFF (191 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052ED40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EDFB; /* je: equal / zero */

loc_0052ED4E: ;
    eax = MEM32(0x6CE2E4);
    MEM8(eax + 0x96) = 0;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ED6B; /* je: equal / zero */

loc_0052ED64: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052ED69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052ED66u); } /* indirect call */
    }

loc_0052ED69: ;
    goto loc_0052ED6D;

loc_0052ED6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052ED6D: ;
    edx = MEM32(esi + 0x90);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x90) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0052EDDB; /* jl: less (signed <) */

loc_0052ED80: ;
    edx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EDD1; /* jl: less (signed <) */

loc_0052ED8A: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052EDD1; /* jne: not equal / not zero */

loc_0052ED92: ;
    ecx = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0052ED9Au); RECOMP_ABI_CALL(0x0052E2F0u, sub_0052E2F0); /* call 0x0052E2F0 */

loc_0052ED9A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052EDBB; /* jl: less (signed <) */

loc_0052ED9E: ;
    PUSH32(esp, 0x0052EDA3u); RECOMP_ABI_CALL(0x0052E300u, sub_0052E300); /* call 0x0052E300 */

loc_0052EDA3: ;
    edx = eax;
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esi + 0x90) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0052EDB9u); RECOMP_ABI_CALL(0x0052E210u, sub_0052E210); /* call 0x0052E210 */

loc_0052EDB9: ;
    goto loc_0052EDDB;

loc_0052EDBB: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x90) = 0;
    PUSH32(esp, 0x0052EDCFu); RECOMP_ABI_CALL(0x0052E210u, sub_0052E210); /* call 0x0052E210 */

loc_0052EDCF: ;
    goto loc_0052EDDB;

loc_0052EDD1: ;
    MEM32(esi + 0x90) = 0xFFFFFFFFu;

loc_0052EDDB: ;
    ecx = esi;
    PUSH32(esp, 0x0052EDE2u); RECOMP_ABI_CALL(0x0052E1A0u, sub_0052E1A0); /* call 0x0052E1A0 */

loc_0052EDE2: ;
    SET_LO8(ecx, MEM8(0x6C3421));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EDF3; /* je: equal / zero */

loc_0052EDEE: ;
    eax = MEM32(0x6C3424);

loc_0052EDF3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052EDFBu); RECOMP_ABI_CALL(0x0052E380u, sub_0052E380); /* call 0x0052E380 */

loc_0052EDFB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052EE00
 * Original: 0x0052EE00 - 0x0052EEB8 (184 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0052EE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EEB4; /* je: equal / zero */

loc_0052EE0E: ;
    eax = MEM32(0x6CE2E4);
    MEM8(eax + 0x96) = 0;
    eax = MEM32(esi + 0x90);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = eax;
    if ((_fas >= 0)) goto loc_0052EE94; /* jns: not sign (positive) */

loc_0052EE29: ;
    edx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0052EE74; /* jl: less (signed <) */

loc_0052EE33: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0052EE74; /* jne: not equal / not zero */

loc_0052EE3B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0052EE44; /* jne: not equal / not zero */

loc_0052EE3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0052EE94; /* jge: greater or equal (signed >=) */

loc_0052EE44: ;
    ecx = esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0052EE4Cu); RECOMP_ABI_CALL(0x0052E300u, sub_0052E300); /* call 0x0052E300 */

loc_0052EE4C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0052EE58; /* jge: greater or equal (signed >=) */

loc_0052EE50: ;
    PUSH32(esp, 0x0052EE55u); RECOMP_ABI_CALL(0x0052E2F0u, sub_0052E2F0); /* call 0x0052E2F0 */

loc_0052EE55: ;
    edx = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0052EE58: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052EE62u); RECOMP_ABI_CALL(0x0052E210u, sub_0052E210); /* call 0x0052E210 */

loc_0052EE62: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EE8B; /* je: equal / zero */

loc_0052EE6C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052EE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EE6Eu); } /* indirect call */
    }

loc_0052EE71: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0052EE8E;

loc_0052EE74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0052EE94; /* jge: greater or equal (signed >=) */

loc_0052EE79: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EE8B; /* je: equal / zero */

loc_0052EE83: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052EE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EE85u); } /* indirect call */
    }

loc_0052EE88: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0052EE8E;

loc_0052EE8B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0052EE8E: ;
    MEM32(esi + 0x90) = eax;

loc_0052EE94: ;
    ecx = esi;
    PUSH32(esp, 0x0052EE9Bu); RECOMP_ABI_CALL(0x0052E1A0u, sub_0052E1A0); /* call 0x0052E1A0 */

loc_0052EE9B: ;
    SET_LO8(eax, MEM8(0x6C3421));
    edx = MEM32(0x6C3424);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052EEB4u); RECOMP_ABI_CALL(0x0052E380u, sub_0052E380); /* call 0x0052E380 */

loc_0052EEB4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052EEC0
 * Original: 0x0052EEC0 - 0x0052EF0C (76 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052EEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EF0A; /* je: equal / zero */

loc_0052EECD: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EF0A; /* je: equal / zero */

loc_0052EED4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052EED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EED6u); } /* indirect call */
    }

loc_0052EED9: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EF0A; /* je: equal / zero */

loc_0052EEE2: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x0052EEEFu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052EEEF: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    MEM8(esi + 0x7C) = 0;
    PUSH32(esp, 0x0052EF04u); RECOMP_ABI_CALL(0x0052E520u, sub_0052E520); /* call 0x0052E520 */

loc_0052EF04: ;
    MEM32(esi + 0x90) = eax;

loc_0052EF0A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052EF10
 * Original: 0x0052EF10 - 0x0052F083 (371 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052EF10(void)
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

loc_0052EF10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x7D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052EF8B; /* je: equal / zero */

loc_0052EF1B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 4;
    ebx = esi + 0x88;
    ebp = 2;
    /* nop */

loc_0052EF30: ;
    fp_push(MEMF(ebx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052EF7F; /* jne: not equal / not zero */

loc_0052EF3F: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    fp_top() = RECOMP_FP_PC(MEMF(ebx) - fp_top()); /* fsubr dword ptr [ebx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052EF73; /* jp: parity */

loc_0052EF64: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052EF6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EF68u); } /* indirect call */
    }

loc_0052EF6B: ;
    MEM32(ebx) = 0;
    goto loc_0052EF7F;

loc_0052EF73: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0052EF7Fu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052EF7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052EF30; /* jne: not equal / not zero */

loc_0052EF88: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0052EF8B: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F080; /* je: equal / zero */

loc_0052EF96: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F080; /* je: equal / zero */

loc_0052EFA0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0052EFA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EFA2u); } /* indirect call */
    }

loc_0052EFA5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052F080; /* jne: not equal / not zero */

loc_0052EFB6: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F01B; /* je: equal / zero */

loc_0052EFC0: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0052EFC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052EFC5u); } /* indirect call */
    }

loc_0052EFC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F00B; /* jne: not equal / not zero */

loc_0052EFCC: ;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F002; /* je: equal / zero */

loc_0052EFD3: ;
    ecx = MEM32(0x697B90);
    edx = MEM32(ecx + 0x54);
    SET_LO8(eax, MEM8(edx + 0x487));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F002; /* jne: not equal / not zero */

loc_0052EFE6: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0052EFFB; /* jge: greater or equal (signed >=) */

loc_0052EFF2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052EFF9u); RECOMP_ABI_CALL(0x0052ED40u, sub_0052ED40); /* call 0x0052ED40 */

loc_0052EFF9: ;
    goto loc_0052F01B;

loc_0052EFFB: ;
    PUSH32(esp, 0x0052F000u); RECOMP_ABI_CALL(0x0052EEC0u, sub_0052EEC0); /* call 0x0052EEC0 */

loc_0052F000: ;
    goto loc_0052F01B;

loc_0052F002: ;
    ecx = esi;
    PUSH32(esp, 0x0052F009u); RECOMP_ABI_CALL(0x0052E1A0u, sub_0052E1A0); /* call 0x0052E1A0 */

loc_0052F009: ;
    goto loc_0052F01B;

loc_0052F00B: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0x0052F013u); RECOMP_ABI_CALL(0x005D5830u, sub_005D5830); /* call 0x005D5830 */

loc_0052F013: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F01B; /* je: equal / zero */

loc_0052F017: ;
    MEM8(esi + 0x7C) = 1;

loc_0052F01B: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F080; /* je: equal / zero */

loc_0052F022: ;
    fp_push(MEMF(esi + 0x88)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052F080; /* jne: not equal / not zero */

loc_0052F035: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x88) - fp_top()); /* fsubr dword ptr [esi + 0x88] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    MEMF(esi + 0x88) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052F073; /* jp: parity */

loc_0052F05E: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0052F066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052F063u); } /* indirect call */
    }

loc_0052F066: ;
    MEM32(esi + 0x88) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0052F073: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, 0x0052F080u); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0052F080: ;
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
 * sub_0052F090
 * Original: 0x0052F090 - 0x0052F0B4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F090: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64B0F0;
    MEM32(eax + 4) = ecx;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 0xC) = LO16(ecx);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x186A0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F0C0
 * Original: 0x0052F0C0 - 0x0052F0CB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F0C0: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052F0CAu); RECOMP_ABI_CALL(0x0052E710u, sub_0052E710); /* call 0x0052E710 */

loc_0052F0CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F0D0
 * Original: 0x0052F0D0 - 0x0052F0EC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0052F0E4u); RECOMP_ABI_CALL(0x0052E7E0u, sub_0052E7E0); /* call 0x0052E7E0 */

loc_0052F0E4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052F0C0(); return; /* tail jmp 0x0052F0C0 */

}

/**
 * sub_0052F0F0
 * Original: 0x0052F0F0 - 0x0052F107 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F0F0(void)
{

loc_0052F0F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F104u); RECOMP_ABI_CALL(0x0052E6A0u, sub_0052E6A0); /* call 0x0052E6A0 */

loc_0052F104: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052F110
 * Original: 0x0052F110 - 0x0052F15F (79 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F110: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F129; /* jne: not equal / not zero */

loc_0052F11D: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F129u); RECOMP_ABI_CALL(0x0052E710u, sub_0052E710); /* call 0x0052E710 */

loc_0052F129: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(MEM16(esp + 0xC));
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(ecx + 4) = 0;
    PUSH32(esp, 0x0052F152u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052F152: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052F158u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F158: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052F160
 * Original: 0x0052F160 - 0x0052F1AF (79 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F160: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F179; /* jne: not equal / not zero */

loc_0052F16D: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F179u); RECOMP_ABI_CALL(0x0052E7E0u, sub_0052E7E0); /* call 0x0052E7E0 */

loc_0052F179: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(MEM16(esp + 0xC));
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(ecx + 4) = 0;
    PUSH32(esp, 0x0052F1A2u); RECOMP_ABI_CALL(0x00606160u, sub_00606160); /* call 0x00606160 */

loc_0052F1A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052F1A8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F1A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052F1B0
 * Original: 0x0052F1B0 - 0x0052F1CE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052F1B8u); RECOMP_ABI_CALL(0x0052E9E0u, sub_0052E9E0); /* call 0x0052E9E0 */

loc_0052F1B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052F1C8; /* je: equal / zero */

loc_0052F1BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052F1C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F1C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052F1C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052F1D0
 * Original: 0x0052F1D0 - 0x0052F2A0 (208 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 0xC4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC4), 0 (16-bit) */
    eax = MEM32(esi + 0xA0);
    MEM32(esi + 0x98) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F20C; /* je: equal / zero */

loc_0052F1E9: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052F20C; /* jge: greater or equal (signed >=) */

loc_0052F1F3: ;
    edx = MEM32(esi + 0xC0);
    ecx = eax * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    MEM32(esi + 0x94) = eax;
    goto loc_0052F280;

loc_0052F20C: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052F252; /* jl: less (signed <) */

loc_0052F217: ;
    ecx = ZX16(MEM16(esi + 0xBC));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052F252; /* jg: greater (signed >) */

loc_0052F223: ;
    edx = MEM32(esi + 0xB8);
    ecx = MEM32(edx + eax * 4 + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F252; /* je: equal / zero */

loc_0052F231: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052F236u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052F233u); } /* indirect call */
    }

loc_0052F236: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F252; /* je: equal / zero */

loc_0052F23A: ;
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0xB8);
    eax = MEM32(edx + ecx * 4 + -8);
    MEM32(esi + 0x94) = eax;
    goto loc_0052F280;

loc_0052F252: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F26A; /* jne: not equal / not zero */

loc_0052F25C: ;
    ecx = MEM32(esi + 0xAC);
    MEM32(esi + 0x94) = ecx;
    goto loc_0052F280;

loc_0052F26A: ;
    edx = MEM32(esi + 0x98);
    MEM32(esi + 0x9C) = 1;
    MEM32(esi + 0x94) = edx;

loc_0052F280: ;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F298; /* je: equal / zero */

loc_0052F287: ;
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F298; /* je: equal / zero */

loc_0052F290: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052E1A0(); return; /* tail jmp 0x0052E1A0 */

loc_0052F298: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052EEC0(); return; /* tail jmp 0x0052EEC0 */

}

/**
 * sub_0052F2A0
 * Original: 0x0052F2A0 - 0x0052F2DF (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F2A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x98) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F2CE; /* jne: not equal / not zero */

loc_0052F2B1: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F2CE; /* je: equal / zero */

loc_0052F2BB: ;
    ecx = esi;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 0x0052F2CEu); RECOMP_ABI_CALL(0x0052EEC0u, sub_0052EEC0); /* call 0x0052EEC0 */

loc_0052F2CE: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052F2DE; /* je: equal / zero */

loc_0052F2D9: ;
    g_seh_ebp = ebp; sub_005347C0(); return; /* tail jmp 0x005347C0 */

loc_0052F2DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F2E0
 * Original: 0x0052F2E0 - 0x0052F313 (51 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F2E0: ;
    eax = MEM32(ecx + 0xB0);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F310; /* je: equal / zero */

loc_0052F2F1: ;
    edx = MEM32(ecx + 0x94);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x98) (32-bit) */
    MEM32(ecx + 0x98) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0052F310; /* jne: not equal / not zero */

loc_0052F305: ;
    MEM32(ecx + 0x94) = eax;
    PUSH32(esp, 0x0052F310u); RECOMP_ABI_CALL(0x0052EEC0u, sub_0052EEC0); /* call 0x0052EEC0 */

loc_0052F310: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052F320
 * Original: 0x0052F320 - 0x0052F352 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F320: ;
    eax = MEM32(ecx + 0x94);
    edx = MEM32(ecx + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ecx + 0xA0);
    if (CMP_NE(_fa, _fb)) goto loc_0052F34B; /* jne: not equal / not zero */

loc_0052F336: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F351; /* je: equal / zero */

loc_0052F33A: ;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0x94) = eax;
    g_seh_ebp = ebp; sub_0052EEC0(); return; /* tail jmp 0x0052EEC0 */

loc_0052F34B: ;
    MEM32(ecx + 0x98) = eax;

loc_0052F351: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F360
 * Original: 0x0052F360 - 0x0052F3A5 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F360: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64B0F0;
    PUSH32(esp, 0x0052F36Eu); RECOMP_ABI_CALL(0x0052F0C0u, sub_0052F0C0); /* call 0x0052F0C0 */

loc_0052F36E: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F3A3; /* je: equal / zero */

loc_0052F375: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    esi = ecx + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052F399; /* js: sign (negative) */

loc_0052F382: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_0052F386: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F392u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F392: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052F386; /* jne: not equal / not zero */

loc_0052F398: ;
    POP32(esp, edi);

loc_0052F399: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052F39Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052F39F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0052F3A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052F3B0
 * Original: 0x0052F3B0 - 0x0052F708 (856 bytes, 266 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F3B0: ;
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x33C);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    eax = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0052F3D7u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052F3D7: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052F3E3u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052F3E3: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F406; /* je: equal / zero */

loc_0052F3EC: ;
    /* nop */

loc_0052F3F0: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    MEM8(eax) = 0x2F;
    PUSH32(esp, 0x0052F3FFu); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052F3FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F3F0; /* jne: not equal / not zero */

loc_0052F406: ;
    PUSH32(esp, 0x64B158);
    PUSH32(esp, 0x0052F410u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052F410: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F4B7; /* jne: not equal / not zero */

loc_0052F41B: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F427u); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052F427: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F465; /* je: equal / zero */

loc_0052F42E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052F43Au); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052F43A: ;
    edx = MEM32(0x64B14C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    ecx = MEM32(0x64B150);
    MEM32(eax + 4) = ecx;
    SET_LO16(edx, MEM16(0x64B154));
    MEM16(eax + 8) = LO16(edx);
    SET_LO8(ecx, MEM8(0x64B156));
    MEM8(eax + 0xA) = LO8(ecx);
    goto loc_0052F48E;

loc_0052F465: ;
    edx = MEM32(0x64B14C);
    eax = MEM32(0x64B150);
    SET_LO16(ecx, MEM16(0x64B154));
    MEM32(esp + 0x1C) = edx;
    SET_LO8(edx, MEM8(0x64B156));
    MEM32(esp + 0x20) = eax;
    MEM16(esp + 0x24) = LO16(ecx);
    MEM8(esp + 0x26) = LO8(edx);

loc_0052F48E: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64B144);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B130);
    PUSH32(esp, 0x0052F4ABu); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0052F4AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F4B7; /* je: equal / zero */

loc_0052F4B3: ;
    SET_LO8(ebx, 1);
    goto loc_0052F4DC;

loc_0052F4B7: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64B128);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64B130);
    PUSH32(esp, 0x0052F4D0u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0052F4D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F5CB; /* je: equal / zero */

loc_0052F4DC: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B11C);
    ecx = esp + 0x124;
    PUSH32(esp, 0x0052F4F2u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0052F4F2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F5DA; /* je: equal / zero */

loc_0052F4FA: ;
    edx = esp + 0x1C;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0052F502: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F502; /* jne: not equal / not zero */

loc_0052F50C: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052F518u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052F518: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F536; /* je: equal / zero */

loc_0052F51F: ;
    /* nop */

loc_0052F520: ;
    MEM8(eax) = 0x2F;
    eax = esp + 0x1C;
    PUSH32(esp, 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F52Fu); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052F52F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F520; /* jne: not equal / not zero */

loc_0052F536: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052F542u); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052F542: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F54E; /* je: equal / zero */

loc_0052F54B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0052F552;

loc_0052F54E: ;
    esi = esp + 0x1C;

loc_0052F552: ;
    edi = esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0052F555: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F555; /* jne: not equal / not zero */

loc_0052F55D: ;
    edx = MEM32(0x64B114);
    MEM32(edi) = edx;
    SET_LO16(eax, MEM16(0x64B118));
    PUSH32(esp, 0x80);
    ecx = esp + 0x1C0;
    PUSH32(esp, ecx);
    ecx = esp + 0x124;
    MEM16(edi + 4) = LO16(eax);
    PUSH32(esp, 0x0052F588u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0052F588: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F5C2; /* je: equal / zero */

loc_0052F58C: ;
    /* nop */

loc_0052F590: ;
    edx = esp + 0x1BC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052F59Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0052F59E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F5DA; /* je: equal / zero */

loc_0052F5A5: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    ecx = esp + 0x124;
    PUSH32(esp, 0x0052F5BEu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0052F5BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F590; /* jne: not equal / not zero */

loc_0052F5C2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0052F5CBu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0052F5CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0052F5DA: ;
    PUSH32(esp, 0x64B108);
    ecx = esp + 0x120;
    PUSH32(esp, 0x0052F5EBu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052F5EB: ;
    ecx = esp + 0x11C;
    PUSH32(esp, 0x0052F5F7u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0052F5F7: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0052F6F0; /* jle: less or equal (signed <=) */

loc_0052F607: ;
    goto loc_0052F610;

    /* nop */

loc_0052F610: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x100);
    ecx = esp + 0x244;
    PUSH32(esp, ecx);
    ecx = esp + 0x128;
    PUSH32(esp, 0x0052F62Bu); RECOMP_ABI_CALL(0x00615610u, sub_00615610); /* call 0x00615610 */

loc_0052F62B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F610; /* je: equal / zero */

loc_0052F62F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0052F6F0; /* jle: less or equal (signed <=) */

loc_0052F635: ;
    SET_LO8(eax, MEM8(esp + 0x23C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = esp + 0x23C;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F6E8; /* je: equal / zero */

loc_0052F64B: ;
    goto loc_0052F650;

    /* nop */

loc_0052F650: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052F661; /* jg: greater (signed >) */

loc_0052F654: ;
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F650; /* jne: not equal / not zero */

loc_0052F65C: ;
    goto loc_0052F6E8;

loc_0052F661: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F6E8; /* je: equal / zero */

loc_0052F66A: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F685; /* je: equal / zero */

loc_0052F671: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052F685; /* jle: less or equal (signed <=) */

loc_0052F678: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x23 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F685; /* je: equal / zero */

loc_0052F67D: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F671; /* jne: not equal / not zero */

loc_0052F685: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM8(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F6E8; /* je: equal / zero */

loc_0052F68C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp;
    eax = edx;
    MEM32(esi) = ebp;
    MEM16(esi + 4) = LO16(ebp);
    MEM16(esi + 6) = LO16(ebp);
    edi = eax + 1;

loc_0052F6A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F6A0; /* jne: not equal / not zero */

loc_0052F6A7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052F6B2u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052F6B2: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0052F6C0u); RECOMP_ABI_CALL(0x0052F110u, sub_0052F110); /* call 0x0052F110 */

loc_0052F6C0: ;
    edx = ZX16(MEM16(esi + 4));
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM16(eax + edx * 8 + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + edx * 8 + -4), LO16(ebp) (16-bit) */
    eax = eax + edx * 8 + -8;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F6D5; /* je: equal / zero */

loc_0052F6D1: ;
    eax = MEM32(eax);
    goto loc_0052F6DA;

loc_0052F6D5: ;
    eax = 0x62DF21;

loc_0052F6DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F6E0u); RECOMP_ABI_CALL(0x005D3F70u, sub_005D3F70); /* call 0x005D3F70 */

loc_0052F6E0: ;
    esi = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052F6E8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052F610; /* jl: less (signed <) */

loc_0052F6F0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0052F6F9u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0052F6F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x32C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052F710
 * Original: 0x0052F710 - 0x0052F853 (323 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F710: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F847; /* je: equal / zero */

loc_0052F72C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052F73Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052F737u); } /* indirect call */
    }

loc_0052F73A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052F846; /* jle: less or equal (signed <=) */

loc_0052F742: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052F754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052F751u); } /* indirect call */
    }

loc_0052F754: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F82E; /* je: equal / zero */

loc_0052F75C: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052F7A9; /* jbe: below or equal (unsigned <=) */

loc_0052F766: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F827; /* jne: not equal / not zero */

loc_0052F76E: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(ecx + esi * 8 + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + esi * 8 + 4), LO16(ebp) (16-bit) */
    eax = ecx + esi * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0052F77F; /* je: equal / zero */

loc_0052F77B: ;
    eax = MEM32(eax);
    goto loc_0052F784;

loc_0052F77F: ;
    eax = 0x62DF21;

loc_0052F784: ;
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052F78Fu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0052F78F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F798; /* jne: not equal / not zero */

loc_0052F796: ;
    SET_LO8(ebx, 1);

loc_0052F798: ;
    eax = ZX16(MEM16(edi + 8));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052F766; /* jl: less (signed <) */

loc_0052F7A1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F827; /* jne: not equal / not zero */

loc_0052F7A9: ;
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = ebp;
    MEM16(esp + 0x14) = LO16(ebp);
    MEM16(esp + 0x16) = LO16(ebp);
    edx = eax + 1;
    edi = edi;

loc_0052F7C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F7C0; /* jne: not equal / not zero */

loc_0052F7C7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0052F7D8u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052F7D8: ;
    SET_LO16(eax, MEM16(edi + 0xA));
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), LO16(eax) (16-bit) */
    esi = edi + 4;
    if (CMP_NE(_fa, _fb)) goto loc_0052F7F3; /* jne: not equal / not zero */

loc_0052F7E5: ;
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052F7F3u); RECOMP_ABI_CALL(0x0052E710u, sub_0052E710); /* call 0x0052E710 */

loc_0052F7F3: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(eax);
    MEM16(ecx + 4) = LO16(ebp);
    eax = ZX16(MEM16(esp + 0x14));
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052F81Au); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052F81A: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F824u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F824: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052F827: ;
    esi = MEM32(esp + 0xA0);

loc_0052F82E: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052F83Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052F83Bu); } /* indirect call */
    }

loc_0052F83E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052F742; /* jl: less (signed <) */

loc_0052F846: ;
    POP32(esp, ebx);

loc_0052F847: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052F860
 * Original: 0x0052F860 - 0x0052F883 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F860: ;
    edx = ecx;
    PUSH32(esp, 0x0052F867u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0052F867: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = 0x64B168;
    MEM32(edx + 0x20) = eax;
    MEM16(edx + 0x24) = LO16(eax);
    MEM16(edx + 0x26) = LO16(eax);
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0052F890
 * Original: 0x0052F890 - 0x0052F8DE (78 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0052F890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052F890: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(ebp) = 0x64B168;
    PUSH32(esp, 0x0052F89Fu); RECOMP_ABI_CALL(0x0052F0D0u, sub_0052F0D0); /* call 0x0052F0D0 */

loc_0052F89F: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F8D6; /* je: equal / zero */

loc_0052F8A6: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052F8CB; /* js: sign (negative) */

loc_0052F8B4: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_0052F8B8: ;
    eax = MEM32(esi + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052F8C4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052F8C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052F8B8; /* jne: not equal / not zero */

loc_0052F8CA: ;
    POP32(esp, edi);

loc_0052F8CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052F8D1u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052F8D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0052F8D6: ;
    ecx = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0052F360(); return; /* tail jmp 0x0052F360 */

}

/**
 * sub_0052F8E0
 * Original: 0x0052F8E0 - 0x0052F9E9 (265 bytes, 107 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F8E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    ecx = esp;
    eax = ebp;
    MEM32(ecx) = ebx;
    MEM16(ecx + 4) = LO16(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    edi = eax + 1;

loc_0052F900: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F900; /* jne: not equal / not zero */

loc_0052F907: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052F910u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_0052F910: ;
    ecx = esi + 4;
    PUSH32(esp, 0x0052F918u); RECOMP_ABI_CALL(0x0052F110u, sub_0052F110); /* call 0x0052F110 */

loc_0052F918: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F956; /* je: equal / zero */

loc_0052F920: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    eax = edi;
    MEM32(ecx) = ebx;
    MEM16(ecx + 4) = LO16(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    ebp = eax + 1;

loc_0052F934: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F934; /* jne: not equal / not zero */

loc_0052F93B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052F944u); RECOMP_ABI_CALL(0x006060A0u, sub_006060A0); /* call 0x006060A0 */

loc_0052F944: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0052F94Cu); RECOMP_ABI_CALL(0x0052F160u, sub_0052F160); /* call 0x0052F160 */

loc_0052F94C: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0052F956: ;
    PUSH32(esp, 0x66A);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052F966u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_0052F966: ;
    ebp = eax;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052F970u); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052F970: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0052F97Au); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052F97A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0052F983; /* jae: above or equal (unsigned >=) */

loc_0052F981: ;
    edi = eax;

loc_0052F983: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F98B; /* jne: not equal / not zero */

loc_0052F987: ;
    edi = ebp;
    goto loc_0052F98C;

loc_0052F98B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052F98C: ;
    PUSH32(esp, 0x64B0C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052F997u); RECOMP_ABI_CALL(0x0061A460u, sub_0061A460); /* call 0x0061A460 */

loc_0052F997: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052F9A0; /* je: equal / zero */

loc_0052F99E: ;
    MEM8(eax) = LO8(ebx);

loc_0052F9A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    eax = edi;
    edx = eax + 1;
    MEM32(ecx) = ebx;
    MEM16(ecx + 4) = LO16(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    MEM32(esp + 0x1C) = edx;

loc_0052F9B8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052F9B8; /* jne: not equal / not zero */

loc_0052F9BF: ;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052F9CAu); RECOMP_ABI_CALL(0x006060A0u, sub_006060A0); /* call 0x006060A0 */

loc_0052F9CA: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0052F9D2u); RECOMP_ABI_CALL(0x0052F160u, sub_0052F160); /* call 0x0052F160 */

loc_0052F9D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052F9D8u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052F9D8: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052F9F0
 * Original: 0x0052F9F0 - 0x0052FB09 (281 bytes, 100 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052F9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052F9F0: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x32F);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x28);
    ebp = ecx;
    PUSH32(esp, 0x0052FA0Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052FA0D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FA23; /* je: equal / zero */

loc_0052FA16: ;
    ecx = eax;
    PUSH32(esp, 0x0052FA1Du); RECOMP_ABI_CALL(0x0052F860u, sub_0052F860); /* call 0x0052F860 */

loc_0052FA1D: ;
    MEM32(esp + 0x10) = eax;
    goto loc_0052FA29;

loc_0052FA23: ;
    MEM32(esp + 0x10) = ebx;
    eax = ebx;

loc_0052FA29: ;
    esi = MEM32(esp + 0x118);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052FA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052FA35u); } /* indirect call */
    }

loc_0052FA38: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052FA40u); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052FA40: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0052FA4Au); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_0052FA4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052FA53; /* jbe: below or equal (unsigned <=) */

loc_0052FA51: ;
    edi = eax;

loc_0052FA53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FA5B; /* jne: not equal / not zero */

loc_0052FA57: ;
    edi = esi;
    goto loc_0052FA5C;

loc_0052FA5B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052FA5C: ;
    eax = edi;
    edx = eax + 1;

loc_0052FA61: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FA61; /* jne: not equal / not zero */

loc_0052FA68: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0052FA7A; /* jb: below (unsigned <) */

loc_0052FA75: ;
    esi = 0xFF;

loc_0052FA7A: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052FA86u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052FA86: ;
    MEM8(esp + esi + 0x20) = LO8(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    eax = esp + 0x1C;
    MEM32(ecx) = ebx;
    MEM16(ecx + 4) = LO16(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    esi = eax + 1;

loc_0052FAA0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FAA0; /* jne: not equal / not zero */

loc_0052FAA7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052FAB4u); RECOMP_ABI_CALL(0x006060A0u, sub_006060A0); /* call 0x006060A0 */

loc_0052FAB4: ;
    ecx = ebp + 0xC8;
    PUSH32(esp, 0x0052FABFu); RECOMP_ABI_CALL(0x0052F160u, sub_0052F160); /* call 0x0052F160 */

loc_0052FABF: ;
    SET_LO16(eax, MEM16(ebp + 0xC6));
    _fa = (uint32_t)(MEM16(ebp + 0xC4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC4), LO16(eax) (16-bit) */
    esi = ebp + 0xC0;
    if (CMP_NE(_fa, _fb)) goto loc_0052FAE3; /* jne: not equal / not zero */

loc_0052FAD5: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052FAE3u); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_0052FAE3: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    POP32(esp, edi);
    ecx = edx + ecx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(eax);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FB10
 * Original: 0x0052FB10 - 0x0052FBE6 (214 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0052FB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052FB10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FBCE; /* jne: not equal / not zero */

loc_0052FB23: ;
    PUSH32(esp, 0x34E);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0052FB34u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052FB34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FB44; /* je: equal / zero */

loc_0052FB3B: ;
    ecx = eax;
    PUSH32(esp, 0x0052FB42u); RECOMP_ABI_CALL(0x0052F860u, sub_0052F860); /* call 0x0052F860 */

loc_0052FB42: ;
    goto loc_0052FB46;

loc_0052FB44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052FB46: ;
    MEM32(edi + 0xD0) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    eax = 0x64B18C;
    MEM32(ecx) = 0;
    MEM16(ecx + 4) = 0;
    MEM16(ecx + 6) = 0;
    esi = eax + 1;
    goto loc_0052FB70;

    /* nop */

loc_0052FB70: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FB70; /* jne: not equal / not zero */

loc_0052FB77: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B18C);
    PUSH32(esp, 0x0052FB84u); RECOMP_ABI_CALL(0x006060A0u, sub_006060A0); /* call 0x006060A0 */

loc_0052FB84: ;
    ecx = edi + 0xC8;
    PUSH32(esp, 0x0052FB8Fu); RECOMP_ABI_CALL(0x0052F160u, sub_0052F160); /* call 0x0052F160 */

loc_0052FB8F: ;
    SET_LO16(eax, MEM16(edi + 0xC6));
    _fa = (uint32_t)(MEM16(edi + 0xC4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xC4), LO16(eax) (16-bit) */
    ebp = MEM32(edi + 0xD0);
    esi = edi + 0xC0;
    if (CMP_NE(_fa, _fb)) goto loc_0052FBB9; /* jne: not equal / not zero */

loc_0052FBAB: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052FBB9u); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_0052FBB9: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 4));
    ecx = ZX16(LO16(eax));
    ecx = edx + ecx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esi + 4) = LO16(eax);
    MEM32(ecx) = ebp;

loc_0052FBCE: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0xD0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052FBE0u); RECOMP_ABI_CALL(0x0052F8E0u, sub_0052F8E0); /* call 0x0052F8E0 */

loc_0052FBE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FBF0
 * Original: 0x0052FBF0 - 0x0052FC0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052FBF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052FBF8u); RECOMP_ABI_CALL(0x0052F890u, sub_0052F890); /* call 0x0052F890 */

loc_0052FBF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052FC08; /* je: equal / zero */

loc_0052FBFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052FC05u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052FC05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052FC08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FC10
 * Original: 0x0052FC10 - 0x0052FDDC (460 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FC10: ;
    _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x2AC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    esi = MEM32(0x679810);
    ecx = MEM32(0x860220);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x62DF21);
    MEM32(0x679810) = 0x679884;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0052FC4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052FC4Cu); } /* indirect call */
    }

loc_0052FC4F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(0x679810) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0052FC6E; /* jne: not equal / not zero */

loc_0052FC5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0052FC6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64B11C);
    ecx = esp + 0x120;
    PUSH32(esp, 0x0052FC80u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0052FC80: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x100);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x124;
    PUSH32(esp, 0x0052FC98u); RECOMP_ABI_CALL(0x00615610u, sub_00615610); /* call 0x00615610 */

loc_0052FC98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FC80; /* je: equal / zero */

loc_0052FC9C: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0052FDC6; /* jle: less or equal (signed <=) */

loc_0052FCA2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x18;
    esi = 0x64B19C;
    ecx = 8;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x12) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0052FCE1; /* je: equal / zero */

loc_0052FCC3: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x120;
    PUSH32(esp, 0x0052FCD9u); RECOMP_ABI_CALL(0x0047C920u, sub_0047C920); /* call 0x0047C920 */

loc_0052FCD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052FDC2; /* jle: less or equal (signed <=) */

loc_0052FCE1: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FD41; /* je: equal / zero */

loc_0052FCE7: ;
    PUSH32(esp, 8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x64B190);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052FCF8u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0052FCF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FD41; /* jne: not equal / not zero */

loc_0052FCFF: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FDA0; /* jne: not equal / not zero */

loc_0052FD09: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052FD15u); RECOMP_ABI_CALL(0x0061A7C0u, sub_0061A7C0); /* call 0x0061A7C0 */

loc_0052FD15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FD1D; /* je: equal / zero */

loc_0052FD1C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052FD1D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052FD30u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052FD30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x2B7) = LO8(ebx);
    MEM8(esp + 0x12) = 1;
    goto loc_0052FDA0;

loc_0052FD41: ;
    eax = esp + 0x18;
    edx = eax + 1;

loc_0052FD48: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FD48; /* jne: not equal / not zero */

loc_0052FD4F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + eax + 0x17;
    ecx = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FDA0; /* je: equal / zero */

loc_0052FD5D: ;
    /* nop */

loc_0052FD60: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052FD72; /* jg: greater (signed >) */

loc_0052FD65: ;
    MEM8(eax) = LO8(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FD60; /* jne: not equal / not zero */

loc_0052FD70: ;
    goto loc_0052FDA0;

loc_0052FD72: ;
    ecx = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FDA0; /* je: equal / zero */

loc_0052FD7A: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FD8F; /* je: equal / zero */

loc_0052FD80: ;
    edx = esp + 0x1B8;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0052FD95;

loc_0052FD8F: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0052FD95: ;
    ecx = ebp;
    PUSH32(esp, 0x0052FD9Cu); RECOMP_ABI_CALL(0x0052F8E0u, sub_0052F8E0); /* call 0x0052F8E0 */

loc_0052FD9C: ;
    MEM8(esp + 0x12) = LO8(ebx);

loc_0052FDA0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x100);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x124;
    PUSH32(esp, 0x0052FDB8u); RECOMP_ABI_CALL(0x00615610u, sub_00615610); /* call 0x00615610 */

loc_0052FDB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FDA0; /* je: equal / zero */

loc_0052FDBC: ;
    if (CMP_G(_fas, _fbs)) goto loc_0052FCE1; /* jg: greater (signed >) */

loc_0052FDC2: ;
    edi = MEM32(esp + 0x14);

loc_0052FDC6: ;
    ecx = edi;
    PUSH32(esp, 0x0052FDCDu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_0052FDCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052FDE0
 * Original: 0x0052FDE0 - 0x0052FED8 (248 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052FDE0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FED1; /* jne: not equal / not zero */

loc_0052FDF2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x408);
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_0052FE00: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FE00; /* jne: not equal / not zero */

loc_0052FE07: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052FED0; /* jbe: below or equal (unsigned <=) */

loc_0052FE12: ;
    ecx = MEM32(0x64B1B0);
    eax = MEM32(0x64B1AC);
    edx = MEM32(0x64B1B4);
    PUSH32(esp, 0x3F0);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    eax = MEM32(0x64B1B8);
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0052FE48u); RECOMP_ABI_CALL(0x0061ADB0u, sub_0061ADB0); /* call 0x0061ADB0 */

loc_0052FE48: ;
    eax = esp + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x403) = 0;
    edx = eax + 1;
    /* nop */

loc_0052FE60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FE60; /* jne: not equal / not zero */

loc_0052FE67: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + eax;
    PUSH32(esp, 0x64B1A4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052FE78u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0052FE78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 4;
    if (CMP_NE(_fa, _fb)) goto loc_0052FE98; /* jne: not equal / not zero */

loc_0052FE83: ;
    ecx = MEM32(esp + 0x410);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052FE90u); RECOMP_ABI_CALL(0x0052F9F0u, sub_0052F9F0); /* call 0x0052F9F0 */

loc_0052FE90: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0052FE98: ;
    edx = eax + 1;
    goto loc_0052FEA0;

    /* nop */

loc_0052FEA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FEA0; /* jne: not equal / not zero */

loc_0052FEA7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + eax;
    PUSH32(esp, 0x64B0C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052FEB8u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_0052FEB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052FED0; /* jne: not equal / not zero */

loc_0052FEBF: ;
    ecx = MEM32(esp + 0x410);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052FED0u); RECOMP_ABI_CALL(0x0052FB10u, sub_0052FB10); /* call 0x0052FB10 */

loc_0052FED0: ;
    POP32(esp, esi);

loc_0052FED1: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0052FEE0
 * Original: 0x0052FEE0 - 0x00530609 (1833 bytes, 551 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052FEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052FEE0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x7C) = 0;
    eax = MEM32(0x6C2C60);
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 2);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    PUSH32(esp, 0x64B0E8);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x0052FF0Cu); RECOMP_ABI_CALL(0x005D5160u, sub_005D5160); /* call 0x005D5160 */

loc_0052FF0C: ;
    PUSH32(esp, 0xA5);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0052FF21u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052FF21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FF31; /* je: equal / zero */

loc_0052FF28: ;
    ecx = eax;
    PUSH32(esp, 0x0052FF2Fu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0052FF2F: ;
    goto loc_0052FF33;

loc_0052FF31: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052FF33: ;
    MEM32(edi + 0xA0) = eax;
    MEM32(edi + 0xA4) = esi;
    MEM32(edi + 0xA8) = esi;
    ecx = MEM32(0x697B88);
    ebp = MEM32(ecx + 4);
    eax = MEM32(0x6C32C8);
    ecx = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0052FF5Eu); RECOMP_ABI_CALL(0x00485790u, sub_00485790); /* call 0x00485790 */

loc_0052FF5E: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00530258; /* je: equal / zero */

loc_0052FF6D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005300E7; /* je: equal / zero */

loc_0052FF74: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530061; /* je: equal / zero */

loc_0052FF7C: ;
    PUSH32(esp, 0x6C3320);
    PUSH32(esp, 0x64B21C);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052FF92u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052FF92: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0052FFA3u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052FFA3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052FFB3; /* je: equal / zero */

loc_0052FFAA: ;
    ecx = eax;
    PUSH32(esp, 0x0052FFB1u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0052FFB1: ;
    goto loc_0052FFB5;

loc_0052FFB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052FFB5: ;
    ecx = esp + 0x20;
    MEM32(edi + 0xA4) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0052FFC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052FFC4u); } /* indirect call */
    }

loc_0052FFC7: ;
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052FFD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052FFCFu); } /* indirect call */
    }

loc_0052FFD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00530010; /* jne: not equal / not zero */

loc_0052FFD6: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530010; /* je: equal / zero */

loc_0052FFDE: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0052FFE7u); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_0052FFE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530010; /* je: equal / zero */

loc_0052FFEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B20C);
    eax = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052FFFDu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052FFFD: ;
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00530010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053000Du); } /* indirect call */
    }

loc_00530010: ;
    ecx = MEM32(edi + 0xA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0053001Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530018u); } /* indirect call */
    }

loc_0053001B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053003B; /* jne: not equal / not zero */

loc_0053001F: ;
    ecx = MEM32(edi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053002F; /* je: equal / zero */

loc_00530029: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053002Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053002Du); } /* indirect call */
    }

loc_0053002F: ;
    MEM32(edi + 0xA4) = 0;
    goto loc_00530061;

loc_0053003B: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xA4);
    PUSH32(esp, 0x0053004Du); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053004D: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00530061; /* jl: less (signed <) */

loc_00530057: ;
    MEM32(edi + 0x9C) = 1;

loc_00530061: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx * 4 + 0x663174);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B1F8);
    ecx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053007Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053007E: ;
    PUSH32(esp, 0x111);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0053008Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053008F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053009F; /* je: equal / zero */

loc_00530096: ;
    ecx = eax;
    PUSH32(esp, 0x0053009Du); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0053009D: ;
    goto loc_005300A1;

loc_0053009F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005300A1: ;
    ecx = esp + 0x20;
    MEM32(edi + 0xA8) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005300B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005300B0u); } /* indirect call */
    }

loc_005300B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(edi + 0xA8);
    if (CMP_NE(_fa, _fb)) goto loc_005300D6; /* jne: not equal / not zero */

loc_005300BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005300C7; /* je: equal / zero */

loc_005300C1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005300C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005300C5u); } /* indirect call */
    }

loc_005300C7: ;
    MEM32(edi + 0xA8) = 0;
    goto loc_00530258;

loc_005300D6: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005300E2u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_005300E2: ;
    goto loc_00530258;

loc_005300E7: ;
    ecx = ZX16(MEM16(edi + 0xB4));
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = edi + 0xB0;
    if (CMP_LE(_fas, _fbs)) goto loc_00530104; /* jle: less or equal (signed <=) */

loc_005300FC: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00530104u); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_00530104: ;
    eax = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM16(ebx + 4) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_005301A3; /* jle: less or equal (signed <=) */

loc_00530116: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0053011Eu); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_0053011E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B1E8);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00530130u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00530130: ;
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00530141u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00530141: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530151; /* je: equal / zero */

loc_00530148: ;
    ecx = eax;
    PUSH32(esp, 0x0053014Fu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0053014F: ;
    goto loc_00530153;

loc_00530151: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00530153: ;
    ecx = MEM32(ebx);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(ebx);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00530167u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530164u); } /* indirect call */
    }

loc_00530167: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00530185; /* jne: not equal / not zero */

loc_0053016B: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053017A; /* je: equal / zero */

loc_00530174: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053017Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530178u); } /* indirect call */
    }

loc_0053017A: ;
    eax = MEM32(ebx);
    MEM32(eax + esi * 4) = 0;
    goto loc_00530196;

loc_00530185: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + esi * 4);
    PUSH32(esp, 0x00530196u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00530196: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00530116; /* jl: less (signed <) */

loc_005301A3: ;
    ebp = MEM32(esp + 0x10);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x1278);
    eax = MEM32(ebp + 0x663C70);
    ebp = ebp + 0x663C70;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00530214; /* jle: less or equal (signed <=) */

loc_005301BF: ;
    ebx = MEM32(esp + 0x10);

loc_005301C3: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005301D2u); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_005301D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053020C; /* je: equal / zero */

loc_005301D6: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x49E);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x663C74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B1DC);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005301F9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005301F9: ;
    ecx = MEM32(edi + 0xA0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0053020Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530209u); } /* indirect call */
    }

loc_0053020C: ;
    eax = MEM32(ebp);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005301C3; /* jl: less (signed <) */

loc_00530214: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B1CC);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00530231u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00530231: ;
    ecx = MEM32(edi + 0xA0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00530244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530241u); } /* indirect call */
    }

loc_00530244: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00530258; /* jl: less (signed <) */

loc_0053024E: ;
    MEM32(edi + 0x9C) = 1;

loc_00530258: ;
    ecx = MEM32(edi + 0xA0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530280; /* je: equal / zero */

loc_00530264: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00530269u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530266u); } /* indirect call */
    }

loc_00530269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530280; /* je: equal / zero */

loc_0053026D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xA0);
    PUSH32(esp, 0x0053027Eu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053027E: ;
    goto loc_00530296;

loc_00530280: ;
    ecx = MEM32(edi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530290; /* je: equal / zero */

loc_0053028A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00530290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053028Eu); } /* indirect call */
    }

loc_00530290: ;
    MEM32(edi + 0xA0) = esi;

loc_00530296: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005302A5u); RECOMP_ABI_CALL(0x0053EA20u, sub_0053EA20); /* call 0x0053EA20 */

loc_005302A5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_005302B7; /* jge: greater or equal (signed >=) */

loc_005302B1: ;
    eax = ecx;
    MEM32(esp + 0x1C) = eax;

loc_005302B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005302C5; /* jl: less (signed <) */

loc_005302BC: ;
    eax = 2;
    MEM32(esp + 0x1C) = eax;

loc_005302C5: ;
    ebp = eax + 1;
    eax = ZX16(MEM16(edi + 0xBC));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    ebx = edi + 0xB8;
    if (CMP_LE(_fas, _fbs)) goto loc_005302E1; /* jle: less or equal (signed <=) */

loc_005302D9: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x005302E1u); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_005302E1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM16(ebx + 4) = LO16(ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0053044D; /* jle: less or equal (signed <=) */

loc_005302ED: ;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = 0x663C70;
    /* nop */

loc_00530300: ;
    PUSH32(esp, 0x131);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00530311u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00530311: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530321; /* je: equal / zero */

loc_00530318: ;
    ecx = eax;
    PUSH32(esp, 0x0053031Fu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0053031F: ;
    goto loc_00530323;

loc_00530321: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00530323: ;
    ecx = MEM32(ebx);
    MEM32(ecx + esi * 4) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005303BF; /* jl: less (signed <) */

loc_00530332: ;
    _fa = (uint32_t)(MEM8(0x6C2C67)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C2C67), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005303BF; /* je: equal / zero */

loc_0053033F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053039F; /* jle: less or equal (signed <=) */

loc_0053034B: ;
    goto loc_00530350;

    /* nop */

loc_00530350: ;
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0053035Fu); RECOMP_ABI_CALL(0x0053BCF0u, sub_0053BCF0); /* call 0x0053BCF0 */

loc_0053035F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530394; /* je: equal / zero */

loc_00530363: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x663C74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B1DC);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00530382u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00530382: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00530394u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530391u); } /* indirect call */
    }

loc_00530394: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00530350; /* jl: less (signed <) */

loc_0053039F: ;
    edx = MEM32(esi * 4 + 0x663174);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64B1CC);
    eax = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005303B8u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005303B8: ;
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + esi * 4);
    goto loc_005303DD;

loc_005303BF: ;
    ecx = MEM32(esi * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64B21C);
    edx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005303D8u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005303D8: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);

loc_005303DD: ;
    edx = MEM32(ecx);
    eax = esp + 0x30;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005303EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005303E7u); } /* indirect call */
    }

loc_005303EA: ;
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005303F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005303F1u); } /* indirect call */
    }

loc_005303F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00530412; /* jne: not equal / not zero */

loc_005303F8: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530407; /* je: equal / zero */

loc_00530401: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00530407u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530405u); } /* indirect call */
    }

loc_00530407: ;
    eax = MEM32(ebx);
    MEM32(eax + esi * 4) = 0;
    goto loc_00530423;

loc_00530412: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + esi * 4);
    PUSH32(esp, 0x00530423u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00530423: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x1278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1278;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x49E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x49E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00530300; /* jl: less (signed <) */

loc_0053044D: ;
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x52FDE0);
    PUSH32(esp, 0x64B1BC);
    PUSH32(esp, 0x00530465u); RECOMP_ABI_CALL(0x006138B0u, sub_006138B0); /* call 0x006138B0 */

loc_00530465: ;
    PUSH32(esp, 0x16E);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00530476u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00530476: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530488; /* je: equal / zero */

loc_0053047F: ;
    ecx = eax;
    PUSH32(esp, 0x00530486u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00530486: ;
    goto loc_0053048A;

loc_00530488: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053048A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0xBC)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xBC), LO16(ebp) (16-bit) */
    MEM32(edi + 0xAC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_005304BD; /* jbe: below or equal (unsigned <=) */

loc_0053049B: ;
    goto loc_005304A0;

    /* nop */

loc_005304A0: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xAC);
    PUSH32(esp, 0x005304B1u); RECOMP_ABI_CALL(0x0052F710u, sub_0052F710); /* call 0x0052F710 */

loc_005304B1: ;
    edx = ZX16(MEM16(edi + 0xBC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005304A0; /* jl: less (signed <) */

loc_005304BD: ;
    eax = ZX16(MEM16(edi + 0xBC));
    ecx = MEM32(edi + 0x9C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005304D9; /* jle: less or equal (signed <=) */

loc_005304CF: ;
    MEM32(edi + 0x9C) = 1;

loc_005304D9: ;
    _fa = (uint32_t)(MEM32(edi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x9C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005304F8; /* jne: not equal / not zero */

loc_005304E2: ;
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA0), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005304F8; /* jne: not equal / not zero */

loc_005304EA: ;
    _fa = (uint32_t)(MEM32(edi + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005304F8; /* jne: not equal / not zero */

loc_005304F2: ;
    MEM32(edi + 0x9C) = ebp;

loc_005304F8: ;
    eax = MEM32(edi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053051B; /* jge: greater or equal (signed >=) */

loc_00530502: ;
    edx = MEM32(edi + 0xC0);
    ecx = eax * 4 + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    MEM32(edi + 0x98) = eax;
    goto loc_00530544;

loc_0053051B: ;
    if (CMP_NE(_fa, _fb)) goto loc_0053052B; /* jne: not equal / not zero */

loc_0053051D: ;
    ecx = MEM32(edi + 0xAC);
    MEM32(edi + 0x98) = ecx;
    goto loc_00530544;

loc_0053052B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00530538; /* jne: not equal / not zero */

loc_00530530: ;
    edx = MEM32(edi + 0xA0);
    goto loc_0053053E;

loc_00530538: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + eax * 4 + -8);

loc_0053053E: ;
    MEM32(edi + 0x98) = edx;

loc_00530544: ;
    eax = MEM32(edi + 0x98);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x64B180);
    PUSH32(esp, 0x38);
    MEM32(edi + 0x94) = eax;
    PUSH32(esp, 0x00530561u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00530561: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530571; /* je: equal / zero */

loc_00530568: ;
    ecx = eax;
    PUSH32(esp, 0x0053056Fu); RECOMP_ABI_CALL(0x005D5C30u, sub_005D5C30); /* call 0x005D5C30 */

loc_0053056F: ;
    goto loc_00530573;

loc_00530571: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00530573: ;
    ecx = MEM32(edi + 0xD4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(edi + 0x74) = eax;
    PUSH32(esp, 0x00530584u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_00530584: ;
    _fa = (uint32_t)(MEM32(edi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x90), 0xFFFFFFFFu (32-bit) */
    edx = MEM32(edi + 0x74);
    MEM32(edi + 0x78) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005305EA; /* je: equal / zero */

loc_00530593: ;
    ecx = MEM32(edi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005305E4; /* je: equal / zero */

loc_0053059D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005305A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053059Fu); } /* indirect call */
    }

loc_005305A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005305E4; /* jle: less or equal (signed <=) */

loc_005305A7: ;
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = ecx;
    ecx = MEM32(edi + 0x94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005305CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005305C7u); } /* indirect call */
    }

loc_005305CA: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(0x679682));
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(edi + 0x90) = edx;
    goto loc_005305EA;

loc_005305E4: ;
    MEM32(edi + 0x90) = ebp;

loc_005305EA: ;
    MEM32(edi + 0x94) = ebp;
    edi = MEM32(edi + 0xD8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530601; /* je: equal / zero */

loc_005305FA: ;
    ecx = edi;
    PUSH32(esp, 0x00530601u); RECOMP_ABI_CALL(0x005347A0u, sub_005347A0); /* call 0x005347A0 */

loc_00530601: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00530610
 * Original: 0x00530610 - 0x005306B8 (168 bytes, 52 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00530610(void)
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

loc_00530610: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530683; /* jnp: not parity */

loc_00530657: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530683; /* jnp: not parity */

loc_00530668: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053068C; /* jne: not equal / not zero */

loc_00530681: ;
    fp_pop(); /* fstp st(0) */

loc_00530683: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00530689: ;
    esp += 20; return; /* ret 16 */

loc_0053068C: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00530689; /* jne: not equal / not zero */

loc_005306AD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005306C0
 * Original: 0x005306C0 - 0x005306ED (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005306C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005306C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005306CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005306C9u); } /* indirect call */
    }

loc_005306CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x9C) = eax;
    esi = MEM32(esi + 0x8C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005306EB; /* je: equal / zero */

loc_005306E4: ;
    MEM32(esi + 0x14) = 1;

loc_005306EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005306F0
 * Original: 0x005306F0 - 0x00530770 (128 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005306F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005306F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x63F680);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00530705u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_00530705: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00530763; /* jne: not equal / not zero */

loc_0053070C: ;
    PUSH32(esp, 0x164);
    PUSH32(esp, 0x64B228);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0053071Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053071D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053072D; /* je: equal / zero */

loc_00530724: ;
    ecx = eax;
    PUSH32(esp, 0x0053072Bu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0053072B: ;
    goto loc_0053072F;

loc_0053072D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053072F: ;
    MEM32(esi + 0x8C) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00530740u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053073Du); } /* indirect call */
    }

loc_00530740: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053076B; /* jne: not equal / not zero */

loc_00530744: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530754; /* je: equal / zero */

loc_0053074E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00530754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530752u); } /* indirect call */
    }

loc_00530754: ;
    POP32(esp, edi);
    MEM32(esi + 0x8C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00530763: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053076Bu); RECOMP_ABI_CALL(0x0052D3F0u, sub_0052D3F0); /* call 0x0052D3F0 */

loc_0053076B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00530770
 * Original: 0x00530770 - 0x00530778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530770: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005D5800(); return; /* tail jmp 0x005D5800 */

}

/**
 * sub_00530780
 * Original: 0x00530780 - 0x005307E1 (97 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005307C6; /* jle: less or equal (signed <=) */

loc_00530792: ;
    PUSH32(esp, esi);

loc_00530793: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + ebx * 4);
    PUSH32(esp, 7);
    PUSH32(esp, 0x63F68C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005307A6u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_005307A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005307BD; /* jne: not equal / not zero */

loc_005307AD: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x005307BDu); RECOMP_ABI_CALL(0x005D4A70u, sub_005D4A70); /* call 0x005D4A70 */

loc_005307BD: ;
    eax = MEM32(edi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00530793; /* jl: less (signed <) */

loc_005307C5: ;
    POP32(esp, esi);

loc_005307C6: ;
    ecx = MEM32(edi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005307DB; /* je: equal / zero */

loc_005307D0: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005307DBu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_005307DB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005307F0
 * Original: 0x005307F0 - 0x00530A45 (597 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005307F0(void)
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

loc_005307F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x6CE314);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00530A40; /* je: equal / zero */

loc_00530806: ;
    edx = MEM32(ecx + 0x6C);
    fp_push(MEMF(edx)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6CE350)); /* fsub dword ptr [0x6ce350] */
    PUSH32(esp, ebp);
    fp_push(MEMF(edx + 4)); /* fld float */
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6CE354)); /* fsub dword ptr [0x6ce354] */
    fp_push(MEMF(edx + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6CE358)); /* fsub dword ptr [0x6ce358] */
    ebp = 0x6CE320;
    edi = 1;
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
    if (CMP_L(_fas, _fbs)) goto loc_0053097B; /* jl: less (signed <) */

loc_00530852: ;
    ebx = 4;
    ecx = 0x6CE3D4;

loc_0053085C: ;
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
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00530898; /* jp: parity */

loc_0053088F: ;
    fp_pop(); /* fstp st(0) */
    ebp = ecx + -56;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00530898: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x7C)); /* fsub dword ptr [ecx + 0x7c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005308D5; /* jp: parity */

loc_005308CC: ;
    fp_pop(); /* fstp st(0) */
    ebp = ecx + 0x44;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_005308D5: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xF0)); /* fsub dword ptr [ecx + 0xf0] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xF4)); /* fsub dword ptr [ecx + 0xf4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xF8)); /* fsub dword ptr [ecx + 0xf8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053091E; /* jp: parity */

loc_00530912: ;
    fp_pop(); /* fstp st(0) */
    ebp = ecx + 0xC0;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0053091E: ;
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x16C)); /* fsub dword ptr [ecx + 0x16c] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x170)); /* fsub dword ptr [ecx + 0x170] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x174)); /* fsub dword ptr [ecx + 0x174] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00530967; /* jp: parity */

loc_0053095B: ;
    fp_pop(); /* fstp st(0) */
    ebp = ecx + 0x13C;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00530967: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0053085C; /* jl: less (signed <) */

loc_0053097B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005309D2; /* jge: greater or equal (signed >=) */

loc_0053097F: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x7C);
    _fb = (uint32_t)(0x6CE358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CE358;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00530990: ;
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
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005309CC; /* jp: parity */

loc_005309C3: ;
    fp_pop(); /* fstp st(0) */
    ebp = ecx + -56;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_005309CC: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00530990; /* jne: not equal / not zero */

loc_005309D2: ;
    ecx = MEM32(esp + 0x14);
    fp_pop(); /* fstp st(0) */
    eax = ZX16(MEM16(ecx + 0x70));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00530A20; /* jle: less or equal (signed <=) */

loc_005309E8: ;
    edi = ebp + 0x30;
    esi = eax;
    /* nop */

loc_005309F0: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(edx + 0xC);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00530A05u); RECOMP_ABI_CALL(0x00530610u, sub_00530610); /* call 0x00530610 */

loc_00530A05: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00530A16; /* jne: not equal / not zero */

loc_00530A10: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00530A18;

loc_00530A16: ;
    fp_pop(); /* fstp st(0) */

loc_00530A18: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005309F0; /* jne: not equal / not zero */

loc_00530A1E: ;
    goto loc_00530A24;

loc_00530A20: ;
    ebx = MEM32(esp + 0x14);

loc_00530A24: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530A3D; /* jnp: not parity */

loc_00530A32: ;
    edx = MEM32(esp + 0x10);
    MEM8(ebx + 0x14) = MEM8(ebx + 0x14) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x5C) = edx;

loc_00530A3D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00530A40: ;
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
 * sub_00530A50
 * Original: 0x00530A50 - 0x00530ACE (126 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530A50(void)
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

loc_00530A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530A72; /* je: equal / zero */

loc_00530A5A: ;
    eax = esi + 0x38;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;

loc_00530A70: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530A72: ;
    ecx = esi;
    PUSH32(esp, 0x00530A79u); RECOMP_ABI_CALL(0x005307F0u, sub_005307F0); /* call 0x005307F0 */

loc_00530A79: ;
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x14), 0 (16-bit) */
    ecx = esi + 0x38;
    eax = MEM32(ecx);
    edx = esi + 0x44;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00530AC6; /* je: equal / zero */

loc_00530A96: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530AC6; /* je: equal / zero */

loc_00530A9D: ;
    ecx = esi;
    PUSH32(esp, 0x00530AA4u); RECOMP_ABI_CALL(0x005D5860u, sub_005D5860); /* call 0x005D5860 */

loc_00530AA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530AC0; /* je: equal / zero */

loc_00530AA8: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530A70; /* jnp: not parity */

loc_00530AB8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D5460(); return; /* tail jmp 0x005D5460 */

loc_00530AC0: ;
    MEM8(esi + 0x64) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530AC6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D58A0(); return; /* tail jmp 0x005D58A0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530AD0
 * Original: 0x00530AD0 - 0x00530B2B (91 bytes, 30 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00530AD0(void)
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

loc_00530AD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(ecx + 0x6C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    MEM32(edx + 4) = edi;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    edx = MEM32(ecx + 0x6C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(edx + eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(edx + eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(edx + eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(ecx + eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530B30
 * Original: 0x00530B30 - 0x00530B6E (62 bytes, 17 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00530B30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00530B30: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(ecx + 0x6C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEMF(eax + edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax + edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x6C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530B70
 * Original: 0x00530B70 - 0x00530CCD (349 bytes, 128 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530B70(void)
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

loc_00530B70: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    ebx = ecx;
    PUSH32(esp, 0x644EB8);
    ecx = edi;
    PUSH32(esp, 0x00530B89u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530B89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00530B9F; /* je: equal / zero */

loc_00530B8D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00530B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530B91u); } /* indirect call */
    }

loc_00530B94: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00530B9Fu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_00530B9F: ;
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(ebx + 0x70));
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00530C7F; /* jle: less or equal (signed <=) */

loc_00530BAF: ;
    /* nop */

loc_00530BB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00530BCA; /* jne: not equal / not zero */

loc_00530BB4: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, 0x64B270);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00530BC5u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00530BC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00530BE2;

loc_00530BCA: ;
    edx = esi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64B264);
    eax = esp + 0x1C;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00530BDFu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00530BDF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00530BE2: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00530BF0u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530BF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00530C01; /* je: equal / zero */

loc_00530BF4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00530BFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530BF8u); } /* indirect call */
    }

loc_00530BFB: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00530C0A;

loc_00530C01: ;
    eax = MEM32(0x6743F8);
    MEM32(esp + 0x10) = eax;

loc_00530C0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00530C24; /* jne: not equal / not zero */

loc_00530C0E: ;
    PUSH32(esp, 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, 0x64B258);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00530C1Fu); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_00530C1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00530C3C;

loc_00530C24: ;
    edx = esi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64B24C);
    eax = esp + 0x1C;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00530C39u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00530C39: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00530C3C: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00530C4Au); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530C4A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00530C5B; /* je: equal / zero */

loc_00530C4E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00530C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530C52u); } /* indirect call */
    }

loc_00530C55: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00530C64;

loc_00530C5B: ;
    eax = MEM32(0x6743F4);
    MEM32(esp + 0x38) = eax;

loc_00530C64: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00530C76u); RECOMP_ABI_CALL(0x00530B30u, sub_00530B30); /* call 0x00530B30 */

loc_00530C76: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00530BB0; /* jl: less (signed <) */

loc_00530C7F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B240);
    ecx = edi;
    PUSH32(esp, 0x00530C8Du); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530C8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00530C9D; /* je: equal / zero */

loc_00530C93: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00530C9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530C97u); } /* indirect call */
    }

loc_00530C9A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x68) = MEM32(ebx + 0x68) | eax;
    _fa = (uint32_t)(MEM32(ebx + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00530C9D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B238);
    ecx = edi;
    PUSH32(esp, 0x00530CABu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530CAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00530CC5; /* je: equal / zero */

loc_00530CAF: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00530CB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530CB3u); } /* indirect call */
    }

loc_00530CB6: ;
    ecx = MEM32(ebx + 0x68);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x68) = ecx;

loc_00530CC5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530CD0
 * Original: 0x00530CD0 - 0x00530D5A (138 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530CD0(void)
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

loc_00530CD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x90);
    SET_LO8(eax, MEM8(esi + 0x7C));
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x90) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00530CF4; /* jne: not equal / not zero */

loc_00530CEB: ;
    eax = MEM32(esi + 0x18);
    ecx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00530CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530CF1u); } /* indirect call */
    }

loc_00530CF4: ;
    edi = esi + 0x18;
    ecx = edi;
    PUSH32(esp, 0x00530CFEu); RECOMP_ABI_CALL(0x005307F0u, sub_005307F0); /* call 0x005307F0 */

loc_00530CFE: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00530D05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530D02u); } /* indirect call */
    }

loc_00530D05: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530D56; /* jnp: not parity */

loc_00530D12: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530D37; /* je: equal / zero */

loc_00530D1C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    eax = MEM32(0x6CE2E4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x00530D33u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00530D33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00530D37: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00530D43u); RECOMP_ABI_CALL(0x0052DA40u, sub_0052DA40); /* call 0x0052DA40 */

loc_00530D43: ;
    eax = MEM32(esp + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00530D4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530D4Cu); } /* indirect call */
    }

loc_00530D4F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00530D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530D53u); } /* indirect call */
    }

loc_00530D56: ;
    POP32(esp, edi);
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
 * sub_00530D60
 * Original: 0x00530D60 - 0x00530E44 (228 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530D60(void)
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

loc_00530D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00530D9E; /* je: equal / zero */

loc_00530D6E: ;
    ecx = esi;
    PUSH32(esp, 0x00530D75u); RECOMP_ABI_CALL(0x00530CD0u, sub_00530CD0); /* call 0x00530CD0 */

loc_00530D75: ;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530D95; /* je: equal / zero */

loc_00530D7C: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00530E42; /* jne: not equal / not zero */

loc_00530D8A: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530D95: ;
    MEM32(esi + 0x90) = MEM32(esi + 0x90) ^ 3;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530D9E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00530DCC; /* je: equal / zero */

loc_00530DA3: ;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530E42; /* je: equal / zero */

loc_00530DAE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00530DBE; /* jne: not equal / not zero */

loc_00530DB3: ;
    ecx = ecx ^ 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530DBE: ;
    ecx = ecx ^ 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x90) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530DCC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00530DDD; /* je: equal / zero */

loc_00530DD1: ;
    MEM32(esi + 0x90) = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530DDD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00530E38; /* jne: not equal / not zero */

loc_00530DE2: ;
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00530E24; /* jp: parity */

loc_00530DF5: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x90) = ecx;
    ecx = 0x679680;
    PUSH32(esp, 0x00530E08u); RECOMP_ABI_CALL(0x0043B4E0u, sub_0043B4E0); /* call 0x0043B4E0 */

loc_00530E08: ;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x94)); /* fsub dword ptr [esi + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x94)); /* fadd dword ptr [esi + 0x94] */
    MEMF(esi + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530E24: ;
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(esi + 0x9C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00530E38: ;
    MEM32(esi + 0x9C) = 0;

loc_00530E42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530E50
 * Original: 0x00530E50 - 0x00530ED4 (132 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530E50(void)
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

loc_00530E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x00530E5Eu); RECOMP_ABI_CALL(0x0052D6C0u, sub_0052D6C0); /* call 0x0052D6C0 */

loc_00530E5E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B2A4);
    ecx = esi;
    PUSH32(esp, 0x00530E6Cu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530E6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530E88; /* je: equal / zero */

loc_00530E70: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00530E77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530E74u); } /* indirect call */
    }

loc_00530E77: ;
    ecx = MEM32(edi + 0x90);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x90) = ecx;

loc_00530E88: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B290);
    ecx = esi;
    PUSH32(esp, 0x00530E96u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530E96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530EA7; /* je: equal / zero */

loc_00530E9A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00530EA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530E9Eu); } /* indirect call */
    }

loc_00530EA1: ;
    MEMF(edi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_00530EA7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64B27C);
    ecx = esi;
    PUSH32(esp, 0x00530EB5u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_00530EB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530EC6; /* je: equal / zero */

loc_00530EB9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00530EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530EBDu); } /* indirect call */
    }

loc_00530EC0: ;
    MEMF(edi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */

loc_00530EC6: ;
    PUSH32(esp, esi);
    ecx = edi + 0x18;
    PUSH32(esp, 0x00530ECFu); RECOMP_ABI_CALL(0x00530B70u, sub_00530B70); /* call 0x00530B70 */

loc_00530ECF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530EE0
 * Original: 0x00530EE0 - 0x00530EFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00530EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00530EE8u); RECOMP_ABI_CALL(0x005D6580u, sub_005D6580); /* call 0x005D6580 */

loc_00530EE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x64B2AC;
    MEM32(esi + 0x6C) = eax;
    MEM16(esi + 0x70) = LO16(eax);
    MEM16(esi + 0x72) = LO16(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00530F00
 * Original: 0x00530F00 - 0x00530F3A (58 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530F00(void)
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

loc_00530F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00530F0E; /* je: equal / zero */

loc_00530F09: ;
    PUSH32(esp, 0x00530F0Eu); RECOMP_ABI_CALL(0x005307F0u, sub_005307F0); /* call 0x005307F0 */

loc_00530F0E: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    ecx = esi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00530F2A; /* jnp: not parity */

loc_00530F20: ;
    MEM8(esi + 0x64) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D5460(); return; /* tail jmp 0x005D5460 */

loc_00530F2A: ;
    PUSH32(esp, 0x00530F2Fu); RECOMP_ABI_CALL(0x005D5860u, sub_005D5860); /* call 0x005D5860 */

loc_00530F2F: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x64) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00530F40
 * Original: 0x00530F40 - 0x00530F7A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00530F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00530F48u); RECOMP_ABI_CALL(0x0052DA00u, sub_0052DA00); /* call 0x0052DA00 */

loc_00530F48: ;
    ecx = esi + 0x18;
    MEM32(esi) = 0x64B2E4;
    PUSH32(esp, 0x00530F56u); RECOMP_ABI_CALL(0x00530EE0u, sub_00530EE0); /* call 0x00530EE0 */

loc_00530F56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x8C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00530F80
 * Original: 0x00530F80 - 0x00530FBC (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x64B2E4;
    if (CMP_EQ(_fa, _fb)) goto loc_00530F9A; /* je: equal / zero */

loc_00530F94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00530F9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00530F98u); } /* indirect call */
    }

loc_00530F9A: ;
    ecx = MEM32(esi + 0x84);
    edi = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00530FA9u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00530FA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x00530FB3u); RECOMP_ABI_CALL(0x005D5CC0u, sub_005D5CC0); /* call 0x005D5CC0 */

loc_00530FB3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0052D620(); return; /* tail jmp 0x0052D620 */

}

/**
 * sub_00530FC0
 * Original: 0x00530FC0 - 0x00530FEC (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00530FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00530FCCu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00530FCC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00530FD6u); RECOMP_ABI_CALL(0x005D5CC0u, sub_005D5CC0); /* call 0x005D5CC0 */

loc_00530FD6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00530FE6; /* je: equal / zero */

loc_00530FDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00530FE3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00530FE3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00530FE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00530FF0
 * Original: 0x00530FF0 - 0x00530FFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00530FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00530FF0: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00530FFC; /* je: equal / zero */

loc_00530FF7: ;
    g_seh_ebp = ebp; sub_005306C0(); return; /* tail jmp 0x005306C0 */

loc_00530FFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00531000
 * Original: 0x00531000 - 0x0053100D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531000: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053100C; /* je: equal / zero */

loc_00531007: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

loc_0053100C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00531010
 * Original: 0x00531010 - 0x00531081 (113 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(edi + 4));
    esi = ecx;
    MEM16(esi + 4) = LO16(eax);
    MEM16(esi + 6) = LO16(eax);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x101);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053103Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053103A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(ecx) (16-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0053107C; /* jbe: below or equal (unsigned <=) */

loc_00531047: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    goto loc_00531050;

    /* nop */

loc_00531050: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = edx;
    edx = ZX16(MEM16(esi + 4));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00531050; /* jl: less (signed <) */

loc_0053107A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0053107C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531090
 * Original: 0x00531090 - 0x005310BA (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531090: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005310B7; /* jbe: below or equal (unsigned <=) */

loc_0053109C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005310A0: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005310AAu); RECOMP_ABI_CALL(0x00530FF0u, sub_00530FF0); /* call 0x00530FF0 */

loc_005310AA: ;
    eax = ZX16(MEM16(esi + 8));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005310A0; /* jl: less (signed <) */

loc_005310B6: ;
    POP32(esp, ebx);

loc_005310B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005310C0
 * Original: 0x005310C0 - 0x005310EA (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005310C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005310C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005310E7; /* jbe: below or equal (unsigned <=) */

loc_005310CC: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005310D0: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005310DAu); RECOMP_ABI_CALL(0x00531000u, sub_00531000); /* call 0x00531000 */

loc_005310DA: ;
    eax = ZX16(MEM16(esi + 8));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005310D0; /* jl: less (signed <) */

loc_005310E6: ;
    POP32(esp, ebx);

loc_005310E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005310F0
 * Original: 0x005310F0 - 0x0053118C (156 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005310F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005310F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0053112D; /* jle: less or equal (signed <=) */

loc_00531100: ;
    PUSH32(esp, 0x77);
    eax = ebx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00531112u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531112: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053112B; /* je: equal / zero */

loc_0053111B: ;
    PUSH32(esp, 0x4016E0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00531129u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_00531129: ;
    goto loc_0053112D;

loc_0053112B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053112D: ;
    ecx = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00531137; /* jge: greater or equal (signed >=) */

loc_00531135: ;
    ecx = ebx;

loc_00531137: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0053116E; /* jle: less or equal (signed <=) */

loc_0053113F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_00531142: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edx);
    ebx = eax + edi;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xC) = edx;
    if ((_fa != 0)) goto loc_00531142; /* jne: not equal / not zero */

loc_00531165: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_0053116E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    MEM16(esi + 6) = LO16(ebx);
    MEM16(esi + 4) = LO16(ecx);
    PUSH32(esp, 0x0053117Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053117E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531190
 * Original: 0x00531190 - 0x005311AF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531190: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64B2F4;
    MEM32(eax + 0xC) = ecx;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005311B0
 * Original: 0x005311B0 - 0x00531237 (135 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005311B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005311B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64B2F4;
    PUSH32(esp, 0x005311C2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005311C2: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005311CBu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005311CB: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531216; /* je: equal / zero */

loc_005311D5: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00531215; /* jle: less or equal (signed <=) */

loc_005311DF: ;
    PUSH32(esp, edi);

loc_005311E0: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    edi = MEM32(eax + ebx * 4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x63F384);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005311F6u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_005311F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531209; /* jne: not equal / not zero */

loc_005311FD: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00531209u); RECOMP_ABI_CALL(0x0052B640u, sub_0052B640); /* call 0x0052B640 */

loc_00531209: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005311E0; /* jl: less (signed <) */

loc_00531214: ;
    POP32(esp, edi);

loc_00531215: ;
    POP32(esp, ebx);

loc_00531216: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531223; /* je: equal / zero */

loc_0053121D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531221u); } /* indirect call */
    }

loc_00531223: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053122Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053122C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00531240
 * Original: 0x00531240 - 0x00531256 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531240: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64B2F8;
    MEM32(eax + 4) = ecx;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00531260
 * Original: 0x00531260 - 0x00531299 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531260: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64B2F8;
    if (CMP_EQ(_fa, _fb)) goto loc_00531291; /* je: equal / zero */

loc_00531270: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00531288; /* je: equal / zero */

loc_0053127A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053127Eu); } /* indirect call */
    }

loc_00531280: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

loc_00531288: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053128Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0053128E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00531291: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_005312A0
 * Original: 0x005312A0 - 0x00531301 (97 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005312A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005312A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_005312E5; /* je: equal / zero */

loc_005312AD: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_005312CF; /* js: sign (negative) */

loc_005312BD: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_005312C1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x005312CBu); RECOMP_ABI_CALL(0x005311B0u, sub_005311B0); /* call 0x005311B0 */

loc_005312CB: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005312C1; /* jne: not equal / not zero */

loc_005312CE: ;
    POP32(esp, edi);

loc_005312CF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005312DD; /* je: equal / zero */

loc_005312D4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005312DAu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005312DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005312DD: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005312E5: ;
    ecx = esi;
    PUSH32(esp, 0x005312ECu); RECOMP_ABI_CALL(0x005311B0u, sub_005311B0); /* call 0x005311B0 */

loc_005312EC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005312FA; /* je: equal / zero */

loc_005312F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005312F7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005312F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005312FA: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531310
 * Original: 0x00531310 - 0x00531557 (583 bytes, 200 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531310: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    esi = ecx;
    PUSH32(esp, 0x64B328);
    ecx = edi;
    PUSH32(esp, 0x0053132Du); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053132D: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0053133Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053133Bu); } /* indirect call */
    }

loc_0053133E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053154C; /* je: equal / zero */

loc_00531346: ;
    PUSH32(esp, 0x5B);
    edx = esp + 0x18;
    PUSH32(esp, 0x64B318);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531357u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_00531357: ;
    MEM32(esi + 4) = eax;
    eax = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_00531364: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531364; /* jne: not equal / not zero */

loc_0053136B: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    ecx = eax;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_00531380: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531380; /* jne: not equal / not zero */

loc_00531387: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x5C);
    eax = eax + ecx + 2;
    PUSH32(esp, 0x64B318);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053139Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053139A: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64B310);
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x005313AEu); RECOMP_ABI_CALL(0x0061985Du, sub_0061985D); /* call 0x0061985D */

loc_005313AE: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x63E350);
    ecx = edi;
    PUSH32(esp, 0x005313BDu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005313BD: ;
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64B304);
    ecx = edi;
    PUSH32(esp, 0x005313CFu); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_005313CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005313DC; /* je: equal / zero */

loc_005313D3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005313DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005313D7u); } /* indirect call */
    }

loc_005313DA: ;
    ebx = eax;

loc_005313DC: ;
    eax = ZX16(MEM16(esi + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ebp = esi + 0xC;
    if (CMP_LE(_fas, _fbs)) goto loc_005313EF; /* jle: less or equal (signed <=) */

loc_005313E7: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x005313EFu); RECOMP_ABI_CALL(0x005310F0u, sub_005310F0); /* call 0x005310F0 */

loc_005313EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM16(ebp + 4) = LO16(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0053141F; /* jle: less or equal (signed <=) */

loc_005313F7: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00531400: ;
    PUSH32(esp, 0x64B2FC);
    ecx = edi;
    PUSH32(esp, 0x0053140Cu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053140C: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00531419u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531416u); } /* indirect call */
    }

loc_00531419: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00531400; /* jne: not equal / not zero */

loc_0053141F: ;
    PUSH32(esp, 0x63E344);
    ecx = edi;
    PUSH32(esp, 0x0053142Bu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0053142B: ;
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x64B318);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x0053143Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0053143C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053144C; /* je: equal / zero */

loc_00531443: ;
    ecx = eax;
    PUSH32(esp, 0x0053144Au); RECOMP_ABI_CALL(0x00530F40u, sub_00530F40); /* call 0x00530F40 */

loc_0053144A: ;
    goto loc_0053144E;

loc_0053144C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053144E: ;
    edi = ZX16(MEM16(esi + 0x10));
    ebx = eax + 0x84;
    MEM32(esi + 0x14) = eax;
    ecx = ZX16(MEM16(ebx + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053146B; /* jle: less or equal (signed <=) */

loc_00531463: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0053146Bu); RECOMP_ABI_CALL(0x00488830u, sub_00488830); /* call 0x00488830 */

loc_0053146B: ;
    MEM16(ebx + 4) = LO16(edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005314C1; /* jbe: below or equal (unsigned <=) */

loc_00531477: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00531480: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x41300000);
    PUSH32(esp, 0x41200000);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x005314B5u); RECOMP_ABI_CALL(0x00530AD0u, sub_00530AD0); /* call 0x00530AD0 */

loc_005314B5: ;
    ecx = ZX16(MEM16(esi + 0x10));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00531480; /* jl: less (signed <) */

loc_005314C1: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005314CFu); RECOMP_ABI_CALL(0x0052D950u, sub_0052D950); /* call 0x0052D950 */

loc_005314CF: ;
    eax = MEM32(0x6CE2E4);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x005314E0u); RECOMP_ABI_CALL(0x00530770u, sub_00530770); /* call 0x00530770 */

loc_005314E0: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531508; /* jne: not equal / not zero */

loc_005314EA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005314F4; /* je: equal / zero */

loc_005314EE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005314F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005314F2u); } /* indirect call */
    }

loc_005314F4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00531508: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053154A; /* je: equal / zero */

loc_0053150C: ;
    eax = MEM32(ecx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053154A; /* jle: less or equal (signed <=) */

loc_00531515: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 4);
    edi = MEM32(ecx + ebx * 4);
    PUSH32(esp, 9);
    PUSH32(esp, 0x63F384);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053152Bu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0053152B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053153F; /* jne: not equal / not zero */

loc_00531532: ;
    ecx = MEM32(0x6CE2E4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053153Fu); RECOMP_ABI_CALL(0x0052B550u, sub_0052B550); /* call 0x0052B550 */

loc_0053153F: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00531515; /* jl: less (signed <) */

loc_0053154A: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0053154C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00531560
 * Original: 0x00531560 - 0x0053157E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531560: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00531568u); RECOMP_ABI_CALL(0x00531260u, sub_00531260); /* call 0x00531260 */

loc_00531568: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00531578; /* je: equal / zero */

loc_0053156F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00531575u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00531575: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00531578: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531580
 * Original: 0x00531580 - 0x00531698 (280 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531580: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_005315D2; /* jle: less or equal (signed <=) */

loc_00531597: ;
    PUSH32(esp, 0x77);
    eax = esi + esi * 2;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005315AEu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005315AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005315CE; /* je: equal / zero */

loc_005315B5: ;
    PUSH32(esp, 0x531190);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x005315C8u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_005315C8: ;
    MEM32(esp + 0x10) = edi;
    goto loc_005315D2;

loc_005315CE: ;
    MEM32(esp + 0x10) = ebx;

loc_005315D2: ;
    eax = ZX16(MEM16(ebp + 4));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_005315E2; /* jl: less (signed <) */

loc_005315DE: ;
    MEM32(esp + 0x14) = eax;

loc_005315E2: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053164E; /* jle: less or equal (signed <=) */

loc_005315EA: ;
    edx = MEM32(esp + 0x10);
    eax = 0xFFFFFFF4u;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx + 0xC;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;

loc_00531600: ;
    edx = MEM32(ebp);
    edi = eax + esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 4);
    MEM32(esi + -8) = edx;
    ecx = MEM32(edi + 8);
    ebx = edi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esi + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00531632; /* je: equal / zero */

loc_0053161B: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531623u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00531623: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0053162Eu); RECOMP_ABI_CALL(0x00531010u, sub_00531010); /* call 0x00531010 */

loc_0053162E: ;
    eax = MEM32(esp + 0x1C);

loc_00531632: ;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    if ((_fa != 0)) goto loc_00531600; /* jne: not equal / not zero */

loc_00531646: ;
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x14);

loc_0053164E: ;
    MEM16(ebp + 4) = LO16(ecx);
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM16(ebp + 6) = LO16(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00531687; /* je: equal / zero */

loc_0053165D: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0053167E; /* je: equal / zero */

loc_00531667: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053166Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053166Bu); } /* indirect call */
    }

loc_0053166D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0053167E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00531684u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00531684: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00531687: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005316A0
 * Original: 0x005316A0 - 0x005316EE (78 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005316A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005316A0: ;
    eax = MEM32(0x6CE2E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005316EB; /* je: equal / zero */

loc_005316A9: ;
    eax = ZX16(MEM16(ecx + 8));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + 4;
    if (CMP_LE(_fas, _fbs)) goto loc_005316C2; /* jle: less or equal (signed <=) */

loc_005316BA: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x005316C2u); RECOMP_ABI_CALL(0x00531580u, sub_00531580); /* call 0x00531580 */

loc_005316C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM16(edi + 4) = LO16(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_005316E9; /* jle: less or equal (signed <=) */

loc_005316CA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005316D2: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005316E1u); RECOMP_ABI_CALL(0x00531310u, sub_00531310); /* call 0x00531310 */

loc_005316E1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005316D2; /* jne: not equal / not zero */

loc_005316E7: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_005316E9: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005316EB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005316F0
 * Original: 0x005316F0 - 0x00531707 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005316F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005316F0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531701; /* jne: not equal / not zero */

loc_005316F7: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531701; /* jne: not equal / not zero */

loc_005316FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00531701: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00531710
 * Original: 0x00531710 - 0x0053171A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531710(void)
{

loc_00531710: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531720
 * Original: 0x00531720 - 0x00531767 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531720: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053175E; /* je: equal / zero */

loc_0053172A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0053172Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053172Cu); } /* indirect call */
    }

loc_0053172F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x00531737u); RECOMP_ABI_CALL(0x005D5830u, sub_005D5830); /* call 0x005D5830 */

loc_00531737: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053175E; /* je: equal / zero */

loc_0053173B: ;
    goto loc_00531740;

    /* nop */

loc_00531740: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00531747u); RECOMP_ABI_CALL(0x00611C50u, sub_00611C50); /* call 0x00611C50 */

loc_00531747: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00531752u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053174Fu); } /* indirect call */
    }

loc_00531752: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0053175Au); RECOMP_ABI_CALL(0x005D5830u, sub_005D5830); /* call 0x005D5830 */

loc_0053175A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531740; /* jne: not equal / not zero */

loc_0053175E: ;
    MEM8(esi + 0x11C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00531770
 * Original: 0x00531770 - 0x00531778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531770(void)
{

loc_00531770: ;
    MEM8(ecx + 0x13B) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00531780
 * Original: 0x00531780 - 0x0053178A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531780(void)
{

loc_00531780: ;
    MEM8(ecx + 0x13C) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531790
 * Original: 0x00531790 - 0x00531795 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531790(void)
{

loc_00531790: ;
    MEM8(ecx + 0x24) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005317A0
 * Original: 0x005317A0 - 0x005317A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005317A0(void)
{

loc_005317A0: ;
    MEM8(ecx + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005317B0
 * Original: 0x005317B0 - 0x00531856 (166 bytes, 60 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005317B0(void)
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

loc_005317B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005317C1; /* jne: not equal / not zero */

loc_005317BA: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005317C7; /* je: equal / zero */

loc_005317C1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_005317C7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005317FA; /* je: equal / zero */

loc_005317D0: ;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005317FA; /* je: equal / zero */

loc_005317D7: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005317FA; /* jne: not equal / not zero */

loc_005317E1: ;
    SET_LO8(ebx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531801; /* jne: not equal / not zero */

loc_005317E9: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00531812; /* je: equal / zero */

loc_005317FA: ;
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00531801: ;
    fp_push(MEMF(esi + 0x118)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005317FA; /* jne: not equal / not zero */

loc_00531812: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00531825; /* jne: not equal / not zero */

loc_0053181D: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531823u); RECOMP_ABI_CALL(0x0052E520u, sub_0052E520); /* call 0x0052E520 */

loc_00531823: ;
    goto loc_0053182C;

loc_00531825: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0053182Cu); RECOMP_ABI_CALL(0x0052DF60u, sub_0052DF60); /* call 0x0052DF60 */

loc_0053182C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, 1);
    MEM8(esi + 0x11C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00531847; /* je: equal / zero */

loc_00531838: ;
    POP32(esp, ebx);
    MEM32(esi + 0x118) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00531847: ;
    POP32(esp, ebx);
    MEM32(esi + 0x114) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00531860
 * Original: 0x00531860 - 0x0053188B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00531860: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64BCFC;
    if (CMP_EQ(_fa, _fb)) goto loc_00531876; /* je: equal / zero */

loc_00531870: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531874u); } /* indirect call */
    }

loc_00531876: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531883; /* je: equal / zero */

loc_0053187D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531881u); } /* indirect call */
    }

loc_00531883: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00531890
 * Original: 0x00531890 - 0x005318A7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00531890: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64BCFC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005318B0
 * Original: 0x005318B0 - 0x005319A9 (249 bytes, 85 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005318B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005318B0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 0x11C));
    PUSH32(esp, 0x6A5);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    MEM8(esi + 0xC) = LO8(eax);
    MEM8(esi + 0xD) = LO8(ecx);
    PUSH32(esp, 0x005318DDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005318DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005318ED; /* je: equal / zero */

loc_005318E4: ;
    ecx = eax;
    PUSH32(esp, 0x005318EBu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_005318EB: ;
    goto loc_005318EF;

loc_005318ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005318EF: ;
    edi = MEM32(esp + 0x110);
    MEM32(esi + 4) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005318FEu); } /* indirect call */
    }

loc_00531901: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x114);
    ecx = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00531922; /* jne: not equal / not zero */

loc_0053190F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531919; /* je: equal / zero */

loc_00531913: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531917u); } /* indirect call */
    }

loc_00531919: ;
    MEM32(esi + 4) = 0;
    goto loc_0053192A;

loc_00531922: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0053192Au); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053192A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD00);
    ecx = esp + 0x14;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053193Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053193F: ;
    PUSH32(esp, 0x6AF);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00531950u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531950: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531960; /* je: equal / zero */

loc_00531957: ;
    ecx = eax;
    PUSH32(esp, 0x0053195Eu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_0053195E: ;
    goto loc_00531962;

loc_00531960: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531962: ;
    ecx = esp + 0xC;
    MEM32(esi + 8) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053196Eu); } /* indirect call */
    }

loc_00531971: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00531995; /* jne: not equal / not zero */

loc_00531978: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531982; /* je: equal / zero */

loc_0053197C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531980u); } /* indirect call */
    }

loc_00531982: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00531995: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0053199Du); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053199D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005319B0
 * Original: 0x005319B0 - 0x005319CC (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005319B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005319B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005319C6; /* je: equal / zero */

loc_005319B8: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005319C9; /* jne: not equal / not zero */

loc_005319BF: ;
    SET_LO8(edx, MEM8(ecx + 0xD));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005319C9; /* jne: not equal / not zero */

loc_005319C6: ;
    eax = MEM32(ecx + 4);

loc_005319C9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005319D0
 * Original: 0x005319D0 - 0x00531A07 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005319D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005319D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_005319ED; /* je: equal / zero */

loc_005319DF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005319E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005319E1u); } /* indirect call */
    }

loc_005319E4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x14) = eax;

loc_005319ED: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531A02; /* je: equal / zero */

loc_005319F4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005319F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005319F6u); } /* indirect call */
    }

loc_005319F9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = MEM32(esi + 8);
    MEM32(ecx + 0x14) = eax;

loc_00531A02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00531A10
 * Original: 0x00531A10 - 0x005325C7 (2999 bytes, 962 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00531A10(void)
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

loc_00531A10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00531A32; /* je: equal / zero */

loc_00531A2C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531A30u); } /* indirect call */
    }

loc_00531A32: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00531A42; /* je: equal / zero */

loc_00531A3C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531A40u); } /* indirect call */
    }

loc_00531A42: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00531A52; /* je: equal / zero */

loc_00531A4C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531A52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531A50u); } /* indirect call */
    }

loc_00531A52: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00531A62; /* je: equal / zero */

loc_00531A5C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531A62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531A60u); } /* indirect call */
    }

loc_00531A62: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00531A72; /* je: equal / zero */

loc_00531A6C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00531A72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531A70u); } /* indirect call */
    }

loc_00531A72: ;
    MEM32(ebp + 0x18) = esi;
    _fa = (uint32_t)(MEM32(0x6C2C60)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C2C60), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531A8B; /* jne: not equal / not zero */

loc_00531A7E: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531A8B; /* jne: not equal / not zero */

loc_00531A87: ;
    SET_LO8(ebx, 1);
    goto loc_00531A8D;

loc_00531A8B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00531A8D: ;
    PUSH32(esp, 0xE4);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x00531A9Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531A9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531AAE; /* je: equal / zero */

loc_00531AA5: ;
    ecx = eax;
    PUSH32(esp, 0x00531AACu); RECOMP_ABI_CALL(0x005D5C30u, sub_005D5C30); /* call 0x005D5C30 */

loc_00531AAC: ;
    goto loc_00531AB0;

loc_00531AAE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531AB0: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(ebp + 4) = eax;
    PUSH32(esp, 0x00531ABEu); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_00531ABE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532396; /* je: equal / zero */

loc_00531AC6: ;
    PUSH32(esp, 0xE9);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00531AD7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531AD7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531AE7; /* je: equal / zero */

loc_00531ADE: ;
    ecx = eax;
    PUSH32(esp, 0x00531AE5u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531AE5: ;
    goto loc_00531AE9;

loc_00531AE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531AE9: ;
    PUSH32(esp, 0xEA);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x00531AFDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531AFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531B0D; /* je: equal / zero */

loc_00531B04: ;
    ecx = eax;
    PUSH32(esp, 0x00531B0Bu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531B0B: ;
    goto loc_00531B0F;

loc_00531B0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531B0F: ;
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0x00531B23u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531B23: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531B33; /* je: equal / zero */

loc_00531B2A: ;
    ecx = eax;
    PUSH32(esp, 0x00531B31u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531B31: ;
    goto loc_00531B35;

loc_00531B33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531B35: ;
    PUSH32(esp, 0xEC);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x00531B49u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531B49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531B59; /* je: equal / zero */

loc_00531B50: ;
    ecx = eax;
    PUSH32(esp, 0x00531B57u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531B57: ;
    goto loc_00531B5B;

loc_00531B59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531B5B: ;
    MEM32(ebp + 0x18) = eax;
    edx = MEM32(0x697B88);
    esi = MEM32(edx + 4);
    ecx = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00531B72u); RECOMP_ABI_CALL(0x00485790u, sub_00485790); /* call 0x00485790 */

loc_00531B72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00532396; /* je: equal / zero */

loc_00531B80: ;
    _fa = (uint32_t)(MEM32(0x6C32E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32E0), 1 (32-bit) */
    esi = 0x6C3320;
    if (CMP_NE(_fa, _fb)) goto loc_00531BCD; /* jne: not equal / not zero */

loc_00531B8E: ;
    eax = MEM32(0x6C3630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x6C365C);
    if (CMP_L(_fas, _fbs)) goto loc_00531BB4; /* jl: less (signed <) */

loc_00531B9D: ;
    ecx = MEM32(0x6C32C8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x49E);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx * 4 + 0x663400);
    goto loc_00531BCD;

loc_00531BB4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00531BCD; /* jl: less (signed <) */

loc_00531BB8: ;
    edx = MEM32(0x6C32C8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x49E);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(edx * 4 + 0x663400);

loc_00531BCD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64BE44);
    eax = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00531BE2u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531BE2: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531BEFu); } /* indirect call */
    }

loc_00531BF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64BE3C);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00531C07u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531C07: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531C17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531C14u); } /* indirect call */
    }

loc_00531C17: ;
    ecx = MEM32(ebp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x00531C26u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00531C26: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64BE30);
    edx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531C3Bu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531C3B: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00531C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531C48u); } /* indirect call */
    }

loc_00531C4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531C61; /* jne: not equal / not zero */

loc_00531C4F: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531C5C; /* je: equal / zero */

loc_00531C56: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531C5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531C5Au); } /* indirect call */
    }

loc_00531C5C: ;
    MEM32(ebp + 0x14) = ebx;
    goto loc_00531C6E;

loc_00531C61: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0x00531C6Eu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00531C6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64BE24);
    edx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531C83u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531C83: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00531C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531C90u); } /* indirect call */
    }

loc_00531C93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531CA9; /* jne: not equal / not zero */

loc_00531C97: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531CA4; /* je: equal / zero */

loc_00531C9E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531CA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531CA2u); } /* indirect call */
    }

loc_00531CA4: ;
    MEM32(ebp + 0x18) = ebx;
    goto loc_00531CB6;

loc_00531CA9: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x00531CB6u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00531CB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532210; /* je: equal / zero */

loc_00531CBE: ;
    _fa = (uint32_t)(MEM32(0x6C32E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32E0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531DEC; /* je: equal / zero */

loc_00531CCB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00531CD6u); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_00531CD6: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + 0x50;
    /* nop */

loc_00531CE0: ;
    PUSH32(esp, 0x127);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00531CF1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531CF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531D01; /* je: equal / zero */

loc_00531CF8: ;
    ecx = eax;
    PUSH32(esp, 0x00531CFFu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531CFF: ;
    goto loc_00531D03;

loc_00531D01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531D03: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64BE0C);
    edx = esp + 0x40;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    MEM32(esi + -32) = eax;
    PUSH32(esp, 0x00531D1Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531D1C: ;
    ecx = MEM32(esi + -32);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00531D2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531D29u); } /* indirect call */
    }

loc_00531D2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531D46; /* jne: not equal / not zero */

loc_00531D30: ;
    ecx = MEM32(esi + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531D3D; /* je: equal / zero */

loc_00531D37: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531D3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531D3Bu); } /* indirect call */
    }

loc_00531D3D: ;
    MEM32(esi + -32) = 0;
    goto loc_00531D54;

loc_00531D46: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -32);
    PUSH32(esp, 0x00531D54u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00531D54: ;
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00531D65u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00531D65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531D75; /* je: equal / zero */

loc_00531D6C: ;
    ecx = eax;
    PUSH32(esp, 0x00531D73u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00531D73: ;
    goto loc_00531D77;

loc_00531D75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00531D77: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64BDF0);
    edx = esp + 0x40;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00531D8Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531D8F: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00531D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531D9Bu); } /* indirect call */
    }

loc_00531D9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00531DB6; /* jne: not equal / not zero */

loc_00531DA2: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531DAE; /* je: equal / zero */

loc_00531DA8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00531DAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531DACu); } /* indirect call */
    }

loc_00531DAE: ;
    MEM32(esi) = 0;
    goto loc_00531DC3;

loc_00531DB6: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00531DC3u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00531DC3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00531CE0; /* jl: less (signed <) */

loc_00531DD0: ;
    eax = MEM32(0x6C32E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531DEC; /* je: equal / zero */

loc_00531DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531DEC; /* je: equal / zero */

loc_00531DDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531DEC; /* je: equal / zero */

loc_00531DE4: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00531DF5;

loc_00531DEC: ;
    MEM8(esp + 0x13) = 1;
    SET_LO8(ecx, MEM8(esp + 0x13));

loc_00531DF5: ;
    eax = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(eax + 0x562));
    MEM8(esp + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x563));
    MEM8(esp + 0x21) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x564));
    MEM8(esp + 0x22) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x565));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531E2A; /* je: equal / zero */

loc_00531E21: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x23) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00531E2F; /* je: equal / zero */

loc_00531E2A: ;
    MEM8(esp + 0x23) = 0;

loc_00531E2F: ;
    SET_LO8(edx, MEM8(eax + 0x566));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531E42; /* je: equal / zero */

loc_00531E39: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00531E47; /* je: equal / zero */

loc_00531E42: ;
    MEM8(esp + 0x24) = 0;

loc_00531E47: ;
    SET_LO8(edx, MEM8(eax + 0x567));
    MEM8(esp + 0x25) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x568));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531E64; /* je: equal / zero */

loc_00531E5B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x26) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00531E69; /* je: equal / zero */

loc_00531E64: ;
    MEM8(esp + 0x26) = 0;

loc_00531E69: ;
    eax = MEM32(esp + 0x18);
    esi = ebp + 0x48;
    MEM8(esp + 0x27) = LO8(ecx);
    ecx = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x28) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00531E8F; /* jle: less or equal (signed <=) */

loc_00531E81: ;
    edx = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00531E8Bu); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_00531E8B: ;
    eax = MEM32(esp + 0x18);

loc_00531E8F: ;
    MEM16(esi + 4) = LO16(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00532210; /* jle: less or equal (signed <=) */

loc_00531EA1: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00531EADu); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_00531EAD: ;
    ecx = MEM32(ebp + 8);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00531EB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531EB4u); } /* indirect call */
    }

loc_00531EB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053202C; /* jne: not equal / not zero */

loc_00531EBF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053202C; /* jne: not equal / not zero */

loc_00531ECB: ;
    SET_LO8(eax, MEM8(ebx + 0x560));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531F08; /* je: equal / zero */

loc_00531ED5: ;
    ecx = MEM32(0x6C32E0);
    edx = MEM32(ecx * 4 + 0x663300);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BDE0);
    eax = esp + 0x40;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00531EF8u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531EF8: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531F08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531F05u); } /* indirect call */
    }

loc_00531F08: ;
    SET_LO8(eax, MEM8(ebx + 0x55D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531F52; /* je: equal / zero */

loc_00531F12: ;
    ecx = MEM32(0x6C32D0);
    edx = MEM32(ecx * 4 + 0x66327C);
    eax = MEM32(0x6C32CC);
    ecx = MEM32(eax * 4 + 0x663270);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BDCC);
    edx = esp + 0x44;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00531F42u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531F42: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00531F52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531F4Fu); } /* indirect call */
    }

loc_00531F52: ;
    SET_LO8(eax, MEM8(ebx + 0x55E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531F9F; /* je: equal / zero */

loc_00531F5C: ;
    fp_push(MEMF(ebx + 0x54C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64B338)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64b338] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    eax = 0x64BDC4;
    if (TEST_Z(_fa, _fb)) goto loc_00531F79; /* je: equal / zero */

loc_00531F74: ;
    eax = 0x649E24;

loc_00531F79: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BDAC);
    eax = esp + 0x40;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00531F8Fu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531F8F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531F9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531F9Cu); } /* indirect call */
    }

loc_00531F9F: ;
    SET_LO8(eax, MEM8(ebx + 0x55F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531FCE; /* je: equal / zero */

loc_00531FA9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD98);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00531FBEu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531FBE: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531FCBu); } /* indirect call */
    }

loc_00531FCE: ;
    SET_LO8(eax, MEM8(ebx + 0x55C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00531FFD; /* je: equal / zero */

loc_00531FD8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD88);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00531FEDu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00531FED: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00531FFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00531FFAu); } /* indirect call */
    }

loc_00531FFD: ;
    SET_LO8(eax, MEM8(ebx + 0x561));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053202C; /* je: equal / zero */

loc_00532007: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD74);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0053201Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053201C: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0053202Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532029u); } /* indirect call */
    }

loc_0053202C: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00532034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532031u); } /* indirect call */
    }

loc_00532034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005320FF; /* jne: not equal / not zero */

loc_0053203C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005320FF; /* jne: not equal / not zero */

loc_00532048: ;
    PUSH32(esp, 0x17A);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00532059u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00532059: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053207A; /* je: equal / zero */

loc_00532060: ;
    PUSH32(esp, 0x52F090);
    PUSH32(esp, 2);
    esi = eax + 4;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    MEM32(eax) = 2;
    PUSH32(esp, 0x00532078u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_00532078: ;
    goto loc_0053207C;

loc_0053207A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0053207C: ;
    MEM32(ebp + 0x10) = esi;
    SET_LO8(eax, MEM8(ebx + 0x561));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005320FF; /* je: equal / zero */

loc_00532089: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD64);
    eax = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053209Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053209E: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005320AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005320ABu); } /* indirect call */
    }

loc_005320AE: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0x005320BCu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_005320BC: ;
    SET_LO8(eax, MEM8(ebx + 0x561));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005320FF; /* je: equal / zero */

loc_005320C6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD4C);
    edx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005320DBu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005320DB: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax + 0x18;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005320EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005320EBu); } /* indirect call */
    }

loc_005320EE: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005320FFu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_005320FF: ;
    PUSH32(esp, 0x18D);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x344);
    PUSH32(esp, 0x00532113u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00532113: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532141; /* je: equal / zero */

loc_0053211A: ;
    ebx = eax + 4;
    MEM32(eax) = 0x34;
    edx = ebx;
    esi = 0x34;
    /* nop */

loc_00532130: ;
    ecx = edx;
    PUSH32(esp, 0x00532137u); RECOMP_ABI_CALL(0x00531890u, sub_00531890); /* call 0x00531890 */

loc_00532137: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532130; /* jne: not equal / not zero */

loc_0053213D: ;
    eax = ebx;
    goto loc_00532143;

loc_00532141: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00532143: ;
    ecx = MEM32(ebp + 0x48);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + edx * 4) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x64B350;

loc_00532154: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053219F; /* je: equal / zero */

loc_0053215A: ;
    ecx = MEM32(esi + -8);
    SET_LO8(edx, MEM8(esp + ecx + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053219F; /* je: equal / zero */

loc_00532165: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532176u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00532176: ;
    edx = MEM32(ebp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + -3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + -4));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ecx = MEM32(ecx + edx * 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0053219Fu); RECOMP_ABI_CALL(0x005318B0u, sub_005318B0); /* call 0x005318B0 */

loc_0053219F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64B5C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x64B5C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532154; /* jl: less (signed <) */

loc_005321AD: ;
    eax = MEM32(0x6C32D0);
    ecx = MEM32(eax * 4 + 0x66327C);
    edx = MEM32(0x6C32CC);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD38);
    ecx = esp + 0x44;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005321DDu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005321DD: ;
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x48);
    esi = MEM32(esp + 0x34);
    ecx = MEM32(ecx + esi * 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005321FFu); RECOMP_ABI_CALL(0x005318B0u, sub_005318B0); /* call 0x005318B0 */

loc_005321FF: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00531EA1; /* jl: less (signed <) */

loc_00532210: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00532218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532215u); } /* indirect call */
    }

loc_00532218: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0053222C; /* je: equal / zero */

loc_0053221F: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053222Au); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053222A: ;
    goto loc_0053223D;

loc_0053222C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532236; /* je: equal / zero */

loc_00532230: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00532236u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532234u); } /* indirect call */
    }

loc_00532236: ;
    MEM32(ebp + 8) = 0;

loc_0053223D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x68;
    ecx = ebx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx + 0x558);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532262u); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_00532262: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532354; /* je: equal / zero */

loc_0053226A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532280; /* je: equal / zero */

loc_0053226E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532275u); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_00532275: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532354; /* je: equal / zero */

loc_00532280: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00532282: ;
    eax = MEM32(esi * 4 + 0x64B5B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005322EC; /* je: equal / zero */

loc_0053228D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053229B; /* jne: not equal / not zero */

loc_00532292: ;
    _fa = (uint32_t)(MEM32(0x6C32E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32E0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005322EC; /* jne: not equal / not zero */

loc_0053229B: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005322ACu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005322AC: ;
    eax = MEM32(ebp + esi * 4 + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005322DE; /* jne: not equal / not zero */

loc_005322B7: ;
    PUSH32(esp, 0x1B3);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x005322C8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005322C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005322D8; /* je: equal / zero */

loc_005322CF: ;
    ecx = eax;
    PUSH32(esp, 0x005322D6u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_005322D6: ;
    goto loc_005322DA;

loc_005322D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005322DA: ;
    MEM32(ebp + esi * 4 + 0x68) = eax;

loc_005322DE: ;
    ecx = MEM32(ebp + esi * 4 + 0x68);
    eax = MEM32(ecx);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005322ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005322E9u); } /* indirect call */
    }

loc_005322EC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532282; /* jl: less (signed <) */

loc_005322F2: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532354; /* jne: not equal / not zero */

loc_005322F9: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00532304u); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_00532304: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64BD20);
    eax = esp + 0x40;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053231Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0053231A: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532348; /* jne: not equal / not zero */

loc_00532323: ;
    PUSH32(esp, 0x1BD);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00532334u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00532334: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532344; /* je: equal / zero */

loc_0053233B: ;
    ecx = eax;
    PUSH32(esp, 0x00532342u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_00532342: ;
    goto loc_00532346;

loc_00532344: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00532346: ;
    MEM32(ebx) = eax;

loc_00532348: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00532354u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532351u); } /* indirect call */
    }

loc_00532354: ;
    esi = ebx;
    edi = 5;
    goto loc_00532360;

    /* nop */

loc_00532360: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053237E; /* je: equal / zero */

loc_00532366: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0053236Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532368u); } /* indirect call */
    }

loc_0053236B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053237E; /* je: equal / zero */

loc_0053236F: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053237Cu); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_0053237C: ;
    goto loc_00532390;

loc_0053237E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053238A; /* je: equal / zero */

loc_00532384: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053238Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532388u); } /* indirect call */
    }

loc_0053238A: ;
    MEM32(esi) = 0;

loc_00532390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532360; /* jne: not equal / not zero */

loc_00532396: ;
    eax = 0x64B5F0;
    esi = ebp + 0xC4;

loc_005323A1: ;
    edi = eax;
    ebx = 9;

loc_005323A8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532411; /* je: equal / zero */

loc_005323AE: ;
    ecx = MEM32(0x6C32C8);
    edx = MEM32(ecx * 4 + 0x663174);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005323CCu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005323CC: ;
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x005323DDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005323DD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005323ED; /* je: equal / zero */

loc_005323E4: ;
    ecx = eax;
    PUSH32(esp, 0x005323EBu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_005323EB: ;
    goto loc_005323EF;

loc_005323ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005323EF: ;
    ecx = esp + 0x34;
    MEM32(esi) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005323FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005323FAu); } /* indirect call */
    }

loc_005323FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_005324F5; /* jne: not equal / not zero */

loc_00532407: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532411; /* je: equal / zero */

loc_0053240B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00532411u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053240Fu); } /* indirect call */
    }

loc_00532411: ;
    MEM32(esi) = 0;

loc_00532417: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005323A8; /* jne: not equal / not zero */

loc_00532420: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64B638) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x64B638 (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_005323A1; /* jl: less (signed <) */

loc_0053242E: ;
    MEM32(esp + 0x2C) = 0;
    ecx = 0x64B5CC;
    eax = 0x1F;
    edx = ebp + 0x7C;
    goto loc_00532450;

    /* nop */
    /* nop */

loc_00532450: ;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    goto loc_00532470;

    /* nop */
    /* nop */

loc_00532470: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053254E; /* je: equal / zero */

loc_0053247D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00532480: ;
    edx = MEM32(0x6C32C8);
    eax = MEM32(edx * 4 + 0x663174);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005324A4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005324A4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005324D4; /* jne: not equal / not zero */

loc_005324AC: ;
    edi = esp + 0x34;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_005324B1: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005324B1; /* jne: not equal / not zero */

loc_005324B9: ;
    ecx = MEM32(0x64BD18);
    SET_LO16(edx, MEM16(0x64BD1C));
    SET_LO8(eax, MEM8(0x64BD1E));
    MEM32(edi) = ecx;
    MEM16(edi + 4) = LO16(edx);
    MEM8(edi + 6) = LO8(eax);

loc_005324D4: ;
    PUSH32(esp, 0x1F3);
    PUSH32(esp, 0x64BD08);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x005324E5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005324E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532505; /* je: equal / zero */

loc_005324EC: ;
    ecx = eax;
    PUSH32(esp, 0x005324F3u); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_005324F3: ;
    goto loc_00532507;

loc_005324F5: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532500u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00532500: ;
    goto loc_00532417;

loc_00532505: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00532507: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + ecx * 4;
    ecx = esp + 0x34;
    MEM32(esi) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0053251Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053251Cu); } /* indirect call */
    }

loc_0053251F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00532537; /* jne: not equal / not zero */

loc_00532525: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053252F; /* je: equal / zero */

loc_00532529: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053252Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053252Du); } /* indirect call */
    }

loc_0053252F: ;
    MEM32(esi) = 0;
    goto loc_00532542;

loc_00532537: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532542u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_00532542: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532480; /* jl: less (signed <) */

loc_0053254C: ;
    goto loc_0053256D;

loc_0053254E: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;
    MEM32(ebp + edx * 8 + 0x80) = 0;

loc_0053256D: ;
    eax = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00532470; /* jl: less (signed <) */

loc_005325A0: ;
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00532450; /* jl: less (signed <) */

loc_005325BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005325D0
 * Original: 0x005325D0 - 0x00532631 (97 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005325D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005325D0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00532615; /* je: equal / zero */

loc_005325DD: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    ecx = eax + eax * 2;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_005325FF; /* js: sign (negative) */

loc_005325ED: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_005325F1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x005325FBu); RECOMP_ABI_CALL(0x0052F360u, sub_0052F360); /* call 0x0052F360 */

loc_005325FB: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005325F1; /* jne: not equal / not zero */

loc_005325FE: ;
    POP32(esp, edi);

loc_005325FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053260D; /* je: equal / zero */

loc_00532604: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053260Au); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0053260A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053260D: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00532615: ;
    ecx = esi;
    PUSH32(esp, 0x0053261Cu); RECOMP_ABI_CALL(0x0052F360u, sub_0052F360); /* call 0x0052F360 */

loc_0053261C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053262A; /* je: equal / zero */

loc_00532621: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00532627u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00532627: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053262A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532640
 * Original: 0x00532640 - 0x005326A2 (98 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532640: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00532686; /* je: equal / zero */

loc_0053264D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0053266F; /* js: sign (negative) */

loc_0053265F: ;
    edi = eax + 1;

loc_00532662: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0053266Cu); RECOMP_ABI_CALL(0x00531860u, sub_00531860); /* call 0x00531860 */

loc_0053266C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532662; /* jne: not equal / not zero */

loc_0053266F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053267D; /* je: equal / zero */

loc_00532674: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0053267Au); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0053267A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053267D: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00532686: ;
    ecx = edi;
    PUSH32(esp, 0x0053268Du); RECOMP_ABI_CALL(0x00531860u, sub_00531860); /* call 0x00531860 */

loc_0053268D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0053269B; /* je: equal / zero */

loc_00532692: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00532698u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00532698: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053269B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005326B0
 * Original: 0x005326B0 - 0x00532875 (453 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005326B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005326B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005326C6; /* je: equal / zero */

loc_005326C0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005326C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005326C4u); } /* indirect call */
    }

loc_005326C6: ;
    MEM32(ebp + 4) = ebx;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005326D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005326D1u); } /* indirect call */
    }

loc_005326D4: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005326E1; /* je: equal / zero */

loc_005326DB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005326E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005326DFu); } /* indirect call */
    }

loc_005326E1: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_005326F1; /* je: equal / zero */

loc_005326EB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005326F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005326EFu); } /* indirect call */
    }

loc_005326F1: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00532716; /* je: equal / zero */

loc_005326FB: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0053270D; /* je: equal / zero */

loc_00532705: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053270Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532709u); } /* indirect call */
    }

loc_0053270B: ;
    goto loc_00532716;

loc_0053270D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532713u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00532713: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00532716: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00532726; /* je: equal / zero */

loc_00532720: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00532726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532724u); } /* indirect call */
    }

loc_00532726: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00532736; /* je: equal / zero */

loc_00532730: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00532736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532734u); } /* indirect call */
    }

loc_00532736: ;
    MEM32(ebp + 0x18) = ebx;
    esi = ebp + 0x50;
    edi = 6;

loc_00532741: ;
    ecx = MEM32(esi + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053274E; /* je: equal / zero */

loc_00532748: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053274Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053274Cu); } /* indirect call */
    }

loc_0053274E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053275A; /* je: equal / zero */

loc_00532754: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053275Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532758u); } /* indirect call */
    }

loc_0053275A: ;
    MEM32(esi + -32) = ebx;
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532741; /* jne: not equal / not zero */

loc_00532765: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x4C), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0053279E; /* jbe: below or equal (unsigned <=) */

loc_0053276D: ;
    /* nop */

loc_00532770: ;
    ecx = MEM32(ebp + 0x48);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532795; /* je: equal / zero */

loc_0053277A: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0053278C; /* je: equal / zero */

loc_00532784: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053278Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532788u); } /* indirect call */
    }

loc_0053278A: ;
    goto loc_00532795;

loc_0053278C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532792u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00532792: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00532795: ;
    eax = ZX16(MEM16(ebp + 0x4C));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532770; /* jl: less (signed <) */

loc_0053279E: ;
    eax = ZX16(MEM16(ebp + 0x4C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005327C4; /* jle: less or equal (signed <=) */

loc_005327B2: ;
    edx = MEM32(ebp + 0x48);
    edx = MEM32(edx + eax * 4);
    MEM32(eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005327B2; /* jl: less (signed <) */

loc_005327C4: ;
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, eax);
    MEM16(ebp + 0x4E) = LO16(ebx);
    MEM16(ebp + 0x4C) = LO16(ecx);
    PUSH32(esp, 0x005327D5u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_005327D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = ebx;
    esi = ebp + 0x68;
    edi = 5;

loc_005327E3: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005327EF; /* je: equal / zero */

loc_005327E9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005327EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005327EDu); } /* indirect call */
    }

loc_005327EF: ;
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005327E3; /* jne: not equal / not zero */

loc_005327F7: ;
    esi = ebp + 0x7C;
    MEM32(esp + 0x10) = 3;

loc_00532802: ;
    ebx = 3;

loc_00532807: ;
    edi = 2;
    /* nop */

loc_00532810: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053281C; /* je: equal / zero */

loc_00532816: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0053281Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053281Au); } /* indirect call */
    }

loc_0053281C: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532810; /* jne: not equal / not zero */

loc_00532828: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532807; /* jne: not equal / not zero */

loc_0053282B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532802; /* jne: not equal / not zero */

loc_00532831: ;
    esi = ebp + 0xC4;
    ebx = 2;
    /* nop */

loc_00532840: ;
    edi = 9;

loc_00532845: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532851; /* je: equal / zero */

loc_0053284B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00532851u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053284Fu); } /* indirect call */
    }

loc_00532851: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532845; /* jne: not equal / not zero */

loc_0053285D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532840; /* jne: not equal / not zero */

loc_00532860: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x13B) = 1;
    MEM8(ebp + 0x24) = 0;
    MEM8(ebp + 0x25) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00532880
 * Original: 0x00532880 - 0x00532A8A (522 bytes, 162 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00532880: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x138) = 1;
    MEM8(edi + 0x139) = 1;
    MEM32(edi + 0x114) = ebx;
    MEM32(edi + 0x118) = ebx;
    MEM8(edi + 0x11C) = LO8(ebx);
    MEM32(edi + 0x120) = ebx;
    MEM32(edi + 0x128) = ebx;
    MEM32(edi + 0x124) = ebx;
    MEM32(edi + 0x12C) = ebx;
    MEM32(edi + 0x130) = ebx;
    MEM32(edi + 0x134) = ebx;
    MEM8(edi + 0x13B) = LO8(ebx);
    MEM8(edi + 0x13A) = LO8(ebx);
    MEM8(edi + 0x13C) = LO8(ebx);
    MEM8(edi + 0x13D) = LO8(ebx);
    _fa = (uint32_t)(MEM32(0x6C32E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C32E0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053291C; /* je: equal / zero */

loc_005328ED: ;
    _fa = (uint32_t)(MEM16(edi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x4C), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053291C; /* je: equal / zero */

loc_005328F3: ;
    MEM32(edi + 0x10C) = ebx;
    eax = MEM32(0x698624);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x1C);
    esi = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0x110) = LO8(ecx);
    goto loc_00532932;

loc_0053291C: ;
    MEM32(edi + 0x10C) = 0xFFFFFFFFu;
    MEM8(edi + 0x110) = 0;
    esi = 2;

loc_00532932: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x69585C);
    if (CMP_EQ(_fa, _fb)) goto loc_00532958; /* je: equal / zero */

loc_00532941: ;
    eax = MEM32(0x6C3424);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053294F; /* je: equal / zero */

loc_0053294C: ;
    PUSH32(esp, eax);
    goto loc_00532959;

loc_0053294F: ;
    MEM8(edi + 0x111) = 0;
    goto loc_00532970;

loc_00532958: ;
    PUSH32(esp, ebx);

loc_00532959: ;
    PUSH32(esp, 0x0053295Eu); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0053295E: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), esi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0x111) = LO8(ecx);

loc_00532970: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(edi + 0x24) = 0;
    MEM8(edi + 0x25) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00532987; /* je: equal / zero */

loc_00532982: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00532987u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532984u); } /* indirect call */
    }

loc_00532987: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x4C), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005329B5; /* jbe: below or equal (unsigned <=) */

loc_0053298F: ;
    /* nop */

loc_00532990: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00532992: ;
    ecx = MEM32(edi + 0x48);
    ecx = MEM32(ecx + ebp * 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005329A1u); RECOMP_ABI_CALL(0x005319D0u, sub_005319D0); /* call 0x005319D0 */

loc_005329A1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x340) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x340 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532992; /* jl: less (signed <) */

loc_005329AC: ;
    edx = ZX16(MEM16(edi + 0x4C));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532990; /* jl: less (signed <) */

loc_005329B5: ;
    esi = edi + 0x68;
    ebp = 5;
    /* nop */

loc_005329C0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005329D0; /* je: equal / zero */

loc_005329C6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x005329CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005329C8u); } /* indirect call */
    }

loc_005329CB: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = eax;

loc_005329D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005329C0; /* jne: not equal / not zero */

loc_005329D6: ;
    esi = edi + 0x7C;
    MEM32(esp + 0x14) = 3;

loc_005329E1: ;
    ebx = 3;

loc_005329E6: ;
    ebp = 2;
    goto loc_005329F0;

    /* nop */

loc_005329F0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A02; /* je: equal / zero */

loc_005329F6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005329FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005329F8u); } /* indirect call */
    }

loc_005329FB: ;
    ecx = MEM32(esi);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x14) = eax;

loc_00532A02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005329F0; /* jne: not equal / not zero */

loc_00532A08: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005329E6; /* jne: not equal / not zero */

loc_00532A0B: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005329E1; /* jne: not equal / not zero */

loc_00532A11: ;
    esi = edi + 0xC4;
    ebx = 2;
    /* nop */

loc_00532A20: ;
    ebp = 9;

loc_00532A25: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A35; /* je: equal / zero */

loc_00532A2B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00532A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532A2Du); } /* indirect call */
    }

loc_00532A30: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = eax;

loc_00532A35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532A25; /* jne: not equal / not zero */

loc_00532A3B: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532A20; /* jne: not equal / not zero */

loc_00532A3E: ;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00532A4F; /* je: equal / zero */

loc_00532A4C: ;
    MEM32(eax + 0x14) = ecx;

loc_00532A4F: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A5F; /* je: equal / zero */

loc_00532A56: ;
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(edi + 0x10);
    MEM32(eax + 0x2C) = ecx;

loc_00532A5F: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A69; /* je: equal / zero */

loc_00532A66: ;
    MEM32(eax + 0x14) = ecx;

loc_00532A69: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A73; /* je: equal / zero */

loc_00532A70: ;
    MEM32(eax + 0x14) = ecx;

loc_00532A73: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532A7D; /* je: equal / zero */

loc_00532A7A: ;
    MEM32(eax + 0x14) = ecx;

loc_00532A7D: ;
    MEM32(edi + 0x144) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532A90
 * Original: 0x00532A90 - 0x00532B79 (233 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532A90(void)
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

loc_00532A90: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532B6B; /* je: equal / zero */

loc_00532AA4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00532AA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532AA6u); } /* indirect call */
    }

loc_00532AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532B6B; /* je: equal / zero */

loc_00532AB1: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x114) = 0x41200000;
    if (CMP_EQ(_fa, _fb)) goto loc_00532AD7; /* je: equal / zero */

loc_00532AC2: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00532AD5u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532AD5: ;
    goto loc_00532AF2;

loc_00532AD7: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00532AE8u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532AE8: ;
    ecx = MEM32(esi + 8);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    MEM32(esi + 0x28) = edx;

loc_00532AF2: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x80);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532B04u); RECOMP_ABI_CALL(0x0052DF40u, sub_0052DF40); /* call 0x0052DF40 */

loc_00532B04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532B6B; /* je: equal / zero */

loc_00532B08: ;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00532B10: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532B10; /* jne: not equal / not zero */

loc_00532B18: ;
    ecx = MEM32(0x64B0C0);
    SET_LO8(edx, MEM8(0x64B0C4));
    MEM32(edi) = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM8(edi + 4) = LO8(edx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532B3Du); RECOMP_ABI_CALL(0x005D8040u, sub_005D8040); /* call 0x005D8040 */

loc_00532B3D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00532B6B; /* je: equal / zero */

loc_00532B45: ;
    eax = MEM32(esp + 8);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00532B57; /* jge: greater or equal (signed >=) */

loc_00532B51: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00532B57: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00532B6B: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00532B80
 * Original: 0x00532B80 - 0x00532D6C (492 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532B80(void)
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

loc_00532B80: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532C61; /* je: equal / zero */

loc_00532B94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00532B99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532B96u); } /* indirect call */
    }

loc_00532B99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532C61; /* je: equal / zero */

loc_00532BA1: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x114) = 0x41200000;
    if (CMP_EQ(_fa, _fb)) goto loc_00532BC7; /* je: equal / zero */

loc_00532BB2: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00532BC5u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532BC5: ;
    goto loc_00532BE2;

loc_00532BC7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00532BD8u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532BD8: ;
    ecx = MEM32(esi + 0xC);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    MEM32(esi + 0x2C) = edx;

loc_00532BE2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x80);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532BF4u); RECOMP_ABI_CALL(0x0052DF40u, sub_0052DF40); /* call 0x0052DF40 */

loc_00532BF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532D5E; /* je: equal / zero */

loc_00532BFC: ;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00532C02: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532C02; /* jne: not equal / not zero */

loc_00532C0A: ;
    ecx = MEM32(0x64B0C0);
    SET_LO8(edx, MEM8(0x64B0C4));
    MEM32(edi) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM8(edi + 4) = LO8(edx);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532C2Fu); RECOMP_ABI_CALL(0x005D8040u, sub_005D8040); /* call 0x005D8040 */

loc_00532C2F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00532D5E; /* je: equal / zero */

loc_00532C3B: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00532C4D; /* jge: greater or equal (signed >=) */

loc_00532C47: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00532C4D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00532C61: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532D5E; /* je: equal / zero */

loc_00532C6C: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00532C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532C6Fu); } /* indirect call */
    }

loc_00532C72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532CA7; /* je: equal / zero */

loc_00532C76: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532CA7; /* je: equal / zero */

loc_00532C83: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00532C8Au); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00532C8A: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    fp_push(MEMF(ecx + 0x18C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00532CA7; /* jne: not equal / not zero */

loc_00532CA3: ;
    SET_LO8(ebx, 1);
    goto loc_00532CA9;

loc_00532CA7: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00532CA9: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x18);
    ecx = eax + 0x18;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00532CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00532CB2u); } /* indirect call */
    }

loc_00532CB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532CC6; /* jne: not equal / not zero */

loc_00532CBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532D5D; /* je: equal / zero */

loc_00532CC6: ;
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00532D5D; /* je: equal / zero */

loc_00532D03: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532D49; /* je: equal / zero */

loc_00532D07: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00532D49; /* jne: not equal / not zero */

loc_00532D3D: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    goto loc_00532D56;

loc_00532D49: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);

loc_00532D56: ;
    ecx = esi;
    PUSH32(esp, 0x00532D5Du); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532D5D: ;
    POP32(esp, ebx);

loc_00532D5E: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00532D70
 * Original: 0x00532D70 - 0x00532DE6 (118 bytes, 40 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00532D70(void)
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

loc_00532D70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00532D86u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00532D86: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x64be58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00532DDF; /* je: equal / zero */

loc_00532D9F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64be54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00532DB1; /* jne: not equal / not zero */

loc_00532DAC: ;
    edi = 1;

loc_00532DB1: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40000000);
    eax = eax + eax * 2;
    ecx = edi + eax * 2;
    edx = MEM32(esi + ecx * 4 + 0x84);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00532DDAu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532DDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00532DDF: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00532DF0
 * Original: 0x00532DF0 - 0x00532E17 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00532DF0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    eax = eax + eax * 8;
    edx = MEM32(ecx + eax * 4 + 0xC4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532E14u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532E14: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532E20
 * Original: 0x00532E20 - 0x00532E62 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00532E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    edi = eax;
    ecx = edi + edi * 8;
    edx = MEM32(esi + ecx * 4 + 0xC8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00532E4Cu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532E4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532E5D; /* jne: not equal / not zero */

loc_00532E50: ;
    MEM8(esi + 0x13D) = 1;
    MEM32(esi + 0x140) = edi;

loc_00532E5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532E70
 * Original: 0x00532E70 - 0x00532E96 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00532E70: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 8;
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532E93u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532E93: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532EA0
 * Original: 0x00532EA0 - 0x00532EB6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532EA0(void)
{

loc_00532EA0: ;
    eax = MEM32(ecx + 0xE4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00532EB5u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532EB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00532EC0
 * Original: 0x00532EC0 - 0x00532EE7 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00532EC0: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    eax = eax + eax * 8;
    edx = MEM32(ecx + eax * 4 + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00532EE4u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00532EE4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00532EF0
 * Original: 0x00532EF0 - 0x005330F5 (517 bytes, 162 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00532EF0(void)
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

loc_00532EF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x3E8;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    MEM32(eax) = 0x64;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ecx) = 0;
    edx = MEM32(0x697B88);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005330EB; /* je: equal / zero */

loc_00532F37: ;
    eax = MEM32(0x696768);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00532F79; /* jle: less or equal (signed <=) */

loc_00532F46: ;
    eax = MEM32(ebp + 0x4EC);
    edx = esp + 0x60;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;

loc_00532F54: ;
    ecx = MEM32(eax);
    SET_LO8(ebx, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00532F6C; /* je: equal / zero */

loc_00532F5D: ;
    SET_LO8(ebx, MEM8(ecx + 5));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00532F6C; /* jne: not equal / not zero */

loc_00532F64: ;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + eax) = ecx;
    goto loc_00532F73;

loc_00532F6C: ;
    MEM32(edx + eax) = 0x497423F0;

loc_00532F73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00532F54; /* jne: not equal / not zero */

loc_00532F79: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00533011; /* jle: less or equal (signed <=) */

loc_00532F83: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + esi * 4 + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00532FE9; /* jl: less (signed <) */

loc_00532F8E: ;
    edx = 3;

loc_00532F93: ;
    fp_push(MEMF(esp + ecx * 4 + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi * 4 + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi*4 + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00532FA6; /* jp: parity */

loc_00532FA2: ;
    MEM32(esp + esi * 4 + 0x10) = MEM32(esp + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00532FA6: ;
    fp_push(MEMF(esp + ecx * 4 + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi * 4 + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi*4 + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00532FB9; /* jp: parity */

loc_00532FB5: ;
    MEM32(esp + esi * 4 + 0x10) = MEM32(esp + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00532FB9: ;
    fp_push(MEMF(esp + ecx * 4 + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi * 4 + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi*4 + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00532FCC; /* jp: parity */

loc_00532FC8: ;
    MEM32(esp + esi * 4 + 0x10) = MEM32(esp + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00532FCC: ;
    fp_push(MEMF(esp + ecx * 4 + 0x6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi * 4 + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi*4 + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00532FDF; /* jp: parity */

loc_00532FDB: ;
    MEM32(esp + esi * 4 + 0x10) = MEM32(esp + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00532FDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532F93; /* jl: less (signed <) */

loc_00532FE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00533008; /* jge: greater or equal (signed >=) */

loc_00532FED: ;
    /* nop */

loc_00532FF0: ;
    fp_push(MEMF(esp + ecx * 4 + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + esi * 4 + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + esi*4 + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00533003; /* jp: parity */

loc_00532FFF: ;
    MEM32(esp + esi * 4 + 0x10) = MEM32(esp + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00533003: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532FF0; /* jl: less (signed <) */

loc_00533008: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00532F83; /* jl: less (signed <) */

loc_00533011: ;
    ecx = MEM32(0x6C3304);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0053306D; /* jle: less or equal (signed <=) */

loc_00533022: ;
    edx = ebp + 0x8D;
    goto loc_00533030;

    /* nop */

loc_00533030: ;
    esi = MEM32(esp + 0xB4);
    ecx = MEM32(esp + eax * 4 + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053304E; /* jge: greater or equal (signed >=) */

loc_0053303F: ;
    MEM32(esi) = ecx;
    ecx = MEM32(esp + eax * 4 + 0x60);
    esi = MEM32(esp + 0xC0);
    MEM32(esi) = ecx;

loc_0053304E: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053305C; /* je: equal / zero */

loc_00533053: ;
    ecx = MEM32(esp + 0xBC);
    MEM8(ecx) = LO8(ebx);

loc_0053305C: ;
    ecx = MEM32(0x6C3304);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533030; /* jl: less (signed <) */

loc_0053306D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005330BA; /* jl: less (signed <) */

loc_00533074: ;
    ecx = 3;

loc_00533079: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x10), ebx (32-bit) */
    edx = MEM32(esp + 0xB8);
    if (CMP_NE(_fa, _fb)) goto loc_0053308C; /* jne: not equal / not zero */

loc_00533086: ;
    esi = MEM32(esp + eax * 4 + 0x60);
    MEM32(edx) = esi;

loc_0053308C: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533098; /* jne: not equal / not zero */

loc_00533092: ;
    esi = MEM32(esp + eax * 4 + 0x64);
    MEM32(edx) = esi;

loc_00533098: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005330A4; /* jne: not equal / not zero */

loc_0053309E: ;
    esi = MEM32(esp + eax * 4 + 0x68);
    MEM32(edx) = esi;

loc_005330A4: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005330B0; /* jne: not equal / not zero */

loc_005330AA: ;
    esi = MEM32(esp + eax * 4 + 0x6C);
    MEM32(edx) = esi;

loc_005330B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533079; /* jl: less (signed <) */

loc_005330BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005330D6; /* jge: greater or equal (signed >=) */

loc_005330BE: ;
    ecx = MEM32(esp + 0xB8);

loc_005330C5: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005330D1; /* jne: not equal / not zero */

loc_005330CB: ;
    edx = MEM32(esp + eax * 4 + 0x60);
    MEM32(ecx) = edx;

loc_005330D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005330C5; /* jl: less (signed <) */

loc_005330D6: ;
    eax = MEM32(0x6C3304);
    ecx = MEM32(esp + eax * 4 + 0x10);
    edx = MEM32(esp + 0xC4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);

loc_005330EB: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00533100
 * Original: 0x00533100 - 0x0053314D (77 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533100: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533111; /* jne: not equal / not zero */

loc_0053310B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00533111: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533124; /* je: equal / zero */

loc_00533118: ;
    SET_LO8(eax, MEM8(esi + 0x110));
    MEM8(esp + 8) = LO8(eax);
    goto loc_0053312E;

loc_00533124: ;
    SET_LO8(edx, MEM8(esi + 0x111));
    MEM8(esp + 8) = LO8(edx);

loc_0053312E: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00533141u); RECOMP_ABI_CALL(0x005319B0u, sub_005319B0); /* call 0x005319B0 */

loc_00533141: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00533149u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533149: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00533150
 * Original: 0x00533150 - 0x0053320C (188 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533150: ;
    edx = ecx;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = 0x64BE5C;
    MEM32(edx + 0x48) = ebx;
    MEM16(edx + 0x4C) = LO16(ebx);
    MEM16(edx + 0x4E) = LO16(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(edx + 0x1C) = ebx;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = ebx;
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 0x10) = ebx;
    MEM32(edx + 0x14) = ebx;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x20) = ebx;
    MEM8(edx + 0x138) = 1;
    MEM8(edx + 0x139) = 1;
    MEM32(edx + 0x114) = ebx;
    MEM32(edx + 0x28) = ebx;
    MEM32(edx + 0x2C) = ebx;
    eax = edx + 0x50;
    ecx = 6;

loc_005331A2: ;
    MEM32(eax + -32) = ebx;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005331A2; /* jne: not equal / not zero */

loc_005331AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x68) = eax;
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x70) = eax;
    MEM32(edx + 0x74) = eax;
    MEM32(edx + 0x78) = eax;
    eax = edx + 0x80;
    esi = 3;
    /* nop */

loc_005331D0: ;
    ecx = 3;

loc_005331D5: ;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005331D5; /* jne: not equal / not zero */

loc_005331E0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005331D0; /* jne: not equal / not zero */

loc_005331E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xC4;
    ecx = 0x12;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + 0x25) = LO8(ebx);
    MEM32(edx + 0x144) = ebx;
    MEM8(edx + 0x24) = 1;
    MEM8(edx + 0x13B) = 1;
    eax = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00533210
 * Original: 0x00533210 - 0x00533232 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533210: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64BE5C;
    PUSH32(esp, 0x0053321Eu); RECOMP_ABI_CALL(0x005326B0u, sub_005326B0); /* call 0x005326B0 */

loc_0053321E: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533227u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00533227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_00533240
 * Original: 0x00533240 - 0x00533821 (1505 bytes, 421 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533240(void)
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

loc_00533240: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053381E; /* je: equal / zero */

loc_0053324F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00533254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00533251u); } /* indirect call */
    }

loc_00533254: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533261; /* je: equal / zero */

loc_00533258: ;
    MEM8(esi + 0x11C) = 1;
    goto loc_0053328C;

loc_00533261: ;
    MEM8(esi + 0x11C) = 0;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x114)); /* fadd dword ptr [esi + 0x114] */
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x118)); /* fadd dword ptr [esi + 0x118] */
    MEMF(esi + 0x118) = (float)fp_top(); fp_pop(); /* fstp */

loc_0053328C: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x697B88);
    if (CMP_NE(_fa, _fb)) goto loc_0053381E; /* jne: not equal / not zero */

loc_0053329C: ;
    SET_LO8(ecx, MEM8(esi + 0x25));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053381E; /* jne: not equal / not zero */

loc_005332A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053381E; /* je: equal / zero */

loc_005332AF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(esi + 0x13D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_005332FB; /* je: equal / zero */

loc_005332C3: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005332FB; /* jne: not equal / not zero */

loc_005332CD: ;
    eax = MEM32(esi + 0x140);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = eax + eax * 8;
    edx = MEM32(esi + ecx * 4 + 0xC8);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005332EEu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_005332EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533331; /* je: equal / zero */

loc_005332F2: ;
    MEM8(esi + 0x13D) = 0;
    goto loc_00533331;

loc_005332FB: ;
    SET_LO8(eax, MEM8(esi + 0x13C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533331; /* je: equal / zero */

loc_00533305: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00533331; /* jne: not equal / not zero */

loc_0053330F: ;
    eax = MEM32(esi + 0xCC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00533326u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533326: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533331; /* je: equal / zero */

loc_0053332A: ;
    MEM8(esi + 0x13C) = 0;

loc_00533331: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005335D0; /* je: equal / zero */

loc_00533339: ;
    SET_LO8(eax, MEM8(esi + 0x13B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005335D0; /* jne: not equal / not zero */

loc_00533347: ;
    SET_LO8(eax, MEM8(esi + 0x13A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005335D0; /* jne: not equal / not zero */

loc_00533355: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005335D0; /* je: equal / zero */

loc_00533360: ;
    edx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_005335D0; /* jl: less (signed <) */

loc_0053336E: ;
    ecx = MEM32(ebx + 0x4E8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00533591; /* je: equal / zero */

loc_00533381: ;
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x130), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = MEM32(ebx + 0x98);
    if (CMP_NE(_fa, _fb)) goto loc_005334C9; /* jne: not equal / not zero */

loc_00533396: ;
    _fa = (uint32_t)(MEM32(esi + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x134), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005334C9; /* jne: not equal / not zero */

loc_005333A2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00533422; /* jle: less or equal (signed <=) */

loc_005333A6: ;
    eax = MEM32(0x698624);
    eax = MEM32(eax + 8);
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42C);
    ecx = MEM32(ecx + eax + 0x1C);
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(eax + 0x1D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax + 0x1D0);
    if (CMP_EQ(_fa, _fb)) goto loc_005333F1; /* je: equal / zero */

loc_005333CD: ;
    _fa = (uint32_t)(MEM8(ecx + 0x70)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x70), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005333F1; /* je: equal / zero */

loc_005333D3: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x210)) >> 32) & 1);
    ecx = ecx + 0x210;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005333ECu); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005333EC: ;
    goto loc_00533585;

loc_005333F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_005333F9: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_00533404: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x230)) >> 32) & 1);
    ecx = ecx + 0x230;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0053341Du); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_0053341D: ;
    goto loc_00533585;

loc_00533422: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00533585; /* jge: greater or equal (signed >=) */

loc_00533428: ;
    SET_LO8(eax, MEM8(0x6C3421));
    ecx = MEM32(0x6C3424);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x69585C);
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_0053344B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533451u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00533451: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x1D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax + 0x1D0);
    if (CMP_EQ(_fa, _fb)) goto loc_00533492; /* je: equal / zero */

loc_00533467: ;
    SET_LO8(edx, MEM8(ecx + 0x70));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533492; /* je: equal / zero */

loc_0053346E: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x10C);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x40A00000);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x200)) >> 32) & 1);
    edx = edx + 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0053348Du); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_0053348D: ;
    goto loc_00533585;

loc_00533492: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_0053349A: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_005334A5: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x10C);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x40A00000);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x220)) >> 32) & 1);
    edx = edx + 0x220;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005334C4u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005334C4: ;
    goto loc_00533585;

loc_005334C9: ;
    SET_LO8(eax, MEM8(0x6C3421));
    ecx = MEM32(0x6C3424);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(0x69585C);
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533585; /* je: equal / zero */

loc_005334EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005334F2u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_005334F2: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x48);
    eax = MEM32(ecx + 0x1D4);
    ecx = MEM32(esi + 0x10C);
    ebx = MEM32(0x698624);
    ebx = MEM32(ebx + 8);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x42C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(edx + ebx + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_00533581; /* je: equal / zero */

loc_0053351D: ;
    _fa = (uint32_t)(MEM32(eax + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x94), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00533543; /* jne: not equal / not zero */

loc_00533525: ;
    fp_push(MEMF(eax + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00533581; /* jne: not equal / not zero */

loc_00533535: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1E0)) >> 32) & 1);
    ecx = ecx + 0x1E0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00533574;

loc_00533543: ;
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00533581; /* jne: not equal / not zero */

loc_0053354B: ;
    edx = MEM32(edx + 0x48);
    eax = MEM32(edx + 0x1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533581; /* je: equal / zero */

loc_00533558: ;
    fp_push(MEMF(eax + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00533581; /* jne: not equal / not zero */

loc_00533568: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(0x1F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1F0)) >> 32) & 1);
    ecx = ecx + 0x1F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00533574: ;
    PUSH32(esp, 0x41200000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00533581u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533581: ;
    ebx = MEM32(esp + 0x10);

loc_00533585: ;
    MEM32(esi + 0x130) = ebp;
    MEM32(esi + 0x134) = edi;

loc_00533591: ;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005335D0; /* je: equal / zero */

loc_0053359B: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053381B; /* jne: not equal / not zero */

loc_005335A9: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_005335D0; /* jne: not equal / not zero */

loc_005335BC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005335C6u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005335C6: ;
    MEM32(esi + 0x144) = 0;

loc_005335D0: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053381B; /* jne: not equal / not zero */

loc_005335DE: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64B33C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64b33c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0053381B; /* jne: not equal / not zero */

loc_005335F5: ;
    SET_LO8(eax, MEM8(esi + 0x13B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053381B; /* jne: not equal / not zero */

loc_00533603: ;
    SET_LO8(eax, MEM8(esi + 0x13A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053381B; /* jne: not equal / not zero */

loc_00533611: ;
    eax = MEM32(esi + 0x10C);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00533734; /* jl: less (signed <) */

loc_00533621: ;
    SET_LO8(eax, MEM8(esi + 0x138));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005336A2; /* je: equal / zero */

loc_0053362B: ;
    ebp = MEM32(0x679680);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x269EC3)) >> 32) & 1);
    ebp = ebp + 0x269EC3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x679680) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_005336A8; /* jne: not equal / not zero */

loc_0053364C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533693; /* je: equal / zero */

loc_00533650: ;
    fp_push(MEMF(ebx + 0x54C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64B338)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64b338] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00533667; /* jne: not equal / not zero */

loc_00533663: ;
    SET_LO8(eax, 1);
    goto loc_00533669;

loc_00533667: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00533669: ;
    edx = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x48);
    ebx = MEM32(ecx + edx * 4);
    edi = ZX8(LO8(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if (4) _cf = (int)(((edi) >> (32 - (4))) & 1);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x0053368Du); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_0053368D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00533693; /* jne: not equal / not zero */

loc_00533691: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00533693: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 0x138) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0053375F; /* jne: not equal / not zero */

loc_005336A2: ;
    ebp = MEM32(0x679680);

loc_005336A8: ;
    SET_LO8(eax, MEM8(esi + 0x139));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533701; /* je: equal / zero */

loc_005336B2: ;
    edx = MEM32(esi + 0x10C);
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x40)) >> 32) & 1);
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005336C6u); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_005336C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533701; /* je: equal / zero */

loc_005336CA: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x269EC3)) >> 32) & 1);
    ebp = ebp + 0x269EC3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x679680) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00533701; /* jne: not equal / not zero */

loc_005336E9: ;
    edx = MEM32(esi + 0x10C);
    eax = MEM32(esi + 0x48);
    edi = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x40)) >> 32) & 1);
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x139) = 0;
    goto loc_0053375F;

loc_00533701: ;
    ecx = MEM32(esi + 0x10C);
    edx = MEM32(esi + 0x48);
    ebp = MEM32(edx + ecx * 4);
    ebx = ebp + 0x280;
    ecx = ebx;
    PUSH32(esp, 0x0053371Au); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_0053371A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533722; /* je: equal / zero */

loc_0053371E: ;
    edi = ebx;
    goto loc_0053375F;

loc_00533722: ;
    ebx = ebp + 0x50;
    ecx = ebx;
    PUSH32(esp, 0x0053372Cu); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_0053372C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053375F; /* je: equal / zero */

loc_00533730: ;
    edi = ebx;
    goto loc_0053375F;

loc_00533734: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053375F; /* je: equal / zero */

loc_0053373B: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64B340)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64b340] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0053375F; /* jne: not equal / not zero */

loc_0053374E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0053375Fu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_0053375F: ;
    SET_LO8(ebx, MEM8(0x6C3421));
    ecx = MEM32(0x6C3424);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533793; /* je: equal / zero */

loc_00533775: ;
    ecx = edi;
    PUSH32(esp, 0x0053377Cu); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_0053377C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00533793; /* je: equal / zero */

loc_00533780: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053378Du); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_0053378D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00533793: ;
    eax = ebx + ebx * 2;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + 0x6C3434);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005337A5u); RECOMP_ABI_CALL(0x0053D600u, sub_0053D600); /* call 0x0053D600 */

loc_005337A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053381B; /* je: equal / zero */

loc_005337AC: ;
    fp_push(MEMF(0x64B33C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636270)); /* fmul dword ptr [0x636270] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x114)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x114] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053381B; /* jp: parity */

loc_005337C5: ;
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x269EC3)) >> 32) & 1);
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = ecx;
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_005337F6; /* jns: not sign (positive) */

loc_005337F1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005337F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00533803; /* jne: not equal / not zero */

loc_005337FB: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0053380A; /* jne: not equal / not zero */

loc_00533803: ;
    edx = MEM32(esi + eax * 4 + 0xC4);

loc_0053380A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0053381Bu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_0053381B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0053381E: ;
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
 * sub_00533830
 * Original: 0x00533830 - 0x005339C4 (404 bytes, 123 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533830(void)
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

loc_00533830: ;
    eax = MEM32(0x697B88);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005339C0; /* jl: less (signed <) */

loc_00533849: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005339C0; /* je: equal / zero */

loc_00533851: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005339C0; /* je: equal / zero */

loc_0053385C: ;
    ecx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    ecx = ecx + eax + 0x88;
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(ecx + 0x34));
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x4E8);
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00533888; /* jne: not equal / not zero */

loc_00533881: ;
    MEM8(esi + 0x13A) = 1;

loc_00533888: ;
    ebx = ZX8(MEM8(ecx + 0x34));
    MEM32(esi + 0x120) = ebx;
    ebx = MEM32(0x8602E0);
    MEM32(esi + 0x128) = ebx;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00533957; /* jle: less or equal (signed <=) */

loc_005338AA: ;
    eax = MEM32(esi + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x120) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005338FA; /* jne: not equal / not zero */

loc_005338B8: ;
    fp_push(MEMF(esi + 0x128)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x12C)); /* fsub dword ptr [esi + 0x12c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005338E1; /* jp: parity */

loc_005338D1: ;
    ecx = MEM32(esi + 0x48);
    fp_pop(); /* fstp st(0) */
    edi = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00533906;

loc_005338E1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6306E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6306e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005339BE; /* jne: not equal / not zero */

loc_005338F2: ;
    eax = MEM32(esi + 0x48);
    edi = MEM32(eax + edx * 4);
    goto loc_00533900;

loc_005338FA: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + edx * 4);

loc_00533900: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00533906: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533940; /* je: equal / zero */

loc_0053390D: ;
    edx = MEM32(0x679680);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x269EC3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    MEM32(0x679680) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00533940; /* jne: not equal / not zero */

loc_0053392F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00533940u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533940: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005339BE; /* je: equal / zero */

loc_00533944: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00533951u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533951: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00533957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005339BE; /* jl: less (signed <) */

loc_0053395B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0053396C; /* jge: greater or equal (signed >=) */

loc_00533962: ;
    eax = MEM32(esi + eax * 4 + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053396C; /* je: equal / zero */

loc_0053396A: ;
    edi = eax;

loc_0053396C: ;
    ecx = 0x679680;
    PUSH32(esp, 0x00533976u); RECOMP_ABI_CALL(0x0043B4E0u, sub_0043B4E0); /* call 0x0043B4E0 */

loc_00533976: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D67C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d67c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005339BE; /* jp: parity */

loc_00533983: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005339A5; /* je: equal / zero */

loc_00533987: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005339A5; /* je: equal / zero */

loc_0053398E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053399Fu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_0053399F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005339A5: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x10C);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005339BEu); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005339BE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005339C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005339D0
 * Original: 0x005339D0 - 0x00533B57 (391 bytes, 123 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005339D0(void)
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

loc_005339D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533B53; /* jne: not equal / not zero */

loc_005339E3: ;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533B53; /* je: equal / zero */

loc_005339EE: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533B53; /* je: equal / zero */

loc_005339FE: ;
    SET_LO8(eax, MEM8(esi + 0x13A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533B53; /* jne: not equal / not zero */

loc_00533A0C: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x4E8);
    edi = ZX8(MEM8(eax + edi + 0x34));
    MEM32(esi + 0x124) = edi;
    edi = MEM32(0x8602E0);
    MEM32(esi + 0x12C) = edi;
    edi = MEM32(ecx + 0x4E8);
    ebx = MEM32(ecx + 0x98);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00533B0B; /* jle: less or equal (signed <=) */

loc_00533A49: ;
    ecx = MEM32(esi + 0x124);
    eax = MEM32(esi + 0x120);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533A9F; /* jne: not equal / not zero */

loc_00533A5B: ;
    fp_push(MEMF(esi + 0x12C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x128)); /* fsub dword ptr [esi + 0x128] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00533A84; /* jp: parity */

loc_00533A74: ;
    eax = MEM32(esi + 0x48);
    fp_pop(); /* fstp st(0) */
    edi = MEM32(eax + edx * 4);
    ebx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00533AAB;

loc_00533A84: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6306E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6306e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00533A9A; /* jne: not equal / not zero */

loc_00533A91: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00533A9A: ;
    ebx = MEM32(esi + 0x6C);
    goto loc_00533AAB;

loc_00533A9F: ;
    eax = MEM32(esi + 0x48);
    edi = MEM32(eax + edx * 4);
    ebx = MEM32(esi + 0x70);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00533AAB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533AF4; /* je: equal / zero */

loc_00533AAF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533AE3; /* je: equal / zero */

loc_00533AB3: ;
    ecx = edi;
    PUSH32(esp, 0x00533ABAu); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_00533ABA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533AE3; /* je: equal / zero */

loc_00533ABE: ;
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM32(0x679680) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00533AF4; /* jne: not equal / not zero */

loc_00533AE3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00533AF4u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533AF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533B51; /* je: equal / zero */

loc_00533AF8: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00533B05u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533B05: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00533B0B: ;
    eax = ZX8(MEM8(eax + 0x34));
    ecx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00533B3B; /* js: sign (negative) */

loc_00533B17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00533B3B; /* jge: greater or equal (signed >=) */

loc_00533B1C: ;
    ecx = MEM32(esi + ecx * 4 + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533B3B; /* je: equal / zero */

loc_00533B24: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00533B35u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533B35: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00533B3B: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + edx * 4);
    PUSH32(esp, 0x41200000);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00533B51u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533B51: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00533B53: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00533B60
 * Original: 0x00533B60 - 0x00533B8A (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533B60: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533B87; /* je: equal / zero */

loc_00533B67: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533B87; /* jl: less (signed <) */

loc_00533B71: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x41000000);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533B87u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533B87: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533B90
 * Original: 0x00533B90 - 0x00533BCB (59 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533B90: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533BC8; /* je: equal / zero */

loc_00533B97: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533BC8; /* jne: not equal / not zero */

loc_00533BA3: ;
    edx = MEM32(0x697B88);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00533BC8; /* je: equal / zero */

loc_00533BB2: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x41000000);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533BC8u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533BC8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533BD0
 * Original: 0x00533BD0 - 0x00533C02 (50 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533BD0: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533BFF; /* je: equal / zero */

loc_00533BD7: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533BFF; /* jne: not equal / not zero */

loc_00533BE3: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00533100(); return; /* tail jmp 0x00533100 */

loc_00533BFF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00533C10
 * Original: 0x00533C10 - 0x00533CCC (188 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533C10(void)
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

loc_00533C10: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(0x679682));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69585C);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00533C47u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00533C47: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D42C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x63d42c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00533CC4; /* je: equal / zero */

loc_00533C60: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64be60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00533C72; /* jne: not equal / not zero */

loc_00533C6D: ;
    edi = 1;

loc_00533C72: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00533C95; /* je: equal / zero */

loc_00533C77: ;
    ecx = MEM32(esi + edi * 4 + 0x8C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00533C8Fu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533C8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00533C95: ;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533CC6; /* je: equal / zero */

loc_00533C9C: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533CC6; /* jl: less (signed <) */

loc_00533CA6: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00533CBEu); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533CBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00533CC4: ;
    fp_pop(); /* fstp st(0) */

loc_00533CC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00533CD0
 * Original: 0x00533CD0 - 0x00533D0B (59 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533CD0: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533D08; /* je: equal / zero */

loc_00533CD7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533D08; /* jne: not equal / not zero */

loc_00533CE3: ;
    edx = MEM32(0x697B88);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00533D08; /* je: equal / zero */

loc_00533CF2: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533D08u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533D08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533D10
 * Original: 0x00533D10 - 0x00533DD9 (201 bytes, 68 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00533D10(void)
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

loc_00533D10: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(0x679682));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x69585C);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00533D47u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00533D47: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x48);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x64be58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00533DD1; /* je: equal / zero */

loc_00533D60: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64be54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00533D72; /* jne: not equal / not zero */

loc_00533D6D: ;
    edi = 1;

loc_00533D72: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533DA5; /* jne: not equal / not zero */

loc_00533D76: ;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x4C), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533DA5; /* je: equal / zero */

loc_00533D7C: ;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533DA5; /* jl: less (signed <) */

loc_00533D86: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00533D9Fu); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533D9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00533DA5: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F000000);
    eax = eax + eax * 2;
    ecx = edi + eax * 2;
    edx = MEM32(esi + ecx * 4 + 0x7C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00533DCBu); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00533DD1: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
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
 * sub_00533DE0
 * Original: 0x00533DE0 - 0x00533E0A (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533DE0: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533E07; /* je: equal / zero */

loc_00533DE7: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533E07; /* jl: less (signed <) */

loc_00533DF1: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533E07u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533E07: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533E10
 * Original: 0x00533E10 - 0x00533E81 (113 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533E7D; /* je: equal / zero */

loc_00533E1A: ;
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533E4B; /* jne: not equal / not zero */

loc_00533E2E: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x140;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00533E47u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533E47: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00533E4B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533E7D; /* je: equal / zero */

loc_00533E4F: ;
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    edx = (uint32_t)(int32_t)SMEM8(eax + ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00533E5Fu); RECOMP_ABI_CALL(0x0053D600u, sub_0053D600); /* call 0x0053D600 */

loc_00533E5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533E7D; /* je: equal / zero */

loc_00533E66: ;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00533E7Du); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00533E7D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533E90
 * Original: 0x00533E90 - 0x00533EBA (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533E90: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533EB7; /* je: equal / zero */

loc_00533E97: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533EB7; /* jl: less (signed <) */

loc_00533EA1: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533EB7u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533EB7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533EC0
 * Original: 0x00533EC0 - 0x00533EEC (44 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533EC0: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533EE9; /* je: equal / zero */

loc_00533EC7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533EE9; /* jne: not equal / not zero */

loc_00533ED3: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x160;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533EE9u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533EE9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533EF0
 * Original: 0x00533EF0 - 0x00533F1C (44 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533EF0: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533F19; /* je: equal / zero */

loc_00533EF7: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533F19; /* jne: not equal / not zero */

loc_00533F03: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40800000);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x170;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533F19u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533F19: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533F20
 * Original: 0x00533F20 - 0x00533F4A (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533F20: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533F47; /* je: equal / zero */

loc_00533F27: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00533F47; /* jl: less (signed <) */

loc_00533F31: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533F47u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533F47: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533F50
 * Original: 0x00533F50 - 0x00533F7C (44 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00533F50: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00533F79; /* je: equal / zero */

loc_00533F57: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533F79; /* jne: not equal / not zero */

loc_00533F63: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40400000);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x190;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00533F79u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00533F79: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00533F80
 * Original: 0x00533F80 - 0x00534024 (164 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00533F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00533F80: ;
    _fa = (uint32_t)(MEM16(ecx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x4C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534021; /* je: equal / zero */

loc_00533F8B: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00534021; /* jl: less (signed <) */

loc_00533F99: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533FBE; /* jne: not equal / not zero */

loc_00533FA2: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00533100(); return; /* tail jmp 0x00533100 */

loc_00533FBE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00533FDF; /* jne: not equal / not zero */

loc_00533FC3: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = 0x40000000;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00533100(); return; /* tail jmp 0x00533100 */

loc_00533FDF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534000; /* jne: not equal / not zero */

loc_00533FE4: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = 0x40400000;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00533100(); return; /* tail jmp 0x00533100 */

loc_00534000: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534021; /* jne: not equal / not zero */

loc_00534005: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x1D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = 0x40800000;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00533100(); return; /* tail jmp 0x00533100 */

loc_00534021: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00534030
 * Original: 0x00534030 - 0x005340D9 (169 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX16(MEM16(esi + 0x4C));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005340D4; /* jge: greater or equal (signed >=) */

loc_00534044: ;
    MEM32(esi + 0x10C) = edi;
    edx = MEM32(0x698624);
    eax = MEM32(edx + 8);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42C);
    ecx = MEM32(ecx + eax + 0x1C);
    edx = MEM32(ecx + 0x48);
    _fa = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1C), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x110) = LO8(eax);
    eax = MEM32(edi * 4 + 0x6C365C);
    ecx = MEM32(0x6C32C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C3898);
    PUSH32(esp, 0x00534089u); RECOMP_ABI_CALL(0x0053BBA0u, sub_0053BBA0); /* call 0x0053BBA0 */

loc_00534089: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005340A9; /* je: equal / zero */

loc_0053408D: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + edi * 4);
    ecx = MEM32(eax + 0x294);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x290;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005340B4; /* jne: not equal / not zero */

loc_005340A2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005340B4; /* jne: not equal / not zero */

loc_005340A9: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(edx + edi * 4);
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x240;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005340B4: ;
    ecx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x144) = eax;
    PUSH32(esp, 0x005340C6u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005340C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005340D4; /* je: equal / zero */

loc_005340CA: ;
    MEM32(esi + 0x144) = 0;

loc_005340D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005340E0
 * Original: 0x005340E0 - 0x00534108 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005340E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005340E0: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00534107; /* jl: less (signed <) */

loc_005340EA: ;
    edx = MEM32(ecx + 0x48);
    MEM8(ecx + 0x13B) = 0;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x40000000);
    _fb = (uint32_t)(0x250) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x250;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534107u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00534107: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00534110
 * Original: 0x00534110 - 0x00534138 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534110: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00534137; /* jl: less (signed <) */

loc_0053411A: ;
    edx = MEM32(ecx + 0x48);
    MEM8(ecx + 0x13B) = 0;
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x260;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534137u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00534137: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00534140
 * Original: 0x00534140 - 0x005341B2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534140: ;
    eax = MEM32(ecx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + 0x13B) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_005341B1; /* jl: less (signed <) */

loc_00534151: ;
    edx = MEM32(0x697B88);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005341B1; /* je: equal / zero */

loc_00534160: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534174; /* je: equal / zero */

loc_00534167: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00534173u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_00534173: ;
    esp += 4; return; /* ret */

loc_00534174: ;
    edx = MEM32(0x698624);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053418F; /* jle: less or equal (signed <=) */

loc_00534182: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005341A5;

loc_0053418F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + eax * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_005341A0; /* je: equal / zero */

loc_00534199: ;
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x310;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005341A5;

loc_005341A0: ;
    _fb = (uint32_t)(0x320) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x320;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005341A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005341B1; /* je: equal / zero */

loc_005341A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005341B1u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005341B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005341C0
 * Original: 0x005341C0 - 0x005341F6 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005341C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005341C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005341F4; /* jl: less (signed <) */

loc_005341CD: ;
    ecx = MEM32(esi + 0x48);
    MEM8(esi + 0x13B) = 0;
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x270) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x270;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005341EAu); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005341EA: ;
    MEM32(esi + 0x10C) = 0xFFFFFFFFu;

loc_005341F4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00534200
 * Original: 0x00534200 - 0x0053436F (367 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534200(void)
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

loc_00534200: ;
    eax = MEM32(0x697B88);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(esi + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x13B) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_00534369; /* jl: less (signed <) */

loc_00534224: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0053422Du); RECOMP_ABI_CALL(0x004857C0u, sub_004857C0); /* call 0x004857C0 */

loc_0053422D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534369; /* je: equal / zero */

loc_00534235: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534369; /* je: equal / zero */

loc_0053423D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x28) = 0x64;
    MEM32(esp + 0x24) = 0x47C34F80;
    MEM32(esp + 0x20) = 0x47C34F80;
    PUSH32(esp, 0x00534275u); RECOMP_ABI_CALL(0x00532EF0u, sub_00532EF0); /* call 0x00532EF0 */

loc_00534275: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053429F; /* je: equal / zero */

loc_0053427D: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + 0x10C);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2A0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00534299u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00534299: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0053429F: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005342BA; /* je: equal / zero */

loc_005342A6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005342B4u); RECOMP_ABI_CALL(0x005317B0u, sub_005317B0); /* call 0x005317B0 */

loc_005342B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005342BA: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00534340; /* jne: not equal / not zero */

loc_005342CD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005342F0; /* jp: parity */

loc_005342DA: ;
    eax = MEM32(esi + 0x10C);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x2B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2B0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0053430F;

loc_005342F0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D420)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d420] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053431E; /* jne: not equal / not zero */

loc_005342FD: ;
    edx = MEM32(esi + 0x10C);
    eax = MEM32(esi + 0x48);
    edi = MEM32(eax + edx * 4);
    _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053430F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053431E; /* je: equal / zero */

loc_00534313: ;
    ecx = edi;
    PUSH32(esp, 0x0053431Au); RECOMP_ABI_CALL(0x005316F0u, sub_005316F0); /* call 0x005316F0 */

loc_0053431A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053435F; /* jne: not equal / not zero */

loc_0053431E: ;
    ecx = MEM32(esi + 0x10C);
    edx = MEM32(esi + 0x48);
    edi = MEM32(edx + ecx * 4);
    _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2D0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0053433Au); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_0053433A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00534340: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D51C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d51c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0053435F; /* jne: not equal / not zero */

loc_0053434D: ;
    eax = MEM32(esi + 0x10C);
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x2E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0053435F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00534369u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_00534369: ;
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
 * sub_00534370
 * Original: 0x00534370 - 0x005343E7 (119 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534370: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005343E1; /* jl: less (signed <) */

loc_00534381: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005343A1u); RECOMP_ABI_CALL(0x00532EF0u, sub_00532EF0); /* call 0x00532EF0 */

loc_005343A1: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005343E1; /* jne: not equal / not zero */

loc_005343A9: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005343E1; /* jle: less or equal (signed <=) */

loc_005343B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005343E1; /* jle: less or equal (signed <=) */

loc_005343B8: ;
    edx = MEM32(esi + 0x48);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(eax + 0x2F4);
    _fb = (uint32_t)(0x2F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005343D4; /* jne: not equal / not zero */

loc_005343CD: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005343E1; /* je: equal / zero */

loc_005343D4: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005343E1u); RECOMP_ABI_CALL(0x00533100u, sub_00533100); /* call 0x00533100 */

loc_005343E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005343F0
 * Original: 0x005343F0 - 0x0053440E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005343F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005343F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005343F8u); RECOMP_ABI_CALL(0x00533210u, sub_00533210); /* call 0x00533210 */

loc_005343F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00534408; /* je: equal / zero */

loc_005343FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00534405u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00534405: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00534408: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00534410
 * Original: 0x00534410 - 0x0053441D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00534410: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053441C; /* je: equal / zero */

loc_00534417: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

loc_0053441C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00534420
 * Original: 0x00534420 - 0x00534439 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534420: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534430; /* je: equal / zero */

loc_0053442A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00534430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053442Eu); } /* indirect call */
    }

loc_00534430: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00534440
 * Original: 0x00534440 - 0x00534458 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534440(void)
{

loc_00534440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00534448u); RECOMP_ABI_CALL(0x00534410u, sub_00534410); /* call 0x00534410 */

loc_00534448: ;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM32(esi + 0x10) = 0x3FC00000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00534460
 * Original: 0x00534460 - 0x005344D3 (115 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x64BE64);
    PUSH32(esp, 0x38);
    esi = ecx;
    PUSH32(esp, 0x00534472u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00534472: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534482; /* je: equal / zero */

loc_00534479: ;
    ecx = eax;
    PUSH32(esp, 0x00534480u); RECOMP_ABI_CALL(0x005D5C30u, sub_005D5C30); /* call 0x005D5C30 */

loc_00534480: ;
    goto loc_00534484;

loc_00534482: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00534484: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00534498u); RECOMP_ABI_CALL(0x005D5800u, sub_005D5800); /* call 0x005D5800 */

loc_00534498: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005344C0; /* jbe: below or equal (unsigned <=) */

loc_005344A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_005344A5: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005344B6; /* je: equal / zero */

loc_005344AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005344B6u); RECOMP_ABI_CALL(0x0052E470u, sub_0052E470); /* call 0x0052E470 */

loc_005344B6: ;
    ecx = ZX16(MEM16(esi + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005344A5; /* jl: less (signed <) */

loc_005344BF: ;
    POP32(esp, ebx);

loc_005344C0: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM32(esi + 0x10) = 0x3FC00000;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005344E0
 * Original: 0x005344E0 - 0x00534654 (372 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005344E0(void)
{
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

loc_005344E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053464F; /* je: equal / zero */

loc_005344F1: ;
    SET_LO8(eax, MEM8(0x6C3421));
    edx = MEM32(0x6C3424);
    ecx = MEM32(0x69585C);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0x3F800000;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534517u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00534517: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00534520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053451Du); } /* indirect call */
    }

loc_00534520: ;
    fp_push(MEMF(eax + 8)); /* fld float */
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
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x643928)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x643928] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00534586; /* jne: not equal / not zero */

loc_00534551: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64BE58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64be58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0053457E; /* jp: parity */

loc_00534562: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x643928)); /* fsub dword ptr [0x643928] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE70)); /* fmul dword ptr [0x64be70] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00534586;

loc_0053457E: ;
    MEM32(esp + 0xC) = 0x3E800000;

loc_00534586: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x69C7D0);
    ecx = edi;
    PUSH32(esp, 0x00534594u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_00534594: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0053459Fu); RECOMP_ABI_CALL(0x004F9EB0u, sub_004F9EB0); /* call 0x004F9EB0 */

loc_0053459F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_0053463D; /* jl: less (signed <) */

loc_005345A8: ;
    ecx = MEM32(0x69C7D0);
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x3C);
    edx = ZX16(MEM16(eax + edx * 4 + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, 0x005345BFu); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_005345BF: ;
    edi = ZX8(MEM8(eax + 4));
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0053460F; /* je: equal / zero */

loc_005345CA: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x632600)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x632600] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_005345EC; /* je: equal / zero */

loc_005345DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_005345EC; /* jl: less (signed <) */

loc_005345DE: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0053463D;

loc_005345EC: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = edi;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005345FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005345FBu); } /* indirect call */
    }

loc_005345FE: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053463D; /* je: equal / zero */

loc_00534607: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    goto loc_00534638;

loc_0053460F: ;
    eax = MEM32(esi);
    MEM32(esi + 0x10) = 0;
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0053463D; /* je: equal / zero */

loc_0053461E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00534626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534623u); } /* indirect call */
    }

loc_00534626: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0053463D; /* jne: not equal / not zero */

loc_0053462A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi);
    ecx = MEM32(edx + ecx * 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);

loc_00534638: ;
    PUSH32(esp, 0x0053463Du); RECOMP_ABI_CALL(0x0052E520u, sub_0052E520); /* call 0x0052E520 */

loc_0053463D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0053464F; /* je: equal / zero */

loc_00534645: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0053464Fu); RECOMP_ABI_CALL(0x005D5730u, sub_005D5730); /* call 0x005D5730 */

loc_0053464F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00534660
 * Original: 0x00534660 - 0x00534732 (210 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00534660: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = ebp;
    MEM16(esi + 4) = LO16(ebp);
    MEM16(esi + 6) = LO16(ebp);
    MEM32(esi + 8) = ebp;
    eax = MEM32(0x6C263C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x208);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053468C; /* jle: less or equal (signed <=) */

loc_00534686: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0053468Cu); RECOMP_ABI_CALL(0x0052E130u, sub_0052E130); /* call 0x0052E130 */

loc_0053468C: ;
    MEM16(esi + 4) = LO16(edi);
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x208);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0053471F; /* jle: less or equal (signed <=) */

loc_005346A1: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005346A4: ;
    ecx = MEM32(eax + 0x20C);
    edx = MEM32(ecx + ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64BE74);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005346BFu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005346BF: ;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x64BE64);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x005346CDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005346CD: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005346DD; /* je: equal / zero */

loc_005346D4: ;
    ecx = eax;
    PUSH32(esp, 0x005346DBu); RECOMP_ABI_CALL(0x0052F090u, sub_0052F090); /* call 0x0052F090 */

loc_005346DB: ;
    goto loc_005346DF;

loc_005346DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005346DF: ;
    ecx = MEM32(esi);
    MEM32(ecx + edi * 4) = eax;
    edx = MEM32(esi);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x005346F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005346F0u); } /* indirect call */
    }

loc_005346F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0053470B; /* jne: not equal / not zero */

loc_005346F7: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00534706; /* je: equal / zero */

loc_00534700: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00534706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00534704u); } /* indirect call */
    }

loc_00534706: ;
    eax = MEM32(esi);
    MEM32(eax + edi * 4) = ebp;

loc_0053470B: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x208);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005346A4; /* jl: less (signed <) */

loc_0053471E: ;
    POP32(esp, ebx);

loc_0053471F: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00534740
 * Original: 0x00534740 - 0x0053479C (92 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00534740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00534740: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00534771; /* jbe: below or equal (unsigned <=) */

loc_0053474C: ;
    /* nop */

loc_00534750: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053475F; /* je: equal / zero */

loc_00534759: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053475Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053475Du); } /* indirect call */
    }

loc_0053475F: ;
    eax = MEM32(esi);
    MEM32(eax + edi * 4) = 0;
    ecx = ZX16(MEM16(esi + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00534750; /* jl: less (signed <) */

loc_00534771: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0053477E; /* je: equal / zero */

loc_00534778: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0053477Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0053477Cu); } /* indirect call */
    }

loc_0053477E: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64BE7C);
    PUSH32(esp, 0x0053478Eu); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0053478E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00534796u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00534796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005347A0
 * Original: 0x005347A0 - 0x005347AB (11 bytes, 3 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347A0(void)
{

loc_005347A0: ;
    PUSH32(esp, 0x64BEA4);
    PUSH32(esp, 0x005347AAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005347B0
 * Original: 0x005347B0 - 0x005347BB (11 bytes, 3 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347B0(void)
{

loc_005347B0: ;
    PUSH32(esp, 0x64BEB0);
    PUSH32(esp, 0x005347BAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005347C0
 * Original: 0x005347C0 - 0x005347CB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347C0(void)
{

loc_005347C0: ;
    PUSH32(esp, 0x64BEBC);
    PUSH32(esp, 0x005347CAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005347D0
 * Original: 0x005347D0 - 0x005347DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005347D0(void)
{

loc_005347D0: ;
    PUSH32(esp, 0x64BEC8);
    PUSH32(esp, 0x005347DAu); RECOMP_ABI_CALL(0x005348E0u, sub_005348E0); /* call 0x005348E0 */

loc_005347DA: ;
    esp += 4; return; /* ret */

}
