/**
 * Midnight Club II (PC) - Recompiled code chunk 36
 * Functions: 250 (0x005D6650 - 0x005DD180)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005D6650
 * Original: 0x005D6650 - 0x005D66B7 (103 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D6658u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_005D6658: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(esp + 0x10));
    eax = 0x3F800000;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x654E24;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1D) = LO8(edx);
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x1F) = LO8(eax);
    MEM32(esi + 0x20) = 1;
    eax = MEM32(0x6CE514);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x654E14);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, ecx);
    MEM32(0x6CE514) = esi;
    PUSH32(esp, 0x005D66ABu); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_005D66AB: ;
    MEM32(esi + 0x28) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D66C0
 * Original: 0x005D66C0 - 0x005D66FF (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D66C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D66C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    MEM32(esi) = 0x654E24;
    PUSH32(esp, 0x005D66D2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D66D2: ;
    ecx = MEM32(0x6CE514);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0x6CE514;
    if (CMP_EQ(_fa, _fb)) goto loc_005D66F2; /* je: equal / zero */

loc_005D66E4: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D66F2; /* je: equal / zero */

loc_005D66EA: ;
    eax = ecx + 0x24;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D66E4; /* jne: not equal / not zero */

loc_005D66F2: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax) = ecx;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_005D6700
 * Original: 0x005D6700 - 0x005D6719 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6700(void)
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

loc_005D6700: ;
    SET_LO8(eax, MEM8(ecx + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6715; /* je: equal / zero */

loc_005D6707: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6715; /* je: equal / zero */

loc_005D670E: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

loc_005D6715: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D6720
 * Original: 0x005D6720 - 0x005D6794 (116 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6720(void)
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

loc_005D6720: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6731; /* je: equal / zero */

loc_005D672A: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6784; /* jne: not equal / not zero */

loc_005D6731: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x005D6738u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D6735u); } /* indirect call */
    }

loc_005D6738: ;
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6772; /* je: equal / zero */

loc_005D6742: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x654E10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x654e10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005D6762; /* jp: parity */

loc_005D674F: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005D6762: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x1E) = LO8(eax);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005D6772: ;
    eax = MEM32(esi + 0x18);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 8);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005D6784: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esp + 8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D67A0
 * Original: 0x005D67A0 - 0x005D67AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D67A0(void)
{

loc_005D67A0: ;
    MEM32(0x6CE514) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005D67B0
 * Original: 0x005D67B0 - 0x005D6801 (81 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D67B0(void)
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

loc_005D67B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1F), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D67FC; /* je: equal / zero */

loc_005D67BD: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x1F) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005D67FC; /* je: equal / zero */

loc_005D67C7: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x18) = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x005D67D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D67D4u); } /* indirect call */
    }

loc_005D67D7: ;
    MEMF(esi + 0xC) = (float)fp_top(); /* fst */
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D67F7; /* je: equal / zero */

loc_005D67E1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x654E10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x654e10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005D67F9; /* jp: parity */

loc_005D67EE: ;
    MEM8(esi + 0x1E) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005D67F7: ;
    fp_pop(); /* fstp st(0) */

loc_005D67F9: ;
    MEM8(esi + 0x1E) = LO8(ebx);

loc_005D67FC: ;
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
 * sub_005D6810
 * Original: 0x005D6810 - 0x005D6832 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6810: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6CE514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6830; /* je: equal / zero */

loc_005D681B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_005D6820: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005D6828u); RECOMP_ABI_CALL(0x005D67B0u, sub_005D67B0); /* call 0x005D67B0 */

loc_005D6828: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6820; /* jne: not equal / not zero */

loc_005D682F: ;
    POP32(esp, edi);

loc_005D6830: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D6840
 * Original: 0x005D6840 - 0x005D685B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6840: ;
    eax = MEM32(0x6CE514);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D685A; /* je: equal / zero */

loc_005D684B: ;
    goto loc_005D6850;

    /* nop */

loc_005D6850: ;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6850; /* jne: not equal / not zero */

loc_005D685A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6860
 * Original: 0x005D6860 - 0x005D6891 (49 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6860: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6CE514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D688D; /* je: equal / zero */

loc_005D686B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_005D6870: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x005D687Du); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_005D687D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005D6885u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D6882u); } /* indirect call */
    }

loc_005D6885: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6870; /* jne: not equal / not zero */

loc_005D688C: ;
    POP32(esp, edi);

loc_005D688D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D68A0
 * Original: 0x005D68A0 - 0x005D68EF (79 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D68A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D68A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x644EB8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005D68BEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005D68BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x654E5C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x005D68D4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005D68D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1D;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x654E4C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x005D68EAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005D68EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D68F0
 * Original: 0x005D68F0 - 0x005D690E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D68F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D68F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D68F8u); RECOMP_ABI_CALL(0x005D66C0u, sub_005D66C0); /* call 0x005D66C0 */

loc_005D68F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D6908; /* je: equal / zero */

loc_005D68FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D6905u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D6905: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D6908: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D6910
 * Original: 0x005D6910 - 0x005D6924 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6910: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_005D6720(); return; /* tail jmp 0x005D6720 */

}

/**
 * sub_005D6930
 * Original: 0x005D6930 - 0x005D6966 (54 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6930(void)
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

loc_005D6930: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D694F; /* je: equal / zero */

loc_005D6941: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005D6963; /* jnp: not parity */

loc_005D694F: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_005D6720(); return; /* tail jmp 0x005D6720 */

loc_005D6963: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D6970
 * Original: 0x005D6970 - 0x005D6994 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6970: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6CE514);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6992; /* je: equal / zero */

loc_005D697B: ;
    goto loc_005D6980;

    /* nop */

loc_005D6980: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D698Bu); RECOMP_ABI_CALL(0x005D6910u, sub_005D6910); /* call 0x005D6910 */

loc_005D698B: ;
    esi = MEM32(esi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6980; /* jne: not equal / not zero */

loc_005D6992: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D69A0
 * Original: 0x005D69A0 - 0x005D69B1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D69A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D69A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x654B60;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005D69C0
 * Original: 0x005D69C0 - 0x005D69E9 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D69C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D69C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, edi);
    MEM16(ecx + 4) = 0;
    edi = eax + 1;

loc_005D69D4: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D69D4; /* jne: not equal / not zero */

loc_005D69DB: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D69E4u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_005D69E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D69F0
 * Original: 0x005D69F0 - 0x005D6A24 (52 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D69F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D69F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = esi + 0xC;
    eax = edi;
    MEM16(ecx + 4) = 0;
    ebx = eax + 1;

loc_005D6A07: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6A07; /* jne: not equal / not zero */

loc_005D6A0E: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D6A17u); RECOMP_ABI_CALL(0x00606340u, sub_00606340); /* call 0x00606340 */

loc_005D6A17: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005D6A30
 * Original: 0x005D6A30 - 0x005D6A3F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A30(void)
{

loc_005D6A30: ;
    eax = ecx;
    MEM32(eax) = 0x654E68;
    MEM32(eax + 4) = eax;
    MEM32(eax + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6A40
 * Original: 0x005D6A40 - 0x005D6A4E (14 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A40(void)
{

loc_005D6A40: ;
    PUSH32(esp, 0x654EB8);
    PUSH32(esp, 0x005D6A4Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D6A4A: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005D6A50
 * Original: 0x005D6A50 - 0x005D6A53 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A50(void)
{

loc_005D6A50: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005D6A60
 * Original: 0x005D6A60 - 0x005D6A6C (12 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A60(void)
{

loc_005D6A60: ;
    PUSH32(esp, 0x654ED4);
    PUSH32(esp, 0x005D6A6Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D6A6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D6A70
 * Original: 0x005D6A70 - 0x005D6A7C (12 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A70(void)
{

loc_005D6A70: ;
    PUSH32(esp, 0x654EF0);
    PUSH32(esp, 0x005D6A7Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D6A7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D6A80
 * Original: 0x005D6A80 - 0x005D6A83 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6A80(void)
{

loc_005D6A80: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D6A90
 * Original: 0x005D6A90 - 0x005D6AA0 (16 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005D6A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6A90: ;
    PUSH32(esp, 0x654F10);
    PUSH32(esp, 0x005D6A9Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D6A9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D6AA0
 * Original: 0x005D6AA0 - 0x005D6AA4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6AA0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D6AB0
 * Original: 0x005D6AB0 - 0x005D6AE3 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6AB0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    MEM32(eax) = 0x654E68;
    if (CMP_EQ(_fa, _fb)) goto loc_005D6AD6; /* je: equal / zero */

loc_005D6AC0: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005D6ACD; /* je: equal / zero */

loc_005D6ACA: ;
    MEM32(ecx + 8) = eax;

loc_005D6ACD: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

loc_005D6AD6: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D6AF0
 * Original: 0x005D6AF0 - 0x005D6B11 (33 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6AF0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = 0x654E68;
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B03; /* je: equal / zero */

loc_005D6AFD: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;

loc_005D6B03: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B10; /* je: equal / zero */

loc_005D6B0A: ;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_005D6B10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6B20
 * Original: 0x005D6B20 - 0x005D6B61 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6B20: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6B2E; /* jne: not equal / not zero */

loc_005D6B2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D6B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B60; /* je: equal / zero */

loc_005D6B32: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x6CE56C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B51; /* je: equal / zero */

loc_005D6B48: ;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x6CE56C);

loc_005D6B51: ;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x6CE568;
    MEM32(0x6CE56C) = eax;

loc_005D6B60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6B70
 * Original: 0x005D6B70 - 0x005D6BA9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6B70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B81; /* je: equal / zero */

loc_005D6B7B: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_005D6B81: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B8E; /* je: equal / zero */

loc_005D6B88: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_005D6B8E: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6B9C; /* je: equal / zero */

loc_005D6B99: ;
    MEM32(edx + 8) = eax;

loc_005D6B9C: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6BB0
 * Original: 0x005D6BB0 - 0x005D6BD0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6BB0(void)
{

loc_005D6BB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005D6BBDu); RECOMP_ABI_CALL(0x005D6AB0u, sub_005D6AB0); /* call 0x005D6AB0 */

loc_005D6BBD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x654F38;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005D6BD0
 * Original: 0x005D6BD0 - 0x005D6C29 (89 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6BD0: ;
    eax = MEM32(0x6CE2E4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6C28; /* je: equal / zero */

loc_005D6BDC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D6C26; /* jle: less or equal (signed <=) */

loc_005D6BE8: ;
    PUSH32(esp, esi);
    /* nop */

loc_005D6BF0: ;
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x654F88);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x005D6C01u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D6C01: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6C20; /* je: equal / zero */

loc_005D6C0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D6C10u); RECOMP_ABI_CALL(0x005D8380u, sub_005D8380); /* call 0x005D8380 */

loc_005D6C10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE52C);
    ecx = esi;
    PUSH32(esp, 0x005D6C20u); RECOMP_ABI_CALL(0x005D6BB0u, sub_005D6BB0); /* call 0x005D6BB0 */

loc_005D6C20: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D6BF0; /* jl: less (signed <) */

loc_005D6C25: ;
    POP32(esp, esi);

loc_005D6C26: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005D6C28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6C30
 * Original: 0x005D6C30 - 0x005D6C59 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6C30: ;
    ecx = MEM32(0x6CE530);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE52C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE52C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6C58; /* je: equal / zero */

loc_005D6C3E: ;
    edi = edi;

loc_005D6C40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6C50; /* je: equal / zero */

loc_005D6C44: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005D6C4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D6C48u); } /* indirect call */
    }

loc_005D6C4A: ;
    ecx = MEM32(0x6CE530);

loc_005D6C50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE52C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE52C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6C40; /* jne: not equal / not zero */

loc_005D6C58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6C60
 * Original: 0x005D6C60 - 0x005D6C91 (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6CE52C);
    PUSH32(esp, 0x005D6C6Bu); RECOMP_ABI_CALL(0x005D6B20u, sub_005D6B20); /* call 0x005D6B20 */

loc_005D6C6B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6C8D; /* jne: not equal / not zero */

loc_005D6C74: ;
    eax = MEM32(0x6CE2E4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6C8D; /* je: equal / zero */

loc_005D6C80: ;
    PUSH32(esp, 0x654F98);
    PUSH32(esp, 0x005D6C8Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D6C8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D6C8D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D6CA0
 * Original: 0x005D6CA0 - 0x005D6CAF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6CA0: ;
    PUSH32(esp, 0x6CE52C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D6CABu); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D6CAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D6CB0
 * Original: 0x005D6CB0 - 0x005D6D96 (230 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6CB0(void)
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

loc_005D6CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005D6CDC; /* jne: not equal / not zero */

loc_005D6CC1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x005D6CC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D6CC5u); } /* indirect call */
    }

loc_005D6CC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x654FD8);
    PUSH32(esp, 0x005D6CD3u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D6CD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_005D6CDC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x20);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    PUSH32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005D6D51; /* jnp: not parity */

loc_005D6CF2: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FD0)); /* fmul dword ptr [0x654fd0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FCC)); /* fmul dword ptr [0x654fcc] */
    PUSH32(esp, 0x005D6D0Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D6D0B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FC8)); /* fmul dword ptr [0x654fc8] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D6D1Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D6D1B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FC4)); /* fmul dword ptr [0x654fc4] */
    edx = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D6D32u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D6D32: ;
    edx = MEM32(esi + 0x10);
    ecx = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D6D4Bu); RECOMP_ABI_CALL(0x005D8550u, sub_005D8550); /* call 0x005D8550 */

loc_005D6D4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_005D6D51: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FC8)); /* fmul dword ptr [0x654fc8] */
    PUSH32(esp, 0x005D6D60u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D6D60: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FC4)); /* fmul dword ptr [0x654fc4] */
    edx = 0x40;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D6D77u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D6D77: ;
    edx = MEM32(esi + 0x10);
    ecx = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D6D90u); RECOMP_ABI_CALL(0x005D84A0u, sub_005D84A0); /* call 0x005D84A0 */

loc_005D6D90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D6DA0
 * Original: 0x005D6DA0 - 0x005D6DA8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6DA0: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8610(); return; /* tail jmp 0x005D8610 */

}

/**
 * sub_005D6DB0
 * Original: 0x005D6DB0 - 0x005D6DB8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6DB0: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8630(); return; /* tail jmp 0x005D8630 */

}

/**
 * sub_005D6DC0
 * Original: 0x005D6DC0 - 0x005D6DDD (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005D6DC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005D6DC0: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FD0)); /* fmul dword ptr [0x654fd0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005D6DDAu); RECOMP_ABI_CALL(0x005D8670u, sub_005D8670); /* call 0x005D8670 */

loc_005D6DDA: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D6DE0
 * Original: 0x005D6DE0 - 0x005D6E48 (104 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6DE0(void)
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

loc_005D6DE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005D6E09; /* jp: parity */

loc_005D6DF1: ;
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = 0;
    edx = MEM32(esp + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_005D86B0(); return; /* tail jmp 0x005D86B0 */

loc_005D6E09: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005D6E32; /* jne: not equal / not zero */

loc_005D6E1A: ;
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = 0x3F800000;
    edx = MEM32(esp + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_005D86B0(); return; /* tail jmp 0x005D86B0 */

loc_005D6E32: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    edx = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_005D86B0(); return; /* tail jmp 0x005D86B0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D6E50
 * Original: 0x005D6E50 - 0x005D6E7E (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6E50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005D6E66; /* jge: greater or equal (signed >=) */

loc_005D6E58: ;
    ecx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00406990(); return; /* tail jmp 0x00406990 */

loc_005D6E66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x167) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x167 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D6E72; /* jle: less or equal (signed <=) */

loc_005D6E6D: ;
    eax = 0x167;

loc_005D6E72: ;
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00406990(); return; /* tail jmp 0x00406990 */

}

/**
 * sub_005D6E80
 * Original: 0x005D6E80 - 0x005D6E88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6E80: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D86F0(); return; /* tail jmp 0x005D86F0 */

}

/**
 * sub_005D6E90
 * Original: 0x005D6E90 - 0x005D6EAC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6E90(void)
{

loc_005D6E90: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D6EA9u); RECOMP_ABI_CALL(0x005D8730u, sub_005D8730); /* call 0x005D8730 */

loc_005D6EA9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D6EB0
 * Original: 0x005D6EB0 - 0x005D6ECC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6EB0(void)
{

loc_005D6EB0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D6EC9u); RECOMP_ABI_CALL(0x005D8730u, sub_005D8730); /* call 0x005D8730 */

loc_005D6EC9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D6ED0
 * Original: 0x005D6ED0 - 0x005D6ED8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6ED0: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D87A0(); return; /* tail jmp 0x005D87A0 */

}

/**
 * sub_005D6EE0
 * Original: 0x005D6EE0 - 0x005D6F04 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D6EEBu); RECOMP_ABI_CALL(0x005D87F0u, sub_005D87F0); /* call 0x005D87F0 */

loc_005D6EEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6EFD; /* jne: not equal / not zero */

loc_005D6EEF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D6EF7u); RECOMP_ABI_CALL(0x005D8810u, sub_005D8810); /* call 0x005D8810 */

loc_005D6EF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6EFD; /* jne: not equal / not zero */

loc_005D6EFB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D6EFD: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D6F10
 * Original: 0x005D6F10 - 0x005D6F18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D6F10: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8440(); return; /* tail jmp 0x005D8440 */

}

/**
 * sub_005D6F20
 * Original: 0x005D6F20 - 0x005D6F4B (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6F20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005D6F2Du); RECOMP_ABI_CALL(0x005D6AB0u, sub_005D6AB0); /* call 0x005D6AB0 */

loc_005D6F2D: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x18) = LO8(eax);
    MEM32(esi) = 0x655020;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005D6F50
 * Original: 0x005D6F50 - 0x005D6FC9 (121 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6F50: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x654F88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D6F64u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_005D6F64: ;
    ecx = MEM32(0x6CE2E4);
    MEM32(0x6CE518) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6FC8; /* je: equal / zero */

loc_005D6F79: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D6FC6; /* jle: less or equal (signed <=) */

loc_005D6F85: ;
    PUSH32(esp, esi);
    goto loc_005D6F90;

    /* nop */
    /* nop */

loc_005D6F90: ;
    PUSH32(esp, 0x136);
    PUSH32(esp, 0x654F88);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x005D6FA1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D6FA1: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6FC0; /* je: equal / zero */

loc_005D6FAA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D6FB0u); RECOMP_ABI_CALL(0x005D88C0u, sub_005D88C0); /* call 0x005D88C0 */

loc_005D6FB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE520);
    ecx = esi;
    PUSH32(esp, 0x005D6FC0u); RECOMP_ABI_CALL(0x005D6F20u, sub_005D6F20); /* call 0x005D6F20 */

loc_005D6FC0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D6F90; /* jl: less (signed <) */

loc_005D6FC5: ;
    POP32(esp, esi);

loc_005D6FC6: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005D6FC8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D6FD0
 * Original: 0x005D6FD0 - 0x005D7049 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D6FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D6FD0: ;
    ecx = MEM32(0x6CE524);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE520 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6FF8; /* je: equal / zero */

loc_005D6FDE: ;
    edi = edi;

loc_005D6FE0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D6FF0; /* je: equal / zero */

loc_005D6FE4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005D6FEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D6FE8u); } /* indirect call */
    }

loc_005D6FEA: ;
    ecx = MEM32(0x6CE524);

loc_005D6FF0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D6FE0; /* jne: not equal / not zero */

loc_005D6FF8: ;
    ecx = MEM32(0x6CE554);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE550) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE550 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D701E; /* je: equal / zero */

loc_005D7006: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7016; /* je: equal / zero */

loc_005D700A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005D7010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D700Eu); } /* indirect call */
    }

loc_005D7010: ;
    ecx = MEM32(0x6CE554);

loc_005D7016: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE550) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE550 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7006; /* jne: not equal / not zero */

loc_005D701E: ;
    ecx = MEM32(0x6CE548);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE544) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE544 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7048; /* je: equal / zero */

loc_005D702C: ;
    /* nop */

loc_005D7030: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7040; /* je: equal / zero */

loc_005D7034: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005D703Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7038u); } /* indirect call */
    }

loc_005D703A: ;
    ecx = MEM32(0x6CE548);

loc_005D7040: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE544) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE544 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7030; /* jne: not equal / not zero */

loc_005D7048: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7050
 * Original: 0x005D7050 - 0x005D717F (303 bytes, 95 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x6CE554);
    PUSH32(esp, edi);
    edi = 0x6CE550;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7179; /* je: equal / zero */

loc_005D7068: ;
    PUSH32(esp, ebp);
    /* nop */

loc_005D7070: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7084; /* jne: not equal / not zero */

loc_005D7078: ;
    MEM32(esi + 0x14) = 2;
    goto loc_005D7165;

loc_005D7084: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D70D5; /* jne: not equal / not zero */

loc_005D7089: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_005D70B7; /* je: equal / zero */

loc_005D7093: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = ebp;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x005D70A1u); RECOMP_ABI_CALL(0x005D4400u, sub_005D4400); /* call 0x005D4400 */

loc_005D70A1: ;
    PUSH32(esp, 0x6CE520);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = ebp;
    PUSH32(esp, 0x005D70AFu); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D70AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D7169;

loc_005D70B7: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(esi + 0xC);
    eax = esi + 0x1A;
    PUSH32(esp, eax);
    PUSH32(esp, 0x26);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D70C9u); RECOMP_ABI_CALL(0x005D8960u, sub_005D8960); /* call 0x005D8960 */

loc_005D70C9: ;
    MEM32(esi + 0x14) = 3;
    goto loc_005D7165;

loc_005D70D5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D70DDu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D70DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D713A; /* je: equal / zero */

loc_005D70E2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D70EAu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D70EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D713A; /* je: equal / zero */

loc_005D70EF: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_005D7106; /* je: equal / zero */

loc_005D70FD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005D7104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7101u); } /* indirect call */
    }

loc_005D7104: ;
    goto loc_005D7169;

loc_005D7106: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_005D7125; /* je: equal / zero */

loc_005D7110: ;
    PUSH32(esp, 0x005D7115u); RECOMP_ABI_CALL(0x005D8A30u, sub_005D8A30); /* call 0x005D8A30 */

loc_005D7115: ;
    PUSH32(esp, 0x6CE568);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7120u); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D7120: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D7169;

loc_005D7125: ;
    PUSH32(esp, 0x005D712Au); RECOMP_ABI_CALL(0x005D8A00u, sub_005D8A00); /* call 0x005D8A00 */

loc_005D712A: ;
    PUSH32(esp, 0x6CE568);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7135u); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D7135: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D7169;

loc_005D713A: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x3C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D7162; /* jle: less or equal (signed <=) */

loc_005D7140: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7148u); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D7148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7162; /* jne: not equal / not zero */

loc_005D714D: ;
    PUSH32(esp, 0x655070);
    PUSH32(esp, 0x005D7157u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D7157: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D7093;

loc_005D7162: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005D7165: ;
    edi = esi;
    SET_LO8(ebx, 1);

loc_005D7169: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE550) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6CE550 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7070; /* jne: not equal / not zero */

loc_005D7178: ;
    POP32(esp, ebp);

loc_005D7179: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7180
 * Original: 0x005D7180 - 0x005D71C6 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x6CE548);
    PUSH32(esp, edi);
    edi = 0x6CE544;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D71C0; /* je: equal / zero */

loc_005D7194: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D719Cu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D719C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D71B1; /* jne: not equal / not zero */

loc_005D71A1: ;
    PUSH32(esp, 0x6CE520);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D71ACu); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D71AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D71B5;

loc_005D71B1: ;
    edi = esi;
    SET_LO8(ebx, 1);

loc_005D71B5: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE544) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6CE544 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7194; /* jne: not equal / not zero */

loc_005D71C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D71D0
 * Original: 0x005D71D0 - 0x005D720F (63 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D71D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D71D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6CE520);
    PUSH32(esp, 0x005D71DBu); RECOMP_ABI_CALL(0x005D6B20u, sub_005D6B20); /* call 0x005D6B20 */

loc_005D71DB: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7202; /* jne: not equal / not zero */

loc_005D71E6: ;
    ecx = MEM32(0x6CE2E4);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D720B; /* je: equal / zero */

loc_005D71F1: ;
    PUSH32(esp, 0x655094);
    PUSH32(esp, 0x005D71FBu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D71FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D7202: ;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x19) = LO8(eax);

loc_005D720B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7210
 * Original: 0x005D7210 - 0x005D724F (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7220; /* je: equal / zero */

loc_005D721A: ;
    MEM8(esi + 0x18) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D7220: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7228u); RECOMP_ABI_CALL(0x005D89E0u, sub_005D89E0); /* call 0x005D89E0 */

loc_005D7228: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D723F; /* je: equal / zero */

loc_005D722F: ;
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x005D7238u); RECOMP_ABI_CALL(0x005D4400u, sub_005D4400); /* call 0x005D4400 */

loc_005D7238: ;
    MEM32(esi + 0x10) = 0;

loc_005D723F: ;
    PUSH32(esp, 0x6CE544);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D724Au); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D724A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7250
 * Original: 0x005D7250 - 0x005D72D3 (131 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7250: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005D72CE; /* je: equal / zero */

loc_005D725C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D72CE; /* jne: not equal / not zero */

loc_005D7263: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D726Bu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D726B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D72CE; /* je: equal / zero */

loc_005D7270: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7278u); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D7278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D72CE; /* je: equal / zero */

loc_005D727D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x005D7284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7281u); } /* indirect call */
    }

loc_005D7284: ;
    ecx = MEM32(0x6CE518);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6550C0);
    edx = esi + 0x1A;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D729Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005D729C: ;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x19) = 0;
    edi = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D72B6; /* je: equal / zero */

loc_005D72AD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x005D72B6u); RECOMP_ABI_CALL(0x005D4280u, sub_005D4280); /* call 0x005D4280 */

loc_005D72B6: ;
    PUSH32(esp, 0x6CE550);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x005D72CBu); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D72CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D72CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005D72E0
 * Original: 0x005D72E0 - 0x005D72EF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D72E0(void)
{

loc_005D72E0: ;
    MEM8(ecx + 0x19) = 1;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x005D72ECu); RECOMP_ABI_CALL(0x005D8A30u, sub_005D8A30); /* call 0x005D8A30 */

loc_005D72EC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_005D72F0
 * Original: 0x005D72F0 - 0x005D72FC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D72F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D72F0: ;
    MEM8(ecx + 0x19) = 0;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8A50(); return; /* tail jmp 0x005D8A50 */

}

/**
 * sub_005D7300
 * Original: 0x005D7300 - 0x005D730C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7300: ;
    MEM8(ecx + 0x19) = 0;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8A70(); return; /* tail jmp 0x005D8A70 */

}

/**
 * sub_005D7310
 * Original: 0x005D7310 - 0x005D7318 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7310: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8A90(); return; /* tail jmp 0x005D8A90 */

}

/**
 * sub_005D7320
 * Original: 0x005D7320 - 0x005D7358 (56 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7351; /* jne: not equal / not zero */

loc_005D732A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7332u); RECOMP_ABI_CALL(0x005D8AD0u, sub_005D8AD0); /* call 0x005D8AD0 */

loc_005D7332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7351; /* jne: not equal / not zero */

loc_005D7336: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D733Eu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D733E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7351; /* je: equal / zero */

loc_005D7343: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D734Bu); RECOMP_ABI_CALL(0x005D8AF0u, sub_005D8AF0); /* call 0x005D8AF0 */

loc_005D734B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7351; /* jne: not equal / not zero */

loc_005D734F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D7351: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7360
 * Original: 0x005D7360 - 0x005D736B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7360: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7370
 * Original: 0x005D7370 - 0x005D7390 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7370(void)
{

loc_005D7370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x005D737Du); RECOMP_ABI_CALL(0x005D6AB0u, sub_005D6AB0); /* call 0x005D6AB0 */

loc_005D737D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x6550D0;
    MEM32(esi + 0xC) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005D7390
 * Original: 0x005D7390 - 0x005D73FA (106 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7390: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x265);
    PUSH32(esp, 0x654F88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D73A4u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_005D73A4: ;
    ecx = MEM32(0x6CE2E4);
    MEM32(0x6CE51C) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D73F9; /* je: equal / zero */

loc_005D73B9: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D73F8; /* jl: less (signed <) */

loc_005D73C3: ;
    PUSH32(esp, esi);

loc_005D73C4: ;
    PUSH32(esp, 0x26C);
    PUSH32(esp, 0x654F88);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x005D73D5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D73D5: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D73F4; /* je: equal / zero */

loc_005D73DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D73E4u); RECOMP_ABI_CALL(0x005D7FB0u, sub_005D7FB0); /* call 0x005D7FB0 */

loc_005D73E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE55C);
    ecx = esi;
    PUSH32(esp, 0x005D73F4u); RECOMP_ABI_CALL(0x005D7370u, sub_005D7370); /* call 0x005D7370 */

loc_005D73F4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_005D73C4; /* jns: not sign (positive) */

loc_005D73F7: ;
    POP32(esp, esi);

loc_005D73F8: ;
    POP32(esp, edi);

loc_005D73F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7400
 * Original: 0x005D7400 - 0x005D744F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7400: ;
    ecx = MEM32(0x6CE560);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE55C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE55C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7428; /* je: equal / zero */

loc_005D740E: ;
    edi = edi;

loc_005D7410: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7420; /* je: equal / zero */

loc_005D7414: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005D741Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7418u); } /* indirect call */
    }

loc_005D741A: ;
    ecx = MEM32(0x6CE560);

loc_005D7420: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE55C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE55C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7410; /* jne: not equal / not zero */

loc_005D7428: ;
    ecx = MEM32(0x6CE53C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE538) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE538 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D744E; /* je: equal / zero */

loc_005D7436: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7446; /* je: equal / zero */

loc_005D743A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005D7440u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D743Eu); } /* indirect call */
    }

loc_005D7440: ;
    ecx = MEM32(0x6CE53C);

loc_005D7446: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE538) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6CE538 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7436; /* jne: not equal / not zero */

loc_005D744E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7450
 * Original: 0x005D7450 - 0x005D7481 (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7450: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6CE55C);
    PUSH32(esp, 0x005D745Bu); RECOMP_ABI_CALL(0x005D6B20u, sub_005D6B20); /* call 0x005D6B20 */

loc_005D745B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D747D; /* jne: not equal / not zero */

loc_005D7464: ;
    eax = MEM32(0x6CE2E4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D747D; /* je: equal / zero */

loc_005D7470: ;
    PUSH32(esp, 0x655120);
    PUSH32(esp, 0x005D747Au); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D747A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D747D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7490
 * Original: 0x005D7490 - 0x005D74E1 (81 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x6CE53C);
    PUSH32(esp, edi);
    edi = 0x6CE538;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D74DB; /* je: equal / zero */

loc_005D74A4: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D74ACu); RECOMP_ABI_CALL(0x005D8220u, sub_005D8220); /* call 0x005D8220 */

loc_005D74AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D74CC; /* jne: not equal / not zero */

loc_005D74B0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D74B8u); RECOMP_ABI_CALL(0x005D8240u, sub_005D8240); /* call 0x005D8240 */

loc_005D74B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D74CC; /* jne: not equal / not zero */

loc_005D74BC: ;
    PUSH32(esp, 0x6CE55C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D74C7u); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D74C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D74D0;

loc_005D74CC: ;
    edi = esi;
    SET_LO8(ebx, 1);

loc_005D74D0: ;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6CE538) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6CE538 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D74A4; /* jne: not equal / not zero */

loc_005D74DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D74F0
 * Original: 0x005D74F0 - 0x005D7533 (67 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D74F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D74F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D74FBu); RECOMP_ABI_CALL(0x005D8220u, sub_005D8220); /* call 0x005D8220 */

loc_005D74FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D751B; /* jne: not equal / not zero */

loc_005D74FF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7507u); RECOMP_ABI_CALL(0x005D8240u, sub_005D8240); /* call 0x005D8240 */

loc_005D7507: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D751B; /* jne: not equal / not zero */

loc_005D750B: ;
    PUSH32(esp, 0x6CE55C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7516u); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D7516: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D751B: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7523u); RECOMP_ABI_CALL(0x005D81B0u, sub_005D81B0); /* call 0x005D81B0 */

loc_005D7523: ;
    PUSH32(esp, 0x6CE538);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D752Eu); RECOMP_ABI_CALL(0x005D6B70u, sub_005D6B70); /* call 0x005D6B70 */

loc_005D752E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7540
 * Original: 0x005D7540 - 0x005D7612 (210 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7540: ;
    eax = MEM32(0x6CE51C);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D7554: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7554; /* jne: not equal / not zero */

loc_005D755E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x005D756Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D756Bu); } /* indirect call */
    }

loc_005D756E: ;
    edx = eax;

loc_005D7570: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7570; /* jne: not equal / not zero */

loc_005D7577: ;
    edi = esp + 0xC;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_005D7580: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7580; /* jne: not equal / not zero */

loc_005D7588: ;
    PUSH32(esp, esi);
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
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    /* nop */

loc_005D75A0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D75A0; /* jne: not equal / not zero */

loc_005D75A8: ;
    ecx = MEM32(0x64B0C0);
    SET_LO8(edx, MEM8(0x64B0C4));
    eax = MEM32(ebx);
    MEM32(edi) = ecx;
    ecx = ebx;
    MEM8(edi + 4) = LO8(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005D75C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D75BDu); } /* indirect call */
    }

loc_005D75C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005D75D7; /* je: equal / zero */

loc_005D75C6: ;
    edx = MEM32(esp + 0x10C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    goto loc_005D75E6;

loc_005D75D7: ;
    ecx = MEM32(esp + 0x10C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);

loc_005D75E6: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x005D75EEu); RECOMP_ABI_CALL(0x005D82C0u, sub_005D82C0); /* call 0x005D82C0 */

loc_005D75EE: ;
    PUSH32(esp, 0x005D75F3u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D75F3: ;
    eax = MEM32(esp + 0x110);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005D7603u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7600u); } /* indirect call */
    }

loc_005D7603: ;
    PUSH32(esp, 0x005D7608u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D7608: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005D7620
 * Original: 0x005D7620 - 0x005D7677 (87 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7620: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    PUSH32(esp, esi);
    esi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D7633: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7633; /* jne: not equal / not zero */

loc_005D763D: ;
    ecx = MEM32(esp + 0x10C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D7654u); RECOMP_ABI_CALL(0x005D82C0u, sub_005D82C0); /* call 0x005D82C0 */

loc_005D7654: ;
    PUSH32(esp, 0x005D7659u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D7659: ;
    eax = MEM32(esp + 0x110);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005D7668u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D7665u); } /* indirect call */
    }

loc_005D7668: ;
    PUSH32(esp, 0x005D766Du); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D766D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005D7680
 * Original: 0x005D7680 - 0x005D768B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7680(void)
{

loc_005D7680: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x005D7688u); RECOMP_ABI_CALL(0x005D8150u, sub_005D8150); /* call 0x005D8150 */

loc_005D7688: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7690
 * Original: 0x005D7690 - 0x005D7698 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7690: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8180(); return; /* tail jmp 0x005D8180 */

}

/**
 * sub_005D76A0
 * Original: 0x005D76A0 - 0x005D76A8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D76A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D76A0: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D81B0(); return; /* tail jmp 0x005D81B0 */

}

/**
 * sub_005D76B0
 * Original: 0x005D76B0 - 0x005D76B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D76B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D76B0: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D81E0(); return; /* tail jmp 0x005D81E0 */

}

/**
 * sub_005D76C0
 * Original: 0x005D76C0 - 0x005D76F1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D76C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D76C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D76CBu); RECOMP_ABI_CALL(0x005D8220u, sub_005D8220); /* call 0x005D8220 */

loc_005D76CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D76EA; /* jne: not equal / not zero */

loc_005D76CF: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D76D7u); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D76D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D76EA; /* je: equal / zero */

loc_005D76DC: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005D76E4u); RECOMP_ABI_CALL(0x005D8240u, sub_005D8240); /* call 0x005D8240 */

loc_005D76E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D76EA; /* jne: not equal / not zero */

loc_005D76E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D76EA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7700
 * Original: 0x005D7700 - 0x005D7708 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7700: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_005D8270(); return; /* tail jmp 0x005D8270 */

}

/**
 * sub_005D7710
 * Original: 0x005D7710 - 0x005D772E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D7718u); RECOMP_ABI_CALL(0x005D6AF0u, sub_005D6AF0); /* call 0x005D6AF0 */

loc_005D7718: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D7728; /* je: equal / zero */

loc_005D771F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7725u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D7725: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7728: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D7730
 * Original: 0x005D7730 - 0x005D775C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D773Au); RECOMP_ABI_CALL(0x005D6BD0u, sub_005D6BD0); /* call 0x005D6BD0 */

loc_005D773A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D7749u); RECOMP_ABI_CALL(0x005D6F50u, sub_005D6F50); /* call 0x005D6F50 */

loc_005D7749: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D7758u); RECOMP_ABI_CALL(0x005D7390u, sub_005D7390); /* call 0x005D7390 */

loc_005D7758: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7760
 * Original: 0x005D7760 - 0x005D776F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7760: ;
    PUSH32(esp, 0x005D7765u); RECOMP_ABI_CALL(0x005D7400u, sub_005D7400); /* call 0x005D7400 */

loc_005D7765: ;
    PUSH32(esp, 0x005D776Au); RECOMP_ABI_CALL(0x005D6FD0u, sub_005D6FD0); /* call 0x005D6FD0 */

loc_005D776A: ;
    g_seh_ebp = ebp; sub_005D6C30(); return; /* tail jmp 0x005D6C30 */

}

/**
 * sub_005D7770
 * Original: 0x005D7770 - 0x005D7786 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7770: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x654F38;
    PUSH32(esp, 0x005D777Eu); RECOMP_ABI_CALL(0x005D6DA0u, sub_005D6DA0); /* call 0x005D6DA0 */

loc_005D777E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_005D7790
 * Original: 0x005D7790 - 0x005D77A6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7790: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x655020;
    PUSH32(esp, 0x005D779Eu); RECOMP_ABI_CALL(0x005D7300u, sub_005D7300); /* call 0x005D7300 */

loc_005D779E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_005D77B0
 * Original: 0x005D77B0 - 0x005D77C6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D77B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D77B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x6550D0;
    PUSH32(esp, 0x005D77BEu); RECOMP_ABI_CALL(0x005D76A0u, sub_005D76A0); /* call 0x005D76A0 */

loc_005D77BE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D6AF0(); return; /* tail jmp 0x005D6AF0 */

}

/**
 * sub_005D77D0
 * Original: 0x005D77D0 - 0x005D77EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D77D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D77D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D77D8u); RECOMP_ABI_CALL(0x005D7770u, sub_005D7770); /* call 0x005D7770 */

loc_005D77D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D77E8; /* je: equal / zero */

loc_005D77DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D77E5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D77E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D77E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D77F0
 * Original: 0x005D77F0 - 0x005D780E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D77F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D77F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D77F8u); RECOMP_ABI_CALL(0x005D7790u, sub_005D7790); /* call 0x005D7790 */

loc_005D77F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D7808; /* je: equal / zero */

loc_005D77FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7805u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D7805: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D7810
 * Original: 0x005D7810 - 0x005D782E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D7818u); RECOMP_ABI_CALL(0x005D77B0u, sub_005D77B0); /* call 0x005D77B0 */

loc_005D7818: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005D7828; /* je: equal / zero */

loc_005D781F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7825u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D7825: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7828: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D7830
 * Original: 0x005D7830 - 0x005D78B3 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7830: ;
    eax = MEM32(0x6CE9D4);
    ecx = MEM32(0x6CE9DC);
    MEM32(ecx + eax * 4) = 0;
    edx = MEM32(0x6CE9E0);
    eax = MEM32(0x6CE9D4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1AC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6CE678) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6CE678;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(0x6CE9D4) = eax;
    eax = MEM32(0x6CE9DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D7872u); RECOMP_ABI_CALL(0x005D9A60u, sub_005D9A60); /* call 0x005D9A60 */

loc_005D7872: ;
    eax = MEM32(0x6CE9E0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005D7887; /* jne: not equal / not zero */

loc_005D787F: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6CE9E0) = eax;

loc_005D7887: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1AC);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6CE678) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6CE678;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6CE9E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6CE9E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6CE9D8) = ecx;
    MEM32(0x6CE9DC) = eax;
    MEM32(0x6CE9D4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005D78C0
 * Original: 0x005D78C0 - 0x005D7A40 (384 bytes, 128 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D78C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D78C0: ;
    ecx = MEM32(0x6CE9D8);
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_005D7A10; /* jne: not equal / not zero */

loc_005D78D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005D78DBu); RECOMP_ABI_CALL(0x005D83A0u, sub_005D83A0); /* call 0x005D83A0 */

loc_005D78DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D7915; /* jle: less or equal (signed <=) */

loc_005D78DF: ;
    /* nop */

loc_005D78E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D78E6u); RECOMP_ABI_CALL(0x005D8380u, sub_005D8380); /* call 0x005D8380 */

loc_005D78E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D78F0u); RECOMP_ABI_CALL(0x005D8270u, sub_005D8270); /* call 0x005D8270 */

loc_005D78F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D78F9; /* jne: not equal / not zero */

loc_005D78F5: ;
    PUSH32(esp, 0x15);
    goto loc_005D78FB;

loc_005D78F9: ;
    PUSH32(esp, 0x17);

loc_005D78FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7901u); RECOMP_ABI_CALL(0x005D8380u, sub_005D8380); /* call 0x005D8380 */

loc_005D7901: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005D790Bu); RECOMP_ABI_CALL(0x00614D90u, sub_00614D90); /* call 0x00614D90 */

loc_005D790B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005D7911u); RECOMP_ABI_CALL(0x005D83A0u, sub_005D83A0); /* call 0x005D83A0 */

loc_005D7911: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D78E0; /* jl: less (signed <) */

loc_005D7915: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xCC;
    /* nop */

loc_005D7920: ;
    eax = MEM32(0x6CE9D8);
    SET_LO16(eax, MEM16(esi + eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7965; /* je: equal / zero */

loc_005D792F: ;
    ecx = SX16(LO16(eax));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D7939u); RECOMP_ABI_CALL(0x005D8380u, sub_005D8380); /* call 0x005D8380 */

loc_005D7939: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D7943u); RECOMP_ABI_CALL(0x005D8830u, sub_005D8830); /* call 0x005D8830 */

loc_005D7943: ;
    eax = MEM32(0x6CE9D8);
    edx = (uint32_t)(int32_t)SMEM8(eax + edi + 0x8C);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D795Bu); RECOMP_ABI_CALL(0x005D8380u, sub_005D8380); /* call 0x005D8380 */

loc_005D795B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D7965u); RECOMP_ABI_CALL(0x00614D90u, sub_00614D90); /* call 0x00614D90 */

loc_005D7965: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D7920; /* jl: less (signed <) */

loc_005D7971: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005D7978u); RECOMP_ABI_CALL(0x005D88D0u, sub_005D88D0); /* call 0x005D88D0 */

loc_005D7978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_005D79BF; /* jle: less or equal (signed <=) */

loc_005D797D: ;
    /* nop */

loc_005D7980: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D7986u); RECOMP_ABI_CALL(0x005D88C0u, sub_005D88C0); /* call 0x005D88C0 */

loc_005D7986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D7990u); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D7990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7999; /* jne: not equal / not zero */

loc_005D7995: ;
    PUSH32(esp, 0xC);
    goto loc_005D79A5;

loc_005D7999: ;
    ecx = MEM32(0x6CE9D8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + esi + 0x44);
    PUSH32(esp, edx);

loc_005D79A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D79ABu); RECOMP_ABI_CALL(0x005D88C0u, sub_005D88C0); /* call 0x005D88C0 */

loc_005D79AB: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005D79B5u); RECOMP_ABI_CALL(0x005D8280u, sub_005D8280); /* call 0x005D8280 */

loc_005D79B5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005D79BBu); RECOMP_ABI_CALL(0x005D88D0u, sub_005D88D0); /* call 0x005D88D0 */

loc_005D79BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D7980; /* jl: less (signed <) */

loc_005D79BF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005D79C6u); RECOMP_ABI_CALL(0x005D7FD0u, sub_005D7FD0); /* call 0x005D7FD0 */

loc_005D79C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D7A3E; /* jle: less or equal (signed <=) */

loc_005D79CA: ;
    /* nop */

loc_005D79D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D79D6u); RECOMP_ABI_CALL(0x005D7FB0u, sub_005D7FB0); /* call 0x005D7FB0 */

loc_005D79D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D79E0u); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_005D79E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D79E9; /* jne: not equal / not zero */

loc_005D79E5: ;
    PUSH32(esp, 4);
    goto loc_005D79F4;

loc_005D79E9: ;
    eax = MEM32(0x6CE9D8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + esi + 0x48);
    PUSH32(esp, ecx);

loc_005D79F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D79FAu); RECOMP_ABI_CALL(0x005D7FB0u, sub_005D7FB0); /* call 0x005D7FB0 */

loc_005D79FA: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005D7A04u); RECOMP_ABI_CALL(0x005D8280u, sub_005D8280); /* call 0x005D8280 */

loc_005D7A04: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005D7A0Au); RECOMP_ABI_CALL(0x005D7FD0u, sub_005D7FD0); /* call 0x005D7FD0 */

loc_005D7A0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D79D0; /* jl: less (signed <) */

loc_005D7A0E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D7A10: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7A3E; /* jne: not equal / not zero */

loc_005D7A16: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7A31; /* je: equal / zero */

loc_005D7A21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655170);
    PUSH32(esp, 0x005D7A2Cu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005D7A2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D7A31: ;
    PUSH32(esp, 0x655154);
    PUSH32(esp, 0x005D7A3Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005D7A3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7A3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7A40
 * Original: 0x005D7A40 - 0x005D7ABA (122 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7A40: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    edx = MEM32(0x6CE9D4);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 4);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x6CE9DC);
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + edx * 4) = eax;
    ecx = MEM32(0x6CE9D4);
    eax = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6CE9D4) = ecx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(0x6CE9DC);
    MEM32(esi + ecx * 4) = edx;
    ecx = MEM32(0x6CE9D4);
    esi = MEM32(0x6CE9DC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6CE9D4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + ecx * 4) = edx;
    ecx = MEM32(0x6CE9D4);
    edx = MEM32(0x6CE9DC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6CE9D4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(0x6CE9D4) = MEM32(0x6CE9D4) + 1;
    _fa = (uint32_t)(MEM32(0x6CE9D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7AC0
 * Original: 0x005D7AC0 - 0x005D7B38 (120 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7AC0: ;
    ecx = ZX8(MEM8(esp + 0x10));
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 1;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(esp + 4);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(0x6CE9D4);
    PUSH32(esp, esi);
    esi = MEM32(0x6CE9DC);
    MEM32(esi + edx * 4) = eax;
    esi = MEM32(0x6CE9D4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x6CE9D4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_005D7B36; /* jle: less or equal (signed <=) */

loc_005D7AFF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_005D7B10;

    /* nop */
    edi = edi;

loc_005D7B10: ;
    esi = MEM32(edx + eax * 4);
    ebx = MEM32(0x6CE9D4);
    edi = MEM32(0x6CE9DC);
    MEM32(edi + ebx * 4) = esi;
    ebx = MEM32(0x6CE9D4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x6CE9D4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_005D7B10; /* jl: less (signed <) */

loc_005D7B34: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005D7B36: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7B40
 * Original: 0x005D7B40 - 0x005D7B89 (73 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7B40(void)
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

loc_005D7B40: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D7B55u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D7B55: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D7B6Fu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D7B6F: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1009);
    PUSH32(esp, 1);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D7B85u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7B85: ;
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
 * sub_005D7B90
 * Original: 0x005D7B90 - 0x005D7BAE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7B90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1012);
    PUSH32(esp, 1);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D7BAAu); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7BAA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7BB0
 * Original: 0x005D7BB0 - 0x005D7C31 (129 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7BB0(void)
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

loc_005D7BB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    MEM32(0x6CE578) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x24);
    MEM32(0x6CE57C) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(0x6CE580) = edx;
    ecx = MEM32(eax + 0x2C);
    MEM32(0x6CE584) = ecx;
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 4) = ecx;
    ecx = esp;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x005D7BF9u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_005D7BF9: ;
    fp_push(MEMF(esp)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 7);
    MEMF(0x6CE588) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1013);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 1);
    MEMF(0x6CE590) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x6CE58C) = eax;
    PUSH32(esp, 0x005D7C2Du); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D7C2D: ;
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
 * sub_005D7C40
 * Original: 0x005D7C40 - 0x005D7C46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7C40(void)
{

loc_005D7C40: ;
    SET_LO8(eax, MEM8(0x6D09E8));
    esp += 4; return; /* ret */

}

/**
 * sub_005D7C50
 * Original: 0x005D7C50 - 0x005D7CAA (90 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7C50: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D7C6Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D7C6E: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE57C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D7C88u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D7C88: ;
    MEM32(0x6CE580) = eax;
    MEM32(esp + 0xC) = 0x6CE578;
    MEM32(esp + 8) = 0x100A;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_005D7A40(); return; /* tail jmp 0x005D7A40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D7CB0
 * Original: 0x005D7CB0 - 0x005D7CFB (75 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7CB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(0x6CE578) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x6CE57C) = ecx;
    MEM32(0x6CE580) = edx;
    MEM32(0x6CE584) = eax;
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0xC) = 0x6CE578;
    MEM32(esp + 8) = 0x100B;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_005D7AC0(); return; /* tail jmp 0x005D7AC0 */

}

/**
 * sub_005D7D00
 * Original: 0x005D7D00 - 0x005D7D54 (84 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7D00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(0x6CE578) = eax;
    eax = MEM32(esp + 0x10);
    esi = 0x6CE580;
    MEM32(0x6CE57C) = ecx;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D7D21: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7D21; /* jne: not equal / not zero */

loc_005D7D2B: ;
    edx = eax + 1;
    POP32(esp, esi);
    /* nop */

loc_005D7D30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7D30; /* jne: not equal / not zero */

loc_005D7D37: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1006);
    PUSH32(esp, 1);
    PUSH32(esp, 0x005D7D50u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D7D50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7D60
 * Original: 0x005D7D60 - 0x005D7D7E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7D60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1007);
    PUSH32(esp, 1);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D7D7Au); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7D7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7D80
 * Original: 0x005D7D80 - 0x005D7D90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7D80(void)
{

loc_005D7D80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6CE9D8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7D90
 * Original: 0x005D7D90 - 0x005D7DAE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7D90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1004);
    PUSH32(esp, 1);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D7DAAu); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7DAA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D7DB0
 * Original: 0x005D7DB0 - 0x005D7E9E (238 bytes, 57 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7DB0: ;
    PUSH32(esp, ecx);
    eax = 0x100E;
    MEM16(0x6CE67A) = LO16(eax);
    MEM16(0x6CE826) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x6CE9D0) = LO16(eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(0x6CE9D2) = LO8(eax);
    eax = MEM32(0x6D09EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x6CE9E0) = 0;
    MEM32(0x6CE9D4) = 0;
    MEM32(0x6CE9DC) = 0x6CE9E8;
    MEM16(0x6CE678) = LO16(ecx);
    MEM16(0x6CE824) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005D7E23; /* jne: not equal / not zero */

loc_005D7E07: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x6CE9D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D7E16u); RECOMP_ABI_CALL(0x005D8B40u, sub_005D8B40); /* call 0x005D8B40 */

loc_005D7E16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6D09EC) = 1;

loc_005D7E23: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 1);
    PUSH32(esp, 0x005D7E34u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7E34: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6551B8);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x005D7E4Du); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_005D7E4D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7E61; /* je: equal / zero */

loc_005D7E54: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D7E5Eu); RECOMP_ABI_CALL(0x005D7D90u, sub_005D7D90); /* call 0x005D7D90 */

loc_005D7E5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7E61: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D7E6Bu); RECOMP_ABI_CALL(0x005D88E0u, sub_005D88E0); /* call 0x005D88E0 */

loc_005D7E6B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D7E75u); RECOMP_ABI_CALL(0x005D80B0u, sub_005D80B0); /* call 0x005D80B0 */

loc_005D7E75: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D7E7Fu); RECOMP_ABI_CALL(0x005D83B0u, sub_005D83B0); /* call 0x005D83B0 */

loc_005D7E7F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005D7E86u); RECOMP_ABI_CALL(0x005D7830u, sub_005D7830); /* call 0x005D7830 */

loc_005D7E86: ;
    ecx = MEM32(0x6CE9D8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7E9C; /* jne: not equal / not zero */

loc_005D7E95: ;
    MEM8(0x6D09E8) = 1;

loc_005D7E9C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7EA0
 * Original: 0x005D7EA0 - 0x005D7EE2 (66 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7EA0: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x1001);
    PUSH32(esp, 1);
    PUSH32(esp, 0x005D7EB1u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D7EB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D7EB4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005D7EBBu); RECOMP_ABI_CALL(0x005D7830u, sub_005D7830); /* call 0x005D7830 */

loc_005D7EBB: ;
    eax = MEM32(0x6CE9D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0x100E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0x100E (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D7EB4; /* jne: not equal / not zero */

loc_005D7ECB: ;
    PUSH32(esp, 0x005D7ED0u); RECOMP_ABI_CALL(0x005D8950u, sub_005D8950); /* call 0x005D8950 */

loc_005D7ED0: ;
    PUSH32(esp, 0x005D7ED5u); RECOMP_ABI_CALL(0x005D8140u, sub_005D8140); /* call 0x005D8140 */

loc_005D7ED5: ;
    PUSH32(esp, 0x005D7EDAu); RECOMP_ABI_CALL(0x005D8430u, sub_005D8430); /* call 0x005D8430 */

loc_005D7EDA: ;
    MEM8(0x6D09E8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7EF0
 * Original: 0x005D7EF0 - 0x005D7F09 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7EF0: ;
    SET_LO8(eax, MEM8(0x6D09E8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7F08; /* je: equal / zero */

loc_005D7EF9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F00u); RECOMP_ABI_CALL(0x005D7830u, sub_005D7830); /* call 0x005D7830 */

loc_005D7F00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005D78C0(); return; /* tail jmp 0x005D78C0 */

loc_005D7F08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7F10
 * Original: 0x005D7F10 - 0x005D7F66 (86 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7F10: ;
    SET_LO8(eax, MEM8(0x6D09E8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D7F65; /* je: equal / zero */

loc_005D7F19: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F22u); RECOMP_ABI_CALL(0x005D7B40u, sub_005D7B40); /* call 0x005D7B40 */

loc_005D7F22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F2Du); RECOMP_ABI_CALL(0x005D7C50u, sub_005D7C50); /* call 0x005D7C50 */

loc_005D7F2D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F3Au); RECOMP_ABI_CALL(0x005D7CB0u, sub_005D7CB0); /* call 0x005D7CB0 */

loc_005D7F3A: ;
    PUSH32(esp, 0x005D7F3Fu); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D7F3F: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x005D7F4Eu); RECOMP_ABI_CALL(0x005D7B40u, sub_005D7B40); /* call 0x005D7B40 */

loc_005D7F4E: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005D7F56u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D7F56: ;
    PUSH32(esp, 0x005D7F5Bu); RECOMP_ABI_CALL(0x005D8910u, sub_005D8910); /* call 0x005D8910 */

loc_005D7F5B: ;
    PUSH32(esp, 0x005D7F60u); RECOMP_ABI_CALL(0x005D80F0u, sub_005D80F0); /* call 0x005D80F0 */

loc_005D7F60: ;
    g_seh_ebp = ebp; sub_005D83E0(); return; /* tail jmp 0x005D83E0 */

loc_005D7F65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7F70
 * Original: 0x005D7F70 - 0x005D7FAD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D7F70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F79u); RECOMP_ABI_CALL(0x005D7B40u, sub_005D7B40); /* call 0x005D7B40 */

loc_005D7F79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F84u); RECOMP_ABI_CALL(0x005D7C50u, sub_005D7C50); /* call 0x005D7C50 */

loc_005D7F84: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005D7F91u); RECOMP_ABI_CALL(0x005D7CB0u, sub_005D7CB0); /* call 0x005D7CB0 */

loc_005D7F91: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005D7F99u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D7F99: ;
    PUSH32(esp, 0x005D7F9Eu); RECOMP_ABI_CALL(0x005D8B10u, sub_005D8B10); /* call 0x005D8B10 */

loc_005D7F9E: ;
    PUSH32(esp, 0x005D7FA3u); RECOMP_ABI_CALL(0x005D8290u, sub_005D8290); /* call 0x005D8290 */

loc_005D7FA3: ;
    PUSH32(esp, 0x005D7FA8u); RECOMP_ABI_CALL(0x005D8880u, sub_005D8880); /* call 0x005D8880 */

loc_005D7FA8: ;
    g_seh_ebp = ebp; sub_005D7EF0(); return; /* tail jmp 0x005D7EF0 */

}

/**
 * sub_005D7FB0
 * Original: 0x005D7FB0 - 0x005D7FC1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7FB0(void)
{

loc_005D7FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6D09F8);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_005D7FD0
 * Original: 0x005D7FD0 - 0x005D7FD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7FD0(void)
{

loc_005D7FD0: ;
    eax = MEM32(0x6D09F4);
    esp += 4; return; /* ret */

}

/**
 * sub_005D7FE0
 * Original: 0x005D7FE0 - 0x005D8036 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D7FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D7FE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0x6CE580;
    MEM32(0x6CE578) = 1;
    MEM32(0x6CE57C) = 0;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D8002: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8002; /* jne: not equal / not zero */

loc_005D800C: ;
    eax = esi;
    edx = eax + 1;
    POP32(esp, esi);

loc_005D8012: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8012; /* jne: not equal / not zero */

loc_005D8019: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2008);
    PUSH32(esp, 4);
    PUSH32(esp, 0x005D8032u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8032: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8040
 * Original: 0x005D8040 - 0x005D80A5 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8040: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x679810);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x005D8052u); RECOMP_ABI_CALL(0x005FC980u, sub_005FC980); /* call 0x005FC980 */

loc_005D8052: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x679810) = eax;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D8068u); RECOMP_ABI_CALL(0x006165C0u, sub_006165C0); /* call 0x006165C0 */

loc_005D8068: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8097; /* je: equal / zero */

loc_005D806F: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0xC);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = ecx;
    MEM32(0x679810) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D8097: ;
    MEM32(0x679810) = esi;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D80B0
 * Original: 0x005D80B0 - 0x005D80E5 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D80B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D80B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x146);
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x6551C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D80CBu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D80CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6D09F4) = esi;
    MEM32(0x6D09F8) = eax;
    MEM32(0x6D09F0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D80F0
 * Original: 0x005D80F0 - 0x005D8131 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D80F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D80F0: ;
    eax = MEM32(0x6D09F4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D8130; /* jle: less or equal (signed <=) */

loc_005D80FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_005D8100: ;
    esi = MEM32(0x6D09F8);
    MEM32(eax + esi + 4) = ecx;
    esi = MEM32(0x6D09F8);
    MEM32(eax + esi) = 6;
    esi = MEM32(0x6D09F8);
    MEM32(eax + esi + 8) = edx;
    esi = MEM32(0x6D09F4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8100; /* jl: less (signed <) */

loc_005D812F: ;
    POP32(esp, esi);

loc_005D8130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8140
 * Original: 0x005D8140 - 0x005D814D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8140(void)
{

loc_005D8140: ;
    eax = MEM32(0x6D09F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D814Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D814B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8150
 * Original: 0x005D8150 - 0x005D8177 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8150: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2003);
    PUSH32(esp, 4);
    MEM32(0x6CE578) = eax;
    MEM32(0x6CE57C) = 0;
    PUSH32(esp, 0x005D8173u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8173: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8180
 * Original: 0x005D8180 - 0x005D81A7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8180: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2004);
    PUSH32(esp, 4);
    MEM32(0x6CE578) = eax;
    MEM32(0x6CE57C) = 0;
    PUSH32(esp, 0x005D81A3u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D81A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D81B0
 * Original: 0x005D81B0 - 0x005D81D7 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D81B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D81B0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2002);
    PUSH32(esp, 4);
    MEM32(0x6CE578) = eax;
    MEM32(0x6CE57C) = 0;
    PUSH32(esp, 0x005D81D3u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D81D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D81E0
 * Original: 0x005D81E0 - 0x005D8219 (57 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D81E0(void)
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

loc_005D81E0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D81FDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D81FD: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2005);
    PUSH32(esp, 4);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D8213u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8213: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8220
 * Original: 0x005D8220 - 0x005D823F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8220: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8239; /* je: equal / zero */

loc_005D8227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8239; /* je: equal / zero */

loc_005D822C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8239; /* je: equal / zero */

loc_005D8231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8239; /* je: equal / zero */

loc_005D8236: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D8239: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8240
 * Original: 0x005D8240 - 0x005D8255 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8240: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D824F; /* je: equal / zero */

loc_005D8247: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D824F; /* je: equal / zero */

loc_005D824C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D824F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8260
 * Original: 0x005D8260 - 0x005D8263 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8260(void)
{

loc_005D8260: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8270
 * Original: 0x005D8270 - 0x005D8274 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8270(void)
{

loc_005D8270: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8280
 * Original: 0x005D8280 - 0x005D8289 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8280(void)
{

loc_005D8280: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D8290
 * Original: 0x005D8290 - 0x005D82BD (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8290: ;
    eax = MEM32(0x6D09F4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D82BB; /* jle: less or equal (signed <=) */

loc_005D829C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005D82A0: ;
    eax = MEM32(0x6D09F8);
    ecx = esi + eax;
    PUSH32(esp, 0x005D82ADu); RECOMP_ABI_CALL(0x005D81B0u, sub_005D81B0); /* call 0x005D81B0 */

loc_005D82AD: ;
    eax = MEM32(0x6D09F4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D82A0; /* jl: less (signed <) */

loc_005D82BA: ;
    POP32(esp, esi);

loc_005D82BB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D82C0
 * Original: 0x005D82C0 - 0x005D8379 (185 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D82C0(void)
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

loc_005D82C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005D82C8u); RECOMP_ABI_CALL(0x005D8220u, sub_005D8220); /* call 0x005D8220 */

loc_005D82C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D82D5; /* jne: not equal / not zero */

loc_005D82CC: ;
    PUSH32(esp, 0x005D82D1u); RECOMP_ABI_CALL(0x005D8240u, sub_005D8240); /* call 0x005D8240 */

loc_005D82D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D82E2; /* je: equal / zero */

loc_005D82D5: ;
    PUSH32(esp, 0x6551D0);
    PUSH32(esp, 0x005D82DFu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D82DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D82E2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    PUSH32(esp, edi);
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D8300u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D8300: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2005);
    PUSH32(esp, 4);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D8316u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8316: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(0x6CE57C) = ecx;
    edi = 0x6CE580;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D8337: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8337; /* jne: not equal / not zero */

loc_005D8341: ;
    edx = eax + 1;
    POP32(esp, edi);

loc_005D8345: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8345; /* jne: not equal / not zero */

loc_005D834C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 4);
    PUSH32(esp, 0x005D8365u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8365: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    MEM32(esi) = 9;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8380
 * Original: 0x005D8380 - 0x005D8391 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8380(void)
{

loc_005D8380: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6D0A00);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_005D83A0
 * Original: 0x005D83A0 - 0x005D83A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D83A0(void)
{

loc_005D83A0: ;
    eax = MEM32(0x6D09FC);
    esp += 4; return; /* ret */

}

/**
 * sub_005D83B0
 * Original: 0x005D83B0 - 0x005D83D8 (40 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D83B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D83B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x17);
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x655220);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D83C8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D83C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6D09FC) = esi;
    MEM32(0x6D0A00) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D83E0
 * Original: 0x005D83E0 - 0x005D8423 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D83E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D83E0: ;
    eax = MEM32(0x6D09FC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D8422; /* jle: less or equal (signed <=) */

loc_005D83EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    goto loc_005D8400;

    /* nop */
    /* nop */

loc_005D8400: ;
    esi = MEM32(0x6D0A00);
    MEM32(eax + esi + 4) = edx;
    esi = MEM32(0x6D0A00);
    MEM32(eax + esi) = ecx;
    esi = MEM32(0x6D09FC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8400; /* jl: less (signed <) */

loc_005D8421: ;
    POP32(esp, esi);

loc_005D8422: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8430
 * Original: 0x005D8430 - 0x005D843D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8430(void)
{

loc_005D8430: ;
    eax = MEM32(0x6D0A00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D843Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D843B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8440
 * Original: 0x005D8440 - 0x005D849B (91 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8440: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(0x6CE578) = eax;
    eax = MEM32(esp + 8);
    esi = 0x6CE580;
    MEM32(0x6CE57C) = 0;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005D8460: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8460; /* jne: not equal / not zero */

loc_005D846A: ;
    edx = eax + 1;
    POP32(esp, esi);
    edi = edi;

loc_005D8470: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8470; /* jne: not equal / not zero */

loc_005D8477: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 3);
    PUSH32(esp, 0x005D8490u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8490: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D84A0
 * Original: 0x005D84A0 - 0x005D8548 (168 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D84A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D84A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x005D84AEu); RECOMP_ABI_CALL(0x005D7D80u, sub_005D7D80); /* call 0x005D7D80 */

loc_005D84AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D84C9; /* je: equal / zero */

loc_005D84B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x655228);
    PUSH32(esp, 0x005D84C1u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D84C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_005D84C9: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4006);
    PUSH32(esp, 3);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D84E1u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D84E1: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    MEM32(0x6CE578) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(0x6CE584) = eax;
    MEM32(0x6CE588) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x2C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 7);
    PUSH32(esp, 0x6CE578);
    MEM32(0x6CE580) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x4004);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = edi;
    MEM32(0x6CE58C) = edx;
    MEM32(0x6CE590) = eax;
    PUSH32(esp, 0x005D8539u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8539: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x1A;
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_005D8550
 * Original: 0x005D8550 - 0x005D8602 (178 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x005D855Eu); RECOMP_ABI_CALL(0x005D7D80u, sub_005D7D80); /* call 0x005D7D80 */

loc_005D855E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8579; /* je: equal / zero */

loc_005D8566: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x655228);
    PUSH32(esp, 0x005D8571u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D8571: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_005D8579: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4006);
    PUSH32(esp, 3);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8591u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8591: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(0x6CE578) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(0x6CE580) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(0x6CE588) = ecx;
    MEM32(0x6CE58C) = edx;
    SET_LO8(edx, MEM8(esp + 0x30));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 8);
    PUSH32(esp, 0x6CE578);
    MEM32(0x6CE584) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x4005);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = edi;
    MEM32(0x6CE590) = eax;
    MEM32(0x6CE594) = ecx;
    PUSH32(esp, 0x005D85F3u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D85F3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = 0x1A;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_005D8610
 * Original: 0x005D8610 - 0x005D862C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8610: ;
    eax = MEM32(ecx);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4006);
    PUSH32(esp, 3);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8628u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8628: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8630
 * Original: 0x005D8630 - 0x005D8668 (56 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8630(void)
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

loc_005D8630: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D864Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D864C: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4009);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D8662u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8662: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8670
 * Original: 0x005D8670 - 0x005D86A2 (50 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8670(void)
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

loc_005D8670: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x654FCC)); /* fmul dword ptr [0x654fcc] */
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8686u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D8686: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x400D);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D869Cu); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D869C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D86B0
 * Original: 0x005D86B0 - 0x005D86E2 (50 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D86B0(void)
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

loc_005D86B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D01C)); /* fmul dword ptr [0x63d01c] */
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D86C6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D86C6: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x400A);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D86DCu); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D86DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D86F0
 * Original: 0x005D86F0 - 0x005D8728 (56 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D86F0(void)
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

loc_005D86F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D870Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D870C: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4011);
    PUSH32(esp, 3);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D8722u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8722: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8730
 * Original: 0x005D8730 - 0x005D879D (109 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8730(void)
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

loc_005D8730: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8746u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D8746: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D875Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D875A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    MEM32(0x6CE580) = eax;
    PUSH32(esp, 0x005D876Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D876E: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 5);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x400E);
    PUSH32(esp, 3);
    MEM32(0x6CE584) = eax;
    MEM32(0x6CE588) = ecx;
    PUSH32(esp, 0x005D8797u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8797: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D87A0
 * Original: 0x005D87A0 - 0x005D87E8 (72 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D87A0(void)
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

loc_005D87A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D87B6u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D87B6: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D87CAu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D87CA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x400F);
    PUSH32(esp, 3);
    MEM32(0x6CE580) = eax;
    PUSH32(esp, 0x005D87E2u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D87E2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D87F0
 * Original: 0x005D87F0 - 0x005D880B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D87F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D87F0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8805; /* je: equal / zero */

loc_005D87F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8805; /* je: equal / zero */

loc_005D87FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8805; /* je: equal / zero */

loc_005D8802: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D8805: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8810
 * Original: 0x005D8810 - 0x005D8826 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8810: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8820; /* je: equal / zero */

loc_005D8818: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8820; /* je: equal / zero */

loc_005D881D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D8820: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8830
 * Original: 0x005D8830 - 0x005D883A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8830(void)
{

loc_005D8830: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D8840
 * Original: 0x005D8840 - 0x005D8874 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8840: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x4012);
    PUSH32(esp, 3);
    MEM32(0x6CE578) = 0;
    MEM32(0x6CE57C) = eax;
    MEM32(0x6CE580) = ecx;
    PUSH32(esp, 0x005D8870u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D8870: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8880
 * Original: 0x005D8880 - 0x005D88B2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8880: ;
    eax = MEM32(0x6D09FC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D88B0; /* jle: less or equal (signed <=) */

loc_005D888C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005D8890: ;
    eax = MEM32(0x6D0A00);
    ecx = esi + eax;
    PUSH32(esp, 0x005D889Du); RECOMP_ABI_CALL(0x005D8610u, sub_005D8610); /* call 0x005D8610 */

loc_005D889D: ;
    PUSH32(esp, 0x005D88A2u); RECOMP_ABI_CALL(0x005D7EF0u, sub_005D7EF0); /* call 0x005D7EF0 */

loc_005D88A2: ;
    eax = MEM32(0x6D09FC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8890; /* jl: less (signed <) */

loc_005D88AF: ;
    POP32(esp, esi);

loc_005D88B0: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D88C0
 * Original: 0x005D88C0 - 0x005D88CE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D88C0(void)
{

loc_005D88C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x6D0A04);
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_005D88D0
 * Original: 0x005D88D0 - 0x005D88D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D88D0(void)
{

loc_005D88D0: ;
    eax = MEM32(0x6D0A08);
    esp += 4; return; /* ret */

}

/**
 * sub_005D88E0
 * Original: 0x005D88E0 - 0x005D8909 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D88E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D88E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x15);
    eax = esi * 8;
    PUSH32(esp, 0x655244);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D88F9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D88F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6D0A08) = esi;
    MEM32(0x6D0A04) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8910
 * Original: 0x005D8910 - 0x005D8943 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8910: ;
    ecx = MEM32(0x6D0A08);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D8942; /* jle: less or equal (signed <=) */

loc_005D891C: ;
    /* nop */

loc_005D8920: ;
    ecx = MEM32(0x6D0A04);
    MEM32(ecx + eax * 8) = 0xE;
    edx = MEM32(0x6D0A04);
    MEM32(edx + eax * 8 + 4) = eax;
    ecx = MEM32(0x6D0A08);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8920; /* jl: less (signed <) */

loc_005D8942: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8950
 * Original: 0x005D8950 - 0x005D895D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8950(void)
{

loc_005D8950: ;
    eax = MEM32(0x6D0A04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D895Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D895B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8960
 * Original: 0x005D8960 - 0x005D89DB (123 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8960: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(0x6CE578) = eax;
    eax = MEM32(esp + 0x10);
    esi = 0x6CE580;
    MEM32(0x6CE57C) = ecx;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005D8980: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8980; /* jne: not equal / not zero */

loc_005D898A: ;
    edx = eax + 1;
    POP32(esp, esi);
    edi = edi;

loc_005D8990: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8990; /* jne: not equal / not zero */

loc_005D8997: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 2);
    PUSH32(esp, 0x005D89B0u); RECOMP_ABI_CALL(0x005D7AC0u, sub_005D7AC0); /* call 0x005D7AC0 */

loc_005D89B0: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3006);
    PUSH32(esp, 2);
    MEM32(0x6CE57C) = 0x10;
    MEM32(0x6CE580) = edx;
    PUSH32(esp, 0x005D89D5u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D89D5: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D89E0
 * Original: 0x005D89E0 - 0x005D89FD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D89E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D89E0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3001);
    PUSH32(esp, 2);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D89F9u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D89F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8A00
 * Original: 0x005D8A00 - 0x005D8A27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6CE578);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x3002);
    PUSH32(esp, 2);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8A1Cu); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8A1C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x11;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8A30
 * Original: 0x005D8A30 - 0x005D8A4D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8A30: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3004);
    PUSH32(esp, 2);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8A49u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8A49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8A50
 * Original: 0x005D8A50 - 0x005D8A6D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8A50: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3005);
    PUSH32(esp, 2);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8A69u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8A69: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8A70
 * Original: 0x005D8A70 - 0x005D8A8D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8A70: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3003);
    PUSH32(esp, 2);
    MEM32(0x6CE578) = eax;
    PUSH32(esp, 0x005D8A89u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8A89: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8A90
 * Original: 0x005D8A90 - 0x005D8AC9 (57 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8A90(void)
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

loc_005D8A90: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(0x6CE578) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x644F24)); /* fmul dword ptr [0x644f24] */
    PUSH32(esp, 0x005D8AADu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D8AAD: ;
    PUSH32(esp, 0x6CE578);
    PUSH32(esp, 0x3007);
    PUSH32(esp, 2);
    MEM32(0x6CE57C) = eax;
    PUSH32(esp, 0x005D8AC3u); RECOMP_ABI_CALL(0x005D7A40u, sub_005D7A40); /* call 0x005D7A40 */

loc_005D8AC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8AD0
 * Original: 0x005D8AD0 - 0x005D8AEA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8AD0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8AE4; /* je: equal / zero */

loc_005D8AD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8AE4; /* je: equal / zero */

loc_005D8ADC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8AE4; /* je: equal / zero */

loc_005D8AE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D8AE4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8AF0
 * Original: 0x005D8AF0 - 0x005D8B05 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8AF0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8AFF; /* je: equal / zero */

loc_005D8AF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8AFF; /* je: equal / zero */

loc_005D8AFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_005D8AFF: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8B10
 * Original: 0x005D8B10 - 0x005D8B39 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8B10: ;
    eax = MEM32(0x6D0A08);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D8B37; /* jle: less or equal (signed <=) */

loc_005D8B1C: ;
    /* nop */

loc_005D8B20: ;
    eax = MEM32(0x6D0A04);
    ecx = eax + esi * 8;
    PUSH32(esp, 0x005D8B2Du); RECOMP_ABI_CALL(0x005D8A70u, sub_005D8A70); /* call 0x005D8A70 */

loc_005D8B2D: ;
    eax = MEM32(0x6D0A08);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8B20; /* jl: less (signed <) */

loc_005D8B37: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8B40
 * Original: 0x005D8B40 - 0x005D8B60 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8B40: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = 1;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(0x6D0A10) = ecx;
    MEM32(0x6D0A14) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8B60
 * Original: 0x005D8B60 - 0x005D8BA6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8B60: ;
    eax = MEM32(0x6D0DB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8BA5; /* je: equal / zero */

loc_005D8B69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x6D0D30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x6D0DB0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005D8B9B; /* je: equal / zero */

loc_005D8B7B: ;
    ecx = esi;
    PUSH32(esp, 0x005D8B82u); RECOMP_ABI_CALL(0x005FC690u, sub_005FC690); /* call 0x005FC690 */

loc_005D8B82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D8B88u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8B88: ;
    eax = MEM32(0x6D0DB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x6D0D30) = 0;

loc_005D8B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_005D8BA5; /* jne: not equal / not zero */

loc_005D8BA0: ;
    MEM32(0x6D0D28) = eax;

loc_005D8BA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8BB0
 * Original: 0x005D8BB0 - 0x005D8CEC (316 bytes, 105 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D8BB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(edi + 0x6D0A28)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x6D0A28), 0x1B (8-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_005D8BDE; /* je: equal / zero */

loc_005D8BCB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655250);
    PUSH32(esp, 0x005D8BD6u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D8BD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D8BDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8BE6u); RECOMP_ABI_CALL(0x005D9CD0u, sub_005D9CD0); /* call 0x005D9CD0 */

loc_005D8BE6: ;
    eax = MEM32(edi + 0x6D0A20);
    MEM8(edi + 0x6D0A28) = 0x1C;
    eax = ZX8(MEM8(eax + 5));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_005D8C9F; /* jle: less or equal (signed <=) */

loc_005D8C0C: ;
    PUSH32(esp, ebp);
    /* nop */

loc_005D8C10: ;
    ecx = MEM32(edi + 0x6D0A20);
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4);
    eax = ZX8(MEM8(esi));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_005D8C7B; /* jle: less or equal (signed <=) */

loc_005D8C2D: ;
    /* nop */

loc_005D8C30: ;
    eax = MEM32(esi + 8);
    edi = MEM32(eax + ebp * 4);
    ebx = ZX8(MEM8(edi));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D8C54; /* jle: less or equal (signed <=) */

loc_005D8C3F: ;
    /* nop */

loc_005D8C40: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D8C4Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8C4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8C40; /* jl: less (signed <) */

loc_005D8C54: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8C5Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8C5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D8C63u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8C63: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8C30; /* jl: less (signed <) */

loc_005D8C73: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x10);

loc_005D8C7B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D8C84u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8C84: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D8C8Au); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8C8A: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_005D8C10; /* jl: less (signed <) */

loc_005D8C9E: ;
    POP32(esp, ebp);

loc_005D8C9F: ;
    edx = MEM32(edi + 0x6D0A20);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8CAEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8CAE: ;
    eax = MEM32(edi + 0x6D0A20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8CC6; /* je: equal / zero */

loc_005D8CBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8CC3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8CC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D8CC6: ;
    eax = MEM32(edi + 0x6D0A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8CD9; /* je: equal / zero */

loc_005D8CD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8CD6u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8CD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D8CD9: ;
    MEM32(edi + 0x6D0A24) = esi;
    MEM32(edi + 0x6D0A20) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D8CF0
 * Original: 0x005D8CF0 - 0x005D8D62 (114 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D8CF7u); RECOMP_ABI_CALL(0x005DBDF0u, sub_005DBDF0); /* call 0x005DBDF0 */

loc_005D8CF7: ;
    PUSH32(esp, 0x005D8CFCu); RECOMP_ABI_CALL(0x005DB310u, sub_005DB310); /* call 0x005DB310 */

loc_005D8CFC: ;
    PUSH32(esp, 0x005D8D01u); RECOMP_ABI_CALL(0x005DA1F0u, sub_005DA1F0); /* call 0x005DA1F0 */

loc_005D8D01: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005D8D03: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D8D09u); RECOMP_ABI_CALL(0x005D8BB0u, sub_005D8BB0); /* call 0x005D8BB0 */

loc_005D8D09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D8D03; /* jl: less (signed <) */

loc_005D8D12: ;
    esi = 0x6D0DAC;

loc_005D8D17: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8D33; /* je: equal / zero */

loc_005D8D1D: ;
    ecx = edi;
    PUSH32(esp, 0x005D8D24u); RECOMP_ABI_CALL(0x005FC690u, sub_005FC690); /* call 0x005FC690 */

loc_005D8D24: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D8D2Au); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D8D2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_005D8D33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D0D30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D0D30 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005D8D17; /* jge: greater or equal (signed >=) */

loc_005D8D3E: ;
    MEM32(0x6D0DB0) = 0;
    MEM32(0x6D0D28) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D340); PUSH32(esp, 0x005D8D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D8D52u); } /* indirect call */
    }

loc_005D8D58: ;
    POP32(esp, edi);
    MEM8(0x6D0A1C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D8D70
 * Original: 0x005D8D70 - 0x005D8D99 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005D8D70(void)
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

loc_005D8D70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    MEMF(0x674400) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D8DA0
 * Original: 0x005D8DA0 - 0x005D8DA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D8DA0: ;
    g_seh_ebp = ebp; sub_005DC480(); return; /* tail jmp 0x005DC480 */

}

/**
 * sub_005D8DB0
 * Original: 0x005D8DB0 - 0x005D8DE3 (51 bytes, 12 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005D8DB0(void)
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

loc_005D8DB0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x644F24)); /* fadd dword ptr [0x644f24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x644F24)); /* fadd dword ptr [0x644f24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005D8DDFu); RECOMP_ABI_CALL(0x005DB340u, sub_005DB340); /* call 0x005DB340 */

loc_005D8DDF: ;
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
 * sub_005D8DF0
 * Original: 0x005D8DF0 - 0x005D8DFB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D8DF0: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x6D0A14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005D8E00
 * Original: 0x005D8E00 - 0x005D943C (1596 bytes, 499 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D8E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D8E00: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x140);
    ebp = esi + esi * 2;
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + 0x6D0A28)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6D0A28), 0x1B (8-bit) */
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x28) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_005D8E3E; /* jne: not equal / not zero */

loc_005D8E2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x655460);
    PUSH32(esp, 0x005D8E35u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D8E35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D8E3Bu); RECOMP_ABI_CALL(0x005D8BB0u, sub_005D8BB0); /* call 0x005D8BB0 */

loc_005D8E3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D8E3E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x6D0A28)) & 0xFFu; _fb = (uint32_t)(0x1C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x6D0A28), 0x1C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8E61; /* je: equal / zero */

loc_005D8E47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x65542C);
    PUSH32(esp, 0x005D8E52u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D8E52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D8E61: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D8E71u); RECOMP_ABI_CALL(0x00617C40u, sub_00617C40); /* call 0x00617C40 */

loc_005D8E71: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8E95; /* jne: not equal / not zero */

loc_005D8E7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x655400);
    PUSH32(esp, 0x005D8E85u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D8E85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D8E95: ;
    edx = esp + 0x40;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005D8EA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8EA0; /* jne: not equal / not zero */

loc_005D8EAA: ;
    eax = esp + 0x40;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D8EB6u); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_005D8EB6: ;
    edi = esp + 0x48;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 0;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_005D8EC1: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D8EC1; /* jne: not equal / not zero */

loc_005D8EC9: ;
    ecx = MEM32(0x6553F8);
    SET_LO8(edx, MEM8(0x6553FC));
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    MEM32(edi) = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM8(edi + 4) = LO8(edx);
    PUSH32(esp, 0x005D8EE7u); RECOMP_ABI_CALL(0x00617C40u, sub_00617C40); /* call 0x00617C40 */

loc_005D8EE7: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x40) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005D8F03; /* jne: not equal / not zero */

loc_005D8EF4: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6553BC);
    goto loc_005D93C1;

loc_005D8F03: ;
    eax = MEM32(ebp + 0x6D0A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D93B4; /* jne: not equal / not zero */

loc_005D8F11: ;
    eax = MEM32(ebp + 0x6D0A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D93B4; /* jne: not equal / not zero */

loc_005D8F1F: ;
    ecx = ebx;
    PUSH32(esp, 0x005D8F26u); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_005D8F26: ;
    PUSH32(esp, 0x2A1);
    edi = eax;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D8F38u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D8F38: ;
    PUSH32(esp, 0x2A2);
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, 0xC);
    MEM32(ebp + 0x6D0A24) = eax;
    PUSH32(esp, 0x005D8F4Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D8F4F: ;
    ecx = MEM32(ebp + 0x6D0A24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 0x6D0A20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005D93A5; /* je: equal / zero */

loc_005D8F66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D93A5; /* je: equal / zero */

loc_005D8F6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x005D8F77u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D8F77: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005D8F80u); RECOMP_ABI_CALL(0x00617F60u, sub_00617F60); /* call 0x00617F60 */

loc_005D8F80: ;
    edx = MEM32(ebp + 0x6D0A20);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D8F90u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D8F90: ;
    eax = MEM32(ebp + 0x6D0A20);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D8FA3u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D8FA3: ;
    ecx = MEM32(ebp + 0x6D0A20);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D8FB6u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D8FB6: ;
    eax = MEM32(ebp + 0x6D0A20);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44485841) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x44485841 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D8FD6; /* je: equal / zero */

loc_005D8FC4: ;
    edx = MEM32(esp + 0x150);
    PUSH32(esp, edx);
    PUSH32(esp, 0x655360);
    goto loc_005D93C1;

loc_005D8FD6: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x82 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005D8FEC; /* jae: above or equal (unsigned >=) */

loc_005D8FDE: ;
    eax = ZX8(LO8(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x65531C);
    goto loc_005D93C1;

loc_005D8FEC: ;
    edi = ZX8(MEM8(eax + 5));
    PUSH32(esp, 0x2C9);
    eax = edi + edi;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edi;
    PUSH32(esp, 0x005D9007u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D9007: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x005D901Cu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D901C: ;
    PUSH32(esp, 0x2CC);
    ecx = edi * 4;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D9033u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D9033: ;
    edx = MEM32(ebp + 0x6D0A20);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_005D9396; /* jle: less or equal (signed <=) */

loc_005D9051: ;
    goto loc_005D9060;

loc_005D9053: ;
    edi = MEM32(esp + 0x24);
    goto loc_005D9060;

    /* nop */

loc_005D9060: ;
    PUSH32(esp, 0x2D0);
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x005D9071u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D9071: ;
    ecx = MEM32(ebp + 0x6D0A20);
    edx = MEM32(ecx + 8);
    MEM32(edx + edi * 4) = eax;
    eax = ZX16(MEM16(ebx + edi * 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D908Cu); RECOMP_ABI_CALL(0x00617F60u, sub_00617F60); /* call 0x00617F60 */

loc_005D908C: ;
    ecx = MEM32(ebp + 0x6D0A20);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + edi * 4);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0x005D90A6u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D90A6: ;
    PUSH32(esp, 1);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D90B3u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D90B3: ;
    PUSH32(esp, 1);
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D90C0u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D90C0: ;
    PUSH32(esp, 1);
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D90CDu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D90CD: ;
    PUSH32(esp, 1);
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D90DAu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D90DA: ;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, 0x2E0);
    ebx = eax + eax;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x005D90F4u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D90F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x005D9104u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9104: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x2E3);
    edx = ecx * 4;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D911Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D911F: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_005D9370; /* jle: less or equal (signed <=) */

loc_005D9137: ;
    goto loc_005D9140;

loc_005D9139: ;
    ebx = MEM32(esp + 0x20);
    /* nop */

loc_005D9140: ;
    PUSH32(esp, 0x2E7);
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x005D9151u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D9151: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0x44);
    MEM32(ecx + ebx * 4) = eax;
    eax = ZX16(MEM16(edx + ebx * 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D916Au); RECOMP_ABI_CALL(0x00617F60u, sub_00617F60); /* call 0x00617F60 */

loc_005D916A: ;
    ecx = MEM32(edi + 8);
    ebp = MEM32(ecx + ebx * 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x005D917Au); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D917A: ;
    PUSH32(esp, 1);
    edx = ebp + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D9187u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9187: ;
    PUSH32(esp, 1);
    eax = ebp + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D9194u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9194: ;
    PUSH32(esp, 1);
    ecx = ebp + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D91A1u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D91A1: ;
    PUSH32(esp, 1);
    edx = ebp + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D91AEu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D91AE: ;
    PUSH32(esp, 1);
    eax = ebp + 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D91BBu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D91BB: ;
    PUSH32(esp, 1);
    ecx = ebp + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D91C8u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D91C8: ;
    eax = ZX8(MEM8(ebp));
    PUSH32(esp, 0x2F9);
    ebx = eax + eax;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x005D91E3u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D91E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x005D91F3u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D91F3: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x2FD);
    eax = edx * 4;
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D920Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D920E: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D934A; /* jle: less or equal (signed <=) */

loc_005D9222: ;
    PUSH32(esp, 0x301);
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x005D9233u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D9233: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x34);
    MEM32(ecx + ebx * 4) = eax;
    eax = ZX16(MEM16(edx + ebx * 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D924Cu); RECOMP_ABI_CALL(0x00617F60u, sub_00617F60); /* call 0x00617F60 */

loc_005D924C: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + ebx * 4);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005D925Cu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D925C: ;
    PUSH32(esp, 1);
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D9269u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9269: ;
    PUSH32(esp, 1);
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D9276u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9276: ;
    PUSH32(esp, 1);
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D9283u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9283: ;
    PUSH32(esp, 1);
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D9290u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9290: ;
    PUSH32(esp, 4);
    eax = edi + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D929Du); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D929D: ;
    PUSH32(esp, 4);
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D92AAu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92AA: ;
    PUSH32(esp, 4);
    edx = edi + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D92B7u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92B7: ;
    PUSH32(esp, 4);
    eax = edi + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D92C4u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92C4: ;
    PUSH32(esp, 4);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D92D1u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92D1: ;
    PUSH32(esp, 4);
    edx = edi + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005D92DEu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92DE: ;
    PUSH32(esp, 1);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D92EBu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92EB: ;
    eax = edi + 0x21;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D92F8u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D92F8: ;
    PUSH32(esp, 4);
    ecx = edi + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005D9305u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9305: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    edx = ZX8(LO8(eax));
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, edx);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D931Bu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D931B: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), 0x12 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005D9328; /* jae: above or equal (unsigned >=) */

loc_005D9322: ;
    MEM16(edi + 0x38) = 0;

loc_005D9328: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x6D0A24);
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(edi + 0x50) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_005D9222; /* jl: less (signed <) */

loc_005D9346: ;
    edi = MEM32(esp + 0x3C);

loc_005D934A: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D9354u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D9354: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005D9139; /* jl: less (signed <) */

loc_005D936C: ;
    ebp = MEM32(esp + 0x30);

loc_005D9370: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D937Au); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D937A: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x38);
    ebx = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005D9053; /* jl: less (signed <) */

loc_005D9396: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005D939Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D939C: ;
    ebx = MEM32(esp + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005D93D1;

loc_005D93A5: ;
    edx = MEM32(esp + 0x148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6552DC);
    goto loc_005D93C1;

loc_005D93B4: ;
    eax = MEM32(esp + 0x148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655298);

loc_005D93C1: ;
    PUSH32(esp, 0x005D93C6u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D93C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;

loc_005D93D1: ;
    ecx = ebx;
    PUSH32(esp, 0x005D93D8u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005D93D8: ;
    ecx = esi;
    PUSH32(esp, 0x005D93DFu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005D93DF: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005D93FC; /* jne: not equal / not zero */

loc_005D93E9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM8(ebp + 0x6D0A28) = 0x1B;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D93FC: ;
    eax = MEM32(ebp + 0x6D0A24);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9417; /* je: equal / zero */

loc_005D9408: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D940Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D940E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x6D0A24) = edi;

loc_005D9417: ;
    eax = MEM32(ebp + 0x6D0A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9430; /* je: equal / zero */

loc_005D9421: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D9427u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D9427: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x6D0A20) = edi;

loc_005D9430: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9440
 * Original: 0x005D9440 - 0x005D9494 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005D9440(void)
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

loc_005D9440: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x6554A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x6554a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005D9487; /* jne: not equal / not zero */

loc_005D9470: ;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643940)); /* fmul dword ptr [0x643940] */
    PUSH32(esp, 0x005D9481u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D9481: ;
    MEM32(0x6D0D20) = eax;
    esp += 4; return; /* ret */

loc_005D9487: ;
    eax = 0xFFFFD8F0u;
    fp_pop(); /* fstp st(0) */
    MEM32(0x6D0D20) = eax;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D94A0
 * Original: 0x005D94A0 - 0x005D9500 (96 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D94A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D94A0: ;
    eax = MEM32(0x6D0DB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x6D0D28);
    if (CMP_G(_fas, _fbs)) goto loc_005D94B3; /* jg: greater (signed >) */

loc_005D94AE: ;
    eax = 0x679884;

loc_005D94B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D94C2u); RECOMP_ABI_CALL(0x00617CD0u, sub_00617CD0); /* call 0x00617CD0 */

loc_005D94C2: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005D94EF; /* jne: not equal / not zero */

loc_005D94CF: ;
    eax = MEM32(0x6D0DB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D94EA; /* je: equal / zero */

loc_005D94D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x679884);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D94E5u); RECOMP_ABI_CALL(0x00617CD0u, sub_00617CD0); /* call 0x00617CD0 */

loc_005D94E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_005D94EA: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D94F9; /* je: equal / zero */

loc_005D94EF: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_005D94F9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005D9500
 * Original: 0x005D9500 - 0x005D950C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9500(void)
{

loc_005D9500: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x005D9509u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005D9509: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D9510
 * Original: 0x005D9510 - 0x005D9547 (55 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D9510: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_005D9527; /* jne: not equal / not zero */

loc_005D951E: ;
    ecx = esi;
    PUSH32(esp, 0x005D9525u); RECOMP_ABI_CALL(0x00617AE0u, sub_00617AE0); /* call 0x00617AE0 */

loc_005D9525: ;
    goto loc_005D9533;

loc_005D9527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9537; /* jne: not equal / not zero */

loc_005D952C: ;
    ecx = esi;
    PUSH32(esp, 0x005D9533u); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_005D9533: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D9537: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005D9543u); RECOMP_ABI_CALL(0x00617F60u, sub_00617F60); /* call 0x00617F60 */

loc_005D9543: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D9550
 * Original: 0x005D9550 - 0x005D9566 (22 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9550(void)
{

loc_005D9550: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x005D9563u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005D9563: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005D9570
 * Original: 0x005D9570 - 0x005D963E (206 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D9570: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x62D338); PUSH32(esp, 0x005D957Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9575u); } /* indirect call */
    }

loc_005D957B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6554F4);
    { uint32_t _icall_target = MEM32(0x62D31C); PUSH32(esp, 0x005D9586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9580u); } /* indirect call */
    }

loc_005D9586: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xAC44);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x62D320); PUSH32(esp, 0x005D9599u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9593u); } /* indirect call */
    }

loc_005D9599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D95B5; /* jne: not equal / not zero */

loc_005D959D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D324); PUSH32(esp, 0x005D95A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D959Du); } /* indirect call */
    }

loc_005D95A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6554B0);
    PUSH32(esp, 0x005D95AEu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D95AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D95B5: ;
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6D0A10);
    { uint32_t _icall_target = MEM32(0x62D328); PUSH32(esp, 0x005D95CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D95C4u); } /* indirect call */
    }

loc_005D95CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5D9550);
    PUSH32(esp, 0x5D9510);
    PUSH32(esp, 0x5D9500);
    PUSH32(esp, 0x5D94A0);
    { uint32_t _icall_target = MEM32(0x62D32C); PUSH32(esp, 0x005D95E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D95DEu); } /* indirect call */
    }

loc_005D95E4: ;
    eax = 0x6D0A20;
    SET_LO8(ecx, 0x1C);
    goto loc_005D95F0;

    /* nop */

loc_005D95F0: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    MEM8(eax + 8) = LO8(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D0D20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D0D20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D95F0; /* jl: less (signed <) */

loc_005D960A: ;
    edx = MEM32(0x6D0A10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D9616u); RECOMP_ABI_CALL(0x005DB2C0u, sub_005DB2C0); /* call 0x005DB2C0 */

loc_005D9616: ;
    PUSH32(esp, 0x005D961Bu); RECOMP_ABI_CALL(0x005DC3A0u, sub_005DC3A0); /* call 0x005DC3A0 */

loc_005D961B: ;
    eax = MEM32(0x6D0A10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D9626u); RECOMP_ABI_CALL(0x005D9A90u, sub_005D9A90); /* call 0x005D9A90 */

loc_005D9626: ;
    MEM8(0x6D0A1C) = 1;
    MEM32(0x6D0D20) = 0xFFFFD8F0u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9640
 * Original: 0x005D9640 - 0x005D970C (204 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D9640: ;
    eax = MEM32(0x6D0DB0);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005D9651; /* jle: less or equal (signed <=) */

loc_005D964D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_005D9651: ;
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x6D0D30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D966D; /* je: equal / zero */

loc_005D965D: ;
    ecx = esi;
    PUSH32(esp, 0x005D9664u); RECOMP_ABI_CALL(0x005FC690u, sub_005FC690); /* call 0x005FC690 */

loc_005D9664: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D966Au); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D966A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D966D: ;
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x6553A8);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x005D967Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005D967E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D968E; /* je: equal / zero */

loc_005D9685: ;
    ecx = eax;
    PUSH32(esp, 0x005D968Cu); RECOMP_ABI_CALL(0x005FC660u, sub_005FC660); /* call 0x005FC660 */

loc_005D968C: ;
    goto loc_005D9690;

loc_005D968E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005D9690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(0x6D0DB0);
    esi = MEM32(esp + 8);
    MEM32(edx * 4 + 0x6D0D30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005D96C8; /* je: equal / zero */

loc_005D96A5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x005D96ADu); RECOMP_ABI_CALL(0x005FDD00u, sub_005FDD00); /* call 0x005FDD00 */

loc_005D96AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D96C8; /* je: equal / zero */

loc_005D96B1: ;
    PUSH32(esp, 0x005D96B6u); RECOMP_ABI_CALL(0x005FC980u, sub_005FC980); /* call 0x005FC980 */

loc_005D96B6: ;
    MEM32(0x6D0D28) = eax;
    MEM32(0x6D0DB0) = MEM32(0x6D0DB0) + 1;
    _fa = (uint32_t)(MEM32(0x6D0DB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005D96C1: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D96C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x655504);
    PUSH32(esp, 0x005D96D3u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005D96D3: ;
    eax = MEM32(0x6D0DB0);
    esi = MEM32(eax * 4 + 0x6D0D30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D96C1; /* je: equal / zero */

loc_005D96E6: ;
    ecx = esi;
    PUSH32(esp, 0x005D96EDu); RECOMP_ABI_CALL(0x005FC690u, sub_005FC690); /* call 0x005FC690 */

loc_005D96ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D96F3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005D96F3: ;
    ecx = MEM32(0x6D0DB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 4 + 0x6D0D30) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D9710
 * Original: 0x005D9710 - 0x005D9816 (262 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9710: ;
    eax = ZX16(MEM16(esp + 4));
    ecx = eax + -4096;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005D97F9; /* ja: above (unsigned >) */

loc_005D9724: ;
    ecx = ZX8(MEM8(ecx + 0x5D9848));
    { uint32_t _jt = MEM32(ecx * 4 + 0x5D9818); /* switch: 12 entries, 12 targets */
    if (_jt == 0x005D9732u) goto loc_005D9732;
    if (_jt == 0x005D973Du) goto loc_005D973D;
    if (_jt == 0x005D9748u) goto loc_005D9748;
    if (_jt == 0x005D9761u) goto loc_005D9761;
    if (_jt == 0x005D977Au) goto loc_005D977A;
    if (_jt == 0x005D9798u) goto loc_005D9798;
    if (_jt == 0x005D97AEu) goto loc_005D97AE;
    if (_jt == 0x005D97C8u) goto loc_005D97C8;
    if (_jt == 0x005D97DDu) goto loc_005D97DD;
    if (_jt == 0x005D97EEu) goto loc_005D97EE;
    if (_jt == 0x005D97F3u) goto loc_005D97F3;
    if (_jt == 0x005D97F9u) goto loc_005D97F9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005D9732: ;
    PUSH32(esp, 0x005D9737u); RECOMP_ABI_CALL(0x005D9570u, sub_005D9570); /* call 0x005D9570 */

loc_005D9737: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005D973D: ;
    PUSH32(esp, 0x005D9742u); RECOMP_ABI_CALL(0x005D8CF0u, sub_005D8CF0); /* call 0x005D8CF0 */

loc_005D9742: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005D9748: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D9758u); RECOMP_ABI_CALL(0x005D8D70u, sub_005D8D70); /* call 0x005D8D70 */

loc_005D9758: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D9761: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D9771u); RECOMP_ABI_CALL(0x005D8DB0u, sub_005D8DB0); /* call 0x005D8DB0 */

loc_005D9771: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D977A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    ecx = eax + 8;
    eax = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D978Fu); RECOMP_ABI_CALL(0x005D8E00u, sub_005D8E00); /* call 0x005D8E00 */

loc_005D978F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D9798: ;
    ecx = MEM32(esp + 8);
    edx = ZX16(MEM16(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D97A5u); RECOMP_ABI_CALL(0x005D8BB0u, sub_005D8BB0); /* call 0x005D8BB0 */

loc_005D97A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D97AE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D97BFu); RECOMP_ABI_CALL(0x005D9440u, sub_005D9440); /* call 0x005D9440 */

loc_005D97BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D97C8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D97D4u); RECOMP_ABI_CALL(0x005D8DF0u, sub_005D8DF0); /* call 0x005D8DF0 */

loc_005D97D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005D97DD: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D97EAu); RECOMP_ABI_CALL(0x005D9640u, sub_005D9640); /* call 0x005D9640 */

loc_005D97EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005D97EE: ;
    PUSH32(esp, 0x005D97F3u); RECOMP_ABI_CALL(0x005D8DA0u, sub_005D8DA0); /* call 0x005D8DA0 */

loc_005D97F3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005D97F9: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9812; /* je: equal / zero */

loc_005D9803: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655540);
    PUSH32(esp, 0x005D980Fu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D980F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005D9812: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9860
 * Original: 0x005D9860 - 0x005D9A41 (481 bytes, 146 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9860: ;
    PUSH32(esp, esi);
    esi = MEM32(0x6D0D24);
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D98E6; /* je: equal / zero */

loc_005D986D: ;
    /* nop */

loc_005D9870: ;
    eax = ZX8(LO8(eax));
    ecx = eax + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005D98CA; /* ja: above (unsigned >) */

loc_005D987B: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x5D9A44); /* switch: 4 entries, 4 targets */
    if (_jt == 0x005D9882u) goto loc_005D9882;
    if (_jt == 0x005D9894u) goto loc_005D9894;
    if (_jt == 0x005D98A6u) goto loc_005D98A6;
    if (_jt == 0x005D98B8u) goto loc_005D98B8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005D9882: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 2));
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D9892u); RECOMP_ABI_CALL(0x005D9710u, sub_005D9710); /* call 0x005D9710 */

loc_005D9892: ;
    goto loc_005D98D5;

loc_005D9894: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 2));
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005D98A4u); RECOMP_ABI_CALL(0x005DC820u, sub_005DC820); /* call 0x005DC820 */

loc_005D98A4: ;
    goto loc_005D98D5;

loc_005D98A6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 2));
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005D98B6u); RECOMP_ABI_CALL(0x005DA530u, sub_005DA530); /* call 0x005DA530 */

loc_005D98B6: ;
    goto loc_005D98D5;

loc_005D98B8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 2));
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005D98C8u); RECOMP_ABI_CALL(0x005DB720u, sub_005DB720); /* call 0x005DB720 */

loc_005D98C8: ;
    goto loc_005D98D5;

loc_005D98CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x65558C);
    PUSH32(esp, 0x005D98D5u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D98D5: ;
    edx = ZX8(MEM8(esi + 1));
    SET_LO8(eax, MEM8(esi + edx * 4));
    esi = esi + edx * 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9870; /* jne: not equal / not zero */

loc_005D98E6: ;
    SET_LO8(eax, MEM8(0x6D0A1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x6D0A18);
    if (CMP_EQ(_fa, _fb)) goto loc_005D9A29; /* je: equal / zero */

loc_005D98F8: ;
    MEM16(eax) = 1;
    ecx = MEM32(0x6D0A18);
    MEM16(ecx + 2) = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x6D0A28;

loc_005D9910: ;
    SET_LO8(edx, MEM8(eax));
    esi = MEM32(0x6D0A18);
    MEM8(esi + ecx + 4) = LO8(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D0D28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D0D28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9910; /* jl: less (signed <) */

loc_005D9927: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005D9930: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D9936u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005D9936: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D9940u); RECOMP_ABI_CALL(0x005DC250u, sub_005DC250); /* call 0x005DC250 */

loc_005D9940: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D9946u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005D9946: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D9950u); RECOMP_ABI_CALL(0x005DC390u, sub_005DC390); /* call 0x005DC390 */

loc_005D9950: ;
    ecx = MEM32(0x6D0A18);
    MEM8(ecx + esi + 0x44) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9930; /* jl: less (signed <) */

loc_005D9960: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005D9962: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D9968u); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005D9968: ;
    SET_LO8(edx, MEM8(eax + 0x30834));
    eax = MEM32(0x6D0A18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + esi + 0x48) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9962; /* jl: less (signed <) */

loc_005D9980: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xCC;

loc_005D9988: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D998Eu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D998E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D9998u); RECOMP_ABI_CALL(0x005DA070u, sub_005DA070); /* call 0x005DA070 */

loc_005D9998: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D999Eu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D999E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D99A8u); RECOMP_ABI_CALL(0x005DA050u, sub_005DA050); /* call 0x005DA050 */

loc_005D99A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D99CF; /* je: equal / zero */

loc_005D99AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D99B3u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D99B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D99BDu); RECOMP_ABI_CALL(0x005DA050u, sub_005DA050); /* call 0x005DA050 */

loc_005D99BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D99CF; /* je: equal / zero */

loc_005D99C2: ;
    ecx = MEM32(0x6D0A18);
    MEM8(ecx + esi + 0x4C) = 0;
    goto loc_005D99DA;

loc_005D99CF: ;
    edx = MEM32(0x6D0A18);
    MEM8(edx + esi + 0x4C) = 3;

loc_005D99DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005D99E0u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D99E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D99EAu); RECOMP_ABI_CALL(0x005DA060u, sub_005DA060); /* call 0x005DA060 */

loc_005D99EA: ;
    ecx = MEM32(0x6D0A18);
    PUSH32(esp, esi);
    MEM16(edi + ecx) = LO16(eax);
    PUSH32(esp, 0x005D99FAu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D99FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D9A04u); RECOMP_ABI_CALL(0x005DA050u, sub_005DA050); /* call 0x005DA050 */

loc_005D9A04: ;
    edx = MEM32(0x6D0A18);
    MEM8(edx + esi + 0x8C) = LO8(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9988; /* jl: less (signed <) */

loc_005D9A21: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005D9A29: ;
    MEM16(eax) = 0xFFFF;
    ecx = MEM32(0x6D0A18);
    MEM16(ecx + 2) = 0x100E;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005D9A60
 * Original: 0x005D9A60 - 0x005D9A7D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9A60: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(0x6D0A18) = eax;
    MEM32(0x6D0D24) = ecx;
    PUSH32(esp, 0x005D9A78u); RECOMP_ABI_CALL(0x005D9860u, sub_005D9860); /* call 0x005D9860 */

loc_005D9A78: ;
    g_seh_ebp = ebp; sub_005DBDC0(); return; /* tail jmp 0x005DBDC0 */

}

/**
 * sub_005D9A80
 * Original: 0x005D9A80 - 0x005D9A90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D9A80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    _fb = (uint32_t)(0x6D0DC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D0DC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9A90
 * Original: 0x005D9A90 - 0x005D9B57 (199 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(0x6D0DBC) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(0x6D0DC0) = ebp;
    MEM32(0x6D0DB8) = ebp;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = MEM32(0x62D330); PUSH32(esp, 0x005D9AC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9AC0u); } /* indirect call */
    }

loc_005D9AC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9B23; /* je: equal / zero */

loc_005D9ACA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x62D314);

loc_005D9AD1: ;
    esi = MEM32(esp + 0x10);
    edi = 0x64D770;
    ecx = 0x1F;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005D9B09; /* jne: not equal / not zero */

loc_005D9AE5: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D318); PUSH32(esp, 0x005D9AF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9AEAu); } /* indirect call */
    }

loc_005D9AF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9B03; /* jne: not equal / not zero */

loc_005D9AF4: ;
    eax = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(0x6D0DB8) = eax;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005D9B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9AFFu); } /* indirect call */
    }

loc_005D9B01: ;
    goto loc_005D9B09;

loc_005D9B03: ;
    MEM32(0x6D0DB8) = ebp;

loc_005D9B09: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D330); PUSH32(esp, 0x005D9B1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9B18u); } /* indirect call */
    }

loc_005D9B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9AD1; /* jne: not equal / not zero */

loc_005D9B22: ;
    POP32(esp, ebx);

loc_005D9B23: ;
    edx = 0x6D0DD0;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_005D9B30;

    /* nop */

loc_005D9B30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 8;
    ecx = 0x28;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edx) = LO16(esi);
    MEM32(edx + -4) = esi;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xB4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3AD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6D3AD0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9B30; /* jl: less (signed <) */

loc_005D9B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9B60
 * Original: 0x005D9B60 - 0x005D9C14 (180 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9B60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(0x62D330); PUSH32(esp, 0x005D9B80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9B7Au); } /* indirect call */
    }

loc_005D9B80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9C10; /* je: equal / zero */

loc_005D9B88: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D318);
    PUSH32(esp, esi);
    esi = MEM32(0x62D310);
    PUSH32(esp, edi);
    edi = MEM32(0x62D314);

loc_005D9BA2: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9BF3; /* jne: not equal / not zero */

loc_005D9BAA: ;
    eax = MEM32(0x6D0DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9BC2; /* je: equal / zero */

loc_005D9BB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6D0DB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6D0DB8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9BC2; /* je: equal / zero */

loc_005D9BBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x005D9BBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9BBCu); } /* indirect call */
    }

loc_005D9BBE: ;
    ecx = MEM32(esp + 0x10);

loc_005D9BC2: ;
    _fa = (uint32_t)(MEM32(0x6D0DB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6D0DB8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9BD2; /* jne: not equal / not zero */

loc_005D9BCA: ;
    MEM32(0x6D0DC0) = ecx;
    goto loc_005D9BF3;

loc_005D9BD2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9BD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9BD3u); } /* indirect call */
    }

loc_005D9BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9BE9; /* jne: not equal / not zero */

loc_005D9BD9: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x6D0DC0) = eax;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x005D9BE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9BE5u); } /* indirect call */
    }

loc_005D9BE7: ;
    goto loc_005D9BF3;

loc_005D9BE9: ;
    MEM32(0x6D0DC0) = 0;

loc_005D9BF3: ;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x62D330); PUSH32(esp, 0x005D9C08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9C02u); } /* indirect call */
    }

loc_005D9C08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9BA2; /* jne: not equal / not zero */

loc_005D9C0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005D9C10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005D9C20
 * Original: 0x005D9C20 - 0x005D9CC6 (166 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0x14;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM16(ebx + 0xA) = 0x17;
    edi = esi;
    ebp = 8;
    goto loc_005D9C40;

    /* nop */

loc_005D9C40: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9C50; /* je: equal / zero */

loc_005D9C47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D300); PUSH32(esp, 0x005D9C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9C48u); } /* indirect call */
    }

loc_005D9C4E: ;
    goto loc_005D9C5D;

loc_005D9C50: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9C5D; /* je: equal / zero */

loc_005D9C56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D304); PUSH32(esp, 0x005D9C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9C57u); } /* indirect call */
    }

loc_005D9C5D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005D9C40; /* jne: not equal / not zero */

loc_005D9C63: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9CAC; /* je: equal / zero */

loc_005D9C6B: ;
    ebp = MEM32(0x62D308);
    ebx = MEM32(0x62D30C);
    edi = 8;
    /* nop */

loc_005D9C80: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9C93; /* je: equal / zero */

loc_005D9C87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9C88u); } /* indirect call */
    }

loc_005D9C8A: ;
    MEM32(esi + -4) = 0;
    goto loc_005D9CA2;

loc_005D9C93: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9CA2; /* je: equal / zero */

loc_005D9C99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005D9C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9C9Au); } /* indirect call */
    }

loc_005D9C9C: ;
    MEM32(esi) = 0;

loc_005D9CA2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005D9C80; /* jne: not equal / not zero */

loc_005D9CA8: ;
    ebx = MEM32(esp + 0x10);

loc_005D9CAC: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM16(ebx + 8) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_005D9CBE; /* je: equal / zero */

loc_005D9CBB: ;
    MEM32(ebx + 4) = eax;

loc_005D9CBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005D9CD0
 * Original: 0x005D9CD0 - 0x005D9D17 (71 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005D9CD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x6D0DCC;
    edi = edi;

loc_005D9CE0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9D04; /* jne: not equal / not zero */

loc_005D9CE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6555BC);
    PUSH32(esp, 0x005D9CEFu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005D9CEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005D9CFAu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005D9CFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005D9D04u); RECOMP_ABI_CALL(0x005D9C20u, sub_005D9C20); /* call 0x005D9C20 */

loc_005D9D04: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3ACC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D3ACC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005D9CE0; /* jl: less (signed <) */

loc_005D9D13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005D9D20
 * Original: 0x005D9D20 - 0x005D9D78 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9D20: ;
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x15 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9D30; /* je: equal / zero */

loc_005D9D2A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x16 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9D77; /* jne: not equal / not zero */

loc_005D9D30: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x15 (16-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x62D300);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D304);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x14;
    edi = 8;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0xA) = LO16(edx);

loc_005D9D58: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9D64; /* je: equal / zero */

loc_005D9D5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005D9D62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9D60u); } /* indirect call */
    }

loc_005D9D62: ;
    goto loc_005D9D6D;

loc_005D9D64: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9D6D; /* je: equal / zero */

loc_005D9D6A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9D6Bu); } /* indirect call */
    }

loc_005D9D6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005D9D58; /* jne: not equal / not zero */

loc_005D9D73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005D9D77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D9D80
 * Original: 0x005D9D80 - 0x005D9DD8 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005D9D80: ;
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x18 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9D90; /* je: equal / zero */

loc_005D9D8A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x19 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9DD7; /* jne: not equal / not zero */

loc_005D9D90: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x18 (16-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x62D2F8);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D2FC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x14;
    edi = 8;
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x15;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0xA) = LO16(edx);

loc_005D9DB8: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9DC4; /* je: equal / zero */

loc_005D9DBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005D9DC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9DC0u); } /* indirect call */
    }

loc_005D9DC2: ;
    goto loc_005D9DCD;

loc_005D9DC4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9DCD; /* je: equal / zero */

loc_005D9DCA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9DCBu); } /* indirect call */
    }

loc_005D9DCD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005D9DB8; /* jne: not equal / not zero */

loc_005D9DD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005D9DD7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005D9DE0
 * Original: 0x005D9DE0 - 0x005D9EBB (219 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9DE0(void)
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

loc_005D9DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D2F0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx + 0x10;
    ebx = 8;

loc_005D9DF6: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9E07; /* jne: not equal / not zero */

loc_005D9DFC: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9EAA; /* je: equal / zero */

loc_005D9E07: ;
    ecx = MEM32(esi + 0x10);
    edx = ZX8(MEM8(ecx + 4));
    ecx = MEM32(esi + 8);
    ecx = ZX8(MEM8(ecx + 1));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(esi + 0xC);
    ecx = ZX8(MEM8(ecx + 1));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    edx = edi + 0x1388;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6555F0)); /* fmul dword ptr [0x6555f0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x674400)); /* fmul dword ptr [0x674400] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x14)); /* fimul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9E61; /* je: equal / zero */

loc_005D9E52: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9E5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9E5Du); } /* indirect call */
    }

loc_005D9E5F: ;
    goto loc_005D9EAA;

loc_005D9E61: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005D9E82; /* jp: parity */

loc_005D9E78: ;
    MEM32(esp + 0x14) = 0;
    goto loc_005D9E9B;

loc_005D9E82: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005D9E9B; /* jne: not equal / not zero */

loc_005D9E93: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_005D9E9B: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2F4); PUSH32(esp, 0x005D9EAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9EA4u); } /* indirect call */
    }

loc_005D9EAA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005D9DF6; /* jne: not equal / not zero */

loc_005D9EB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D9EC0
 * Original: 0x005D9EC0 - 0x005D9FA1 (225 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9EC0(void)
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

loc_005D9EC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    edi = ecx + 0x18;
    MEM32(esp + 0x10) = 8;

loc_005D9ED6: ;
    ebx = MEM32(edi + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005D9EE8; /* jne: not equal / not zero */

loc_005D9EDD: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9F85; /* je: equal / zero */

loc_005D9EE8: ;
    esi = MEM32(edi + 8);
    fp_push(MEMD(0x6454B0)); /* fld double */
    eax = MEM32(edi + 4);
    ebp = (uint32_t)(int32_t)SMEM8(eax + 3);
    edx = ZX8(MEM8(esi + 7));
    ecx = MEM32(edi);
    eax = (uint32_t)(int32_t)SMEM8(eax + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(int32_t)SMEM8(ecx + 3);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(esi + 6);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x64);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655600)); /* fmul dword ptr [0x655600] */
    PUSH32(esp, 0x005D9F38u); RECOMP_ABI_CALL(0x0061A8C0u, sub_0061A8C0); /* call 0x0061A8C0 */

loc_005D9F38: ;
    fp_push((double)SMEM32(esi + 0x2C)); /* fild */
    edx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005D9F48; /* jge: greater or equal (signed >=) */

loc_005D9F42: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x6555F8)); /* fadd qword ptr [0x6555f8] */

loc_005D9F48: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    PUSH32(esp, 0x005D9F4Fu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005D9F4F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005D9F5D; /* jae: above or equal (unsigned >=) */

loc_005D9F56: ;
    esi = 0x64;
    goto loc_005D9F6A;

loc_005D9F5D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30D40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x30D40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005D9F6A; /* jbe: below or equal (unsigned <=) */

loc_005D9F65: ;
    esi = 0x30D40;

loc_005D9F6A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9F76; /* je: equal / zero */

loc_005D9F6E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x62D2E8); PUSH32(esp, 0x005D9F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9F70u); } /* indirect call */
    }

loc_005D9F76: ;
    eax = MEM32(edi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9F85; /* je: equal / zero */

loc_005D9F7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2EC); PUSH32(esp, 0x005D9F85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9F7Fu); } /* indirect call */
    }

loc_005D9F85: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_005D9ED6; /* jne: not equal / not zero */

loc_005D9F97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005D9FB0
 * Original: 0x005D9FB0 - 0x005D9FFB (75 bytes, 33 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005D9FB0(void)
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

loc_005D9FB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D2E4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx + 0x14;
    MEM32(esp + 0x10) = 8;
    edi = edi;

loc_005D9FD0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005D9FE5; /* je: equal / zero */

loc_005D9FD6: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005D9FE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005D9FE3u); } /* indirect call */
    }

loc_005D9FE5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_005D9FD0; /* jne: not equal / not zero */

loc_005D9FF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DA000
 * Original: 0x005DA000 - 0x005DA041 (65 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DA000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D2E0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx + 0x14;
    MEM32(esp + 0x10) = 8;
    edi = edi;

loc_005DA020: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA02B; /* je: equal / zero */

loc_005DA026: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005DA02Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA029u); } /* indirect call */
    }

loc_005DA02B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_005DA020; /* jne: not equal / not zero */

loc_005DA039: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005DA050
 * Original: 0x005DA050 - 0x005DA055 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA050(void)
{

loc_005DA050: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    esp += 4; return; /* ret */

}

/**
 * sub_005DA060
 * Original: 0x005DA060 - 0x005DA065 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA060(void)
{

loc_005DA060: ;
    SET_LO16(eax, MEM16(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_005DA070
 * Original: 0x005DA070 - 0x005DA13D (205 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DA070: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D2D8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = edi + 0x14;
    MEM32(esp + 0x10) = 8;
    /* nop */

loc_005DA090: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA0C7; /* je: equal / zero */

loc_005DA097: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005DA09Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA098u); } /* indirect call */
    }

loc_005DA09A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA0FF; /* je: equal / zero */

loc_005DA09F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA0FF; /* je: equal / zero */

loc_005DA0A4: ;
    SET_LO16(eax, MEM16(edi + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x18 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA101; /* je: equal / zero */

loc_005DA0AE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x19 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA101; /* je: equal / zero */

loc_005DA0B4: ;
    eax = MEM32(esi + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D308); PUSH32(esp, 0x005DA0BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA0B8u); } /* indirect call */
    }

loc_005DA0BE: ;
    MEM32(esi + -4) = 0;
    goto loc_005DA101;

loc_005DA0C7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA101; /* je: equal / zero */

loc_005DA0CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2DC); PUSH32(esp, 0x005DA0D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA0CEu); } /* indirect call */
    }

loc_005DA0D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA0FF; /* je: equal / zero */

loc_005DA0D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA0FF; /* je: equal / zero */

loc_005DA0DE: ;
    SET_LO16(eax, MEM16(edi + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x18 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA101; /* je: equal / zero */

loc_005DA0E8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x19 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA101; /* je: equal / zero */

loc_005DA0EE: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D30C); PUSH32(esp, 0x005DA0F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA0F1u); } /* indirect call */
    }

loc_005DA0F7: ;
    MEM32(esi) = 0;
    goto loc_005DA101;

loc_005DA0FF: ;
    SET_LO8(ebx, 1);

loc_005DA101: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_005DA090; /* jne: not equal / not zero */

loc_005DA10F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA135; /* jne: not equal / not zero */

loc_005DA113: ;
    SET_LO16(eax, MEM16(edi + 0xA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x18 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA135; /* je: equal / zero */

loc_005DA11D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x19 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA135; /* je: equal / zero */

loc_005DA123: ;
    eax = 0xFFFFFFFFu;
    MEM16(edi + 0xA) = 0x17;
    MEM16(edi + 8) = LO16(eax);
    MEM32(edi + 4) = eax;

loc_005DA135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005DA140
 * Original: 0x005DA140 - 0x005DA16B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DA140: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x6D0DD0;
    PUSH32(esp, esi);
    /* nop */

loc_005DA150: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA169; /* je: equal / zero */

loc_005DA157: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3AD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D3AD0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DA150; /* jl: less (signed <) */

loc_005DA166: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005DA169: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DA170
 * Original: 0x005DA170 - 0x005DA1F0 (128 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DA170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x6D0DD0;

loc_005DA177: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA1C2; /* je: equal / zero */

loc_005DA17D: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3AD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6D3AD0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DA177; /* jl: less (signed <) */

loc_005DA18C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x6D0DC8;

loc_005DA195: ;
    ecx = esi;
    PUSH32(esp, 0x005DA19Cu); RECOMP_ABI_CALL(0x005DA070u, sub_005DA070); /* call 0x005DA070 */

loc_005DA19C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA1D7; /* je: equal / zero */

loc_005DA1A0: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3AC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D3AC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DA195; /* jl: less (signed <) */

loc_005DA1AF: ;
    PUSH32(esp, 0x655604);
    PUSH32(esp, 0x005DA1B9u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005DA1B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA1C2: ;
    SET_LO16(edx, MEM16(esp + 4));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB4);
    MEM16(ecx + 0x6D0DD0) = LO16(edx);
    esp += 4; return; /* ret */

loc_005DA1D7: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB4);
    MEM16(eax + 0x6D0DD0) = LO16(ecx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DA1F0
 * Original: 0x005DA1F0 - 0x005DA20F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DA1F0: ;
    PUSH32(esp, esi);
    esi = 0x6D0DC8;

loc_005DA1F6: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005DA1FFu); RECOMP_ABI_CALL(0x005D9C20u, sub_005D9C20); /* call 0x005D9C20 */

loc_005DA1FF: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3AC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D3AC8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DA1F6; /* jl: less (signed <) */

loc_005DA20D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DA210
 * Original: 0x005DA210 - 0x005DA525 (789 bytes, 254 insns)
 * Category: game_audio
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA210(void)
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

loc_005DA210: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x62D30C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x62D308);
    PUSH32(esp, esi);
    esi = ecx + 0x14;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = esi;
    edi = 8;

loc_005DA233: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA246; /* je: equal / zero */

loc_005DA23A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005DA23Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA23Bu); } /* indirect call */
    }

loc_005DA23D: ;
    MEM32(esi + -4) = 0;
    goto loc_005DA255;

loc_005DA246: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA255; /* je: equal / zero */

loc_005DA24C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005DA24Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA24Du); } /* indirect call */
    }

loc_005DA24F: ;
    MEM32(esi) = 0;

loc_005DA255: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DA233; /* jne: not equal / not zero */

loc_005DA25B: ;
    edi = MEM32(esp + 0x44);
    eax = edi + edi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + 0x6D0A28)) & 0xFFu; _fb = (uint32_t)(0x1B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x6D0A28), 0x1B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA276; /* je: equal / zero */

loc_005DA26E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x6556E0);
    goto loc_005DA28E;

loc_005DA276: ;
    eax = MEM32(eax + 0x6D0A20);
    edx = ZX8(MEM8(eax + 5));
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005DA2AA; /* jb: below (unsigned <) */

loc_005DA288: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6556AC);

loc_005DA28E: ;
    PUSH32(esp, 0x005DA293u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DA293: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 8) = 0xFFFF;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_005DA2AA: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + ecx * 4);
    edx = ZX8(MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_005DA51B; /* jle: less or equal (signed <=) */

loc_005DA2C1: ;
    ecx = MEM32(ecx + 8);
    esi = MEM32(esp + 0x4C);

loc_005DA2C8: ;
    ebx = MEM32(ecx);
    ebp = ZX8(MEM8(ebx + 5));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x4C) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_005DA2DE; /* jb: below (unsigned <) */

loc_005DA2D6: ;
    ebp = ZX8(MEM8(ebx + 6));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005DA2F0; /* jbe: below or equal (unsigned <=) */

loc_005DA2DE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DA2C8; /* jl: less (signed <) */

loc_005DA2E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_005DA2F0: ;
    eax = ZX8(MEM8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x44) = eax;
    MEM16(ebx + 0xA) = 0x15;
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_005DA317; /* jle: less or equal (signed <=) */

loc_005DA30B: ;
    MEM32(esp + 0x44) = 8;
    eax = MEM32(esp + 0x44);

loc_005DA317: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x48) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_005DA4B4; /* jle: less or equal (signed <=) */

loc_005DA325: ;
    ebp = ebx + 0x1C;
    goto loc_005DA330;

    /* nop */

loc_005DA330: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(eax + 8);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(esp + 0x14);
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005DA42E; /* je: equal / zero */

loc_005DA353: ;
    eax = MEM32(0x6D0DC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA37F; /* je: equal / zero */

loc_005DA35C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2A8); PUSH32(esp, 0x005DA363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA35Du); } /* indirect call */
    }

loc_005DA363: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA398; /* jne: not equal / not zero */

loc_005DA369: ;
    eax = MEM32(0x6D0DB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA37B; /* je: equal / zero */

loc_005DA372: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2A8); PUSH32(esp, 0x005DA379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA373u); } /* indirect call */
    }

loc_005DA379: ;
    edi = eax;

loc_005DA37B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA398; /* jne: not equal / not zero */

loc_005DA37F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D324); PUSH32(esp, 0x005DA385u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA37Fu); } /* indirect call */
    }

loc_005DA385: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655670);
    PUSH32(esp, 0x005DA390u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DA390: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005DA49C;

loc_005DA398: ;
    MEM32(ebp + -8) = edi;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x20) = edx;
    edx = esp + 0x1C;
    eax = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = 0xAC44;
    MEM32(esp + 0x34) = 0x10;
    MEM32(esp + 0x38) = eax;
    { uint32_t _icall_target = MEM32(0x62D2AC); PUSH32(esp, 0x005DA3D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA3CCu); } /* indirect call */
    }

loc_005DA3D2: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA41B; /* je: equal / zero */

loc_005DA3D9: ;
    eax = ZX16(MEM16(esi + 0x36));
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64021C)); /* fmul dword ptr [0x64021c] */
    fp_push((double)SMEM32(esi + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005DA3FD; /* jge: greater or equal (signed >=) */

loc_005DA3F7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005DA3FD: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    PUSH32(esp, 0x005DA404u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005DA404: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2B0); PUSH32(esp, 0x005DA40Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA406u); } /* indirect call */
    }

loc_005DA40C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2B4); PUSH32(esp, 0x005DA415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA40Fu); } /* indirect call */
    }

loc_005DA415: ;
    MEM16(ebx + 0xA) = 0x16;

loc_005DA41B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x47C35000);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2E0); PUSH32(esp, 0x005DA42Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA426u); } /* indirect call */
    }

loc_005DA42C: ;
    goto loc_005DA49C;

loc_005DA42E: ;
    edx = MEM32(0x6D0DBC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x62D2B8); PUSH32(esp, 0x005DA43Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA435u); } /* indirect call */
    }

loc_005DA43B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA457; /* jne: not equal / not zero */

loc_005DA441: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D324); PUSH32(esp, 0x005DA447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA441u); } /* indirect call */
    }

loc_005DA447: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655638);
    PUSH32(esp, 0x005DA452u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DA452: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005DA49C;

loc_005DA457: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edi;
    { uint32_t _icall_target = MEM32(0x62D2BC); PUSH32(esp, 0x005DA461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA45Bu); } /* indirect call */
    }

loc_005DA461: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2C0); PUSH32(esp, 0x005DA470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA46Au); } /* indirect call */
    }

loc_005DA470: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2C4); PUSH32(esp, 0x005DA47Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA475u); } /* indirect call */
    }

loc_005DA47B: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA49C; /* je: equal / zero */

loc_005DA482: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM16(ebx + 0xA) = 0x16;
    { uint32_t _icall_target = MEM32(0x62D2C8); PUSH32(esp, 0x005DA493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA48Du); } /* indirect call */
    }

loc_005DA493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x62D2CC); PUSH32(esp, 0x005DA49Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA496u); } /* indirect call */
    }

loc_005DA49C: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x44);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x48) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_005DA330; /* jl: less (signed <) */

loc_005DA4B4: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x005DA4C0u); RECOMP_ABI_CALL(0x005D9EC0u, sub_005D9EC0); /* call 0x005D9EC0 */

loc_005DA4C0: ;
    ecx = MEM32(esp + 0x50);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1388);
    eax = 0x2040811;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1388;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x005DA4E8u); RECOMP_ABI_CALL(0x005D9DE0u, sub_005D9DE0); /* call 0x005D9DE0 */

loc_005DA4E8: ;
    edi = MEM32(esp + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DA51B; /* jle: less or equal (signed <=) */

loc_005DA4F0: ;
    esi = MEM32(esp + 0x18);
    ebx = MEM32(0x62D2D0);
    ebp = MEM32(0x62D2D4);

loc_005DA500: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA50C; /* je: equal / zero */

loc_005DA507: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x005DA50Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA508u); } /* indirect call */
    }

loc_005DA50A: ;
    goto loc_005DA515;

loc_005DA50C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA515; /* je: equal / zero */

loc_005DA512: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x005DA515u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DA513u); } /* indirect call */
    }

loc_005DA515: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DA500; /* jne: not equal / not zero */

loc_005DA51B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DA530
 * Original: 0x005DA530 - 0x005DA78C (604 bytes, 214 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA530(void)
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

loc_005DA530: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005DA53Eu); RECOMP_ABI_CALL(0x005DA140u, sub_005DA140); /* call 0x005DA140 */

loc_005DA53E: ;
    ecx = ZX16(MEM16(esp + 0x10));
    _fb = (uint32_t)(0xFFFFC000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFC000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005DA786; /* ja: above (unsigned >) */

loc_005DA555: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x5DA78C); /* switch: 19 entries, 16 targets */
    if (_jt == 0x005DA55Cu) goto loc_005DA55C;
    if (_jt == 0x005DA565u) goto loc_005DA565;
    if (_jt == 0x005DA576u) goto loc_005DA576;
    if (_jt == 0x005DA5A0u) goto loc_005DA5A0;
    if (_jt == 0x005DA5CEu) goto loc_005DA5CE;
    if (_jt == 0x005DA614u) goto loc_005DA614;
    if (_jt == 0x005DA637u) goto loc_005DA637;
    if (_jt == 0x005DA658u) goto loc_005DA658;
    if (_jt == 0x005DA679u) goto loc_005DA679;
    if (_jt == 0x005DA69Eu) goto loc_005DA69E;
    if (_jt == 0x005DA6C3u) goto loc_005DA6C3;
    if (_jt == 0x005DA711u) goto loc_005DA711;
    if (_jt == 0x005DA74Au) goto loc_005DA74A;
    if (_jt == 0x005DA76Bu) goto loc_005DA76B;
    if (_jt == 0x005DA77Eu) goto loc_005DA77E;
    if (_jt == 0x005DA786u) goto loc_005DA786;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005DA55C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA77E; /* jne: not equal / not zero */

loc_005DA565: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005DA56Bu); RECOMP_ABI_CALL(0x005DA170u, sub_005DA170); /* call 0x005DA170 */

loc_005DA56B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA576: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005DA57Cu); RECOMP_ABI_CALL(0x005DA170u, sub_005DA170); /* call 0x005DA170 */

loc_005DA57C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA588: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x7F);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_005DA5FC;

loc_005DA5A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005DA5A6u); RECOMP_ABI_CALL(0x005DA170u, sub_005DA170); /* call 0x005DA170 */

loc_005DA5A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA5B2: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_005DA5FC;

loc_005DA5CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005DA5D4u); RECOMP_ABI_CALL(0x005DA170u, sub_005DA170); /* call 0x005DA170 */

loc_005DA5D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA5E0: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);

loc_005DA5FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA602u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA602: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA60Cu); RECOMP_ABI_CALL(0x005DA210u, sub_005DA210); /* call 0x005DA210 */

loc_005DA60C: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA614: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA61D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA625u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA625: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA62Fu); RECOMP_ABI_CALL(0x005D9C20u, sub_005D9C20); /* call 0x005D9C20 */

loc_005DA62F: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA637: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA640: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA646u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA646: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA650u); RECOMP_ABI_CALL(0x005D9D20u, sub_005D9D20); /* call 0x005D9D20 */

loc_005DA650: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA661: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA667u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA667: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA671u); RECOMP_ABI_CALL(0x005D9D80u, sub_005D9D80); /* call 0x005D9D80 */

loc_005DA671: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA679: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA682: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA68Cu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA68C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA696u); RECOMP_ABI_CALL(0x005D9DE0u, sub_005D9DE0); /* call 0x005D9DE0 */

loc_005DA696: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA69E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA6A7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA6B1u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA6B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA6BBu); RECOMP_ABI_CALL(0x005D9EC0u, sub_005D9EC0); /* call 0x005D9EC0 */

loc_005DA6BB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA6C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA6CC: ;
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA6FFu); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA6FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA709u); RECOMP_ABI_CALL(0x005D9FB0u, sub_005D9FB0); /* call 0x005D9FB0 */

loc_005DA709: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA716: ;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA738u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA738: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA742u); RECOMP_ABI_CALL(0x005DA000u, sub_005DA000); /* call 0x005DA000 */

loc_005DA742: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA74A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA77E; /* je: equal / zero */

loc_005DA74F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DA759u); RECOMP_ABI_CALL(0x005D9A80u, sub_005D9A80); /* call 0x005D9A80 */

loc_005DA759: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DA763u); RECOMP_ABI_CALL(0x00406990u, sub_00406990); /* call 0x00406990 */

loc_005DA763: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA76B: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DA77E; /* jne: not equal / not zero */

loc_005DA772: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DA77Bu); RECOMP_ABI_CALL(0x005D9B60u, sub_005D9B60); /* call 0x005D9B60 */

loc_005DA77B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA77E: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DA786: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DA7E0
 * Original: 0x005DA7E0 - 0x005DA809 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DA7E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x60864) = ecx;
    MEM32(eax + 0x60868) = ecx;
    MEM32(eax + 0x6086C) = ecx;
    MEM32(eax + 0x60870) = 0x7FFFFFFF;
    MEM32(eax + 0x30860) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005DA810
 * Original: 0x005DA810 - 0x005DA820 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DA810: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x60874);
    _fb = (uint32_t)(0x6D45F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D45F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DA820
 * Original: 0x005DA820 - 0x005DA82A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA820(void)
{

loc_005DA820: ;
    MEM8(ecx + 0x30831) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005DA830
 * Original: 0x005DA830 - 0x005DAA09 (473 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DA830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DA830: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x65570C;
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = 0x6D3AD0;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x20) = ecx;
    /* nop */

loc_005DA850: ;
    edi = MEM32(ebp * 4 + 0x674418);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    MEM32(esp + 0x1C) = ebx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFEu;
    edx = 1;

loc_005DA877: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_005DA880; /* je: equal / zero */

loc_005DA87E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA880: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DA88F; /* je: equal / zero */

loc_005DA885: ;
    ebp = edi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x18);

loc_005DA88F: ;
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x24) = ebx;
    if ((_fa == 0)) goto loc_005DA89F; /* je: equal / zero */

loc_005DA898: ;
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA89F: ;
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(esp + 0x20);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005DA8B5; /* jns: not sign (positive) */

loc_005DA8B1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DA8BF;

loc_005DA8B5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DA8BF; /* jle: less or equal (signed <=) */

loc_005DA8BA: ;
    ecx = 0x58;

loc_005DA8BF: ;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_005DA8D1; /* je: equal / zero */

loc_005DA8CF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA8D1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DA8DC; /* je: equal / zero */

loc_005DA8D6: ;
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA8DC: ;
    ebx = MEM32(esp + 0x10);
    ebx = ebx & 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x28) = ebx;
    if ((_fa == 0)) goto loc_005DA8F0; /* je: equal / zero */

loc_005DA8E9: ;
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA8F0: ;
    MEM16(eax) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x65570C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005DA905; /* jns: not sign (positive) */

loc_005DA901: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DA90F;

loc_005DA905: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DA90F; /* jle: less or equal (signed <=) */

loc_005DA90A: ;
    ecx = 0x58;

loc_005DA90F: ;
    ebx = MEM32(esp + 0x14);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_005DA928; /* je: equal / zero */

loc_005DA926: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA928: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DA937; /* je: equal / zero */

loc_005DA931: ;
    ebp = edi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA937: ;
    ebp = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA946; /* je: equal / zero */

loc_005DA93F: ;
    ebp = edi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA946: ;
    MEM16(eax) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x655710);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005DA95F; /* jns: not sign (positive) */

loc_005DA95B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DA969;

loc_005DA95F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DA969; /* jle: less or equal (signed <=) */

loc_005DA964: ;
    ecx = 0x58;

loc_005DA969: ;
    ebx = MEM32(esp + 0x10);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_005DA982; /* je: equal / zero */

loc_005DA980: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA982: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DA991; /* je: equal / zero */

loc_005DA98B: ;
    ebp = edi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA991: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DA9A0; /* je: equal / zero */

loc_005DA999: ;
    ebp = edi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DA9A0: ;
    ebp = MEM32(esp + 0x18);
    MEM16(eax) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x655710);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_005DA9B9; /* jns: not sign (positive) */

loc_005DA9B5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DA9C3;

loc_005DA9B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DA9C3; /* jle: less or equal (signed <=) */

loc_005DA9BE: ;
    ecx = 0x58;

loc_005DA9C3: ;
    ebx = MEM32(esp + 0x1C);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = LO16(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_005DA877; /* jl: less (signed <) */

loc_005DA9F3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x59 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_005DA850; /* jl: less (signed <) */

loc_005DAA01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DAA10
 * Original: 0x005DAA10 - 0x005DAC4B (571 bytes, 183 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DAA10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3083C);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DAA77; /* jne: not equal / not zero */

loc_005DAA4C: ;
    ecx = MEM32(edi + 0x30840);
    eax = MEM32(edi + 0x30860);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebx = esp + 0x1C;
    PUSH32(esp, ebx);
    ebx = esp + 0x24;
    PUSH32(esp, ebx);
    ebx = esp + 0x2C;
    PUSH32(esp, ebx);
    ebx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x005DAA75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAA72u); } /* indirect call */
    }

loc_005DAA75: ;
    goto loc_005DAAB9;

loc_005DAA77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    eax = MEM32(edi + 0x30860);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_005DAAA1; /* jne: not equal / not zero */

loc_005DAA87: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x30840);
    PUSH32(esp, edx);
    goto loc_005DAAB4;

loc_005DAAA1: ;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);

loc_005DAAB4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x005DAAB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAAB6u); } /* indirect call */
    }

loc_005DAAB9: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DAADD; /* jne: not equal / not zero */

loc_005DAAC1: ;
    eax = edi + 0x14;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAAE1; /* je: equal / zero */

loc_005DAAD3: ;
    ecx = eax + edi + 0x14;
    MEM32(esp + 0x24) = ecx;
    goto loc_005DAAE1;

loc_005DAADD: ;
    MEM32(esp + 0x30) = eax;

loc_005DAAE1: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_005DAC21; /* je: equal / zero */

loc_005DAAEF: ;
    eax = 0x100;
    ecx = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x3C) = eax;
    goto loc_005DAB02;

loc_005DAAFE: ;
    esi = MEM32(esp + 0x34);

loc_005DAB02: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DAB24; /* jne: not equal / not zero */

loc_005DAB0C: ;
    ecx = MEM32(edi + 0x30858);
    edx = MEM32(edi + 0x3085C);
    MEM32(edi + 0x30850) = ecx;
    MEM32(edi + 0x30854) = edx;

loc_005DAB24: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAB48; /* je: equal / zero */

loc_005DAB28: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DAB48; /* je: equal / zero */

loc_005DAB2F: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30856);
    esi = (uint32_t)(int32_t)SMEM16(edi + 0x30854);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1FE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x1FE;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005DAB59;

loc_005DAB48: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30852);
    esi = (uint32_t)(int32_t)SMEM16(edi + 0x30850);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_005DAB59: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DABE8; /* jle: less or equal (signed <=) */

loc_005DAB63: ;
    MEM32(esp + 0x38) = eax;

loc_005DAB67: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAB71; /* je: equal / zero */

loc_005DAB6B: ;
    eax = MEM32(esp + 0x28);
    goto loc_005DAB84;

loc_005DAB71: ;
    edx = MEM32(esp + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_005DAB84: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = edx;
    edx = eax;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    edx = ZX16(MEM16(ecx * 4 + 0x6D3AD0));
    ecx = ZX16(MEM16(ecx * 4 + 0x6D3AD2));
    if (TEST_Z(_fa, _fb)) goto loc_005DABAF; /* je: equal / zero */

loc_005DABAB: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005DABB1;

loc_005DABAF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DABB1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DABC0; /* jle: less or equal (signed <=) */

loc_005DABB9: ;
    esi = 0x7FFF;
    goto loc_005DABCD;

loc_005DABC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFF8000u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DABCD; /* jge: greater or equal (signed >=) */

loc_005DABC8: ;
    esi = 0xFFFF8000u;

loc_005DABCD: ;
    eax = MEM32(esp + 0x34);
    MEM16(ebx) = LO16(esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DABDE; /* je: equal / zero */

loc_005DABDB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DABDE: ;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DAB67; /* jne: not equal / not zero */

loc_005DABE4: ;
    eax = MEM32(esp + 0x3C);

loc_005DABE8: ;
    edx = MEM32(esp + 0x10);
    edx = edx & MEM32(esp + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005DAC0A; /* je: equal / zero */

loc_005DABF8: ;
    MEM16(edi + 0x30854) = LO16(esi);
    MEM8(edi + 0x30856) = LO8(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005DAC17;

loc_005DAC0A: ;
    MEM16(edi + 0x30850) = LO16(esi);
    MEM8(edi + 0x30852) = LO8(ecx);

loc_005DAC17: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DAAFE; /* jne: not equal / not zero */

loc_005DAC21: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    edi = MEM32(edi + 0x30860);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x005DAC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAC3Eu); } /* indirect call */
    }

loc_005DAC41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005DAC50
 * Original: 0x005DAC50 - 0x005DAD2D (221 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DAC50: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005DAC8D; /* jne: not equal / not zero */

loc_005DAC61: ;
    ecx = MEM32(ebx + 0x30840);
    eax = MEM32(ebx + 0x30860);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = esp + 0x14;
    PUSH32(esp, esi);
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    esi = esp + 0x18;
    PUSH32(esp, esi);
    esi = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x005DAC8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAC88u); } /* indirect call */
    }

loc_005DAC8B: ;
    goto loc_005DACD2;

loc_005DAC8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 0x30860);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_005DACB8; /* jne: not equal / not zero */

loc_005DAC9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x30840);
    PUSH32(esp, edx);
    goto loc_005DACCC;

loc_005DACB8: ;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_005DACCC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x005DACD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DACCFu); } /* indirect call */
    }

loc_005DACD2: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_005DACF2; /* jne: not equal / not zero */

loc_005DACDE: ;
    ecx = MEM32(ebx + 0x30840);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + 0x14;
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
    goto loc_005DACFF;

loc_005DACF2: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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

loc_005DACFF: ;
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
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(ebx + 0x30860);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x005DAD24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAD21u); } /* indirect call */
    }

loc_005DAD24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005DAD30
 * Original: 0x005DAD30 - 0x005DADD0 (160 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DAD30: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x30860);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_005DAD6B; /* je: equal / zero */

loc_005DAD47: ;
    ecx = MEM32(esi + 0x30840);
    edx = MEM32(eax);
    edi = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esp + 0x14;
    PUSH32(esp, edi);
    edi = esp + 0x1C;
    PUSH32(esp, edi);
    edi = esp + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x005DAD69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAD66u); } /* indirect call */
    }

loc_005DAD69: ;
    goto loc_005DAD8E;

loc_005DAD6B: ;
    ecx = MEM32(eax);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30840);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x005DAD8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAD8Bu); } /* indirect call */
    }

loc_005DAD8E: ;
    ecx = MEM32(esi + 0x30840);
    edi = MEM32(esp + 0x18);
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
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esi + 0x30860);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x005DADC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DADC5u); } /* indirect call */
    }

loc_005DADC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005DADD0
 * Original: 0x005DADD0 - 0x005DAE0A (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DADD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DADD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x30860);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAE05; /* je: equal / zero */

loc_005DADDE: ;
    ecx = MEM32(eax);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x005DADE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DADE6u); } /* indirect call */
    }

loc_005DADE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DADF8; /* jl: less (signed <) */

loc_005DADED: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005DADF8: ;
    PUSH32(esp, 0x655718);
    PUSH32(esp, 0x005DAE02u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DAE02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DAE05: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005DAE10
 * Original: 0x005DAE10 - 0x005DAEB9 (169 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAE10(void)
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

loc_005DAE10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30860);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x30844) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005DAE30; /* jne: not equal / not zero */

loc_005DAE27: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAEB5; /* je: equal / zero */

loc_005DAE30: ;
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAE5E; /* je: equal / zero */

loc_005DAE4D: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2A4); PUSH32(esp, 0x005DAE5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAE58u); } /* indirect call */
    }

loc_005DAE5E: ;
    esi = MEM32(esi + 0x30860);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAEB5; /* je: equal / zero */

loc_005DAE68: ;
    fp_push(MEMF(0x674414)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x674410)); /* fadd dword ptr [0x674410] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x6554A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x6554a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DAEA7; /* jne: not equal / not zero */

loc_005DAE8B: ;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643940)); /* fmul dword ptr [0x643940] */
    PUSH32(esp, 0x005DAE9Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005DAE9C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x005DAEA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAEA0u); } /* indirect call */
    }

loc_005DAEA3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005DAEA7: ;
    edx = MEM32(esi);
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFFD8F0u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x005DAEB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAEB2u); } /* indirect call */
    }

loc_005DAEB5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DAEC0
 * Original: 0x005DAEC0 - 0x005DAF45 (133 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAEC0(void)
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

loc_005DAEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x30860);
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx + 0x30848) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005DAF40; /* je: equal / zero */

loc_005DAED9: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D010)); /* fmul dword ptr [0x63d010] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x6401F8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x6554A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x6554a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DAF2C; /* jne: not equal / not zero */

loc_005DAF0F: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x643940)); /* fmul dword ptr [0x643940] */
    PUSH32(esp, 0x005DAF2Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005DAF2A: ;
    goto loc_005DAF33;

loc_005DAF2C: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFFD8F0u;

loc_005DAF33: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005DAF39; /* jle: less or equal (signed <=) */

loc_005DAF37: ;
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_005DAF39: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x40); PUSH32(esp, 0x005DAF40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAF3Du); } /* indirect call */
    }

loc_005DAF40: ;
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
 * sub_005DAF50
 * Original: 0x005DAF50 - 0x005DAFBB (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DAF50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAF67; /* je: equal / zero */

loc_005DAF5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D2A0); PUSH32(esp, 0x005DAF61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAF5Bu); } /* indirect call */
    }

loc_005DAF61: ;
    MEM32(esi) = 0;

loc_005DAF67: ;
    eax = MEM32(esi + 0x30860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAFAE; /* je: equal / zero */

loc_005DAF71: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x48); PUSH32(esp, 0x005DAF77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAF74u); } /* indirect call */
    }

loc_005DAF77: ;
    goto loc_005DAF80;

    /* nop */

loc_005DAF80: ;
    eax = MEM32(esi + 0x30860);
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005DAF91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAF8Eu); } /* indirect call */
    }

loc_005DAF91: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DAF80; /* jne: not equal / not zero */

loc_005DAF98: ;
    eax = MEM32(esi + 0x30860);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005DAFA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAFA1u); } /* indirect call */
    }

loc_005DAFA4: ;
    MEM32(esi + 0x30860) = 0;

loc_005DAFAE: ;
    MEM32(esi + 0x30834) = 6;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005DAFC0
 * Original: 0x005DAFC0 - 0x005DB013 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DAFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DAFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DAFD3; /* je: equal / zero */

loc_005DAFCE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB011; /* jne: not equal / not zero */

loc_005DAFD3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DAFE3; /* jne: not equal / not zero */

loc_005DAFD9: ;
    edx = MEM32(esi + 0x30860);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB011; /* je: equal / zero */

loc_005DAFE3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30834) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005DB001; /* je: equal / zero */

loc_005DAFF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D29C); PUSH32(esp, 0x005DB001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DAFFBu); } /* indirect call */
    }

loc_005DB001: ;
    esi = MEM32(esi + 0x30860);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB011; /* je: equal / zero */

loc_005DB00B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x005DB011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB00Eu); } /* indirect call */
    }

loc_005DB011: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DB020
 * Original: 0x005DB020 - 0x005DB09E (126 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB020: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB033; /* je: equal / zero */

loc_005DB02E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB09C; /* jne: not equal / not zero */

loc_005DB033: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB043; /* jne: not equal / not zero */

loc_005DB039: ;
    edx = MEM32(esi + 0x30860);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB09C; /* je: equal / zero */

loc_005DB043: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30834) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005DB061; /* je: equal / zero */

loc_005DB058: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D29C); PUSH32(esp, 0x005DB061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB05Bu); } /* indirect call */
    }

loc_005DB061: ;
    eax = MEM32(esi + 0x30860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB09C; /* je: equal / zero */

loc_005DB06B: ;
    SET_LO8(ecx, MEM8(esi + 0x30833));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_005DB092; /* je: equal / zero */

loc_005DB077: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30834);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x005DB08Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB08Cu); } /* indirect call */
    }

loc_005DB08F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DB092: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x005DB09Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB099u); } /* indirect call */
    }

loc_005DB09C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DB0A0
 * Original: 0x005DB0A0 - 0x005DB0A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB0A0: ;
    g_seh_ebp = ebp; sub_005D9640(); return; /* tail jmp 0x005D9640 */

}

/**
 * sub_005DB0B0
 * Original: 0x005DB0B0 - 0x005DB0B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB0B0: ;
    g_seh_ebp = ebp; sub_005D8B60(); return; /* tail jmp 0x005D8B60 */

}

/**
 * sub_005DB0C0
 * Original: 0x005DB0C0 - 0x005DB200 (320 bytes, 94 insns)
 * Category: game_debug
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB0C0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x3081C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB0E9; /* je: equal / zero */

loc_005DB0E2: ;
    edi = 0x31;
    goto loc_005DB0F2;

loc_005DB0E9: ;
    edi = MEM32(esi + 0x3083C);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_005DB0F2: ;
    SET_LO8(ecx, MEM8(esi + 0x30832));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB117; /* je: equal / zero */

loc_005DB0FC: ;
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB117; /* jne: not equal / not zero */

loc_005DB105: ;
    edx = ebp;
    edx = edx & 0xFFFFF800u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x3082C) = ebp;
    goto loc_005DB121;

loc_005DB117: ;
    MEM32(esi + 0x3082C) = 0;

loc_005DB121: ;
    ecx = MEM32(esi + 8);
    edx = edi + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x674408);
    if (CMP_B(_fa, _fb)) goto loc_005DB174; /* jb: below (unsigned <) */

loc_005DB131: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x18014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005DB145u); RECOMP_ABI_CALL(0x00616680u, sub_00616680); /* call 0x00616680 */

loc_005DB145: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB159; /* jne: not equal / not zero */

loc_005DB14C: ;
    PUSH32(esp, 0x655760);
    PUSH32(esp, 0x005DB156u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DB156: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DB159: ;
    edx = MEM32(esi + 0x30814);
    _fb = (uint32_t)(MEM32(esi + 0x3081C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esi + 0x3081C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x30828) = edx;
    MEM8(esi + 0x30832) = 1;
    goto loc_005DB1AA;

loc_005DB174: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x18014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005DB186u); RECOMP_ABI_CALL(0x00616680u, sub_00616680); /* call 0x00616680 */

loc_005DB186: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB19A; /* jne: not equal / not zero */

loc_005DB18D: ;
    PUSH32(esp, 0x655760);
    PUSH32(esp, 0x005DB197u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DB197: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DB19A: ;
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x30828) = edi;
    MEM8(esi + 0x30832) = 0;

loc_005DB1AA: ;
    edx = MEM32(esi + 0x3082C);
    edi = MEM32(esi + 0x30828);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x3081C);
    eax = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esi + 0x30828) = edi;
    MEM32(esi + 0x3081C) = edx;
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005DB1DF; /* je: equal / zero */

loc_005DB1D4: ;
    _fb = (uint32_t)(0xFFFFF800u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF800u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3081C) = eax;

loc_005DB1DF: ;
    eax = MEM32(esi + 0x3081C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x30814)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x30814) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB1F9; /* jne: not equal / not zero */

loc_005DB1ED: ;
    ecx = MEM32(esi + 0x3084C);
    MEM32(esi + 0x3081C) = ecx;

loc_005DB1F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005DB200
 * Original: 0x005DB200 - 0x005DB219 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB200: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3000C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3000C), 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB218; /* jne: not equal / not zero */

loc_005DB20C: ;
    eax = MEM32(ecx + 0x30008);
    MEM32(ecx + 0x3000C) = eax;

loc_005DB218: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005DB220
 * Original: 0x005DB220 - 0x005DB232 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005DB220: ;
    eax = MEM32(ecx + 0x3000C);
    _fb = (uint32_t)(MEM32(ecx + 0x30004)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x30004)));
    eax = eax - MEM32(ecx + 0x30004);
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

}

/**
 * sub_005DB240
 * Original: 0x005DB240 - 0x005DB2B6 (118 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB240: ;
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(ecx + 0x3000C);
    PUSH32(esp, edi);
    eax = 0x7FFFFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_005DB271; /* jne: not equal / not zero */

loc_005DB255: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB2B1; /* je: equal / zero */

loc_005DB259: ;
    esi = MEM32(ecx + 0x30004);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DB2B1; /* jl: less (signed <) */

loc_005DB263: ;
    edi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DB2B1; /* jge: greater or equal (signed >=) */

loc_005DB26D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005DB29E;

loc_005DB271: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB2B1; /* je: equal / zero */

loc_005DB279: ;
    esi = MEM32(ecx + 0x30004);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DB287; /* jl: less (signed <) */

loc_005DB283: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_005DB29E;

loc_005DB287: ;
    edi = MEM32(esp + 0xC);
    edi = esi + edi + -196608;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DB2B1; /* jge: greater or equal (signed >=) */

loc_005DB296: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DB29E: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB2B1; /* je: equal / zero */

loc_005DB2A7: ;
    MEM32(ecx + 0x3000C) = 0x7FFFFFFF;

loc_005DB2B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005DB2C0
 * Original: 0x005DB2C0 - 0x005DB307 (71 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB2C0: ;
    eax = MEM32(esp + 4);
    MEM32(0x6D3AC8) = eax;
    PUSH32(esp, 0x005DB2CEu); RECOMP_ABI_CALL(0x005DA830u, sub_005DA830); /* call 0x005DA830 */

loc_005DB2CE: ;
    eax = 0x704E24;
    goto loc_005DB2E0;

    /* nop */
    /* nop */

loc_005DB2E0: ;
    MEM32(eax) = 6;
    _fb = (uint32_t)(0x60874) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60874;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x886FF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x886FF4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DB2E0; /* jl: less (signed <) */

loc_005DB2F2: ;
    MEM32(0x674410) = 0x3F800000;
    MEM32(0x674414) = 0x3F800000;
    esp += 4; return; /* ret */

}

/**
 * sub_005DB310
 * Original: 0x005DB310 - 0x005DB32D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB310: ;
    PUSH32(esp, esi);
    esi = 0x6D45F0;

loc_005DB316: ;
    ecx = esi;
    PUSH32(esp, 0x005DB31Du); RECOMP_ABI_CALL(0x005DAF50u, sub_005DAF50); /* call 0x005DAF50 */

loc_005DB31D: ;
    _fb = (uint32_t)(0x60874) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60874;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8567C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8567C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DB316; /* jl: less (signed <) */

loc_005DB32B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DB330
 * Original: 0x005DB330 - 0x005DB33F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB330(void)
{

loc_005DB330: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DB33Eu); RECOMP_ABI_CALL(0x005DA820u, sub_005DA820); /* call 0x005DA820 */

loc_005DB33E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005DB340
 * Original: 0x005DB340 - 0x005DB375 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB340: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(0x674410) = eax;
    MEM32(0x674414) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005DB356: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005DB35Cu); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB35C: ;
    edx = MEM32(eax + 0x30844);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x005DB36Du); RECOMP_ABI_CALL(0x005DAE10u, sub_005DAE10); /* call 0x005DAE10 */

loc_005DB36D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DB356; /* jl: less (signed <) */

loc_005DB373: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DB380
 * Original: 0x005DB380 - 0x005DB4A5 (293 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005DB380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = LO8(ebx);
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB3C6; /* je: equal / zero */

loc_005DB3B0: ;
    PUSH32(esp, 0x655784);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DB3BAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DB3BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_005DB3C6: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x30860) = ebx;
    PUSH32(esp, 0x3FF);
    MEM32(esi + 0x6086C) = ebx;
    MEM32(esi + 0x60868) = ebx;
    MEM32(esi + 0x60864) = ebx;
    MEM32(esi + 0x60870) = 0x7FFFFFFF;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM8(esi + 0x30852) = LO8(ebx);
    MEM16(esi + 0x30850) = LO16(ebx);
    MEM8(esi + 0x30856) = LO8(ebx);
    MEM16(esi + 0x30854) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DB415u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_005DB415: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x40F) = LO8(ebx);
    eax = esp + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_005DB440; /* je: equal / zero */

loc_005DB42B: ;
    goto loc_005DB430;

    /* nop */

loc_005DB430: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB438; /* jne: not equal / not zero */

loc_005DB435: ;
    MEM8(eax) = 0x5C;

loc_005DB438: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB430; /* jne: not equal / not zero */

loc_005DB440: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x2E);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DB44Cu); RECOMP_ABI_CALL(0x0061AB10u, sub_0061AB10); /* call 0x0061AB10 */

loc_005DB44C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB49C; /* je: equal / zero */

loc_005DB453: ;
    PUSH32(esp, 0x64B0C0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DB45Eu); RECOMP_ABI_CALL(0x00627145u, sub_00627145); /* call 0x00627145 */

loc_005DB45E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB49C; /* jne: not equal / not zero */

loc_005DB465: ;
    ecx = MEM32(0x6D3AC8);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D294); PUSH32(esp, 0x005DB478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB472u); } /* indirect call */
    }

loc_005DB478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005DB49C; /* je: equal / zero */

loc_005DB47E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D298); PUSH32(esp, 0x005DB485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB47Fu); } /* indirect call */
    }

loc_005DB485: ;
    edx = MEM32(esi + 0x30844);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DB493u); RECOMP_ABI_CALL(0x005DAE10u, sub_005DAE10); /* call 0x005DAE10 */

loc_005DB493: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30834) = eax;

loc_005DB49C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005DB4B0
 * Original: 0x005DB4B0 - 0x005DB563 (179 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DB4B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30860);
    ecx = MEM32(eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x005DB4C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB4C2u); } /* indirect call */
    }

loc_005DB4C5: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB4DD; /* jne: not equal / not zero */

loc_005DB4CD: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DB4ED; /* jne: not equal / not zero */

loc_005DB4D4: ;
    MEM8(0x8567C1) = 1;
    goto loc_005DB4ED;

loc_005DB4DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB4ED; /* jne: not equal / not zero */

loc_005DB4E2: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DB4ED; /* jne: not equal / not zero */

loc_005DB4E8: ;
    MEM8(0x8567C0) = LO8(eax);

loc_005DB4ED: ;
    ecx = MEM32(esi + 0x30838);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x696A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB50F; /* je: equal / zero */

loc_005DB4FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x696B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB50F; /* je: equal / zero */

loc_005DB503: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DB50Du); RECOMP_ABI_CALL(0x005DAC50u, sub_005DAC50); /* call 0x005DAC50 */

loc_005DB50D: ;
    goto loc_005DB525;

loc_005DB50F: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0xFFFF9696u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFF9696u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DB525u); RECOMP_ABI_CALL(0x005DAA10u, sub_005DAA10); /* call 0x005DAA10 */

loc_005DB525: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DB55E; /* jne: not equal / not zero */

loc_005DB52C: ;
    SET_LO8(eax, MEM8(0x8567C1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB55E; /* je: equal / zero */

loc_005DB535: ;
    SET_LO8(eax, MEM8(0x8567C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB55E; /* je: equal / zero */

loc_005DB53E: ;
    esi = MEM32(esi + 0x30860);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x005DB550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DB54Du); } /* indirect call */
    }

loc_005DB550: ;
    MEM8(0x8567C1) = 0;
    MEM8(0x8567C0) = 0;

loc_005DB55E: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005DB570
 * Original: 0x005DB570 - 0x005DB65A (234 bytes, 89 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = ecx;
    eax = MEM32(ebx + 0x30000);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_005DB586; /* jge: greater or equal (signed >=) */

loc_005DB584: ;
    ebp = eax;

loc_005DB586: ;
    edx = MEM32(ebx + 0x30004);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30008)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x30008) (32-bit) */
    edi = MEM32(esp + 0x14);
    esi = edx + ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_005DB5C7; /* jge: greater or equal (signed >=) */

loc_005DB59B: ;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB5BF; /* je: equal / zero */

loc_005DB5B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x005DB5BDu); RECOMP_ABI_CALL(0x005DB240u, sub_005DB240); /* call 0x005DB240 */

loc_005DB5BD: ;
    MEM32(esi) = eax;

loc_005DB5BF: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x30004) = MEM32(ebx + 0x30004) + ebp;
    _fa = (uint32_t)(MEM32(ebx + 0x30004)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005DB643;

loc_005DB5C7: ;
    eax = 0x30000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005DB5EE; /* jg: greater (signed >) */

loc_005DB5D2: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB62D; /* je: equal / zero */

loc_005DB5EA: ;
    PUSH32(esp, 0);
    goto loc_005DB623;

loc_005DB5EE: ;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    edx = MEM32(esp + 0x14);
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
    ecx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
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
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB62D; /* je: equal / zero */

loc_005DB621: ;
    PUSH32(esp, 1);

loc_005DB623: ;
    ecx = ebx;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005DB62Bu); RECOMP_ABI_CALL(0x005DB240u, sub_005DB240); /* call 0x005DB240 */

loc_005DB62B: ;
    MEM32(esi) = eax;

loc_005DB62D: ;
    eax = MEM32(ebx + 0x30004);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x30000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebx + 0x30004) = edx;

loc_005DB643: ;
    eax = MEM32(ebx + 0x30000);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ebx + 0x30000) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005DB660
 * Original: 0x005DB660 - 0x005DB71D (189 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB660: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 0x30000);
    eax = 0x30000;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DB680; /* jge: greater or equal (signed >=) */

loc_005DB679: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_005DB680: ;
    edx = MEM32(ebx + 0x30008);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x30004) (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = edx + ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_005DB6AF; /* jge: greater or equal (signed >=) */

loc_005DB697: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x30008) = MEM32(ebx + 0x30008) + ebp;
    _fa = (uint32_t)(MEM32(ebx + 0x30008)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005DB6FF;

loc_005DB6AF: ;
    eax = 0x30000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005DB6BE; /* jg: greater (signed >) */

loc_005DB6BA: ;
    ecx = ebp;
    goto loc_005DB6DB;

loc_005DB6BE: ;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    edx = MEM32(esp + 0x14);
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
    ecx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + edx;
    edi = ebx;

loc_005DB6DB: ;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebx + 0x30008);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x30000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebx + 0x30008) = edx;

loc_005DB6FF: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005DB710; /* je: equal / zero */

loc_005DB709: ;
    ecx = ebx;
    PUSH32(esp, 0x005DB710u); RECOMP_ABI_CALL(0x005DB200u, sub_005DB200); /* call 0x005DB200 */

loc_005DB710: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x30000) = MEM32(ebx + 0x30000) + ebp;
    _fa = (uint32_t)(MEM32(ebx + 0x30000)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005DB720
 * Original: 0x005DB720 - 0x005DB82D (269 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB720: ;
    ecx = ZX16(MEM16(esp + 4));
    eax = ecx + -8192;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005DB814; /* ja: above (unsigned >) */

loc_005DB734: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5DB830); /* switch: 13 entries, 9 targets */
    if (_jt == 0x005DB73Bu) goto loc_005DB73B;
    if (_jt == 0x005DB75Fu) goto loc_005DB75F;
    if (_jt == 0x005DB77Bu) goto loc_005DB77B;
    if (_jt == 0x005DB797u) goto loc_005DB797;
    if (_jt == 0x005DB7B3u) goto loc_005DB7B3;
    if (_jt == 0x005DB7D3u) goto loc_005DB7D3;
    if (_jt == 0x005DB7F3u) goto loc_005DB7F3;
    if (_jt == 0x005DB809u) goto loc_005DB809;
    if (_jt == 0x005DB814u) goto loc_005DB814;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005DB73B: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    ecx = eax + 8;
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DB74Fu); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB74F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB759u); RECOMP_ABI_CALL(0x005DB380u, sub_005DB380); /* call 0x005DB380 */

loc_005DB759: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB75F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DB76Bu); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB76B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB775u); RECOMP_ABI_CALL(0x005DAF50u, sub_005DAF50); /* call 0x005DAF50 */

loc_005DB775: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB77B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005DB787u); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB787: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB791u); RECOMP_ABI_CALL(0x005DAFC0u, sub_005DAFC0); /* call 0x005DAFC0 */

loc_005DB791: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB797: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DB7A3u); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB7A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB7ADu); RECOMP_ABI_CALL(0x005DB020u, sub_005DB020); /* call 0x005DB020 */

loc_005DB7AD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB7B3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DB7C3u); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB7C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB7CDu); RECOMP_ABI_CALL(0x005DAE10u, sub_005DAE10); /* call 0x005DAE10 */

loc_005DB7CD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB7D3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DB7E3u); RECOMP_ABI_CALL(0x005DA810u, sub_005DA810); /* call 0x005DA810 */

loc_005DB7E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DB7EDu); RECOMP_ABI_CALL(0x005DAEC0u, sub_005DAEC0); /* call 0x005DAEC0 */

loc_005DB7ED: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB7F3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DB800u); RECOMP_ABI_CALL(0x005DB0A0u, sub_005DB0A0); /* call 0x005DB0A0 */

loc_005DB800: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB809: ;
    PUSH32(esp, 0x005DB80Eu); RECOMP_ABI_CALL(0x005DB0B0u, sub_005DB0B0); /* call 0x005DB0B0 */

loc_005DB80E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DB814: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6557A0);
    PUSH32(esp, 0x005DB826u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DB826: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DB870
 * Original: 0x005DB870 - 0x005DBB39 (713 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DB870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DB870: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DB88B; /* jne: not equal / not zero */

loc_005DB87F: ;
    MEM8(esi + 0x30830) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DB88B: ;
    _fa = (uint32_t)(MEM32(esi + 0x18014)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x414D5453) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18014), 0x414D5453 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB8A9; /* je: equal / zero */

loc_005DB897: ;
    PUSH32(esp, 0x655830);
    PUSH32(esp, 0x005DB8A1u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DB8A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DB8A9: ;
    eax = MEM32(esi + 0x18020);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB8D0; /* je: equal / zero */

loc_005DB8B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB8D0; /* je: equal / zero */

loc_005DB8BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6557E8);
    PUSH32(esp, 0x005DB8C8u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DB8C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DB8D0: ;
    eax = MEM32(esi + 0x1802C);
    MEM32(esi + 0x30814) = eax;
    ecx = MEM32(esi + 0x18030);
    MEM32(esi + 0x30820) = ecx;
    edx = MEM32(esi + 0x18018);
    MEM32(esi + 0x30838) = edx;
    eax = MEM32(esi + 0x1803C);
    MEM32(esi + 0x30858) = eax;
    ecx = MEM32(esi + 0x18040);
    PUSH32(esp, ebx);
    MEM32(esi + 0x3085C) = ecx;
    eax = MEM32(esi + 0x18034);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005DB929; /* je: equal / zero */

loc_005DB91B: ;
    edx = MEM32(esi + 0x18038);
    MEM32(esi + 0x3084C) = edx;
    goto loc_005DB92F;

loc_005DB929: ;
    MEM32(esi + 0x3084C) = ebx;

loc_005DB92F: ;
    eax = MEM32(esi + 0x18020);
    ecx = MEM32(esi + 0x18028);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x18028));
    edi = eax;
    MEM16(esp + 0x12) = LO16(ecx);
    MEM32(esp + 0x14) = edi;
    eax = MEM32(esp + 0x12);
    ebp = 0x18000;
    MEM16(esp + 0x10) = 1;
    edx = ecx + ecx;
    MEM16(esp + 0x1C) = LO16(edx);
    ecx = 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xBB80;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x1E) = 0x10;
    MEM16(esp + 0x20) = LO16(ebx);
    ecx = eax;
    eax = ebp;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x30840) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x30814)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30814), 0x18000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005DB9B1; /* jg: greater (signed >) */

loc_005DB9A8: ;
    MEM8(esi + 0x30833) = 1;
    goto loc_005DB9B7;

loc_005DB9B1: ;
    MEM8(esi + 0x30833) = LO8(ebx);

loc_005DB9B7: ;
    edx = MEM32(esi + 0x30844);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x005DB9C5u); RECOMP_ABI_CALL(0x005DAE10u, sub_005DAE10); /* call 0x005DAE10 */

loc_005DB9C5: ;
    _fa = (uint32_t)(MEM8(esi + 0x30833)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30833), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x30838);
    if (CMP_EQ(_fa, _fb)) goto loc_005DBA3F; /* je: equal / zero */

loc_005DB9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB9F3; /* je: equal / zero */

loc_005DB9DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DB9F3; /* je: equal / zero */

loc_005DB9E1: ;
    eax = esi + 0x18814;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x005DB9F1u); RECOMP_ABI_CALL(0x005DAC50u, sub_005DAC50); /* call 0x005DAC50 */

loc_005DB9F1: ;
    goto loc_005DBA1A;

loc_005DB9F3: ;
    ecx = MEM32(esi + 0x30814);
    PUSH32(esp, 0x7FFFFFFF);
    edx = esi + 0x18814;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFF9696u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFF9696u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0x3083C) = ecx;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x005DBA1Au); RECOMP_ABI_CALL(0x005DAA10u, sub_005DAA10); /* call 0x005DAA10 */

loc_005DBA1A: ;
    edi = MEM32(esi + 0x30834);
    eax = MEM32(esi + 0x30860);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x005DBA37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBA34u); } /* indirect call */
    }

loc_005DBA37: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DBA3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBA55; /* je: equal / zero */

loc_005DBA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBA55; /* je: equal / zero */

loc_005DBA4D: ;
    eax = MEM32(esi + 0x30840);
    goto loc_005DBA7E;

loc_005DBA55: ;
    eax = MEM32(esi + 0x30840);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 0x30852) = LO8(ebx);
    MEM16(esi + 0x30850) = LO16(ebx);
    MEM8(esi + 0x30856) = LO8(ebx);
    MEM16(esi + 0x30854) = LO16(ebx);

loc_005DBA7E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18000);
    ecx = esi + 0x18814;
    edi = esi + 0x30864;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 0x3083C) = eax;
    MEM32(esi + 0x30828) = ebx;
    MEM32(esi + 0x3082C) = ebx;
    MEM32(esi + 0x30824) = ebx;
    MEM8(esi + 0x30832) = LO8(ebx);
    PUSH32(esp, 0x005DBAB6u); RECOMP_ABI_CALL(0x005DB660u, sub_005DB660); /* call 0x005DB660 */

loc_005DBAB6: ;
    ebp = 2;
    goto loc_005DBAC0;

    /* nop */

loc_005DBAC0: ;
    eax = MEM32(esi + 0x3083C);
    _fa = (uint32_t)(MEM32(esi + 0x60864)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60864), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DBB01; /* jl: less (signed <) */

loc_005DBACE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x005DBADBu); RECOMP_ABI_CALL(0x005DB570u, sub_005DB570); /* call 0x005DB570 */

loc_005DBADB: ;
    eax = MEM32(esi + 0x30824);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DBAEEu); RECOMP_ABI_CALL(0x005DB4B0u, sub_005DB4B0); /* call 0x005DB4B0 */

loc_005DBAEE: ;
    eax = MEM32(esi + 0x30824);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x30824) = ecx;

loc_005DBB01: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DBAC0; /* jne: not equal / not zero */

loc_005DBB04: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x005DBB0Cu); RECOMP_ABI_CALL(0x005DB0C0u, sub_005DB0C0); /* call 0x005DB0C0 */

loc_005DBB0C: ;
    edx = MEM32(esi + 0x30844);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x30818) = ebx;
    PUSH32(esp, 0x005DBB20u); RECOMP_ABI_CALL(0x005DAE10u, sub_005DAE10); /* call 0x005DAE10 */

loc_005DBB20: ;
    eax = MEM32(esi + 0x30848);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DBB31u); RECOMP_ABI_CALL(0x005DAEC0u, sub_005DAEC0); /* call 0x005DAEC0 */

loc_005DBB31: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DBB40
 * Original: 0x005DBB40 - 0x005DBDBE (638 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DBB40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBB74; /* je: equal / zero */

loc_005DBB4C: ;
    eax = MEM32(esi + 0x30834);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBB5C; /* je: equal / zero */

loc_005DBB57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBB74; /* jne: not equal / not zero */

loc_005DBB5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x62D290); PUSH32(esp, 0x005DBB63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBB5Du); } /* indirect call */
    }

loc_005DBB63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBB74; /* je: equal / zero */

loc_005DBB68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBB74; /* je: equal / zero */

loc_005DBB6D: ;
    ecx = esi;
    PUSH32(esp, 0x005DBB74u); RECOMP_ABI_CALL(0x005DAF50u, sub_005DAF50); /* call 0x005DAF50 */

loc_005DBB74: ;
    PUSH32(esp, 0x005DBB79u); RECOMP_ABI_CALL(0x00616980u, sub_00616980); /* call 0x00616980 */

loc_005DBB79: ;
    SET_LO8(eax, MEM8(esi + 0x30830));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBBA2; /* je: equal / zero */

loc_005DBB83: ;
    SET_LO8(eax, MEM8(esi + 0x30831));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBBA2; /* je: equal / zero */

loc_005DBB8D: ;
    ecx = esi;
    MEM8(esi + 0x30831) = 0;
    PUSH32(esp, 0x005DBB9Bu); RECOMP_ABI_CALL(0x005DB870u, sub_005DB870); /* call 0x005DB870 */

loc_005DBB9B: ;
    MEM8(esi + 0x30830) = 0;

loc_005DBBA2: ;
    eax = MEM32(esi + 0x30860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB9; /* je: equal / zero */

loc_005DBBB0: ;
    SET_LO8(ecx, MEM8(esi + 0x30833));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBC0B; /* je: equal / zero */

loc_005DBBBA: ;
    eax = MEM32(esi + 0x30834);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBBE6; /* je: equal / zero */

loc_005DBBC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB9; /* je: equal / zero */

loc_005DBBCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB9; /* je: equal / zero */

loc_005DBBD7: ;
    ecx = esi;
    PUSH32(esp, 0x005DBBDEu); RECOMP_ABI_CALL(0x005DADD0u, sub_005DADD0); /* call 0x005DADD0 */

loc_005DBBDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB9; /* je: equal / zero */

loc_005DBBE6: ;
    eax = MEM32(esi + 0x30860);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005DBBF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBBEFu); } /* indirect call */
    }

loc_005DBBF2: ;
    MEM32(esi + 0x30860) = 0;
    MEM32(esi + 0x30834) = 6;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DBC0B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005DBC18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBC15u); } /* indirect call */
    }

loc_005DBC18: ;
    ecx = MEM32(esi + 0x30840);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DBC38; /* jge: greater or equal (signed >=) */

loc_005DBC26: ;
    eax = MEM32(esi + 0x30824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBC46; /* jne: not equal / not zero */

loc_005DBC30: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DBD34; /* jl: less (signed <) */

loc_005DBC38: ;
    eax = MEM32(esi + 0x30824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBD34; /* jne: not equal / not zero */

loc_005DBC46: ;
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBC8A; /* jne: not equal / not zero */

loc_005DBC4F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DBC57u); RECOMP_ABI_CALL(0x005DAD30u, sub_005DAD30); /* call 0x005DAD30 */

loc_005DBC57: ;
    ecx = MEM32(esi + 0x30818);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 0x30818) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005DBC72; /* jne: not equal / not zero */

loc_005DBC6B: ;
    ecx = esi;
    PUSH32(esp, 0x005DBC72u); RECOMP_ABI_CALL(0x005DAF50u, sub_005DAF50); /* call 0x005DAF50 */

loc_005DBC72: ;
    eax = MEM32(esi + 0x30824);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x30824) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DBC8A: ;
    ecx = MEM32(esi + 0x3083C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    edi = esi + 0x30864;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x005DBCA9u); RECOMP_ABI_CALL(0x005DB570u, sub_005DB570); /* call 0x005DB570 */

loc_005DBCA9: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBD25; /* je: equal / zero */

loc_005DBCAF: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBCC6; /* jne: not equal / not zero */

loc_005DBCBB: ;
    ecx = edi;
    PUSH32(esp, 0x005DBCC2u); RECOMP_ABI_CALL(0x005DB220u, sub_005DB220); /* call 0x005DB220 */

loc_005DBCC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBD01; /* je: equal / zero */

loc_005DBCC6: ;
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBD01; /* je: equal / zero */

loc_005DBCCF: ;
    ecx = edi;
    PUSH32(esp, 0x005DBCD6u); RECOMP_ABI_CALL(0x005DB220u, sub_005DB220); /* call 0x005DB220 */

loc_005DBCD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBCDC; /* je: equal / zero */

loc_005DBCDA: ;
    edx = ebp;

loc_005DBCDC: ;
    ecx = 0x18000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + esi + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEM32(esi + 0x30834) = 0xB;

loc_005DBD01: ;
    eax = MEM32(esi + 0x30824);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005DBD10u); RECOMP_ABI_CALL(0x005DB4B0u, sub_005DB4B0); /* call 0x005DB4B0 */

loc_005DBD10: ;
    eax = MEM32(esi + 0x30824);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x30824) = ecx;
    goto loc_005DBD32;

loc_005DBD25: ;
    PUSH32(esp, 0x6558A0);
    PUSH32(esp, 0x005DBD2Fu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DBD2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBD32: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_005DBD34: ;
    SET_LO8(eax, MEM8(esi + 0x30831));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB9; /* je: equal / zero */

loc_005DBD3E: ;
    ecx = MEM32(esi + 0x60864);
    eax = MEM32(esi + 0x3083C);
    edx = 0x30000;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DBDB9; /* jl: less (signed <) */

loc_005DBD55: ;
    ecx = MEM32(esi + 0x30828);
    edx = MEM32(esi + 0x3082C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x30832));
    MEM8(esi + 0x30831) = 0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edx + esi + 0x18014;
    PUSH32(esp, eax);
    ecx = esi + 0x30864;
    PUSH32(esp, 0x005DBD85u); RECOMP_ABI_CALL(0x005DB660u, sub_005DB660); /* call 0x005DB660 */

loc_005DBD85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBD9D; /* jne: not equal / not zero */

loc_005DBD89: ;
    ecx = MEM32(esi + 0x30828);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x65586C);
    PUSH32(esp, 0x005DBD9Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBD9A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBD9D: ;
    SET_LO8(eax, MEM8(esi + 0x30832));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBDB0; /* je: equal / zero */

loc_005DBDA7: ;
    _fa = (uint32_t)(MEM32(esi + 0x30834)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30834), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBDB9; /* jne: not equal / not zero */

loc_005DBDB0: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005DBDB9u); RECOMP_ABI_CALL(0x005DB0C0u, sub_005DB0C0); /* call 0x005DB0C0 */

loc_005DBDB9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DBDC0
 * Original: 0x005DBDC0 - 0x005DBDDD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBDC0: ;
    PUSH32(esp, esi);
    esi = 0x6D45F0;

loc_005DBDC6: ;
    ecx = esi;
    PUSH32(esp, 0x005DBDCDu); RECOMP_ABI_CALL(0x005DBB40u, sub_005DBB40); /* call 0x005DBB40 */

loc_005DBDCD: ;
    _fb = (uint32_t)(0x60874) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60874;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8567C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8567C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DBDC6; /* jl: less (signed <) */

loc_005DBDDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DBDE0
 * Original: 0x005DBDE0 - 0x005DBDF0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBDE0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x420);
    _fb = (uint32_t)(0x8567D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8567D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DBDF0
 * Original: 0x005DBDF0 - 0x005DBE35 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBDF0: ;
    eax = MEM32(0x8567CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBE1B; /* je: equal / zero */

loc_005DBDF9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x98); PUSH32(esp, 0x005DBE02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBDFCu); } /* indirect call */
    }

loc_005DBE02: ;
    eax = MEM32(0x8567CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBE1B; /* je: equal / zero */

loc_005DBE0B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005DBE11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBE0Eu); } /* indirect call */
    }

loc_005DBE11: ;
    MEM32(0x8567CC) = 0;

loc_005DBE1B: ;
    eax = MEM32(0x8567C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBE34; /* je: equal / zero */

loc_005DBE24: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005DBE2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBE27u); } /* indirect call */
    }

loc_005DBE2A: ;
    MEM32(0x8567C8) = 0;

loc_005DBE34: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005DBE40
 * Original: 0x005DBE40 - 0x005DBE78 (56 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBE40: ;
    eax = MEM32(0x8567CC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = esi + 0x41C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC4); PUSH32(esp, 0x005DBE5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBE58u); } /* indirect call */
    }

loc_005DBE5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DBE76; /* jge: greater or equal (signed >=) */

loc_005DBE62: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6558EC);
    PUSH32(esp, 0x005DBE73u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBE73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBE76: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DBE80
 * Original: 0x005DBE80 - 0x005DBF89 (265 bytes, 84 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBE80: ;
    eax = MEM32(0x8567CC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    edx = MEM32(esi + 0x414);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xB8); PUSH32(esp, 0x005DBE9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBE98u); } /* indirect call */
    }

loc_005DBE9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DBEBD; /* jge: greater or equal (signed >=) */

loc_005DBEA2: ;
    ecx = MEM32(esi + 0x408);
    eax = esi + 0x200;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6559DC);
    PUSH32(esp, 0x005DBEBAu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBEBA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBEBD: ;
    ecx = MEM32(esi + 0x418);
    eax = MEM32(0x8567CC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x005DBED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBECFu); } /* indirect call */
    }

loc_005DBED5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DBEF4; /* jge: greater or equal (signed >=) */

loc_005DBED9: ;
    eax = MEM32(esi + 0x408);
    edx = esi + 0x200;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x65599C);
    PUSH32(esp, 0x005DBEF1u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBEF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBEF4: ;
    _fa = (uint32_t)(MEM8(esi + 0x410)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x410), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DBF16; /* jne: not equal / not zero */

loc_005DBEFC: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x655950);
    PUSH32(esp, 0x005DBF0Bu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DBF0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005DBF16: ;
    ecx = MEM32(esi + 0x414);
    eax = MEM32(0x8567C8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x005DBF28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBF25u); } /* indirect call */
    }

loc_005DBF28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DBF39; /* jge: greater or equal (signed >=) */

loc_005DBF2C: ;
    PUSH32(esp, 0x655914);
    PUSH32(esp, 0x005DBF36u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBF36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DBF39: ;
    eax = MEM32(esi + 0x418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBF4F; /* je: equal / zero */

loc_005DBF43: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x005DBF49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBF46u); } /* indirect call */
    }

loc_005DBF49: ;
    MEM32(esi + 0x418) = ebx;

loc_005DBF4F: ;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DBF65; /* je: equal / zero */

loc_005DBF59: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005DBF5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBF5Cu); } /* indirect call */
    }

loc_005DBF5F: ;
    MEM32(esi + 0x414) = ebx;

loc_005DBF65: ;
    MEM8(esi + 0x410) = LO8(ebx);
    MEM16(esi + 0x200) = LO16(ebx);
    MEM16(esi) = LO16(ebx);
    MEM32(esi + 0x400) = 0x13;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005DBF90
 * Original: 0x005DBF90 - 0x005DC00D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DBF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DBF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x404) = 0xE;
    if (CMP_EQ(_fa, _fb)) goto loc_005DC00B; /* je: equal / zero */

loc_005DBFA7: ;
    ecx = MEM32(0x8567CC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x418);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x005DBFC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBFBDu); } /* indirect call */
    }

loc_005DBFC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_005DBFDB; /* jge: greater or equal (signed >=) */

loc_005DBFC5: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655A44);
    PUSH32(esp, 0x005DBFD6u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DBFD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DBFDB: ;
    eax = MEM32(esi + 0x414);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x400) = 0xE;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x54); PUSH32(esp, 0x005DBFF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DBFF0u); } /* indirect call */
    }

loc_005DBFF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC00B; /* jge: greater or equal (signed >=) */

loc_005DBFF7: ;
    edx = MEM32(esi + 0x408);
    PUSH32(esp, edx);
    PUSH32(esp, 0x655A14);
    PUSH32(esp, 0x005DC008u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC008: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC00B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC010
 * Original: 0x005DC010 - 0x005DC035 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC010(void)
{

loc_005DC010: ;
    eax = MEM32(0x8567CC);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xB8); PUSH32(esp, 0x005DC029u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC023u); } /* indirect call */
    }

loc_005DC029: ;
    MEM32(esi + 0x400) = 0xE;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC040
 * Original: 0x005DC040 - 0x005DC15D (285 bytes, 89 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x404) = 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_005DC146; /* je: equal / zero */

loc_005DC05C: ;
    SET_LO8(eax, MEM8(esi + 0x410));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC146; /* je: equal / zero */

loc_005DC06A: ;
    eax = MEM32(esi + 0x400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC12F; /* je: equal / zero */

loc_005DC079: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC12F; /* je: equal / zero */

loc_005DC082: ;
    ecx = MEM32(esi + 0x408);
    eax = esi + 0x200;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x655B58);
    PUSH32(esp, 0x005DC09Au); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005DC09A: ;
    ecx = MEM32(esi + 0x41C);
    eax = MEM32(0x8567CC);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x414);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x005DC0CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC0C7u); } /* indirect call */
    }

loc_005DC0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC0E8; /* jge: greater or equal (signed >=) */

loc_005DC0D1: ;
    edx = MEM32(esi + 0x408);
    PUSH32(esp, edx);
    PUSH32(esp, 0x655B30);
    PUSH32(esp, 0x005DC0E2u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC0E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005DC0E8: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = esi + 0x418;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x65F1AC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x005DC0FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC0FBu); } /* indirect call */
    }

loc_005DC0FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC118; /* jge: greater or equal (signed >=) */

loc_005DC101: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655AD8);
    PUSH32(esp, 0x005DC112u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC112: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005DC118: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x005DC122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC11Fu); } /* indirect call */
    }

loc_005DC122: ;
    MEM32(esi + 0x400) = 0x11;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005DC12F: ;
    edx = MEM32(esi + 0x408);
    PUSH32(esp, edx);
    PUSH32(esp, 0x655AA4);
    PUSH32(esp, 0x005DC140u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DC140: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_005DC146: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655A6C);
    PUSH32(esp, 0x005DC157u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DC157: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC160
 * Original: 0x005DC160 - 0x005DC245 (229 bytes, 72 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x400)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400), 0xC (32-bit) */
    MEM32(esi + 0x404) = 0xE;
    if (CMP_NE(_fa, _fb)) goto loc_005DC240; /* jne: not equal / not zero */

loc_005DC17D: ;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC1A0; /* jne: not equal / not zero */

loc_005DC187: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655C3C);
    PUSH32(esp, 0x005DC198u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC198: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DC1A0: ;
    eax = MEM32(0x8567CC);
    ecx = MEM32(eax);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x3C); PUSH32(esp, 0x005DC1B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC1AFu); } /* indirect call */
    }

loc_005DC1B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC1CF; /* jge: greater or equal (signed >=) */

loc_005DC1B6: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655BFC);
    PUSH32(esp, 0x005DC1C7u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC1C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005DC1CF: ;
    eax = MEM32(esi + 0x414);
    ecx = MEM32(eax);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x005DC1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC1DDu); } /* indirect call */
    }

loc_005DC1E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC1F8; /* jge: greater or equal (signed >=) */

loc_005DC1E4: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655BC0);
    PUSH32(esp, 0x005DC1F5u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC1F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC1F8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x005DC200u); RECOMP_ABI_CALL(0x005DBF90u, sub_005DBF90); /* call 0x005DBF90 */

loc_005DC200: ;
    eax = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0xC)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0xC))); }
    ecx = MEM32(esi + 0x414);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x54); PUSH32(esp, 0x005DC216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC213u); } /* indirect call */
    }

loc_005DC216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_005DC22F; /* jge: greater or equal (signed >=) */

loc_005DC21B: ;
    ecx = MEM32(esi + 0x408);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x655B80);
    PUSH32(esp, 0x005DC22Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC22C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC22F: ;
    eax = 0xF;
    MEM32(esi + 0x404) = eax;
    MEM32(esi + 0x400) = eax;

loc_005DC240: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DC250
 * Original: 0x005DC250 - 0x005DC2DC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC250: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2AE; /* je: equal / zero */

loc_005DC25D: ;
    ecx = MEM32(0x8567CC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x418);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x005DC272u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC26Fu); } /* indirect call */
    }

loc_005DC272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_005DC283; /* jne: not equal / not zero */

loc_005DC277: ;
    MEM32(esi + 0x400) = 0xC;
    goto loc_005DC2C1;

loc_005DC283: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC2C1; /* jne: not equal / not zero */

loc_005DC288: ;
    eax = MEM32(esi + 0x400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2C1; /* je: equal / zero */

loc_005DC293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2C1; /* je: equal / zero */

loc_005DC298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2C1; /* je: equal / zero */

loc_005DC29D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2C1; /* je: equal / zero */

loc_005DC2A2: ;
    MEM32(esi + 0x400) = 0xE;
    goto loc_005DC2C1;

loc_005DC2AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x400)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2C1; /* je: equal / zero */

loc_005DC2B7: ;
    MEM32(esi + 0x400) = 0x13;

loc_005DC2C1: ;
    esi = MEM32(esi + 0x400);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2D5; /* je: equal / zero */

loc_005DC2CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC2D5; /* je: equal / zero */

loc_005DC2D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DC2D5: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC2E0
 * Original: 0x005DC2E0 - 0x005DC341 (97 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC2E0(void)
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

loc_005DC2E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64BE50)); /* fmul dword ptr [0x64be50] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x6554A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x6554a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DC315; /* jne: not equal / not zero */

loc_005DC307: ;
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x655C80)); /* fmul qword ptr [0x655c80] */
    goto loc_005DC31D;

loc_005DC315: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(0x655C78)); /* fld double */

loc_005DC31D: ;
    PUSH32(esp, 0x005DC322u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005DC322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFDA80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFDA80u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC32E; /* jge: greater or equal (signed >=) */

loc_005DC329: ;
    eax = 0xFFFFDA80u;

loc_005DC32E: ;
    ecx = MEM32(esi + 0x41C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x005DC33Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC33Au); } /* indirect call */
    }

loc_005DC33D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DC350
 * Original: 0x005DC350 - 0x005DC38A (58 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC350(void)
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

loc_005DC350: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = ecx + 0x40C;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC368; /* jge: greater or equal (signed >=) */

loc_005DC362: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005DC368: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655C88)); /* fmul dword ptr [0x655c88] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x65F1EC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8567CC);
    edx = MEM32(ecx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x005DC387u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC381u); } /* indirect call */
    }

loc_005DC387: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DC390
 * Original: 0x005DC390 - 0x005DC397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC390(void)
{

loc_005DC390: ;
    eax = MEM32(ecx + 0x400);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC3A0
 * Original: 0x005DC3A0 - 0x005DC471 (209 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC3A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x858364);
    PUSH32(esp, edi);
    edi = MEM32(0x62D33C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8567C8);
    PUSH32(esp, 0x65F1DC);
    PUSH32(esp, 7);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x65F20C);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x005DC3C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC3C3u); } /* indirect call */
    }

loc_005DC3C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC3D6; /* jge: greater or equal (signed >=) */

loc_005DC3C9: ;
    PUSH32(esp, 0x655CBC);
    PUSH32(esp, 0x005DC3D3u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005DC3D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC3D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8567CC);
    PUSH32(esp, 0x65F1CC);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x65F22C);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x005DC3EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC3E8u); } /* indirect call */
    }

loc_005DC3EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC3FB; /* jge: greater or equal (signed >=) */

loc_005DC3EE: ;
    PUSH32(esp, 0x655CBC);
    PUSH32(esp, 0x005DC3F8u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005DC3F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC3FB: ;
    eax = MEM32(0x8567CC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x80);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xB0); PUSH32(esp, 0x005DC416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC410u); } /* indirect call */
    }

loc_005DC416: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC428; /* jge: greater or equal (signed >=) */

loc_005DC41A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655C8C);
    PUSH32(esp, 0x005DC425u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC425: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC428: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x856BD0;
    /* nop */

loc_005DC430: ;
    ecx = esi + -1024;
    MEM32(esi + 8) = edi;
    MEM32(esi) = 0x13;
    MEM32(esi + 4) = 0xE;
    MEM8(esi + 0x10) = LO8(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM16(esi + -512) = LO16(ebx);
    MEM16(ecx) = LO16(ebx);
    PUSH32(esp, 0x005DC45Eu); RECOMP_ABI_CALL(0x005DBE40u, sub_005DBE40); /* call 0x005DBE40 */

loc_005DC45E: ;
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x420;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x857C50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x857C50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DC430; /* jl: less (signed <) */

loc_005DC46D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005DC480
 * Original: 0x005DC480 - 0x005DC4D9 (89 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC480: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x655D0C);
    PUSH32(esp, 0x005DC48Bu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005DC48B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005DC490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005DC496u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC496: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC4A0u); RECOMP_ABI_CALL(0x005DC010u, sub_005DC010); /* call 0x005DC010 */

loc_005DC4A0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DC490; /* jl: less (signed <) */

loc_005DC4A6: ;
    eax = MEM32(0x8567C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005DC4D8; /* je: equal / zero */

loc_005DC4B0: ;
    PUSH32(esp, 0x655CD4);
    PUSH32(esp, 0x005DC4BAu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_005DC4BA: ;
    eax = MEM32(0x8567C8);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x65F1FC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x005DC4CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC4CAu); } /* indirect call */
    }

loc_005DC4CD: ;
    eax = MEM32(0x8567C8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x005DC4D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC4D5u); } /* indirect call */
    }

loc_005DC4D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005DC4E0
 * Original: 0x005DC4E0 - 0x005DC62E (334 bytes, 109 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005DC4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC4E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(ebp + -4) = 0;
    { uint32_t _icall_target = MEM32(0x62D338); PUSH32(esp, 0x005DC4F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC4F0u); } /* indirect call */
    }

loc_005DC4F6: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(0x8567C8);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x65F1FC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x005DC50Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC509u); } /* indirect call */
    }

loc_005DC50C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC51F; /* jge: greater or equal (signed >=) */

loc_005DC510: ;
    PUSH32(esp, 0x655D74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC51Au); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC51A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005DC582;

loc_005DC51F: ;
    eax = MEM32(0x8567C8);
    edx = MEM32(eax);
    edi = ebx + 0x414;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ebx + 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, 0x65F1BC);
    PUSH32(esp, 0x65F21C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x005DC542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC53Fu); } /* indirect call */
    }

loc_005DC542: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC5B2; /* jge: greater or equal (signed >=) */

loc_005DC546: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC54E; /* jne: not equal / not zero */

loc_005DC54A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DC574;

loc_005DC54E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC554u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_005DC554: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC567u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DC567: ;
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC571u); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_005DC571: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC574: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655D58);

loc_005DC57A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC57Fu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC57F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC582: ;
    MEM32(ebp + -4) = 1;
    MEM32(ebx + 0x400) = 0x13;
    MEM32(ebx + 0x404) = 0xE;

loc_005DC59D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D340); PUSH32(esp, 0x005DC5A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC59Du); } /* indirect call */
    }

loc_005DC5A3: ;
    eax = MEM32(ebp + -4);
    esp = ebp + -16;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_005DC5B2: ;
    ecx = MEM32(0x8567CC);
    edi = MEM32(edi);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x005DC5C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC5BEu); } /* indirect call */
    }

loc_005DC5C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC604; /* jge: greater or equal (signed >=) */

loc_005DC5C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC5D3; /* jne: not equal / not zero */

loc_005DC5C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x655D38);
    goto loc_005DC57A;

loc_005DC5D3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC5D9u); RECOMP_ABI_CALL(0x00619A34u, sub_00619A34); /* call 0x00619A34 */

loc_005DC5D9: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC5ECu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DC5EC: ;
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC5F6u); RECOMP_ABI_CALL(0x00405700u, sub_00405700); /* call 0x00405700 */

loc_005DC5F6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x655D38);
    goto loc_005DC57A;

loc_005DC604: ;
    _fa = (uint32_t)(MEM32(ebx + 0x404)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x404), 0xC (32-bit) */
    MEM32(ebx + 0x400) = 0xE;
    MEM8(ebx + 0x410) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_005DC59D; /* jne: not equal / not zero */

loc_005DC622: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC629u); RECOMP_ABI_CALL(0x005DC040u, sub_005DC040); /* call 0x005DC040 */

loc_005DC629: ;
    goto loc_005DC59D;

}

/**
 * sub_005DC630
 * Original: 0x005DC630 - 0x005DC670 (64 bytes, 20 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DC630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x404) = 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_005DC65D; /* jne: not equal / not zero */

loc_005DC647: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655D9C);
    PUSH32(esp, 0x005DC658u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC658: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC65B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_005DC65D: ;
    ecx = esi;
    PUSH32(esp, 0x005DC664u); RECOMP_ABI_CALL(0x005DC250u, sub_005DC250); /* call 0x005DC250 */

loc_005DC664: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC65B; /* jne: not equal / not zero */

loc_005DC668: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005DC040(); return; /* tail jmp 0x005DC040 */

}

/**
 * sub_005DC670
 * Original: 0x005DC670 - 0x005DC81E (430 bytes, 144 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005DC670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 0x400)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x400), 0x13 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005DC6AB; /* je: equal / zero */

loc_005DC688: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x655E04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC696u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC696: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp = ebp + -276;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_005DC6AB: ;
    eax = MEM32(ebp + 0x10);
    edx = ebp + -264;
    MEM32(ecx + 0x400) = 0x14;
    MEM32(ecx + 0x404) = 0xE;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_005DC6D0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC6D0; /* jne: not equal / not zero */

loc_005DC6DA: ;
    edi = ebp + -264;
    ecx = edi + 1;

loc_005DC6E3: ;
    SET_LO8(eax, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC6E3; /* jne: not equal / not zero */

loc_005DC6EA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005DC6FC; /* je: equal / zero */

loc_005DC6EE: ;
    SET_LO8(eax, 0x5C);

loc_005DC6F0: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -264)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -264), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DC6FC; /* je: equal / zero */

loc_005DC6F9: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DC6F0; /* jne: not equal / not zero */

loc_005DC6FC: ;
    eax = ebp + -264;
    MEM8(ebp + edi + -264) = 0;
    edx = eax + 1;
    /* nop */

loc_005DC710: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC710; /* jne: not equal / not zero */

loc_005DC717: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 1;
    eax = esi + esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC72Au); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DC72A: ;
    eax = esp;
    PUSH32(esp, esi);
    ecx = ebp + -264;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC73Au); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_005DC73A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    eax = ebp + edi + -263;
    if (CMP_NE(_fa, _fb)) goto loc_005DC74D; /* jne: not equal / not zero */

loc_005DC74A: ;
    eax = MEM32(ebp + 0x10);

loc_005DC74D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC755; /* jne: not equal / not zero */

loc_005DC751: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005DC79D;

loc_005DC755: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ebp + edi + -263;
    if (CMP_NE(_fa, _fb)) goto loc_005DC763; /* jne: not equal / not zero */

loc_005DC760: ;
    eax = MEM32(ebp + 0x10);

loc_005DC763: ;
    edx = eax + 1;

loc_005DC766: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC766; /* jne: not equal / not zero */

loc_005DC76D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax + 1;
    edi = ebp + edi + -263;
    if (CMP_NE(_fa, _fb)) goto loc_005DC780; /* jne: not equal / not zero */

loc_005DC77D: ;
    edi = MEM32(ebp + 0x10);

loc_005DC780: ;
    eax = esi + esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC78Eu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DC78E: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC798u); RECOMP_ABI_CALL(0x004056C0u, sub_004056C0); /* call 0x004056C0 */

loc_005DC798: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_005DC79D: ;
    edi = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC7A7u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_005DC7A7: ;
    edx = edi + 0x200;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC7B4u); RECOMP_ABI_CALL(0x00619BC5u, sub_00619BC5); /* call 0x00619BC5 */

loc_005DC7B4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5DC4E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + 0xC) = 0;
    { uint32_t _icall_target = MEM32(0x62D144); PUSH32(esp, 0x005DC7D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC7CEu); } /* indirect call */
    }

loc_005DC7D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DC7EE; /* jne: not equal / not zero */

loc_005DC7DA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D140); PUSH32(esp, 0x005DC7E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC7DAu); } /* indirect call */
    }

loc_005DC7E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x655DD8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DC7EBu); RECOMP_ABI_CALL(0x00618610u, sub_00618610); /* call 0x00618610 */

loc_005DC7EB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DC7EE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x62D13C); PUSH32(esp, 0x005DC7F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC7EEu); } /* indirect call */
    }

loc_005DC7F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x62D138); PUSH32(esp, 0x005DC7FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC7F5u); } /* indirect call */
    }

loc_005DC7FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x62D134); PUSH32(esp, 0x005DC803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC7FDu); } /* indirect call */
    }

loc_005DC803: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x62D130); PUSH32(esp, 0x005DC80Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005DC804u); } /* indirect call */
    }

loc_005DC80A: ;
    eax = 1;
    esp = ebp + -276;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005DC820
 * Original: 0x005DC820 - 0x005DC944 (292 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005DC820: ;
    eax = ZX16(MEM16(esp + 4));
    _fb = (uint32_t)(0xFFFFD000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFD000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005DC92C; /* ja: above (unsigned >) */

loc_005DC833: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x5DC944); /* switch: 9 entries, 9 targets */
    if (_jt == 0x005DC83Au) goto loc_005DC83A;
    if (_jt == 0x005DC85Fu) goto loc_005DC85F;
    if (_jt == 0x005DC87Cu) goto loc_005DC87C;
    if (_jt == 0x005DC898u) goto loc_005DC898;
    if (_jt == 0x005DC8B4u) goto loc_005DC8B4;
    if (_jt == 0x005DC8D0u) goto loc_005DC8D0;
    if (_jt == 0x005DC8ECu) goto loc_005DC8EC;
    if (_jt == 0x005DC90Cu) goto loc_005DC90C;
    if (_jt == 0x005DC926u) goto loc_005DC926;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005DC83A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = eax + 8;
    eax = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005DC84Fu); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC84F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC859u); RECOMP_ABI_CALL(0x005DC670u, sub_005DC670); /* call 0x005DC670 */

loc_005DC859: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC85F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DC86Cu); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC86C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC876u); RECOMP_ABI_CALL(0x005DBE80u, sub_005DBE80); /* call 0x005DBE80 */

loc_005DC876: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC87C: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DC888u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC888: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC892u); RECOMP_ABI_CALL(0x005DC040u, sub_005DC040); /* call 0x005DC040 */

loc_005DC892: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC898: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DC8A4u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC8A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC8AEu); RECOMP_ABI_CALL(0x005DBF90u, sub_005DBF90); /* call 0x005DBF90 */

loc_005DC8AE: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC8B4: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005DC8C0u); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC8C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC8CAu); RECOMP_ABI_CALL(0x005DC160u, sub_005DC160); /* call 0x005DC160 */

loc_005DC8CA: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC8D0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DC8DCu); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC8DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC8E6u); RECOMP_ABI_CALL(0x005DC630u, sub_005DC630); /* call 0x005DC630 */

loc_005DC8E6: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC8EC: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DC8FCu); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC8FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC906u); RECOMP_ABI_CALL(0x005DC2E0u, sub_005DC2E0); /* call 0x005DC2E0 */

loc_005DC906: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC90C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005DC91Cu); RECOMP_ABI_CALL(0x005DBDE0u, sub_005DBDE0); /* call 0x005DBDE0 */

loc_005DC91C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x005DC926u); RECOMP_ABI_CALL(0x005DC350u, sub_005DC350); /* call 0x005DC350 */

loc_005DC926: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_005DC92C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x655E2C);
    PUSH32(esp, 0x005DC93Du); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DC93D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_005DC970
 * Original: 0x005DC970 - 0x005DC995 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DC970: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = 1;
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_005DC9A0
 * Original: 0x005DC9A0 - 0x005DC9B5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC9A0(void)
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

loc_005DC9A0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005DC9AE; /* jge: greater or equal (signed >=) */

loc_005DC9A7: ;
    fp_push(MEMF(0x67457C)); /* fld float */
    esp += 4; return; /* ret */

loc_005DC9AE: ;
    fp_push(MEMF(0x63384C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DC9C0
 * Original: 0x005DC9C0 - 0x005DCA9B (219 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DC9C0(void)
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

loc_005DC9C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DCA93; /* je: equal / zero */

loc_005DC9D1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005DCA93; /* jnp: not parity */

loc_005DC9E6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DCA21; /* jne: not equal / not zero */

loc_005DC9F7: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DCA93; /* jne: not equal / not zero */

loc_005DCA01: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DCA21; /* jne: not equal / not zero */

loc_005DCA12: ;
    eax = ZX16(LO16(ecx));
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 8 + -8;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_005DCA21: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 3));
    PUSH32(esp, edi);
    edi = ZX16(LO16(ecx));
    eax = edi;
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x005DCA46u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005DCA46: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    if (CMP_NE(_fa, _fb)) goto loc_005DCA74; /* jne: not equal / not zero */

loc_005DCA58: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, esi);
    edx = esi + eax * 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x005DCA6Fu); RECOMP_ABI_CALL(0x005DDF90u, sub_005DDF90); /* call 0x005DDF90 */

loc_005DCA6F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_005DCA74: ;
    ecx = MEM32(esi + 8);
    eax = ecx + eax * 8;
    edx = eax + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x005DCA8Eu); RECOMP_ABI_CALL(0x005DDF90u, sub_005DDF90); /* call 0x005DDF90 */

loc_005DCA8E: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_005DCA93: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DCAA0
 * Original: 0x005DCAA0 - 0x005DCAF1 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005DCAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DCAA0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DCAD9; /* je: equal / zero */

loc_005DCAAA: ;
    eax = MEM32(ecx + -4);
    PUSH32(esp, ebx);
    ebx = ecx + -4;
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_005DCACE; /* js: sign (negative) */

loc_005DCAB8: ;
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_005DCAC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x005DCACAu); RECOMP_ABI_CALL(0x005DDA90u, sub_005DDA90); /* call 0x005DDA90 */

loc_005DCACA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DCAC0; /* jne: not equal / not zero */

loc_005DCACD: ;
    POP32(esp, edi);

loc_005DCACE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005DCAD4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005DCAD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_005DCAD9: ;
    _fa = (uint32_t)(MEM8(ebp + 3)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 3), 4 (8-bit) */
    ecx = 0x857868;
    if (TEST_NZ(_fa, _fb)) goto loc_005DCAE9; /* jne: not equal / not zero */

loc_005DCAE4: ;
    ecx = 0x857850;

loc_005DCAE9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005DCAEFu); RECOMP_ABI_CALL(0x00612440u, sub_00612440); /* call 0x00612440 */

loc_005DCAEF: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005DCB00
 * Original: 0x005DCB00 - 0x005DCB56 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DCB00(void)
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

loc_005DCB00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DCB0Bu); RECOMP_ABI_CALL(0x005DC9A0u, sub_005DC9A0); /* call 0x005DC9A0 */

loc_005DCB0B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005DCB40; /* jne: not equal / not zero */

loc_005DCB21: ;
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x655E70);
    PUSH32(esp, 0x005DCB3Du); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_005DCB3D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005DCB40: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655E5C)); /* fmul dword ptr [0x655e5c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00619764(); return; /* tail jmp 0x00619764 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DCB60
 * Original: 0x005DCB60 - 0x005DCCC3 (355 bytes, 131 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DCB60(void)
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

loc_005DCB60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = esp + 0x1C;
    esi = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x005DCB7Bu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCB7B: ;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x005DCB89u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCB89: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    PUSH32(esp, 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM16(esi) = LO16(edx);
    PUSH32(esp, 0x005DCB9Fu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCB9F: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    PUSH32(esp, 0xC);
    MEM8(esi + 2) = LO8(ecx);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x005DCBB3u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCBB3: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    SET_LO8(eax, MEM8(esp + 0x18));
    fp_push(MEMF(edi)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    SET_LO8(eax, MEM8(esi + 3));
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
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_005DCBE5; /* je: equal / zero */

loc_005DCBE1: ;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_005DCBE7;

loc_005DCBE5: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_005DCBE7: ;
    edi = ZX16(MEM16(esi));
    PUSH32(esp, 0xC2);
    edx = edi * 8 + 4;
    PUSH32(esp, 0x655E60);
    PUSH32(esp, edx);
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0x005DCC04u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005DCC04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DCC33; /* je: equal / zero */

loc_005DCC0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    ebp = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DCC35; /* jl: less (signed <) */

loc_005DCC1C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_005DCC20: ;
    ecx = ebp;
    PUSH32(esp, 0x005DCC27u); RECOMP_ABI_CALL(0x0040BD30u, sub_0040BD30); /* call 0x0040BD30 */

loc_005DCC27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005DCC20; /* jne: not equal / not zero */

loc_005DCC2D: ;
    eax = MEM32(esp + 0x24);
    goto loc_005DCC35;

loc_005DCC33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005DCC35: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    MEM32(esi + 8) = eax;
    MEM32(esp + 0x24) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_005DCCB0; /* jbe: below or equal (unsigned <=) */

loc_005DCC46: ;
    goto loc_005DCC50;

    /* nop */
    /* nop */

loc_005DCC50: ;
    eax = ZX8(MEM8(esi + 2));
    edi = MEM32(esp + 0x24);
    ecx = MEM32(esi + 8);
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005DCC66u); RECOMP_ABI_CALL(0x005DDAA0u, sub_005DDAA0); /* call 0x005DDAA0 */

loc_005DCC66: ;
    ecx = MEM32(esi + 8);
    ebp = MEM32(ecx + edi + 4);
    SET_LO8(eax, MEM8(esi + 2));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005DCCA0; /* jbe: below or equal (unsigned <=) */

loc_005DCC76: ;
    PUSH32(esp, 4);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x005DCC84u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCC84: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005DCC8Fu); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DCC8F: ;
    MEM16(ebp + edi * 2) = LO16(eax);
    ecx = ZX8(MEM8(esi + 2));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DCC76; /* jl: less (signed <) */

loc_005DCCA0: ;
    eax = MEM32(esp + 0x24);
    edx = ZX16(MEM16(esi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DCC50; /* jl: less (signed <) */

loc_005DCCB0: ;
    ecx = ebx;
    PUSH32(esp, 0x005DCCB7u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005DCCB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DCCD0
 * Original: 0x005DCCD0 - 0x005DD17D (1197 bytes, 409 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005DCCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_005DCCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x640ED0);
    edi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x860220);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCCF9u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_005DCCF9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -36) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005DCDF9; /* je: equal / zero */

loc_005DCD06: ;
    PUSH32(esp, 4);
    edx = ebp + -8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0;
    MEM8(ebp + 0x13) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD25u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD25: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706D63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x706D63 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DCDA8; /* jne: not equal / not zero */

loc_005DCD2F: ;
    MEM8(ebp + 0x13) = 1;

loc_005DCD33: ;
    PUSH32(esp, 4);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD40u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD40: ;
    SET_LO16(edx, MEM16(ebp + -24));
    PUSH32(esp, 4);
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    MEM16(edi) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD54u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD54: ;
    SET_LO8(ecx, MEM8(ebp + -28));
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -12), 1 (8-bit) */
    MEM8(edi + 2) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 4);
    if (TEST_Z(_fa, _fb)) goto loc_005DCE0F; /* je: equal / zero */

loc_005DCD68: ;
    ebx = edi + 0x10;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD71u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD71: ;
    PUSH32(esp, 4);
    edx = edi + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD7Eu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD7E: ;
    eax = edi + 0x18;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCD8Bu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCD8B: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(edi + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005DCE07; /* jp: parity */

loc_005DCDA1: ;
    eax = MEM32(ebx);
    MEM32(edi + 4) = eax;
    goto loc_005DCE25;

loc_005DCDA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x696E61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x696E61 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DCDC1; /* jne: not equal / not zero */

loc_005DCDAF: ;
    PUSH32(esp, 4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCDBCu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCDBC: ;
    goto loc_005DCD33;

loc_005DCDC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31494E41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31494E41 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005DCDDC; /* jne: not equal / not zero */

loc_005DCDC8: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCDD0u); RECOMP_ABI_CALL(0x005DCB60u, sub_005DCB60); /* call 0x005DCB60 */

loc_005DCDD0: ;
    esp = ebp + -52;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_005DCDDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DCD33; /* je: equal / zero */

loc_005DCDE4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x655E9C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCDEFu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005DCDEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCDF9u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005DCDF9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp + -52;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_005DCE07: ;
    ecx = MEM32(edi + 0x18);
    MEM32(edi + 4) = ecx;
    goto loc_005DCE25;

loc_005DCE0F: ;
    ebx = edi + 4;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE18u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCE18: ;
    fp_push(MEMF(ebx)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;

loc_005DCE25: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE2Cu); RECOMP_ABI_CALL(0x00617F20u, sub_00617F20); /* call 0x00617F20 */

loc_005DCE2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, MEM8(edi + 3));
    if (CMP_EQ(_fa, _fb)) goto loc_005DCE37; /* je: equal / zero */

loc_005DCE33: ;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_005DCE39;

loc_005DCE37: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_005DCE39: ;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DD0B5; /* je: equal / zero */

loc_005DCE47: ;
    ebx = ZX8(MEM8(edi + 2));
    eax = ebx + ebx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE5Cu); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DCE5C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = esp;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_005DCEB3; /* jle: less or equal (signed <=) */

loc_005DCE6C: ;
    ebx = eax + 8;
    /* nop */

loc_005DCE70: ;
    PUSH32(esp, 4);
    edx = ebx + -8;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE7Du); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCE7D: ;
    PUSH32(esp, 4);
    eax = ebx + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE8Au); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCE8A: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCE94u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCE94: ;
    PUSH32(esp, 2);
    ecx = ebp + 0xE;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCEA1u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCEA1: ;
    eax = MEM32(ebp + -4);
    edx = ZX8(MEM8(edi + 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DCE70; /* jl: less (signed <) */

loc_005DCEB3: ;
    PUSH32(esp, 2);
    eax = ebp + 0x12;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCEC0u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCEC0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCED2u); RECOMP_ABI_CALL(0x00619820u, sub_00619820); /* call 0x00619820 */

loc_005DCED2: ;
    ebx = ZX16(MEM16(edi));
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0x11A);
    ecx = ebx * 8 + 4;
    PUSH32(esp, 0x655E60);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCEEFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005DCEEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DCF21; /* je: equal / zero */

loc_005DCEF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DCF23; /* jl: less (signed <) */

loc_005DCF07: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005DCF08: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCF10u); RECOMP_ABI_CALL(0x0040BD30u, sub_0040BD30); /* call 0x0040BD30 */

loc_005DCF10: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = ecx;
    if ((_fa != 0)) goto loc_005DCF08; /* jne: not equal / not zero */

loc_005DCF1C: ;
    eax = MEM32(ebp + -20);
    goto loc_005DCF23;

loc_005DCF21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005DCF23: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    MEM32(edi + 8) = eax;
    MEM32(ebp + -4) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_005DD168; /* jbe: below or equal (unsigned <=) */

loc_005DCF37: ;
    goto loc_005DCF40;

    /* nop */

loc_005DCF40: ;
    edx = ZX8(MEM8(edi + 2));
    ebx = MEM32(ebp + -4);
    ecx = MEM32(edi + 8);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCF55u); RECOMP_ABI_CALL(0x005DDAA0u, sub_005DDAA0); /* call 0x005DDAA0 */

loc_005DCF55: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x12);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + ebx + 4);
    eax = MEM32(ebp + -16);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    MEM32(ebp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCF72u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DCF72: ;
    SET_LO8(eax, MEM8(edi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005DD09E; /* jbe: below or equal (unsigned <=) */

loc_005DCF7F: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_005DCF90: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_005DD051; /* jle: less or equal (signed <=) */

loc_005DCF9E: ;
    edx = SX16(LO16(eax));
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + edx * 4);
    MEM32(ebp + -20) = eax;
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -40) = eax;
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005DCFBF; /* jge: greater or equal (signed >=) */

loc_005DCFB9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005DCFBF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655E54)); /* fmul dword ptr [0x655e54] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + -4)); /* fadd dword ptr [esi - 4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DCFD4u); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DCFD4: ;
    edx = MEM32(ebp + -20);
    ecx = MEM32(ebp + 8);
    edx = edx >> 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -40) = edx;
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    MEM16(ecx + -4) = LO16(eax);
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_005DCFFB; /* jge: greater or equal (signed >=) */

loc_005DCFF5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005DCFFB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655E58)); /* fmul dword ptr [0x655e58] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD010u); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD010: ;
    ecx = MEM32(ebp + 8);
    MEM16(ecx + -2) = LO16(eax);
    eax = MEM32(ebp + -20);
    eax = eax >> 0x15;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -40) = eax;
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_005DD031; /* jge: greater or equal (signed >=) */

loc_005DD02B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_005DD031: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x655E54)); /* fmul dword ptr [0x655e54] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD046u); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD046: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = LO16(eax);
    goto loc_005DD085;

loc_005DD051: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD05Au); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD05A: ;
    ecx = MEM32(ebp + 8);
    MEM16(ecx + -4) = LO16(eax);
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD06Bu); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD06B: ;
    ecx = MEM32(ebp + 8);
    MEM16(ecx + -2) = LO16(eax);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD07Cu); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD07C: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(eax);

loc_005DD085: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 6;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(edi + 2));
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DCF90; /* jl: less (signed <) */

loc_005DD09B: ;
    esi = MEM32(ebp + -36);

loc_005DD09E: ;
    eax = MEM32(ebp + -4);
    ecx = ZX16(MEM16(edi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DCF40; /* jl: less (signed <) */

loc_005DD0B0: ;
    goto loc_005DD168;

loc_005DD0B5: ;
    ebx = ZX16(MEM16(edi));
    PUSH32(esp, 0x12F);
    edx = ebx * 8 + 4;
    PUSH32(esp, 0x655E60);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD0CFu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005DD0CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DD0F1; /* je: equal / zero */

loc_005DD0D6: ;
    PUSH32(esp, 0x40BD30);
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD0ECu); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_005DD0EC: ;
    eax = MEM32(ebp + 0x10);
    goto loc_005DD0F3;

loc_005DD0F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005DD0F3: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    MEM32(edi + 8) = eax;
    MEM32(ebp + 0x10) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_005DD168; /* jbe: below or equal (unsigned <=) */

loc_005DD103: ;
    eax = ZX8(MEM8(edi + 2));
    ebx = MEM32(ebp + 0x10);
    ecx = MEM32(edi + 8);
    ebx = ebx << 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD118u); RECOMP_ABI_CALL(0x005DDAA0u, sub_005DDAA0); /* call 0x005DDAA0 */

loc_005DD118: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + ebx + 4);
    SET_LO8(eax, MEM8(edi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_005DD15A; /* jbe: below or equal (unsigned <=) */

loc_005DD12B: ;
    goto loc_005DD130;

    /* nop */

loc_005DD130: ;
    PUSH32(esp, 4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD13Du); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_005DD13D: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD147u); RECOMP_ABI_CALL(0x005DCB00u, sub_005DCB00); /* call 0x005DCB00 */

loc_005DD147: ;
    edx = MEM32(ebp + 8);
    MEM16(edx + ebx * 2) = LO16(eax);
    eax = ZX8(MEM8(edi + 2));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DD130; /* jl: less (signed <) */

loc_005DD15A: ;
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(edi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005DD103; /* jl: less (signed <) */

loc_005DD168: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005DD16Fu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_005DD16F: ;
    SET_LO8(eax, 1);
    esp = ebp + -52;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005DD180
 * Original: 0x005DD180 - 0x005DD1C0 (64 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005DD180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005DD180: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005DD198; /* je: equal / zero */

loc_005DD190: ;
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;

loc_005DD198: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005DD1B8; /* jbe: below or equal (unsigned <=) */

loc_005DD19F: ;
    /* nop */

loc_005DD1A0: ;
    edx = MEM32(esi + 8);
    ecx = edx + edi * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005DD1B0; /* je: equal / zero */

loc_005DD1AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005DD1B0u); RECOMP_ABI_CALL(0x005DDF70u, sub_005DDF70); /* call 0x005DDF70 */

loc_005DD1B0: ;
    eax = ZX16(MEM16(esi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005DD1A0; /* jl: less (signed <) */

loc_005DD1B8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
