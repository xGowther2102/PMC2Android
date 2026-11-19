/**
 * Midnight Club II (PC) - Recompiled code chunk 21
 * Functions: 250 (0x00521240 - 0x0052BC60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00521240
 * Original: 0x00521240 - 0x00521257 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521240: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521254; /* jne: not equal / not zero */

loc_0052124B: ;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x1C) = edx;
    MEM32(ecx + 0x28) = eax;

loc_00521254: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521260
 * Original: 0x00521260 - 0x00521299 (57 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521260: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00521292; /* jl: less (signed <) */

loc_00521269: ;
    esi = MEM32(0x6C263C);
    eax = MEM32(esi + 0x420);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00521292; /* jge: greater or equal (signed >=) */

loc_00521279: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00521292; /* jl: less (signed <) */

loc_00521281: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x424) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00521292; /* jge: greater or equal (signed >=) */

loc_00521289: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00521292: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005212A0
 * Original: 0x005212A0 - 0x00521328 (136 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005212A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005212A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x15) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00521326; /* je: equal / zero */

loc_005212B3: ;
    PUSH32(esp, edi);
    edx = SX8(LO8(eax));
    PUSH32(esp, 0x1C6);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x649E14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005212CAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005212CA: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x15);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00521325; /* jle: less or equal (signed <=) */

loc_005212F2: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005212F5: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x2C);
    edx = MEM32(esi + 0x20);
    ecx = eax + ebx + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052130Fu); RECOMP_ABI_CALL(0x00519110u, sub_00519110); /* call 0x00519110 */

loc_0052130F: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + edi * 4) = eax;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x15);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005212F5; /* jl: less (signed <) */

loc_00521324: ;
    POP32(esp, ebx);

loc_00521325: ;
    POP32(esp, edi);

loc_00521326: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00521330
 * Original: 0x00521330 - 0x00521373 (67 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521330: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521361; /* je: equal / zero */

loc_0052133A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00521360; /* jle: less or equal (signed <=) */

loc_00521341: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521357; /* je: equal / zero */

loc_0052134B: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521357u); RECOMP_ABI_CALL(0x005182B0u, sub_005182B0); /* call 0x005182B0 */

loc_00521357: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x15);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00521341; /* jl: less (signed <) */

loc_00521360: ;
    POP32(esp, edi);

loc_00521361: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    MEM8(esi + 0x15) = 0;
    PUSH32(esp, 0x0052136Eu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052136E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00521380
 * Original: 0x00521380 - 0x00521401 (129 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00521380(void)
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

loc_00521380: ;
    SET_LO8(edx, MEM8(0x6C2718));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00521395; /* jne: not equal / not zero */

loc_0052138F: ;
    MEM32(0x6C2718) = MEM32(0x6C2718) | eax;
    _fa = (uint32_t)(MEM32(0x6C2718)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00521395: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005213A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052139Eu); } /* indirect call */
    }

loc_005213A1: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(0x6C270C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(0x6C2710) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = 0x6C270C;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    POP32(esp, esi);
    MEMF(0x6C2714) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00521410
 * Original: 0x00521410 - 0x0052180F (1023 bytes, 285 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521410(void)
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

loc_00521410: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052144E; /* je: equal / zero */

loc_00521423: ;
    PUSH32(esp, 0x62F6FC);
    PUSH32(esp, 0x0052142Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052142D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052144E; /* jne: not equal / not zero */

loc_00521434: ;
    esi = MEM32(esp + 0x460);
    PUSH32(esp, 0x30505250);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521446u); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00521446: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x2C) = eax;
    goto loc_0052145C;

loc_0052144E: ;
    esi = MEM32(esp + 0x460);
    MEM32(ebx + 0x2C) = 0;

loc_0052145C: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521804; /* jne: not equal / not zero */

loc_00521467: ;
    eax = MEM32(esp + 0x464);
    ecx = MEM32(esp + 0x45C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x0052148Au); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_0052148A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_005214BF; /* jne: not equal / not zero */

loc_00521494: ;
    edx = MEM32(esp + 0x46C);
    eax = MEM32(esp + 0x464);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649E48);
    PUSH32(esp, 0x005214AFu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005214AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005214BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x1C8;
    PUSH32(esp, 0x005214CDu); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_005214CD: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C8;
    PUSH32(esp, 0x005214E6u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005214E6: ;
    SET_LO8(eax, MEM8(esp + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521540; /* je: equal / zero */

loc_005214F1: ;
    edi = 0x649E3C;
    esi = esp + 0xC0;
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
    ecx = esp + 0x1C0;
    if ((_flags != 0)) goto loc_0052152E; /* je: equal / zero */

loc_0052150F: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521521u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00521521: ;
    SET_LO8(eax, MEM8(esp + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005214F1; /* jne: not equal / not zero */

loc_0052152C: ;
    goto loc_00521535;

loc_0052152E: ;
    PUSH32(esp, 0x00521533u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00521533: ;
    ebp = eax;

loc_00521535: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x468);

loc_00521540: ;
    ecx = edi;
    PUSH32(esp, 0x00521547u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00521547: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0xA8);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00521562u); RECOMP_ABI_CALL(0x00576B10u, sub_00576B10); /* call 0x00576B10 */

loc_00521562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00521570; /* je: equal / zero */

loc_00521569: ;
    ecx = eax;
    PUSH32(esp, 0x00521570u); RECOMP_ABI_CALL(0x00525E50u, sub_00525E50); /* call 0x00525E50 */

loc_00521570: ;
    edi = MEM32(esp + 0x46C);
    ebp = MEM32(esp + 0x464);
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00521590u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00521590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005215B5; /* jne: not equal / not zero */

loc_00521598: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x649E48);
    PUSH32(esp, 0x005215A5u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_005215A5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_005215B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005215C0u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_005215C0: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005215D6u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005215D6: ;
    SET_LO8(eax, MEM8(esp + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005217F9; /* je: equal / zero */

loc_005215E5: ;
    goto loc_005215F0;

    /* nop */
    edi = edi;

loc_005215F0: ;
    edi = 0x63E684;
    esi = esp + 0xC0;
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
    if ((_flags == 0)) goto loc_00521622; /* jne: not equal / not zero */

loc_00521607: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0052161Du); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0052161D: ;
    goto loc_005217D4;

loc_00521622: ;
    edi = 0x649E34;
    esi = esp + 0xC0;
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
    if ((_flags == 0)) goto loc_005216D4; /* jne: not equal / not zero */

loc_0052163D: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00521646u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00521646: ;
    PUSH32(esp, 0x639BA8);
    ecx = esp + 0x24;
    esi = eax;
    PUSH32(esp, 0x00521656u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00521656: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005217D4; /* jle: less or equal (signed <=) */

loc_0052165E: ;
    edi = esi;

loc_00521660: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00521669u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00521669: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005216CC; /* je: equal / zero */

loc_00521670: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x647EE0);
    ecx = esp + 0x26C;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052168Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052168C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521699; /* jne: not equal / not zero */

loc_00521694: ;
    esi = 1;

loc_00521699: ;
    edx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005216CC; /* jne: not equal / not zero */

loc_005216A2: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);
    eax = esp + 0x268;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005216C3u); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_005216C3: ;
    edx = MEM32(ebx + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + esi * 4) = eax;

loc_005216CC: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00521660; /* jne: not equal / not zero */

loc_005216CF: ;
    goto loc_005217D4;

loc_005216D4: ;
    edi = 0x649E2C;
    esi = esp + 0xC0;
    ecx = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00521727; /* jne: not equal / not zero */

loc_005216EB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x005216F9u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_005216F9: ;
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x20;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x0052171Cu); RECOMP_ABI_CALL(0x006157F0u, sub_006157F0); /* call 0x006157F0 */

loc_0052171C: ;
    ecx = MEM32(ebx + 0x2C);
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005217D4;

loc_00521727: ;
    edi = 0x649E3C;
    esi = esp + 0xC0;
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
    if ((_flags == 0)) goto loc_005217D4; /* jne: not equal / not zero */

loc_00521742: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0052174Bu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0052174B: ;
    ecx = MEM32(ebx + 0x2C);
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005217D4; /* je: equal / zero */

loc_0052175B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005217D4; /* jle: less or equal (signed <=) */

loc_00521761: ;
    PUSH32(esp, 0x649E24);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0052176Fu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052176F: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00521778u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00521778: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00521786u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_00521786: ;
    PUSH32(esp, 0x63E684);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00521794u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00521794: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x364;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005217AAu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005217AA: ;
    ecx = esp + 0x360;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005217BBu); RECOMP_ABI_CALL(0x00525E70u, sub_00525E70); /* call 0x00525E70 */

loc_005217BB: ;
    PUSH32(esp, 0x63E344);
    ecx = esp + 0x24;
    PUSH32(esp, 0x005217C9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_005217C9: ;
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(edx + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00521761; /* jl: less (signed <) */

loc_005217D4: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x005217EAu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005217EA: ;
    SET_LO8(eax, MEM8(esp + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005215F0; /* jne: not equal / not zero */

loc_005217F9: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00521802u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00521802: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00521804: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x450) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x450;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00521810
 * Original: 0x00521810 - 0x005219FE (494 bytes, 166 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521810(void)
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

loc_00521810: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 1 (8-bit) */
    PUSH32(esp, edi);
    ebp = ecx;
    MEM32(esp + 0x10) = 0x3F800000;
    if (TEST_Z(_fa, _fb)) goto loc_00521851; /* je: equal / zero */

loc_0052182B: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649E68)); /* fmul dword ptr [0x649e68] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x644DB4)); /* fadd dword ptr [0x644db4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8602E0)); /* fmul dword ptr [0x8602e0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00521851: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052192B; /* jne: not equal / not zero */

loc_0052185E: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521867u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00521867: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 5);
    ecx = MEM32(ebp + 0x2C);
    eax = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005219F4; /* je: equal / zero */

loc_0052187C: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    SET_LO8(ebx, 4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005218CB; /* je: equal / zero */

loc_00521885: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00521894u); RECOMP_ABI_CALL(0x005EDE80u, sub_005EDE80); /* call 0x005EDE80 */

loc_00521894: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, 0x005218A0u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_005218A0: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_push(MEMD(0x6401F8)); /* fld double */
    PUSH32(esp, 0x005218B1u); RECOMP_ABI_CALL(0x0061A53Au, sub_0061A53A); /* call 0x0061A53A */

loc_005218B1: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x005218BCu); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_005218BC: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005218C8u); RECOMP_ABI_CALL(0x005EDF00u, sub_005EDF00); /* call 0x005EDF00 */

loc_005218C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005218CB: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 1 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_AE(_fa, _fb)) goto loc_005218E4; /* jae: above or equal (unsigned >=) */

loc_005218D9: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005218E2u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_005218E2: ;
    goto loc_005218F1;

loc_005218E4: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005218F1u); RECOMP_ABI_CALL(0x005F2730u, sub_005F2730); /* call 0x005F2730 */

loc_005218F1: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005219F4; /* je: equal / zero */

loc_005218FA: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00521903u); RECOMP_ABI_CALL(0x00609C80u, sub_00609C80); /* call 0x00609C80 */

loc_00521903: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052190Fu); RECOMP_ABI_CALL(0x005EDF00u, sub_005EDF00); /* call 0x005EDF00 */

loc_0052190F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052191Eu); RECOMP_ABI_CALL(0x005EDE80u, sub_005EDE80); /* call 0x005EDE80 */

loc_0052191E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0052192B: ;
    ecx = MEM32(ebp + 0x2C);
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005219F4; /* je: equal / zero */

loc_00521939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052199F; /* jne: not equal / not zero */

loc_0052193E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005219F4; /* jne: not equal / not zero */

loc_00521953: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005219F4; /* jle: less or equal (signed <=) */

loc_0052195D: ;
    ebx = MEM32(esp + 0x10);

loc_00521961: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x0052196Bu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0052196B: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x14));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFF01u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052198Au); RECOMP_ABI_CALL(0x00522F20u, sub_00522F20); /* call 0x00522F20 */

loc_0052198A: ;
    ecx = MEM32(ebp + 0x2C);
    eax = MEM32(ecx + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00521961; /* jl: less (signed <) */

loc_00521995: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0052199F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005219F4; /* je: equal / zero */

loc_005219A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005219F4; /* jne: not equal / not zero */

loc_005219A8: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x005219B2u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005219B2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005219F4; /* jne: not equal / not zero */

loc_005219C6: ;
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(edx + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005219F4; /* jle: less or equal (signed <=) */

loc_005219D2: ;
    ebx = MEM32(esp + 0x10);

loc_005219D6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x005219E9u); RECOMP_ABI_CALL(0x005230E0u, sub_005230E0); /* call 0x005230E0 */

loc_005219E9: ;
    eax = MEM32(ebp + 0x2C);
    ecx = MEM32(eax + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005219D6; /* jl: less (signed <) */

loc_005219F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00521A00
 * Original: 0x00521A00 - 0x00521A80 (128 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00521A09u); RECOMP_ABI_CALL(0x00516F00u, sub_00516F00); /* call 0x00516F00 */

loc_00521A09: ;
    MEM32(0x6C271C) = 1;
    MEM32(esi + 0x1C) = 0x49;
    MEM32(esi + 0x18) = 2;
    MEM32(esi + 0x20) = 0x42C80000;
    MEM32(esi) = 0x649E00;
    eax = MEM32(0x6C263C);
    eax = MEM32(eax + 0x41C);
    PUSH32(esp, 0x33);
    ecx = eax * 4;
    PUSH32(esp, 0x649E14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00521A4Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00521A4D: ;
    edi = eax;
    MEM32(esi + 0x24) = edi;
    edx = MEM32(0x6C263C);
    ecx = MEM32(edx + 0x41C);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi + 0x28) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00521A80
 * Original: 0x00521A80 - 0x00521A9E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521A88u); RECOMP_ABI_CALL(0x00521070u, sub_00521070); /* call 0x00521070 */

loc_00521A88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00521A98; /* je: equal / zero */

loc_00521A8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521A95u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00521A95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00521A98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521AA0
 * Original: 0x00521AA0 - 0x00521C2C (396 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521AA0(void)
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

loc_00521AA0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    edx = MEM32(ecx + 0x3D0);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00521ACAu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_00521ACA: ;
    edx = MEM32(0x6C3308);
    ecx = MEM32(0x6C263C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebx = ebx + ebx + 3;
    PUSH32(esp, 0x00521AE7u); RECOMP_ABI_CALL(0x00517FD0u, sub_00517FD0); /* call 0x00517FD0 */

loc_00521AE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521AF0; /* je: equal / zero */

loc_00521AEB: ;
    ebx = 3;

loc_00521AF0: ;
    edi = MEM32(esp + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521AFE; /* jne: not equal / not zero */

loc_00521AF9: ;
    ebx = 2;

loc_00521AFE: ;
    eax = MEM32(0x662E64);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521B25u); RECOMP_ABI_CALL(0x00518FE0u, sub_00518FE0); /* call 0x00518FE0 */

loc_00521B25: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649E6C)); /* fmul dword ptr [0x649e6c] */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    ebp = ecx;
    MEM32(esp + 0x34) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00521C08; /* jg: greater (signed >) */

loc_00521B5E: ;
    eax = ebx + ebx + 1;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00521B72: ;
    eax = MEM32(esp + 0x14);
    edi = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00521BE0; /* jg: greater (signed >) */

loc_00521B81: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00521B8Eu); RECOMP_ABI_CALL(0x00521260u, sub_00521260); /* call 0x00521260 */

loc_00521B8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521BC4; /* je: equal / zero */

loc_00521B93: ;
    ecx = MEM32(esi + 0x24);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521BC4; /* je: equal / zero */

loc_00521B9D: ;
    ecx = MEM32(0x8583A0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00521BADu); RECOMP_ABI_CALL(0x00520FF0u, sub_00520FF0); /* call 0x00520FF0 */

loc_00521BAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521BC4; /* jne: not equal / not zero */

loc_00521BB1: ;
    ecx = MEM32(esp + 0x44);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00521BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521BBAu); } /* indirect call */
    }

loc_00521BBD: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521BB1; /* jne: not equal / not zero */

loc_00521BC4: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00521B81; /* jle: less or equal (signed <=) */

loc_00521BDC: ;
    ecx = MEM32(esp + 0x18);

loc_00521BE0: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    edx = ebx + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00521B72; /* jle: less or equal (signed <=) */

loc_00521C04: ;
    edi = MEM32(esp + 0x44);

loc_00521C08: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521C22; /* je: equal / zero */

loc_00521C13: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00521C1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521C18u); } /* indirect call */
    }

loc_00521C1B: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521C13; /* jne: not equal / not zero */

loc_00521C22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00521C30
 * Original: 0x00521C30 - 0x00521C94 (100 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00521C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649E70;
    PUSH32(esp, 0x00521C3Eu); RECOMP_ABI_CALL(0x005178B0u, sub_005178B0); /* call 0x005178B0 */

loc_00521C3E: ;
    ecx = MEM32(0x6C2720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521C4Au); RECOMP_ABI_CALL(0x00521120u, sub_00521120); /* call 0x00521120 */

loc_00521C4A: ;
    ecx = MEM32(0x6C2720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521C56u); RECOMP_ABI_CALL(0x00521200u, sub_00521200); /* call 0x00521200 */

loc_00521C56: ;
    ecx = esi;
    PUSH32(esp, 0x00521C5Du); RECOMP_ABI_CALL(0x00521330u, sub_00521330); /* call 0x00521330 */

loc_00521C5D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521C69; /* je: equal / zero */

loc_00521C64: ;
    PUSH32(esp, 0x00521C69u); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_00521C69: ;
    MEM32(0x6C271C) = MEM32(0x6C271C) - 1;
    _fa = (uint32_t)(MEM32(0x6C271C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00521C8C; /* jne: not equal / not zero */

loc_00521C71: ;
    ecx = MEM32(0x6C2720);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521C82; /* je: equal / zero */

loc_00521C7B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00521C82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521C7Fu); } /* indirect call */
    }

loc_00521C82: ;
    MEM32(0x6C2720) = 0;

loc_00521C8C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005171C0(); return; /* tail jmp 0x005171C0 */

}

/**
 * sub_00521CA0
 * Original: 0x00521CA0 - 0x00521CA7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521CA0: ;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00521CB0
 * Original: 0x00521CB0 - 0x00521CDD (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521CB8u); RECOMP_ABI_CALL(0x004BA550u, sub_004BA550); /* call 0x004BA550 */

loc_00521CB8: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x6C2720);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x649E8C);
    PUSH32(esp, edx);
    edx = MEM32(0x6C263C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00521CD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521CD4u); } /* indirect call */
    }

loc_00521CD6: ;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00521CE0
 * Original: 0x00521CE0 - 0x00521D10 (48 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521CE8u); RECOMP_ABI_CALL(0x004BA550u, sub_004BA550); /* call 0x004BA550 */

loc_00521CE8: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x6C2720);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x649E94);
    PUSH32(esp, edx);
    edx = MEM32(0x6C263C);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00521D09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521D07u); } /* indirect call */
    }

loc_00521D09: ;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00521D10
 * Original: 0x00521D10 - 0x00521D48 (56 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521D18u); RECOMP_ABI_CALL(0x005177C0u, sub_005177C0); /* call 0x005177C0 */

loc_00521D18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521D40; /* je: equal / zero */

loc_00521D1C: ;
    ecx = esi;
    PUSH32(esp, 0x00521D23u); RECOMP_ABI_CALL(0x00517290u, sub_00517290); /* call 0x00517290 */

loc_00521D23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521D40; /* je: equal / zero */

loc_00521D27: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00521D2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00521D2Bu); } /* indirect call */
    }

loc_00521D2E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521D3Cu); RECOMP_ABI_CALL(0x00521810u, sub_00521810); /* call 0x00521810 */

loc_00521D3C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00521D40: ;
    MEM8(esi + 5) = 0xFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521D50
 * Original: 0x00521D50 - 0x00521DE3 (147 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00521D94; /* jne: not equal / not zero */

loc_00521D5B: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esi + 0x14));
    MEM32(esi + 0x20) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00521D81; /* je: equal / zero */

loc_00521D6E: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x14) = LO8(ecx);
    ecx = MEM32(0x6C2720);
    PUSH32(esp, 0x00521D7Fu); RECOMP_ABI_CALL(0x00521240u, sub_00521240); /* call 0x00521240 */

loc_00521D7F: ;
    goto loc_00521DB9;

loc_00521D81: ;
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    ecx = MEM32(0x6C2720);
    PUSH32(esp, 0x00521D92u); RECOMP_ABI_CALL(0x00521170u, sub_00521170); /* call 0x00521170 */

loc_00521D92: ;
    goto loc_00521DB9;

loc_00521D94: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00521DB5; /* jne: not equal / not zero */

loc_00521DA3: ;
    MEM8(esi + 0x14) = MEM8(esi + 0x14) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(0x6C2720);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521DB3u); RECOMP_ABI_CALL(0x005211B0u, sub_005211B0); /* call 0x005211B0 */

loc_00521DB3: ;
    goto loc_00521DB9;

loc_00521DB5: ;
    MEM8(esi + 0x14) = MEM8(esi + 0x14) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00521DB9: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00521DDE; /* jle: less or equal (signed <=) */

loc_00521DC2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521DD5; /* je: equal / zero */

loc_00521DCC: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521DD5u); RECOMP_ABI_CALL(0x00522C60u, sub_00522C60); /* call 0x00522C60 */

loc_00521DD5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x15);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00521DC2; /* jl: less (signed <) */

loc_00521DDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00521DF0
 * Original: 0x00521DF0 - 0x00521E0A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521DF0(void)
{

loc_00521DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521DF8u); RECOMP_ABI_CALL(0x005173A0u, sub_005173A0); /* call 0x005173A0 */

loc_00521DF8: ;
    MEM32(esi) = 0x649E98;
    eax = MEM32(0x6C2720);
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00521E10
 * Original: 0x00521E10 - 0x00521E17 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521E10: ;
    eax = MEM32(ecx + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00521E20
 * Original: 0x00521E20 - 0x00521E27 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00521E20: ;
    eax = MEM32(ecx + 0x2C);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00521E30
 * Original: 0x00521E30 - 0x00521E74 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00521E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649E98;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521E53; /* je: equal / zero */

loc_00521E42: ;
    PUSH32(esp, 0x62F6FC);
    PUSH32(esp, 0x00521E4Cu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00521E4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521E6C; /* je: equal / zero */

loc_00521E53: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x00521E5Bu); RECOMP_ABI_CALL(0x00525EA0u, sub_00525EA0); /* call 0x00525EA0 */

loc_00521E5B: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(0x6C5258);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00521E6Cu); RECOMP_ABI_CALL(0x00576E60u, sub_00576E60); /* call 0x00576E60 */

loc_00521E6C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005177E0(); return; /* tail jmp 0x005177E0 */

}

/**
 * sub_00521E80
 * Original: 0x00521E80 - 0x00521ED0 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521E80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x00521E8Eu); RECOMP_ABI_CALL(0x00516FA0u, sub_00516FA0); /* call 0x00516FA0 */

loc_00521E8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521ECB; /* jne: not equal / not zero */

loc_00521E92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x649E14);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00521EA1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00521EA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521EB3; /* je: equal / zero */

loc_00521EA8: ;
    ecx = eax;
    PUSH32(esp, 0x00521EAFu); RECOMP_ABI_CALL(0x00521DF0u, sub_00521DF0); /* call 0x00521DF0 */

loc_00521EAF: ;
    esi = eax;
    goto loc_00521EB5;

loc_00521EB3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00521EB5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00521EC8u); RECOMP_ABI_CALL(0x00517A00u, sub_00517A00); /* call 0x00517A00 */

loc_00521EC8: ;
    eax = esi;
    POP32(esp, esi);

loc_00521ECB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00521ED0
 * Original: 0x00521ED0 - 0x00521F48 (120 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521ED9u); RECOMP_ABI_CALL(0x005171A0u, sub_005171A0); /* call 0x005171A0 */

loc_00521ED9: ;
    MEM32(esi) = 0x649E70;
    eax = MEM32(0x6C2720);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00521F28; /* jne: not equal / not zero */

loc_00521EEA: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x644668);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00521EF8u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00521EF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521F16; /* je: equal / zero */

loc_00521EFF: ;
    ecx = eax;
    PUSH32(esp, 0x00521F06u); RECOMP_ABI_CALL(0x00521A00u, sub_00521A00); /* call 0x00521A00 */

loc_00521F06: ;
    PUSH32(esp, eax);
    MEM32(0x6C2720) = eax;
    PUSH32(esp, 0x00521F11u); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00521F11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00521F2E;

loc_00521F16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x6C2720) = eax;
    PUSH32(esp, 0x00521F23u); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00521F23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00521F2E;

loc_00521F28: ;
    MEM32(0x6C271C) = MEM32(0x6C271C) + 1;
    _fa = (uint32_t)(MEM32(0x6C271C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00521F2E: ;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM8(esi + 0x15) = LO8(ebx);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM16(esi + 0x16) = 0xFFFF;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00521F50
 * Original: 0x00521F50 - 0x00521F6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521F58u); RECOMP_ABI_CALL(0x00521C30u, sub_00521C30); /* call 0x00521C30 */

loc_00521F58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00521F68; /* je: equal / zero */

loc_00521F5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521F65u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00521F65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00521F68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521F70
 * Original: 0x00521F70 - 0x00521F8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00521F78u); RECOMP_ABI_CALL(0x00521E30u, sub_00521E30); /* call 0x00521E30 */

loc_00521F78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00521F88; /* je: equal / zero */

loc_00521F7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00521F85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00521F85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00521F88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521F90
 * Original: 0x00521F90 - 0x00521FA3 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521F90(void)
{

loc_00521F90: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00521FA0u); RECOMP_ABI_CALL(0x005F2620u, sub_005F2620); /* call 0x005F2620 */

loc_00521FA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00521FB0
 * Original: 0x00521FB0 - 0x00522020 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00521FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00521FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6486B0);
    esi = ecx;
    MEM8(0x662E74) = 1;
    PUSH32(esp, 0x00521FC8u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00521FC8: ;
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x649EAC);
    PUSH32(esp, 0x84);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00521FDCu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00521FDC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00521FEC; /* je: equal / zero */

loc_00521FE3: ;
    ecx = eax;
    PUSH32(esp, 0x00521FEAu); RECOMP_ABI_CALL(0x005E95A0u, sub_005E95A0); /* call 0x005E95A0 */

loc_00521FEA: ;
    goto loc_00521FEE;

loc_00521FEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00521FEE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x649948);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00521FFFu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00521FFF: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x43FA0000);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 0x4424);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052201Eu); RECOMP_ABI_CALL(0x005E9E50u, sub_005E9E50); /* call 0x005E9E50 */

loc_0052201E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00522020
 * Original: 0x00522020 - 0x0052206B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522020: ;
    eax = MEM32(0x6C32D0);
    edx = MEM32(0x6C32CC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax * 4 + 0x66327C);
    eax = MEM32(edx * 4 + 0x663270);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x649EB8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00522052u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00522052: ;
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00522060u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00522060: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00522070
 * Original: 0x00522070 - 0x0052208C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522070: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052208A; /* je: equal / zero */

loc_0052207A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00522080u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522080: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0052208A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00522090
 * Original: 0x00522090 - 0x005220A0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522090: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x442C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052209Eu); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_0052209E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005220A0
 * Original: 0x005220A0 - 0x005225C0 (1312 bytes, 300 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005220A0(void)
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

loc_005220A0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x858548);
    ecx = esp + 0xA4;
    PUSH32(esp, 0x005220BDu); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_005220BD: ;
    eax = MEM32(ebx + 0x441C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(ebx + 0x14);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0xD0) = eax;
    PUSH32(esp, 0x005220E2u); RECOMP_ABI_CALL(0x005E95D0u, sub_005E95D0); /* call 0x005E95D0 */

loc_005220E2: ;
    _fa = (uint32_t)(MEM32(0x6C3308)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3308), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005225AD; /* jne: not equal / not zero */

loc_005220EF: ;
    ebp = MEM32(0x85A1CC);
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00522102; /* jns: not sign (positive) */

loc_005220FD: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00522102: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_005225AD; /* jge: greater or equal (signed >=) */

loc_0052210F: ;
    /* nop */

loc_00522110: ;
    ecx = MEM32(esp + 0xA0);
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xEC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xF0);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xF4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xF8);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0xFC);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x100);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x104);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x108);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x10C);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x110);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x114);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0xA0);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(esp + 0x98);
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = 0x3F800000;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x005221BAu); RECOMP_ABI_CALL(0x005E9960u, sub_005E9960); /* call 0x005E9960 */

loc_005221BA: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x005221C4u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005221C4: ;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005221CDu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_005221CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005221D4u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_005221D4: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 7);
    PUSH32(esp, 0x005221E0u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005221E0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x005221E7u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_005221E7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005221EEu); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_005221EE: ;
    ecx = MEM32(0x85854C);
    eax = MEM32(0x858548);
    edx = MEM32(0x858550);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x85855C);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(0x858558);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(0x6C2640);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ecx + 0x3C);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(0x858560);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x40) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0052259D; /* jle: less or equal (signed <=) */

loc_0052223E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00522240: ;
    eax = MEM32(ecx + esi + 0x1C8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052258B; /* je: equal / zero */

loc_0052224F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052258B; /* jne: not equal / not zero */

loc_00522257: ;
    fp_push(MEMF(ecx + esi + 0x258)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62F944)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62f944] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052258B; /* je: equal / zero */

loc_0052226F: ;
    fp_push(MEMF(ecx + esi + 0x220)); /* fld float */
    PUSH32(esp, 4);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 6);
    fp_push(MEMF(ecx + esi + 0x1B8)); /* fld float */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + esi + 0x1BC)); /* fld float */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + esi + 0x1C0)); /* fld float */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + esi + 0x254)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi + 0x1DC)); /* fmul dword ptr [ecx + esi + 0x1dc] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi + 0x1E0)); /* fmul dword ptr [ecx + esi + 0x1e0] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + esi + 0x1E4)); /* fmul dword ptr [ecx + esi + 0x1e4] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052230Cu); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_0052230C: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0052231Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052231E: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebp = ZX8(LO8(eax));
    ebp = ebp | 0xFFFFFF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00522339u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00522339: ;
    eax = ZX8(LO8(eax));
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp << 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00522350u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00522350: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    eax = MEM32(0x85B2AC);
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x85B2C0) = ebp;
    MEMF(esp + 0x88) = (float)fp_top(); /* fst */
    MEM32(0x85B2A4) = 0x3F800000;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x8C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = MEM32(esp + 0xF4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    MEMF(esp + 0x94) = (float)fp_top(); /* fst */
    edx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(eax + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    MEMF(esp + 0x98) = (float)fp_top(); /* fst */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xE8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x85B2A4);
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    eax = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEM32(0x85B2A4) = 0;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEM32(0x85B2B0) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x85B2A4);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x100);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00522581u); RECOMP_ABI_CALL(0x005FB150u, sub_005FB150); /* call 0x005FB150 */

loc_00522581: ;
    ecx = MEM32(0x6C2640);
    ebp = MEM32(esp + 0x28);

loc_0052258B: ;
    eax = MEM32(ecx + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00522240; /* jl: less (signed <) */

loc_0052259D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    MEM32(esp + 0x28) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00522110; /* jl: less (signed <) */

loc_005225AD: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x005225B5u); RECOMP_ABI_CALL(0x005E9640u, sub_005E9640); /* call 0x005E9640 */

loc_005225B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005225C0
 * Original: 0x005225C0 - 0x00522856 (662 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005225C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005225C0: ;
    eax = MEM32(0x6C3308);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00522844; /* jne: not equal / not zero */

loc_005225D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005225DEu); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_005225DE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x005225E5u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_005225E5: ;
    SET_LO8(eax, MEM8(0x85843F));
    PUSH32(esp, 0);
    MEM8(edi + 0x442C) = LO8(eax);
    PUSH32(esp, 0x005225F7u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_005225F7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x858548);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00522608u); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_00522608: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x00522610u); RECOMP_ABI_CALL(0x005E95D0u, sub_005E95D0); /* call 0x005E95D0 */

loc_00522610: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00522617u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00522617: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0052261Eu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0052261E: ;
    ecx = MEM32(0x858430);
    PUSH32(esp, 3);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0x0052262Fu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0052262F: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052263Bu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_0052263B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00522642u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00522642: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00522649u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_00522649: ;
    esi = MEM32(0x85A1CC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0x80000001u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0052265F; /* jns: not sign (positive) */

loc_0052265A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052265F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_005227EE; /* jge: greater or equal (signed >=) */

loc_0052266C: ;
    /* nop */

loc_00522670: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x88);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x8C);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x90);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x94);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x98);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x9C);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0xA0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0xA4);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0xA8);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0xAC);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0xB4);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x00522717u); RECOMP_ABI_CALL(0x005E9960u, sub_005E9960); /* call 0x005E9960 */

loc_00522717: ;
    ebx = MEM32(0x8583A0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x00522726u); RECOMP_ABI_CALL(0x005FA700u, sub_005FA700); /* call 0x005FA700 */

loc_00522726: ;
    eax = MEM32(edi + 0x4428);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005227DE; /* jle: less or equal (signed <=) */

loc_00522736: ;
    esi = edi + 0x5C;
    /* nop */

loc_00522740: ;
    edx = MEM32(esi + -16);
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00522751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052274Eu); } /* indirect call */
    }

loc_00522751: ;
    ecx = MEM32(esi);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052275Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052275Cu); } /* indirect call */
    }

loc_0052275F: ;
    ecx = MEM32(esi);
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0052276Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052276Au); } /* indirect call */
    }

loc_0052276D: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x00522797u); RECOMP_ABI_CALL(0x00471110u, sub_00471110); /* call 0x00471110 */

loc_00522797: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005227C8; /* je: equal / zero */

loc_0052279B: ;
    edx = esi + -64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x005227A4u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005227A4: ;
    eax = MEM32(esi + -12);
    ecx = MEM32(esi + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_005227BF; /* je: equal / zero */

loc_005227B3: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005227BDu); RECOMP_ABI_CALL(0x005F2620u, sub_005F2620); /* call 0x005F2620 */

loc_005227BD: ;
    goto loc_005227C8;

loc_005227BF: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005227C8u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_005227C8: ;
    eax = MEM32(edi + 0x4428);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00522740; /* jl: less (signed <) */

loc_005227DA: ;
    esi = MEM32(esp + 0x10);

loc_005227DE: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00522670; /* jl: less (signed <) */

loc_005227EE: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, 0x005227F6u); RECOMP_ABI_CALL(0x005E9640u, sub_005E9640); /* call 0x005E9640 */

loc_005227F6: ;
    ecx = MEM32(0x8583A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00522803u); RECOMP_ABI_CALL(0x005FA700u, sub_005FA700); /* call 0x005FA700 */

loc_00522803: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x442C));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00522811u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00522811: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00522818u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00522818: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0052281Fu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_0052281F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00522826u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00522826: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0052282Du); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_0052282D: ;
    PUSH32(esp, 0x679684);
    PUSH32(esp, 0x00522837u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00522837: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00522841u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00522841: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00522844: ;
    MEM32(edi + 0x4428) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00522860
 * Original: 0x00522860 - 0x0052288C (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522860: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052287C; /* je: equal / zero */

loc_00522868: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00522876u); RECOMP_ABI_CALL(0x005EDCA0u, sub_005EDCA0); /* call 0x005EDCA0 */

loc_00522876: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0052287C: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00522889u); RECOMP_ABI_CALL(0x005E99E0u, sub_005E99E0); /* call 0x005E99E0 */

loc_00522889: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00522890
 * Original: 0x00522890 - 0x0052295A (202 bytes, 59 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522890(void)
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

loc_00522890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x441C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00522956; /* je: equal / zero */

loc_005228A1: ;
    _fa = (uint32_t)(MEM32(esi + 0x4428)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4428), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00522956; /* jge: greater or equal (signed >=) */

loc_005228B1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005228BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005228BAu); } /* indirect call */
    }

loc_005228BD: ;
    ecx = MEM32(esi + 0x441C);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    PUSH32(esp, edx);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esi + 0x4428);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
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
    MEMF(ecx + esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x4428);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    ecx = eax + esi + 0x1C;
    PUSH32(esp, 0x0052290Fu); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_0052290F: ;
    ecx = MEM32(esi + 0x4428);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    MEM32(ecx + esi + 0x4C) = edx;
    eax = MEM32(esi + 0x4428);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    MEM32(eax + esi + 0x50) = ecx;
    edx = MEM32(esi + 0x4428);
    eax = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    MEM32(edx + esi + 0x58) = eax;
    ecx = MEM32(esi + 0x4428);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    MEM32(ecx + esi + 0x5C) = edi;
    MEM32(esi + 0x4428) = MEM32(esi + 0x4428) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x4428)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_00522956: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00522960
 * Original: 0x00522960 - 0x005229AC (76 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00522968u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00522968: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x441C) = eax;
    MEM32(esi + 0x4428) = eax;
    MEM8(esi + 0x442C) = LO8(eax);
    MEM8(esi + 0x442D) = LO8(eax);
    MEM32(esi) = 0x649ECC;
    MEM32(esi + 0x4420) = 0x3F000000;
    MEM32(esi + 0x4424) = (uint32_t)mc2hook_reflection_res();
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005229B0
 * Original: 0x005229B0 - 0x005229B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005229B0(void)
{

loc_005229B0: ;
    eax = 0x649EEC;
    esp += 4; return; /* ret */

}

/**
 * sub_005229C0
 * Original: 0x005229C0 - 0x005229C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005229C0(void)
{

loc_005229C0: ;
    eax = 0x649EF8;
    esp += 4; return; /* ret */

}

/**
 * sub_005229D0
 * Original: 0x005229D0 - 0x00522A21 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005229D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005229D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005229E9; /* je: equal / zero */

loc_005229DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005229E3u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_005229E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;

loc_005229E9: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00522A04; /* je: equal / zero */

loc_005229F1: ;
    ecx = edi;
    PUSH32(esp, 0x005229F8u); RECOMP_ABI_CALL(0x005E9D80u, sub_005E9D80); /* call 0x005E9D80 */

loc_005229F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005229FEu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005229FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = ebx;

loc_00522A04: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00522A18; /* je: equal / zero */

loc_00522A0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00522A12u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522A12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebx;

loc_00522A18: ;
    MEM32(esi + 0x441C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00522A30
 * Original: 0x00522A30 - 0x00522AAB (123 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522A30: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00522A49; /* je: equal / zero */

loc_00522A3C: ;
    esi = ZX16(MEM16(eax + 8));
    edi = ZX16(MEM16(eax + 0xA));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    goto loc_00522A4E;

loc_00522A49: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_00522A4E: ;
    PUSH32(esp, 0x00522A53u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00522A53: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00522A6Au); RECOMP_ABI_CALL(0x00457640u, sub_00457640); /* call 0x00457640 */

loc_00522A6A: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x00522A72u); RECOMP_ABI_CALL(0x005E9960u, sub_005E9960); /* call 0x005E9960 */

loc_00522A72: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00522A79u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00522A79: ;
    eax = MEM32(ebx + 0x4424);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00522A9Bu); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_00522A9B: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00522AA2u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00522AA2: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00522AB0
 * Original: 0x00522AB0 - 0x00522ACD (29 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00522AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x649ECC;
    PUSH32(esp, 0x00522ABEu); RECOMP_ABI_CALL(0x00522070u, sub_00522070); /* call 0x00522070 */

loc_00522ABE: ;
    ecx = esi;
    PUSH32(esp, 0x00522AC5u); RECOMP_ABI_CALL(0x005229D0u, sub_005229D0); /* call 0x005229D0 */

loc_00522AC5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00522AD0
 * Original: 0x00522AD0 - 0x00522B6F (159 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00522AD0: ;
    SET_LO8(eax, MEM8(0x85843F));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0);
    MEM8(edi + 0x442C) = LO8(eax);
    PUSH32(esp, 0x00522AE6u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00522AE6: ;
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00522AF1u); RECOMP_ABI_CALL(0x005E95D0u, sub_005E95D0); /* call 0x005E95D0 */

loc_00522AF1: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00522AFB; /* je: equal / zero */

loc_00522AF8: ;
    PUSH32(esp, eax);
    goto loc_00522AFD;

loc_00522AFB: ;
    PUSH32(esp, 0);

loc_00522AFD: ;
    PUSH32(esp, 0x00522B02u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00522B02: ;
    SET_LO8(eax, mc2hook_reflection_no_skip() ? 1 : MEM8(0x662E74));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00522B34; /* je: equal / zero */

loc_00522B0E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00522B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x858548);
    ecx = edi;
    PUSH32(esp, 0x00522B1Du); RECOMP_ABI_CALL(0x00522A30u, sub_00522A30); /* call 0x00522A30 */

loc_00522B1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00522B10; /* jl: less (signed <) */

loc_00522B23: ;
    ecx = MEM32(edi + 0x14);
    POP32(esp, edi);
    MEM8(0x662E74) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E9640(); return; /* tail jmp 0x005E9640 */

loc_00522B34: ;
    esi = MEM32(0x85A1CC);
    esi = esi & 0x80000001u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00522B47; /* jns: not sign (positive) */

loc_00522B42: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00522B47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00522B65; /* jge: greater or equal (signed >=) */

loc_00522B4C: ;
    /* nop */

loc_00522B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x858548);
    ecx = edi;
    PUSH32(esp, 0x00522B5Du); RECOMP_ABI_CALL(0x00522A30u, sub_00522A30); /* call 0x00522A30 */

loc_00522B5D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00522B50; /* jl: less (signed <) */

loc_00522B65: ;
    ecx = MEM32(edi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E9640(); return; /* tail jmp 0x005E9640 */

}

/**
 * sub_00522B70
 * Original: 0x00522B70 - 0x00522B8E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00522B78u); RECOMP_ABI_CALL(0x00522AB0u, sub_00522AB0); /* call 0x00522AB0 */

loc_00522B78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00522B88; /* je: equal / zero */

loc_00522B7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00522B85u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00522B85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00522B88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00522B90
 * Original: 0x00522B90 - 0x00522C0D (125 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522B90: ;
    eax = MEM32(0x6C2724);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00522BAF; /* jne: not equal / not zero */

loc_00522B99: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x649948);
    PUSH32(esp, 0x00522BA7u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00522BA7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2724) = eax;

loc_00522BAF: ;
    eax = MEM32(0x6C272C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00522BCE; /* jne: not equal / not zero */

loc_00522BB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x649948);
    PUSH32(esp, 0x00522BC6u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00522BC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C272C) = eax;

loc_00522BCE: ;
    eax = MEM32(0x6C2728);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00522BED; /* jne: not equal / not zero */

loc_00522BD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x643438);
    PUSH32(esp, 0x00522BE5u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00522BE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2728) = eax;

loc_00522BED: ;
    eax = MEM32(0x6C2730);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00522C0C; /* jne: not equal / not zero */

loc_00522BF6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x649928);
    PUSH32(esp, 0x00522C04u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00522C04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2730) = eax;

loc_00522C0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00522C10
 * Original: 0x00522C10 - 0x00522C5E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00522C10: ;
    eax = MEM32(0x6C2730);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00522C1Cu); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522C1C: ;
    ecx = MEM32(0x6C2728);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(0x6C2730) = esi;
    PUSH32(esp, 0x00522C30u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522C30: ;
    edx = MEM32(0x6C272C);
    PUSH32(esp, edx);
    MEM32(0x6C2728) = esi;
    PUSH32(esp, 0x00522C42u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522C42: ;
    eax = MEM32(0x6C2724);
    PUSH32(esp, eax);
    MEM32(0x6C272C) = esi;
    PUSH32(esp, 0x00522C53u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00522C53: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2724) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00522C60
 * Original: 0x00522C60 - 0x00522D06 (166 bytes, 60 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00522C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00522C60: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x18)); /* fmul dword ptr [edx + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x10)); /* fmul dword ptr [edx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x3C)); /* fmul dword ptr [edx + 0x3c] */
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x3C)); /* fmul dword ptr [edx + 0x3c] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x38)); /* fmul dword ptr [edx + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x34)); /* fmul dword ptr [edx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x3C)); /* fmul dword ptr [edx + 0x3c] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x38)); /* fmul dword ptr [edx + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x34)); /* fmul dword ptr [edx + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00522D10
 * Original: 0x00522D10 - 0x00522F1B (523 bytes, 144 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522D10(void)
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

loc_00522D10: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00522D1Fu); RECOMP_ABI_CALL(0x005EDA70u, sub_005EDA70); /* call 0x005EDA70 */

loc_00522D1F: ;
    eax = MEM32(esp + 0x80);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x10) = 3;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00522D75; /* jnp: not parity */

loc_00522D67: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00522D7B;

loc_00522D75: ;
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00522D7B: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    edi = MEM32(esi + 0x1C);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    PUSH32(esp, 0x00522DCAu); RECOMP_ABI_CALL(0x0061A620u, sub_0061A620); /* call 0x0061A620 */

loc_00522DCA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FBA8)); /* fmul dword ptr [0x62fba8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x65E384)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D3A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d3a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00522E2C; /* jp: parity */

loc_00522DEB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DF78)); /* fmul dword ptr [0x63df78] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00522E18; /* jnp: not parity */

loc_00522E10: ;
    MEM32(esp + 8) = 0x3F800000;

loc_00522E18: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(edi + 0x44)); /* fld float */
    PUSH32(esp, 0x00522E24u); RECOMP_ABI_CALL(0x0061A8C0u, sub_0061A8C0); /* call 0x0061A8C0 */

loc_00522E24: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */

loc_00522E2C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x20)); /* fmul dword ptr [edi + 0x20] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x24)); /* fmul dword ptr [edi + 0x24] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x28)); /* fmul dword ptr [edi + 0x28] */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x84)); /* fmul dword ptr [esp + 0x84] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x84)); /* fmul dword ptr [esp + 0x84] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x84)); /* fmul dword ptr [esp + 0x84] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x84)); /* fmul dword ptr [esp + 0x84] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00522E9A; /* jne: not equal / not zero */

loc_00522E92: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_00522E9A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00522EB3; /* jne: not equal / not zero */

loc_00522EAB: ;
    MEM32(esp + 0x18) = 0x3F800000;

loc_00522EB3: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00522ECC; /* jne: not equal / not zero */

loc_00522EC4: ;
    MEM32(esp + 0x1C) = 0x3F800000;

loc_00522ECC: ;
    SET_LO8(eax, MEM8(esi + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00522EFA; /* je: equal / zero */

loc_00522ED3: ;
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00522EFA; /* jne: not equal / not zero */

loc_00522EDA: ;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x14) = 0;

loc_00522EFA: ;
    esi = MEM32(esp + 0x7C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00522F09u); RECOMP_ABI_CALL(0x005EE940u, sub_005EE940); /* call 0x005EE940 */

loc_00522F09: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00522F11u); RECOMP_ABI_CALL(0x005EE020u, sub_005EE020); /* call 0x005EE020 */

loc_00522F11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
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
 * sub_00522F20
 * Original: 0x00522F20 - 0x005230D1 (433 bytes, 110 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522F20(void)
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

loc_00522F20: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x50);
    eax = ecx + 0x50;
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x88);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x8C);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    edx = MEM32(ecx + 0x90);
    ecx = MEM32(ecx + 0x94);
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x1C);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEM32(edx) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(edx + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(edx + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    MEM32(edx + 0xC) = ecx;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x7C);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C2640);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00523086u); RECOMP_ABI_CALL(0x0051E1D0u, sub_0051E1D0); /* call 0x0051E1D0 */

loc_00523086: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005230E0
 * Original: 0x005230E0 - 0x00523200 (288 bytes, 57 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005230E0(void)
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

loc_005230E0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(ecx + 0x1C);
    MEM32(esp + 0x38) = edx;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x98;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0x3F800000;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0x3F800000;
    ecx = MEM32(eax);
    MEM32(esp) = ecx;
    edx = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    eax = MEM32(esp + 0x78);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C2640);
    PUSH32(esp, 1);
    edx = esp + 0x5C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x94)); /* fmul dword ptr [esp + 0x94] */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005231FAu); RECOMP_ABI_CALL(0x0051CEA0u, sub_0051CEA0); /* call 0x0051CEA0 */

loc_005231FA: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00523200
 * Original: 0x00523200 - 0x00523288 (136 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00523200: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0052320Du); RECOMP_ABI_CALL(0x005EDA70u, sub_005EDA70); /* call 0x005EDA70 */

loc_0052320D: ;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x28) = 0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00523267: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00523272u); RECOMP_ABI_CALL(0x005EE940u, sub_005EE940); /* call 0x005EE940 */

loc_00523272: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052327Au); RECOMP_ABI_CALL(0x005EE020u, sub_005EE020); /* call 0x005EE020 */

loc_0052327A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523267; /* jl: less (signed <) */

loc_00523283: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00523290
 * Original: 0x00523290 - 0x005232E6 (86 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00523290: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    SET_LO16(eax, MEM16(esp + 0x14));
    PUSH32(esp, edx);
    MEM16(ecx + 0x20) = LO16(eax);
    PUSH32(esp, 0x005232B2u); RECOMP_ABI_CALL(0x00522C60u, sub_00522C60); /* call 0x00522C60 */

loc_005232B2: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x269EC3)) >> 32) & 1);
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx;
    POP32(esp, esi);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(edx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x23) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005232F0
 * Original: 0x005232F0 - 0x0052335E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005232F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005232F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4838);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523309; /* je: equal / zero */

loc_00523300: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523306u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00523306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00523309: ;
    MEM32(esi + 0x4838) = ebx;
    MEM32(esi + 0x4834) = ebx;
    MEM32(esi + 0x483C) = 0x41200000;
    MEM8(esi + 7) = LO8(ebx);
    MEM32(esi + 0x4840) = ebx;
    MEM8(esi + 0xC) = LO8(ebx);
    _fa = (uint32_t)(MEM32(0x6C3304)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6C3304), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052334D; /* jle: less or equal (signed <=) */

loc_00523334: ;
    _fa = (uint32_t)(MEM8(0x6C3421)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6C3421), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052334D; /* jne: not equal / not zero */

loc_0052333C: ;
    MEM32(esi + 0x14) = 0x43FA0000;
    MEM32(esi + 0x18) = 0x44610000;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0052334D: ;
    MEM32(esi + 0x14) = 0x44228000;
    MEM32(esi + 0x18) = 0x44898000;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00523360
 * Original: 0x00523360 - 0x0052344B (235 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523360(void)
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

loc_00523360: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(0x662E64);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = ecx;
    fp_push(MEMF(ebp + ebx * 4 + 0x483C)); /* fld float */
    MEM32(esp + 8) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00523443; /* jnp: not parity */

loc_00523396: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    MEMF(ebp + ebx * 4 + 0x483C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x662E64)); /* fdiv dword ptr [0x662e64] */
    PUSH32(esp, 0x005233B4u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005233B4: ;
    ecx = MEM32(ebp + ebx * 4 + 0x4838);
    esi = eax;
    PUSH32(esp, ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005233C4u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005233C4: ;
    PUSH32(esp, 0xA0);
    edx = esi + esi;
    PUSH32(esp, 0x649F04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005233D7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005233D7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + ebx * 4 + 0x4838) = eax;
    edi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0052343A; /* jle: less or equal (signed <=) */

loc_005233E7: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = esi + -1;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax;
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x14) = esi;

loc_00523405: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x18) - fp_top()); /* fsubr dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x0052341Eu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052341E: ;
    MEM8(edi) = LO8(eax);
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00523405; /* jne: not equal / not zero */

loc_00523434: ;
    ebx = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */

loc_0052343A: ;
    POP32(esp, edi);
    MEM32(ebp + ebx * 4 + 0x4834) = esi;
    POP32(esp, esi);

loc_00523443: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00523450
 * Original: 0x00523450 - 0x005234D3 (131 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00523450: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005234D1; /* je: equal / zero */

loc_0052345A: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x41C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005234AC; /* jle: less or equal (signed <=) */

loc_0052346C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00523470: ;
    ecx = MEM32(edi + 0x30);
    eax = MEM32(esi + ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523484; /* je: equal / zero */

loc_0052347B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523481u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00523481: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00523484: ;
    edx = MEM32(edi + 0x30);
    eax = MEM32(esi + edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523498; /* je: equal / zero */

loc_0052348F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523495u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00523495: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00523498: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x41C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523470; /* jl: less (signed <) */

loc_005234AB: ;
    POP32(esp, esi);

loc_005234AC: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005234B5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005234B5: ;
    edx = MEM32(edi + 0x482C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005234C1u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005234C1: ;
    eax = MEM32(edi + 0x4830);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005234CDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005234CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_005234D1: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_005234E0
 * Original: 0x005234E0 - 0x00523519 (57 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005234E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005234E0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00523512; /* jl: less (signed <) */

loc_005234E9: ;
    esi = MEM32(0x6C263C);
    eax = MEM32(esi + 0x420);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00523512; /* jg: greater (signed >) */

loc_005234F9: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523512; /* jl: less (signed <) */

loc_00523501: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x424) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00523512; /* jg: greater (signed >) */

loc_00523509: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00523512: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00523520
 * Original: 0x00523520 - 0x00523627 (263 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00523520: ;
    PUSH32(esp, ebx);
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + ecx * 4 + 0x3C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0052355C; /* jle: less or equal (signed <=) */

loc_00523536: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x320);
    SET_LO8(edx, ~LO8(edx));
    edi = esi + eax + 0x40;

loc_00523548: ;
    esi = MEM32(edi);
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + ecx * 4 + 0x3C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523548; /* jl: less (signed <) */

loc_0052355C: ;
    edx = MEM32(eax + ecx * 4 + 0x360);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(eax + ecx * 4 + 0x3C) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00523599; /* jle: less or equal (signed <=) */

loc_0052356D: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xAF0);
    SET_LO8(edx, ~LO8(edx));
    edi = esi + eax + 0x364;

loc_00523582: ;
    esi = MEM32(edi);
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + ecx * 4 + 0x360);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523582; /* jl: less (signed <) */

loc_00523599: ;
    edx = MEM32(eax + ecx * 4 + 0xE54);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(eax + ecx * 4 + 0x360) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_005235D9; /* jle: less or equal (signed <=) */

loc_005235AD: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2EE0);
    SET_LO8(edx, ~LO8(edx));
    edi = esi + eax + 0xE58;

loc_005235C2: ;
    esi = MEM32(edi);
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + ecx * 4 + 0xE54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005235C2; /* jl: less (signed <) */

loc_005235D9: ;
    edx = MEM32(eax + ecx * 4 + 0x3D38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(eax + ecx * 4 + 0xE54) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00523619; /* jle: less or equal (signed <=) */

loc_005235ED: ;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    esi = ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xAF0);
    SET_LO8(edx, ~LO8(edx));
    edi = esi + eax + 0x3D3C;

loc_00523602: ;
    esi = MEM32(edi);
    MEM8(esi + 4) = MEM8(esi + 4) & LO8(edx);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + ecx * 4 + 0x3D38);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523602; /* jl: less (signed <) */

loc_00523619: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + ecx * 4 + 0x3D38) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00523630
 * Original: 0x00523630 - 0x0052377E (334 bytes, 109 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00523630: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x6C263C);
    eax = MEM32(ecx + 0x420);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x18));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00523777; /* js: sign (negative) */

loc_00523653: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x41C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00523777; /* jge: greater or equal (signed >=) */

loc_0052365F: ;
    PUSH32(esp, ebx);
    ebx = eax + eax * 2;
    eax = MEM32(edi + 0x30);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + ebx + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_005236EC; /* jle: less or equal (signed <=) */

loc_0052368A: ;
    eax = 1;
    ecx = esi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = eax;
    goto loc_005236A0;

loc_00523699: ;
    eax = MEM32(esp + 0x24);
    /* nop */

loc_005236A0: ;
    edx = MEM32(esp + 0x10);
    ebp = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(MEM8(ebp + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 4), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005236DB; /* jne: not equal / not zero */

loc_005236AC: ;
    ecx = ebp;
    PUSH32(esp, 0x005236B3u); RECOMP_ABI_CALL(0x00517290u, sub_00517290); /* call 0x00517290 */

loc_005236B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005236DB; /* je: equal / zero */

loc_005236B7: ;
    edx = MEM32(edi + esi * 4 + 0x3C);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4 + 0x40) = ebp;
    MEM32(edi + esi * 4 + 0x3C) = MEM32(edi + esi * 4 + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(edi + esi * 4 + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + 4));
    SET_LO8(edx, 1);
    ecx = esi;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + 4) = LO8(eax);

loc_005236DB: ;
    ebp = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00523699; /* jl: less (signed <) */

loc_005236EC: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax + ebx + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00523774; /* jle: less or equal (signed <=) */

loc_00523707: ;
    eax = 1;
    ecx = esi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = eax;
    goto loc_00523720;

loc_00523716: ;
    eax = MEM32(esp + 0x24);
    /* nop */

loc_00523720: ;
    edx = MEM32(esp + 0x20);
    ebp = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(MEM8(ebp + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 4), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0052376B; /* jne: not equal / not zero */

loc_0052372C: ;
    ecx = ebp;
    PUSH32(esp, 0x00523733u); RECOMP_ABI_CALL(0x00517290u, sub_00517290); /* call 0x00517290 */

loc_00523733: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052376B; /* je: equal / zero */

loc_0052373A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052376B; /* je: equal / zero */

loc_0052373E: ;
    edx = MEM32(edi + esi * 4 + 0xE54);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + eax * 4 + 0xE58) = ebp;
    MEM32(edi + esi * 4 + 0xE54) = MEM32(edi + esi * 4 + 0xE54) + 1;
    _fa = (uint32_t)(MEM32(edi + esi * 4 + 0xE54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + 4));
    SET_LO8(edx, 1);
    ecx = esi;
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + 4) = LO8(eax);

loc_0052376B: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523716; /* jl: less (signed <) */

loc_00523774: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00523777: ;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00523780
 * Original: 0x00523780 - 0x005237FB (123 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523780(void)
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

loc_00523780: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(edi) = 0;
    PUSH32(esp, 0x0052379Fu); RECOMP_ABI_CALL(0x005234E0u, sub_005234E0); /* call 0x005234E0 */

loc_0052379F: ;
    edx = MEM32(0x6C263C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x41C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005237B6; /* jge: greater or equal (signed >=) */

loc_005237AD: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005237C1; /* jne: not equal / not zero */

loc_005237B6: ;
    fp_push(MEMF(0x649F10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005237C1: ;
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005237EF; /* jne: not equal / not zero */

loc_005237C8: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005237DC; /* je: equal / zero */

loc_005237CF: ;
    /* nop */

loc_005237D0: ;
    eax = ZX8(MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_005237D0; /* jne: not equal / not zero */

loc_005237DC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005237E2; /* je: equal / zero */

loc_005237E1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005237E2: ;
    fp_push(MEMF(0x649F0C)); /* fld float */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_005237EF: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00523800
 * Original: 0x00523800 - 0x00523837 (55 bytes, 13 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00523800(void)
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

loc_00523800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x20) = 0x41880000;
    MEM32(ecx + 0x24) = 0x41A00000;
    if (CMP_LE(_fas, _fbs)) goto loc_00523834; /* jle: less or equal (signed <=) */

loc_00523816: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D8AC) / fp_top()); /* fdivr dword ptr [0x62d8ac] */
    fp_push(MEMF(0x6382D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D420)); /* fmul dword ptr [0x63d420] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_00523834: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00523840
 * Original: 0x00523840 - 0x00523906 (198 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00523840: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x1E);
    MEM32(esi) = edx;
    MEM8(esi + 4) = LO8(edx);
    MEM8(esi + 5) = 1;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x4830) = edx;
    MEM32(esi + 0x482C) = edx;
    MEM32(esi + 8) = 0x40A00000;
    MEM32(esi + 0x14) = 0x44228000;
    MEM32(esi + 0x18) = 0x44898000;
    PUSH32(esp, 0x0052387Au); RECOMP_ABI_CALL(0x00523800u, sub_00523800); /* call 0x00523800 */

loc_0052387A: ;
    MEM32(esi + 0x2C) = 0x41200000;
    MEM32(esi + 0x28) = 0x42200000;
    MEM32(esi + 0x3C) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x40;
    ecx = 0xC8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xE54) = edx;
    edi = esi + 0xE58;
    ecx = 0xBB8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x360) = edx;
    edi = esi + 0x364;
    ecx = 0x32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x3D38) = edx;
    edi = esi + 0x3D3C;
    ecx = 0x2BC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(esi + 0xC) = 1;
    PUSH32(esp, 0x44480000);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x4838) = edx;
    MEM32(esi + 0x10) = 0x44480000;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x483C) = 0x41200000;
    MEM32(esi + 0x4840) = edx;
    PUSH32(esp, 0x00523901u); RECOMP_ABI_CALL(0x00523360u, sub_00523360); /* call 0x00523360 */

loc_00523901: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00523910
 * Original: 0x00523910 - 0x00523941 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00523910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00523918u); RECOMP_ABI_CALL(0x00523450u, sub_00523450); /* call 0x00523450 */

loc_00523918: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523930; /* jne: not equal / not zero */

loc_00523921: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523930; /* je: equal / zero */

loc_00523927: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052392Du); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052392D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00523930: ;
    eax = MEM32(esi + 0x4838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052393Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052393C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00523950
 * Original: 0x00523950 - 0x00523A3E (238 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523950(void)
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

loc_00523950: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x2C);
    fp_push(MEMF(0x662E64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649E6C)); /* fmul dword ptr [0x649e6c] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + edx * 4 + 0x4834);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebp + edx * 4 + 0x4838);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00523A36; /* jle: less or equal (signed <=) */

loc_00523989: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00523990;

    /* nop */

loc_00523990: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    esi = (uint32_t)(int32_t)SMEM8(ebx + 1);
    edi = MEM32(esp + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00523A1C; /* jg: greater (signed >) */

loc_005239A7: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ecx + edx;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_005239C0: ;
    ecx = MEM32(0x6C263C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005239D2u); RECOMP_ABI_CALL(0x00518FE0u, sub_00518FE0); /* call 0x00518FE0 */

loc_005239D2: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8583A0);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x005239FAu); RECOMP_ABI_CALL(0x00520FF0u, sub_00520FF0); /* call 0x00520FF0 */

loc_005239FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523A0C; /* jne: not equal / not zero */

loc_005239FE: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00523A0Cu); RECOMP_ABI_CALL(0x00523630u, sub_00523630); /* call 0x00523630 */

loc_00523A0C: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_005239C0; /* jne: not equal / not zero */

loc_00523A18: ;
    edx = MEM32(esp + 0x3C);

loc_00523A1C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + edx * 4 + 0x4834);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00523990; /* jl: less (signed <) */

loc_00523A34: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00523A36: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00523A40
 * Original: 0x00523A40 - 0x00523EC8 (1160 bytes, 351 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00523A40: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C263C);
    edx = MEM32(eax + 0x208);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00523AC3; /* jle: less or equal (signed <=) */

loc_00523A62: ;
    eax = MEM32(eax + 0x20C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00523A70;

    /* nop */

loc_00523A70: ;
    _fb = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00523A70; /* jne: not equal / not zero */

loc_00523A7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523A9F; /* je: equal / zero */

loc_00523A7F: ;
    PUSH32(esp, 0x276);
    eax = ecx * 4;
    PUSH32(esp, 0x649F04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523A96u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523A96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x482C) = eax;

loc_00523A9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523AC3; /* je: equal / zero */

loc_00523AA3: ;
    PUSH32(esp, 0x278);
    ecx = esi * 4;
    PUSH32(esp, 0x649F04);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00523ABAu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523ABA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x4830) = eax;

loc_00523AC3: ;
    edx = MEM32(0x6C263C);
    eax = MEM32(edx + 0x41C);
    PUSH32(esp, 0x27B);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x649F04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523AE5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523AE5: ;
    PUSH32(esp, 0x27D);
    PUSH32(esp, 0x649F04);
    PUSH32(esp, 0x36B00);
    MEM32(ebp + 0x30) = eax;
    PUSH32(esp, 0x00523AFCu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523AFC: ;
    ecx = MEM32(0x6C263C);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, 0x27F);
    edx = eax * 4;
    PUSH32(esp, 0x649F04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00523B23u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523B23: ;
    esi = eax;
    eax = MEM32(0x6C263C);
    edx = MEM32(eax + 0x41C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00523B53; /* jle: less or equal (signed <=) */

loc_00523B39: ;
    /* nop */

loc_00523B40: ;
    MEM32(esi + ecx * 4) = edi;
    eax = MEM32(0x6C263C);
    edx = MEM32(eax + 0x41C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523B40; /* jl: less (signed <) */

loc_00523B53: ;
    _fa = (uint32_t)(MEM32(eax + 0x208)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x208), edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x24) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00523C5D; /* jle: less or equal (signed <=) */

loc_00523B6B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = edx;

loc_00523B71: ;
    ecx = MEM32(eax + 0x20C);
    ebx = MEM32(edx + ecx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00523C3F; /* jle: less or equal (signed <=) */

loc_00523B89: ;
    /* nop */

loc_00523B90: ;
    eax = MEM32(edx + ecx + 8);
    ebx = MEM32(eax + edi * 4);
    ecx = ZX8(MEM8(ebx + 0x28));
    eax = ZX8(MEM8(ebx + 0x29));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00523C11; /* jg: greater (signed >) */

loc_00523BA7: ;
    eax = ZX8(MEM8(ebx + 0x2B));
    goto loc_00523BB0;

    /* nop */

loc_00523BB0: ;
    edi = ZX8(MEM8(ebx + 0x2A));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00523BFC; /* jg: greater (signed >) */

loc_00523BB8: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    ebp = edx + eax * 8;

loc_00523BC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x00523BCEu); RECOMP_ABI_CALL(0x005234E0u, sub_005234E0); /* call 0x005234E0 */

loc_00523BCE: ;
    ecx = MEM32(esi + eax * 4);
    edx = MEM32(esp + 0x10);
    MEM32(esi + eax * 4) = ebp;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + eax * 4);
    MEM32(edx) = ecx;
    eax = MEM32(esi + eax * 4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    eax = ZX8(MEM8(ebx + 0x2B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00523BC3; /* jle: less or equal (signed <=) */

loc_00523BF8: ;
    edx = MEM32(esp + 0x2C);

loc_00523BFC: ;
    edi = ZX8(MEM8(ebx + 0x29));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00523BB0; /* jle: less or equal (signed <=) */

loc_00523C09: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x18);

loc_00523C11: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x482C);
    MEM32(ecx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x20C);
    ebx = MEM32(edx + ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00523B90; /* jl: less (signed <) */

loc_00523C3F: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(eax + 0x208);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00523B71; /* jl: less (signed <) */

loc_00523C5D: ;
    ecx = MEM32(eax + 0x41C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00523CF1; /* jle: less or equal (signed <=) */

loc_00523C71: ;
    MEM32(esp + 0x24) = ebx;

loc_00523C75: ;
    ecx = MEM32(esi + ebx * 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523C87; /* je: equal / zero */

loc_00523C7E: ;
    edi = edi;

loc_00523C80: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523C80; /* jne: not equal / not zero */

loc_00523C87: ;
    edi = MEM32(ebp + 0x30);
    ebp = MEM32(esp + 0x24);
    edx = SX16(LO16(eax));
    PUSH32(esp, 0x2B2);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x649F04);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0x00523CA9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523CA9: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + ebx * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523CD2; /* je: equal / zero */

loc_00523CB6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00523CC0;

    /* nop */

loc_00523CC0: ;
    ebp = MEM32(eax + 4);
    edx = MEM32(edi + 4);
    MEM32(ecx + edx) = ebp;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523CC0; /* jne: not equal / not zero */

loc_00523CD2: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x41C);
    ebp = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00523C75; /* jl: less (signed <) */

loc_00523CF1: ;
    edi = MEM32(eax + 0x41C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00523D13; /* jle: less or equal (signed <=) */

loc_00523CFF: ;
    /* nop */

loc_00523D00: ;
    MEM32(esi + ecx * 4) = edx;
    eax = MEM32(0x6C263C);
    edi = MEM32(eax + 0x41C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523D00; /* jl: less (signed <) */

loc_00523D13: ;
    _fa = (uint32_t)(MEM32(eax + 0x208)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x208), edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00523E1D; /* jle: less or equal (signed <=) */

loc_00523D27: ;
    MEM32(esp + 0x2C) = edx;
    goto loc_00523D30;

    /* nop */

loc_00523D30: ;
    ecx = MEM32(eax + 0x20C);
    ebx = MEM32(edx + ecx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00523DFF; /* jle: less or equal (signed <=) */

loc_00523D48: ;
    goto loc_00523D50;

    /* nop */

loc_00523D50: ;
    eax = MEM32(edx + ecx + 0x10);
    ebx = MEM32(eax + edi * 4);
    ecx = ZX8(MEM8(ebx + 0x28));
    eax = ZX8(MEM8(ebx + 0x29));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00523DD1; /* jg: greater (signed >) */

loc_00523D67: ;
    eax = ZX8(MEM8(ebx + 0x2B));
    goto loc_00523D70;

    /* nop */

loc_00523D70: ;
    edi = ZX8(MEM8(ebx + 0x2A));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00523DBC; /* jg: greater (signed >) */

loc_00523D78: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    ebp = edx + eax * 8;

loc_00523D83: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x00523D8Eu); RECOMP_ABI_CALL(0x005234E0u, sub_005234E0); /* call 0x005234E0 */

loc_00523D8E: ;
    ecx = MEM32(esi + eax * 4);
    edx = MEM32(esp + 0x10);
    MEM32(esi + eax * 4) = ebp;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + eax * 4);
    MEM32(edx) = ecx;
    eax = MEM32(esi + eax * 4);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ebx;
    eax = ZX8(MEM8(ebx + 0x2B));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00523D83; /* jle: less or equal (signed <=) */

loc_00523DB8: ;
    edx = MEM32(esp + 0x2C);

loc_00523DBC: ;
    edi = ZX8(MEM8(ebx + 0x29));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00523D70; /* jle: less or equal (signed <=) */

loc_00523DC9: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x18);

loc_00523DD1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x4830);
    MEM32(ecx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x20C);
    ebx = MEM32(edx + ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00523D50; /* jl: less (signed <) */

loc_00523DFF: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(eax + 0x208);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00523D30; /* jl: less (signed <) */

loc_00523E1D: ;
    ecx = MEM32(eax + 0x41C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00523EAD; /* jle: less or equal (signed <=) */

loc_00523E2D: ;
    MEM32(esp + 0x24) = ebx;
    goto loc_00523E37;

loc_00523E33: ;
    ebp = MEM32(esp + 0x18);

loc_00523E37: ;
    ecx = MEM32(esi + ebx * 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523E47; /* je: equal / zero */

loc_00523E40: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523E40; /* jne: not equal / not zero */

loc_00523E47: ;
    edi = MEM32(ebp + 0x30);
    ebp = MEM32(esp + 0x24);
    edx = SX16(LO16(eax));
    PUSH32(esp, 0x2F0);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x649F04);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM16(edi + 2) = LO16(eax);
    PUSH32(esp, 0x00523E6Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523E6A: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + ebx * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523E92; /* je: equal / zero */

loc_00523E77: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00523E80: ;
    ebp = MEM32(eax + 4);
    edx = MEM32(edi + 8);
    MEM32(ecx + edx) = ebp;
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523E80; /* jne: not equal / not zero */

loc_00523E92: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x41C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00523E33; /* jl: less (signed <) */

loc_00523EAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00523EB3u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00523EB3: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00523EBDu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00523EBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00523ED0
 * Original: 0x00523ED0 - 0x00524029 (345 bytes, 117 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00523ED0: ;
    eax = MEM32(0x6C263C);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62F9DC);
    edx = esp + 0x14;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00523EF7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00523EF7: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523F2E; /* je: equal / zero */

loc_00523F03: ;
    eax = esp + 0xC;
    PUSH32(esp, 0x30535650);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523F12u); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00523F12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00523F6E; /* je: equal / zero */

loc_00523F1B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 6) = LO8(ecx);
    MEM32(esi) = eax;
    goto loc_00524013;

loc_00523F2E: ;
    edx = MEM32(0x6C263C);
    eax = MEM32(edx + 4);
    ecx = MEM32(0x860220);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x649F30);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00523F51u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00523F51: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00523F79; /* jne: not equal / not zero */

loc_00523F57: ;
    ecx = MEM32(0x6C263C);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x649F14);
    PUSH32(esp, 0x00523F6Bu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00523F6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00523F6E: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00523F79: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00523F81u); RECOMP_ABI_CALL(0x00617FF0u, sub_00617FF0); /* call 0x00617FF0 */

loc_00523F81: ;
    ebx = eax;
    PUSH32(esp, 0xDF);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x649F04);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00523F96u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00523F96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00523FA9u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00523FA9: ;
    _fa = (uint32_t)(MEM8(esp + 0xF)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF), 0x39 (8-bit) */
    edx = MEM32(esi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 3);
    MEM8(esi + 6) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00523FC0u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00523FC0: ;
    eax = MEM32(esi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00523FCCu); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00523FCC: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00523FD7u); RECOMP_ABI_CALL(0x00617D20u, sub_00617D20); /* call 0x00617D20 */

loc_00523FD7: ;
    ecx = edi;
    PUSH32(esp, 0x00523FDEu); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00523FDE: ;
    ecx = MEM32(0x6C263C);
    edi = MEM32(ecx + 0x41C);
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00524013; /* jle: less or equal (signed <=) */

loc_00523FF3: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00523FFF; /* je: equal / zero */

loc_00523FF9: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;

loc_00523FFF: ;
    ecx = MEM32(0x6C263C);
    edi = MEM32(ecx + 0x41C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00523FF3; /* jl: less (signed <) */

loc_00524013: ;
    ecx = esi;
    MEM8(esi + 4) = 1;
    PUSH32(esp, 0x0052401Eu); RECOMP_ABI_CALL(0x00523A40u, sub_00523A40); /* call 0x00523A40 */

loc_0052401E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00524030
 * Original: 0x00524030 - 0x00524678 (1608 bytes, 471 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524030(void)
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

loc_00524030: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(edi + 5));
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 7) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524671; /* je: equal / zero */

loc_0052404B: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052405Cu); RECOMP_ABI_CALL(0x00518300u, sub_00518300); /* call 0x00518300 */

loc_0052405C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524670; /* je: equal / zero */

loc_00524064: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052407Cu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_0052407C: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x3C);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(edi + ebx * 4 + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(edi + ebx * 4 + 0x34) = eax;
    PUSH32(esp, 0x0052409Eu); RECOMP_ABI_CALL(0x00523780u, sub_00523780); /* call 0x00523780 */

loc_0052409E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005240B2; /* jp: parity */

loc_005240AB: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005240B9; /* jne: not equal / not zero */

loc_005240B2: ;
    SET_LO8(eax, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005240C1; /* jne: not equal / not zero */

loc_005240B9: ;
    MEM32(esp + 0x14) = 0;

loc_005240C1: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x005240CDu); RECOMP_ABI_CALL(0x00523520u, sub_00523520); /* call 0x00523520 */

loc_005240CD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524159; /* je: equal / zero */

loc_005240D5: ;
    esi = ZX16(MEM16(ebp));
    eax = ZX16(MEM16(ebp + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x8000 (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x30) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00524141; /* je: equal / zero */

loc_00524101: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    esi = esi & 0x7FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0052411Eu); RECOMP_ABI_CALL(0x00523780u, sub_00523780); /* call 0x00523780 */

loc_0052411E: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524141; /* je: equal / zero */

loc_00524128: ;
    ecx = ZX16(MEM16(eax));
    ebp = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x18) = eax;

loc_00524141: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524163; /* jne: not equal / not zero */

loc_00524145: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524163; /* jne: not equal / not zero */

loc_0052414D: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524163; /* jne: not equal / not zero */

loc_00524155: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524163; /* jne: not equal / not zero */

loc_00524159: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00524555;

loc_00524163: ;
    ebp = ebx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x2EE0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x34) = ebp;
    ebp = edi + ebp + 0x25C8;
    MEM32(esp + 0x40) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_005241D6; /* je: equal / zero */

loc_00524182: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esp + 0x1C) = MEM16(esp + 0x1C) >> 0xE;
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    goto loc_005241B0;

    /* nop */
    edi = edi;

loc_005241B0: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO16(edx, MEM16(esp + 0x1C));
    MEM16(ebp + ecx * 2) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005241B0; /* jne: not equal / not zero */

loc_005241CF: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = ecx;
    if ((_fa != 0)) goto loc_00524182; /* jne: not equal / not zero */

loc_005241D6: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524251; /* je: equal / zero */

loc_005241E4: ;
    MEM32(esp + 0x20) = ecx;
    goto loc_005241F0;

    /* nop */

loc_005241F0: ;
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esp + 0x1C) = MEM16(esp + 0x1C) >> 0xE;
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */

loc_00524210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00524224; /* jge: greater or equal (signed >=) */

loc_00524214: ;
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00524475; /* jae: above or equal (unsigned >=) */

loc_0052421F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524214; /* jl: less (signed <) */

loc_00524224: ;
    edx = MEM32(esp + 0x40);
    MEM16(ebp + edx * 2) = LO16(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = edx;

loc_00524232: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO16(edx, MEM16(esp + 0x1C));
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00524210; /* jne: not equal / not zero */

loc_0052424B: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005241F0; /* jne: not equal / not zero */

loc_00524251: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00524270; /* jle: less or equal (signed <=) */

loc_0052425D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x649FF0);
    PUSH32(esp, 0x0052426Du); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0052426D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524270: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0052430E; /* jle: less or equal (signed <=) */

loc_00524280: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00524290;

    /* nop */
    /* nop */

loc_00524290: ;
    eax = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005242FD; /* je: equal / zero */

loc_0052429F: ;
    edx = MEM32(edi + 0x482C);
    ecx = ZX16(LO16(eax));
    esi = MEM32(edx + ecx * 4);
    PUSH32(esp, 0x42C80000);
    ecx = esi;
    PUSH32(esp, 0x005242B7u); RECOMP_ABI_CALL(0x00517310u, sub_00517310); /* call 0x00517310 */

loc_005242B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005242FD; /* je: equal / zero */

loc_005242BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005242D5; /* je: equal / zero */

loc_005242BF: ;
    edx = MEM32(edi + ebx * 4 + 0x3C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + ecx * 4 + 0x40) = esi;
    MEM32(edi + ebx * 4 + 0x3C) = MEM32(edi + ebx * 4 + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(edi + ebx * 4 + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005242D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005242FD; /* je: equal / zero */

loc_005242D9: ;
    eax = MEM32(edi + ebx * 4 + 0x360);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005242FD; /* jge: greater or equal (signed >=) */

loc_005242E5: ;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2BC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + edx * 4 + 0x364) = esi;
    MEM32(edi + ebx * 4 + 0x360) = MEM32(edi + ebx * 4 + 0x360) + 1;
    _fa = (uint32_t)(MEM32(edi + ebx * 4 + 0x360)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005242FD: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00524290; /* jl: less (signed <) */

loc_0052430E: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x40) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00524376; /* je: equal / zero */

loc_0052431E: ;
    edx = eax;

loc_00524320: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    eax = eax & 0x3FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esp + 0x1C) = MEM16(esp + 0x1C) >> 0xE;
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    goto loc_00524350;

    /* nop */
    /* nop */

loc_00524350: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO16(esi, MEM16(esp + 0x1C));
    MEM16(ebp + ecx * 2) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00524350; /* jne: not equal / not zero */

loc_0052436F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = ecx;
    if ((_fa != 0)) goto loc_00524320; /* jne: not equal / not zero */

loc_00524376: ;
    ecx = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005243F1; /* je: equal / zero */

loc_00524384: ;
    MEM32(esp + 0x30) = ecx;
    goto loc_00524390;

    /* nop */

loc_00524390: ;
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    ecx = ecx & 0x3FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esp + 0x1C) = MEM16(esp + 0x1C) >> 0xE;
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */

loc_005243B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005243C4; /* jge: greater or equal (signed >=) */

loc_005243B4: ;
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00524495; /* jae: above or equal (unsigned >=) */

loc_005243BF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005243B4; /* jl: less (signed <) */

loc_005243C4: ;
    edx = MEM32(esp + 0x40);
    MEM16(ebp + edx * 2) = LO16(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = edx;

loc_005243D2: ;
    ebx = MEM32(esp + 0x1C);
    SET_LO16(edx, MEM16(esp + 0x1C));
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005243B0; /* jne: not equal / not zero */

loc_005243EB: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00524390; /* jne: not equal / not zero */

loc_005243F1: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xBB8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00524410; /* jle: less or equal (signed <=) */

loc_005243FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0x649FB0);
    PUSH32(esp, 0x0052440Du); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0052440D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524410: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x34);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xAF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = ecx + edi + 0x3D3C;
    ebx = eax + edi + 0xE58;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0052450E; /* jle: less or equal (signed <=) */

loc_00524440: ;
    eax = MEM32(esp + 0x1C);
    SET_LO16(eax, MEM16(ebp + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005244F9; /* je: equal / zero */

loc_00524453: ;
    edx = MEM32(edi + 0x4830);
    ecx = ZX16(LO16(eax));
    esi = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005244B5; /* jne: not equal / not zero */

loc_00524463: ;
    PUSH32(esp, 0x649F84);
    PUSH32(esp, 0x0052446Du); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0052446D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005244F9;

loc_00524475: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00524224; /* jge: greater or equal (signed >=) */

loc_0052447D: ;
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524224; /* jne: not equal / not zero */

loc_00524488: ;
    MEM16(ebp + eax * 2) = 0xFFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00524232;

loc_00524495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005243C4; /* jge: greater or equal (signed >=) */

loc_0052449D: ;
    _fa = (uint32_t)(MEM16(ebp + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + eax * 2), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005243C4; /* jne: not equal / not zero */

loc_005244A8: ;
    MEM16(ebp + eax * 2) = 0xFFFF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005243D2;

loc_005244B5: ;
    PUSH32(esp, 0x42C80000);
    ecx = esi;
    PUSH32(esp, 0x005244C1u); RECOMP_ABI_CALL(0x00517310u, sub_00517310); /* call 0x00517310 */

loc_005244C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005244F9; /* je: equal / zero */

loc_005244C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005244CE; /* je: equal / zero */

loc_005244C9: ;
    MEM32(ebx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005244CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005244F9; /* je: equal / zero */

loc_005244D2: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(edi + ecx * 4 + 0x3D38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2BC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005244F9; /* jge: greater or equal (signed >=) */

loc_005244E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + ecx * 4 + 0x3D38) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;

loc_005244F9: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00524440; /* jl: less (signed <) */

loc_0052450E: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xE58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0xE58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + eax * 4 + 0xE54) = ebx;
    eax = MEM32(edi + eax * 4 + 0x3D38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2BC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00524549; /* jle: less or equal (signed <=) */

loc_00524536: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2BC);
    PUSH32(esp, 0x649F38);
    PUSH32(esp, 0x00524546u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00524546: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524549: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524641; /* je: equal / zero */

loc_00524555: ;
    esi = MEM32(esp + 0x3C);
    eax = MEM32(edi + esi * 4 + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00524566u); RECOMP_ABI_CALL(0x00523360u, sub_00523360); /* call 0x00523360 */

loc_00524566: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00524578u); RECOMP_ABI_CALL(0x00523950u, sub_00523950); /* call 0x00523950 */

loc_00524578: ;
    fp_push(MEMF(0x6797F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D438)); /* fmul dword ptr [0x63d438] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005245DF; /* jne: not equal / not zero */

loc_0052458E: ;
    ecx = MEM32(edi + esi * 4 + 0x1C);
    fp_pop(); /* fstp st(0) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(edi + esi * 4 + 0x1C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00524666; /* jle: less or equal (signed <=) */

loc_005245A4: ;
    fp_push(MEMF(edi + esi * 4 + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x28)); /* fsub dword ptr [edi + 0x28] */
    MEMF(edi + esi * 4 + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005245C0; /* jp: parity */

loc_005245B9: ;
    eax = MEM32(edi + 0x14);
    MEM32(edi + esi * 4 + 0x10) = eax;

loc_005245C0: ;
    ecx = MEM32(edi + esi * 4 + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005245CDu); RECOMP_ABI_CALL(0x00523360u, sub_00523360); /* call 0x00523360 */

loc_005245CD: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM8(esi + edi + 7) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_005245DF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00524666; /* jp: parity */

loc_005245E9: ;
    eax = MEM32(edi + esi * 4 + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005245F6; /* je: equal / zero */

loc_005245F1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + esi * 4 + 0x1C) = eax;

loc_005245F6: ;
    eax = MEM32(edi + esi * 4 + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00524666; /* jne: not equal / not zero */

loc_005245FE: ;
    MEM32(edi + esi * 4 + 0x1C) = 0xA;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + esi * 4 + 0x10)); /* fadd dword ptr [edi + esi*4 + 0x10] */
    MEMF(edi + esi * 4 + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00524622; /* jne: not equal / not zero */

loc_0052461B: ;
    edx = MEM32(edi + 0x18);
    MEM32(edi + esi * 4 + 0x10) = edx;

loc_00524622: ;
    eax = MEM32(edi + esi * 4 + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0052462Fu); RECOMP_ABI_CALL(0x00523360u, sub_00523360); /* call 0x00523360 */

loc_0052462F: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM8(esi + edi + 7) = LO8(ecx);
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00524641: ;
    fp_push(MEMF(edi + 0x18)); /* fld float */
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEM32(edi + eax * 4 + 0x1C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + eax * 4 + 0x4840)); /* fmul dword ptr [edi + eax*4 + 0x4840] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(edi + eax * 4 + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00524666: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    POP32(esp, ebp);
    MEM8(esi + edi + 7) = LO8(ecx);
    POP32(esp, ebx);

loc_00524670: ;
    POP32(esp, esi);

loc_00524671: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00524680
 * Original: 0x00524680 - 0x0052469D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00524680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x33);
    PUSH32(esp, 0x64A030);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00524694u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_00524694: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005246A0
 * Original: 0x005246A0 - 0x00524712 (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005246A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005246A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005246C8; /* jle: less or equal (signed <=) */

loc_005246AD: ;
    /* nop */

loc_005246B0: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005246C0; /* je: equal / zero */

loc_005246BA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005246C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005246BEu); } /* indirect call */
    }

loc_005246C0: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005246B0; /* jl: less (signed <) */

loc_005246C8: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005246D1u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005246D1: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_005246FC; /* jle: less or equal (signed <=) */

loc_005246E4: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005246F4; /* je: equal / zero */

loc_005246EE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x005246F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005246F2u); } /* indirect call */
    }

loc_005246F4: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005246E4; /* jl: less (signed <) */

loc_005246FC: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00524705u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00524705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00524720
 * Original: 0x00524720 - 0x00524771 (81 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00524720: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052474C; /* jle: less or equal (signed <=) */

loc_00524737: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00524744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00524741u); } /* indirect call */
    }

loc_00524744: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524737; /* jl: less (signed <) */

loc_0052474C: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052476A; /* jle: less or equal (signed <=) */

loc_00524755: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00524762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052475Fu); } /* indirect call */
    }

loc_00524762: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524755; /* jl: less (signed <) */

loc_0052476A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00524780
 * Original: 0x00524780 - 0x005247C6 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00524780: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005247A3; /* jle: less or equal (signed <=) */

loc_0052478D: ;
    /* nop */

loc_00524790: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x0052479Bu); RECOMP_ABI_CALL(0x005260F0u, sub_005260F0); /* call 0x005260F0 */

loc_0052479B: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524790; /* jl: less (signed <) */

loc_005247A3: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005247C3; /* jle: less or equal (signed <=) */

loc_005247AC: ;
    /* nop */

loc_005247B0: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    PUSH32(esp, 0x005247BBu); RECOMP_ABI_CALL(0x005260F0u, sub_005260F0); /* call 0x005260F0 */

loc_005247BB: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005247B0; /* jl: less (signed <) */

loc_005247C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005247D0
 * Original: 0x005247D0 - 0x00524834 (100 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005247D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005247D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x122);
    eax = ebx * 4;
    PUSH32(esp, 0x64A030);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x005247F0u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_005247F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 8) = eax;
    MEM32(edi + 4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0052482E; /* jle: less or equal (signed <=) */

loc_005247FF: ;
    /* nop */

loc_00524800: ;
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x64A030);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00524811u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00524811: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524821; /* je: equal / zero */

loc_00524818: ;
    ecx = eax;
    PUSH32(esp, 0x0052481Fu); RECOMP_ABI_CALL(0x00526C00u, sub_00526C00); /* call 0x00526C00 */

loc_0052481F: ;
    goto loc_00524823;

loc_00524821: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00524823: ;
    ecx = MEM32(edi + 8);
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524800; /* jl: less (signed <) */

loc_0052482E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00524840
 * Original: 0x00524840 - 0x005248A4 (100 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00524840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x132);
    eax = ebx * 4;
    PUSH32(esp, 0x64A030);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00524860u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00524860: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0052489E; /* jle: less or equal (signed <=) */

loc_0052486F: ;
    /* nop */

loc_00524870: ;
    PUSH32(esp, 0x138);
    PUSH32(esp, 0x64A030);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x00524881u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00524881: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00524891; /* je: equal / zero */

loc_00524888: ;
    ecx = eax;
    PUSH32(esp, 0x0052488Fu); RECOMP_ABI_CALL(0x00527A80u, sub_00527A80); /* call 0x00527A80 */

loc_0052488F: ;
    goto loc_00524893;

loc_00524891: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00524893: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00524870; /* jl: less (signed <) */

loc_0052489E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005248B0
 * Original: 0x005248B0 - 0x005248CC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005248B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005248B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005248B8u); RECOMP_ABI_CALL(0x00524780u, sub_00524780); /* call 0x00524780 */

loc_005248B8: ;
    ecx = esi;
    PUSH32(esp, 0x005248BFu); RECOMP_ABI_CALL(0x005246A0u, sub_005246A0); /* call 0x005246A0 */

loc_005248BF: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005248C7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005248C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005248D0
 * Original: 0x005248D0 - 0x00524E51 (1409 bytes, 361 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005248D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005248D0: ;
    _fb = (uint32_t)(0x50C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x50C));
    esp = esp - 0x50C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x518);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebp = ecx;
    eax = MEM32(ebp);
    ecx = MEM32(0x860220);
    PUSH32(esp, 0x6497DC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005248FBu); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_005248FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00524917; /* jne: not equal / not zero */

loc_00524905: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x64A110);
    PUSH32(esp, 0x00524914u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00524914: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524917: ;
    edx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524925u); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_00524925: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0052493Bu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0052493B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00524E3E; /* je: equal / zero */

loc_00524943: ;
    PUSH32(esp, ebx);

loc_00524944: ;
    edi = esp + 0x11C;
    esi = 0x63E684;
    ecx = 6;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005249D0; /* jne: not equal / not zero */

loc_0052495B: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524971u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524971: ;
    edi = MEM32(ebp);
    esi = esp + 0x11C;
    eax = edi;
    /* nop */

loc_00524980: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005249A8; /* jne: not equal / not zero */

loc_0052498A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005249A4; /* je: equal / zero */

loc_0052498E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005249A8; /* jne: not equal / not zero */

loc_0052499A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00524980; /* jne: not equal / not zero */

loc_005249A4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005249AD;

loc_005249A8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005249AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00524E1B; /* je: equal / zero */

loc_005249B5: ;
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64A0D8);
    PUSH32(esp, 0x005249C8u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_005249C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00524E1B;

loc_005249D0: ;
    edi = esp + 0x11C;
    esi = 0x64A0C0;
    ecx = 0x17;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00524A25; /* jne: not equal / not zero */

loc_005249E7: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x005249FDu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005249FD: ;
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00524A0Au); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_00524A0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00524E1B; /* jl: less (signed <) */

loc_00524A18: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00524A20u); RECOMP_ABI_CALL(0x005247D0u, sub_005247D0); /* call 0x005247D0 */

loc_00524A20: ;
    goto loc_00524E1B;

loc_00524A25: ;
    edi = esp + 0x11C;
    esi = 0x64A0A4;
    ecx = 0x19;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00524A7A; /* jne: not equal / not zero */

loc_00524A3C: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524A52u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524A52: ;
    ecx = esp + 0x11C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00524A5Fu); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_00524A5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00524E1B; /* jl: less (signed <) */

loc_00524A6D: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00524A75u); RECOMP_ABI_CALL(0x00524840u, sub_00524840); /* call 0x00524840 */

loc_00524A75: ;
    goto loc_00524E1B;

loc_00524A7A: ;
    edi = esp + 0x11C;
    esi = 0x64A090;
    ecx = 0x11;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00524C13; /* jne: not equal / not zero */

loc_00524A95: ;
    ecx = MEM32(0x675530);
    eax = MEM32(0x67552C);
    PUSH32(esp, 0x100);
    edx = esp + 0x120;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    MEM32(esp + 0x20) = eax;
    MEM32(0x67552C) = 0xB;
    MEM32(0x675530) = 0xA;
    PUSH32(esp, 0x00524AD2u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524AD2: ;
    eax = esp + 0x11C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00524ADFu); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_00524ADF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    ebx = eax;
    PUSH32(esp, 0x00524AFAu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524AFA: ;
    edi = esp + 0x11C;
    esi = 0x63E350;
    ecx = 2;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00524B22; /* je: equal / zero */

loc_00524B11: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A07C);
    PUSH32(esp, 0x00524B1Fu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00524B1F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524B22: ;
    PUSH32(esp, 0x63E684);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524B30u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524B30: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524B46u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524B46: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(edx + ebx * 4);
    edx = MEM32(0x6C263C);
    eax = MEM32(esi);
    ecx = esp + 0x11C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x108)) >> 32) & 1);
    edx = edx + 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00524B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00524B65u); } /* indirect call */
    }

loc_00524B68: ;
    PUSH32(esp, 0x64A074);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524B76u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524B76: ;
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524B87u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524B87: ;
    PUSH32(esp, 0x64A06C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524B95u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524B95: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524BA6u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524BA6: ;
    edx = MEM32(esi);
    eax = esp + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0xCC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00524BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00524BBAu); } /* indirect call */
    }

loc_00524BBD: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524BD3u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524BD3: ;
    edi = esp + 0x11C;
    esi = 0x63E344;
    ecx = 2;
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
    if ((_flags != 0)) goto loc_00524BFB; /* je: equal / zero */

loc_00524BEA: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A07C);
    PUSH32(esp, 0x00524BF8u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00524BF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524BFB: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    MEM32(0x67552C) = edx;
    MEM32(0x675530) = eax;
    goto loc_00524E1B;

loc_00524C13: ;
    edi = esp + 0x11C;
    esi = 0x64A058;
    ecx = 0x13;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00524E1B; /* jne: not equal / not zero */

loc_00524C2E: ;
    eax = MEM32(0x675530);
    ebx = MEM32(0x67552C);
    PUSH32(esp, 0x100);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = eax;
    MEM32(0x67552C) = 9;
    MEM32(0x675530) = 8;
    PUSH32(esp, 0x00524C67u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524C67: ;
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00524C74u); RECOMP_ABI_CALL(0x0061A5DCu, sub_0061A5DC); /* call 0x0061A5DC */

loc_00524C74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x20;
    esi = eax;
    PUSH32(esp, 0x00524C87u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524C87: ;
    PUSH32(esp, 0x64A050);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524C95u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524C95: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x420;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524CABu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524CAB: ;
    PUSH32(esp, 0x64A048);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524CB9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524CB9: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x220;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524CCFu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524CCF: ;
    PUSH32(esp, 0x64A03C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524CDDu); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524CDD: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x320;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524CF3u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524CF3: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(eax + esi * 4);
    edx = MEM32(esi);
    eax = esp + 0x31C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x220;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    eax = esp + 0x424;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x108)) >> 32) & 1);
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00524D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00524D22u); } /* indirect call */
    }

loc_00524D25: ;
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D36u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524D36: ;
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D47u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524D47: ;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D58u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524D58: ;
    edx = esp + 0x110;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D69u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524D69: ;
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00524D78u); RECOMP_ABI_CALL(0x005271F0u, sub_005271F0); /* call 0x005271F0 */

loc_00524D78: ;
    PUSH32(esp, 0x64A074);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D86u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524D86: ;
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524D97u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524D97: ;
    PUSH32(esp, 0x64A06C);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524DA5u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_00524DA5: ;
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00524DB6u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00524DB6: ;
    eax = MEM32(esi);
    ecx = esp + 0xD4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00524DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00524DCAu); } /* indirect call */
    }

loc_00524DCD: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524DE3u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524DE3: ;
    edi = esp + 0x11C;
    esi = 0x63E344;
    ecx = 2;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00524E0B; /* je: equal / zero */

loc_00524DFA: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A07C);
    PUSH32(esp, 0x00524E08u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_00524E08: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00524E0B: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x67552C) = ebx;
    MEM32(0x675530) = ecx;

loc_00524E1B: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00524E31u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00524E31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00524944; /* jne: not equal / not zero */

loc_00524E39: ;
    edi = MEM32(esp + 0x14);
    POP32(esp, ebx);

loc_00524E3E: ;
    ecx = edi;
    PUSH32(esp, 0x00524E45u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00524E45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x50C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x50C)) >> 32) & 1);
    esp = esp + 0x50C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00524E60
 * Original: 0x00524E60 - 0x00524E65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00524E60: ;
    g_seh_ebp = ebp; sub_005E3380(); return; /* tail jmp 0x005E3380 */

}

/**
 * sub_00524E70
 * Original: 0x00524E70 - 0x00524E78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524E70(void)
{

loc_00524E70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00524E77u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00524E77: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00524E80
 * Original: 0x00524E80 - 0x005250F1 (625 bytes, 223 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00524E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A2F0);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00524E9Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524E9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A2E4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524EB4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524EB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A2DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524ECAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524ECA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A2CC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524EE0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524EE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A2C0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524EF6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524EF6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A2B0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F0Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A29C);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00524F22u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F22: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A288);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F38u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F38: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A278);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F4Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A260);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F64u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F64: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A24C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F7Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F7A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A238);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524F90u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524F90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A220);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524FA6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524FA6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A208);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524FBCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524FBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A1F8);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00524FD2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524FD2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A1EC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524FE8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524FE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A1D4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00524FFEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00524FFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A1C4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00525014u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00525014: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A1B8);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0052502Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052502A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A1A8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00525040u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00525040: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x7C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A19C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00525056u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00525056: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A18C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0052506Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052506F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A17C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00525088u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00525088: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A160);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x005250A1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005250A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A148);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x005250BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005250BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A134);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005250D3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005250D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64A124);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005250ECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005250EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00525100
 * Original: 0x00525100 - 0x005251F7 (247 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00525109u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00525109: ;
    MEM32(esi) = 0x64A2FC;
    eax = 0x3F800000;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    edi = 0x43480000;
    MEM32(esi + 0x18) = edi;
    ecx = 0x43960000;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x4C) = 0x42200000;
    edx = 0x3DCCCCCD;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x60) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x58) = ecx;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x64) = edi;
    MEM8(esi + 0x68) = 1;
    MEM32(esi + 0x6C) = 0x3F333333;
    MEM8(esi + 0x74) = 1;
    MEM32(esi + 0x78) = 0x3F000000;
    MEM32(esi + 0x80) = 0x428C0000;
    MEM8(esi + 0x84) = 1;
    edi = 0x41200000;
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x88) = edx;
    MEM32(esi + 0x8C) = edx;
    MEM32(esi + 0x90) = edx;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x98) = ecx;
    MEM32(esi + 0x9C) = 0xBF800000u;
    MEM32(esi + 0xA0) = ecx;
    MEM32(esi + 0xA4) = edx;
    MEM32(esi + 0xA8) = edx;
    MEM32(esi + 0xAC) = edx;
    MEM32(esi + 0xB0) = ecx;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0x50) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00525200
 * Original: 0x00525200 - 0x00525220 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00525200: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18F8);
    PUSH32(esp, eax);
    MEM32(esi) = 0x649D9C;
    PUSH32(esp, 0x00525215u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00525215: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00525220
 * Original: 0x00525220 - 0x0052525F (63 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x18FC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A328);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00525241u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00525241: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1900) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1900;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64A31C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x0052525Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052525A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00525260
 * Original: 0x00525260 - 0x00525AA7 (2119 bytes, 509 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525260(void)
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

loc_00525260: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x30;
    esi = edi + 0xB50;
    MEM32(esp + 0x10) = 0xB;
    /* nop */

loc_00525280: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi);
    fp_push(MEMF(esi + -8)); /* fld float */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esi + -4)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005252FBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005252FB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525310u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525310: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525320u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525320: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525337u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525337: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -20) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    edx = MEM32(esi + 0x24);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005253BBu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005253BB: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005253D0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005253D0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005253E0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005253E0: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005253F7u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005253F7: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x40);
    fp_push(MEMF(esi + 0x38)); /* fld float */
    edx = MEM32(esi + 0x44);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0052547Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052547B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525490u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525490: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005254A0u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005254A0: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005254B7u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005254B7: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x14) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x60);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    edx = MEM32(esi + 0x64);
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x0052553Bu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052553B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525550u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525550: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525560u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525560: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525577u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525577: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x28) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x80);
    fp_push(MEMF(esi + 0x78)); /* fld float */
    edx = MEM32(esi + 0x84);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00525601u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525601: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525616u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525616: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525626u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525626: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0052563Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052563D: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x3C) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(esi + 0xA4);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x20) = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x005256CDu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005256CD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x005256E2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005256E2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005256F2u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005256F2: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525709u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525709: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x50) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0xC0);
    fp_push(MEMF(esi + 0xB8)); /* fld float */
    edx = MEM32(esi + 0xC4);
    fp_push(MEMF(esi + 0xBC)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00525799u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525799: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x005257AEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005257AE: ;
    SET_LO8(ebx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005257BEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005257BE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005257D5u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005257D5: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x64) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0xE0);
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    edx = MEM32(esi + 0xE4);
    fp_push(MEMF(esi + 0xDC)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00525865u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525865: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x0052587Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052587A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0052588Au); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052588A: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x005258A1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_005258A1: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x78) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x100);
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    edx = MEM32(esi + 0x104);
    fp_push(MEMF(esi + 0xFC)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00525931u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525931: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525946u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525946: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525956u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525956: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0052596Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052596D: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x8C) = ebx;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    ecx = MEM32(esi + 0x120);
    fp_push(MEMF(esi + 0x118)); /* fld float */
    edx = MEM32(esi + 0x124);
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1900)); /* fmul dword ptr [edi + 0x1900] */
    MEM32(esp + 0x24) = edx;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1904)); /* fmul dword ptr [edi + 0x1904] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1908)); /* fmul dword ptr [edi + 0x1908] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x190C)); /* fmul dword ptr [edi + 0x190c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63AF00)); /* fmul dword ptr [0x63af00] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63032C)); /* fadd dword ptr [0x63032c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    PUSH32(esp, 0x00525A00u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525A00: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0x00525A15u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525A15: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    SET_LO8(ebx, LO8(eax));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525A25u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525A25: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ecx = ZX8(LO8(eax));
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00525A3Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525A3C: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x10);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xA0) = ebx;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x140;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00525280; /* jne: not equal / not zero */

loc_00525A62: ;
    PUSH32(esp, 0x00525A67u); RECOMP_ABI_CALL(0x005FB670u, sub_005FB670); /* call 0x005FB670 */

loc_00525A67: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525A6Eu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00525A6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00525A75u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00525A75: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00525A81u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00525A81: ;
    PUSH32(esp, 0x6E);
    eax = edi + 0x8A4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00525A95u); RECOMP_ABI_CALL(0x005FB7E0u, sub_005FB7E0); /* call 0x005FB7E0 */

loc_00525A95: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00525A9Du); RECOMP_ABI_CALL(0x005FBD20u, sub_005FBD20); /* call 0x005FBD20 */

loc_00525A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00525AB0
 * Original: 0x00525AB0 - 0x00525E42 (914 bytes, 255 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00525AB0(void)
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

loc_00525AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = esi;
    edi = esp + 0x28;
    ebx = 3;
    /* nop */

loc_00525AD0: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525ADBu); RECOMP_ABI_CALL(0x005150D0u, sub_005150D0); /* call 0x005150D0 */

loc_00525ADB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00525AD0; /* jne: not equal / not zero */

loc_00525AE1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525AEEu); RECOMP_ABI_CALL(0x005150D0u, sub_005150D0); /* call 0x005150D0 */

loc_00525AEE: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525AFBu); RECOMP_ABI_CALL(0x005150D0u, sub_005150D0); /* call 0x005150D0 */

loc_00525AFB: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525B08u); RECOMP_ABI_CALL(0x005150D0u, sub_005150D0); /* call 0x005150D0 */

loc_00525B08: ;
    eax = esi + 0x8A5;
    ecx = esi + 0x980;
    ebx = esi + 0xC;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    _fb = (uint32_t)(0xB40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = 0x6E;
    /* nop */

loc_00525B30: ;
    ebp = esi + -8;
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525B3Du); RECOMP_ABI_CALL(0x00515130u, sub_00515130); /* call 0x00515130 */

loc_00525B3D: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525B4Au); RECOMP_ABI_CALL(0x00515130u, sub_00515130); /* call 0x00515130 */

loc_00525B4A: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525B53u); RECOMP_ABI_CALL(0x005151F0u, sub_005151F0); /* call 0x005151F0 */

loc_00525B53: ;
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(ebp)); /* fld float */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00525B8B; /* jnp: not parity */

loc_00525B81: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00525B93;

loc_00525B8B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00525B93: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp)); /* fmul dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00525BC3; /* jp: parity */

loc_00525BB7: ;
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630320)); /* fmul dword ptr [0x630320] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00525BC3: ;
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esi + -4)); /* fld float */
    fp_push(MEMF(ebp)); /* fld float */
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00525C04; /* jnp: not parity */

loc_00525BFA: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    goto loc_00525C0C;

loc_00525C04: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00525C0C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp)); /* fmul dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    MEMF(esi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
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
    MEM32(esp + 0x20) = eax;
    MEM32(0x679680) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_push(MEMD(0x64A338)); /* fld double */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525C5Bu); RECOMP_ABI_CALL(0x0061A8C0u, sub_0061A8C0); /* call 0x0061A8C0 */

loc_00525C5B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64A334)); /* fmul dword ptr [0x64a334] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63813C)); /* fadd dword ptr [0x63813c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
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
    MEM32(esp + 0x20) = edx;
    MEM32(0x679680) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_push(MEMD(0x64A338)); /* fld double */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525CB2u); RECOMP_ABI_CALL(0x0061A8C0u, sub_0061A8C0); /* call 0x0061A8C0 */

loc_00525CB2: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64A334)); /* fmul dword ptr [0x64a334] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63813C)); /* fadd dword ptr [0x63813c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
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
    MEM32(esp + 0x20) = ecx;
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_push(MEMD(0x64A338)); /* fld double */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525D06u); RECOMP_ABI_CALL(0x0061A8C0u, sub_0061A8C0); /* call 0x0061A8C0 */

loc_00525D06: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    MEM32(esi + 0x14) = 0x3F800000;
    MEM32(esi + 4) = 0x3B23D70A;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64A334)); /* fmul dword ptr [0x64a334] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63813C)); /* fadd dword ptr [0x63813c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525D3Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525D3D: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edi = ZX8(LO8(eax));
    edi = edi | 0xFFFFFF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525D57u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525D57: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    edx = ZX8(LO8(eax));
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525D6Du); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00525D6D: ;
    ecx = MEM32(esp + 0x14);
    eax = ZX8(LO8(eax));
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp);
    edx = ebx;
    MEM32(edx) = eax;
    eax = MEM32(ebp + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x18);
    MEM8(eax + -1) = 0;
    MEM8(eax) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 0x10) = edi;
    MEM32(ecx) = edi;
    MEM32(ebx + 0xC) = 0x3B23D70A;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_00525B30; /* jne: not equal / not zero */

loc_00525DC3: ;
    esi = MEM32(esp + 0x24);
    eax = 0x3F800000;
    MEM32(esi + 0x18FC) = eax;
    MEM32(esi + 0x190C) = eax;
    MEM32(esi + 0x1908) = eax;
    MEM32(esi + 0x1904) = eax;
    MEM32(esi + 0x1900) = eax;
    ecx = MEM32(0x6C32D0);
    edx = MEM32(ecx * 4 + 0x66327C);
    eax = MEM32(0x6C32CC);
    ecx = MEM32(eax * 4 + 0x663270);
    PUSH32(esp, edx);
    edx = MEM32(0x6C32C8);
    eax = MEM32(edx * 4 + 0x663174);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x648678);
    ecx = esp + 0x50;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525E24u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00525E24: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00525E33u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00525E33: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00525E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00525E37u); } /* indirect call */
    }

loc_00525E3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00525E50
 * Original: 0x00525E50 - 0x00525E6B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525E50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00525E70
 * Original: 0x00525E70 - 0x00525E9A (42 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525E70: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA8);
    PUSH32(esp, esi);
    esi = eax + ecx + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00525E8A; /* je: equal / zero */

loc_00525E83: ;
    ecx = esi;
    PUSH32(esp, 0x00525E8Au); RECOMP_ABI_CALL(0x00527B30u, sub_00527B30); /* call 0x00527B30 */

loc_00525E8A: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00525E96u); RECOMP_ABI_CALL(0x00527C20u, sub_00527C20); /* call 0x00527C20 */

loc_00525E96: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00525EA0
 * Original: 0x00525EA0 - 0x00525EEA (74 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00525EA6: ;
    eax = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00525EB6; /* je: equal / zero */

loc_00525EAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00525EB3u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_00525EB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00525EB6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00525EA6; /* jl: less (signed <) */

loc_00525EBC: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00525EE7; /* je: equal / zero */

loc_00525EC3: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00525EE6; /* jle: less or equal (signed <=) */

loc_00525ECA: ;
    esi = ebx + 0x1C;
    /* nop */

loc_00525ED0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00525ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00525ED6u); } /* indirect call */
    }

loc_00525ED8: ;
    eax = MEM32(ebx + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00525ED0; /* jl: less (signed <) */

loc_00525EE6: ;
    POP32(esp, edi);

loc_00525EE7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00525EF0
 * Original: 0x00525EF0 - 0x00525FC3 (211 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00525EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6796F0);
    esi = ecx;
    PUSH32(esp, 0x00525EFDu); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00525EFD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00525F04u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00525F04: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00525F0Bu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00525F0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00525F12u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00525F12: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00525F19u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00525F19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00525F24u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00525F24: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00525F2Bu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00525F2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525F32u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00525F32: ;
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00525F4F; /* jne: not equal / not zero */

loc_00525F3E: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00525F4Au); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00525F4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00525F65;

loc_00525F4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00525F56u); RECOMP_ABI_CALL(0x00512BB0u, sub_00512BB0); /* call 0x00512BB0 */

loc_00525F56: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525F62u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00525F62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00525F65: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x662E78));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00525F73u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00525F73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00525F8F; /* jne: not equal / not zero */

loc_00525F7B: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    ecx = MEM32(0x6C263C);
    g_seh_ebp = ebp; sub_00517D70(); return; /* tail jmp 0x00517D70 */

loc_00525F8F: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525F9Cu); RECOMP_ABI_CALL(0x00517D70u, sub_00517D70); /* call 0x00517D70 */

loc_00525F9C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00525FBF; /* jne: not equal / not zero */

loc_00525FA1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00525FA8u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00525FA8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00525FAEu); RECOMP_ABI_CALL(0x005EDBD0u, sub_005EDBD0); /* call 0x005EDBD0 */

loc_00525FAE: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00525FB5u); RECOMP_ABI_CALL(0x005EDC10u, sub_005EDC10); /* call 0x005EDC10 */

loc_00525FB5: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00525FBCu); RECOMP_ABI_CALL(0x00512BB0u, sub_00512BB0); /* call 0x00512BB0 */

loc_00525FBC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00525FBF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00525FD0
 * Original: 0x00525FD0 - 0x00526030 (96 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00525FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00525FD0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00525FD7u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00525FD7: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525FE3u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00525FE3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526015; /* jne: not equal / not zero */

loc_00525FEF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00525FFBu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00525FFB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00526002u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00526002: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526009u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00526009: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526012u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_00526012: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526015: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052601Eu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_0052601E: ;
    PUSH32(esp, 0x00526023u); RECOMP_ABI_CALL(0x00512410u, sub_00512410); /* call 0x00512410 */

loc_00526023: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0052602Au); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_0052602A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526030
 * Original: 0x00526030 - 0x005260ED (189 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526030: ;
    edx = MEM32(0x6C263C);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x210);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x3D4);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005260E5; /* je: equal / zero */

loc_0052604D: ;
    SET_LO8(eax, MEM8(edx + 0x214));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005260E5; /* je: equal / zero */

loc_0052605B: ;
    eax = MEM32(ebx + esi * 4 + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052608B; /* jle: less or equal (signed <=) */

loc_00526063: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x320);
    PUSH32(esp, ebp);
    edi = ecx + ebx + 0x40;
    ebp = eax;

loc_00526072: ;
    ecx = MEM32(edi);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0052607Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052607Bu); } /* indirect call */
    }

loc_0052607E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526072; /* jne: not equal / not zero */

loc_00526084: ;
    edx = MEM32(0x6C263C);
    POP32(esp, ebp);

loc_0052608B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005260DF; /* jne: not equal / not zero */

loc_00526092: ;
    eax = MEM32(edx + 0x430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005260DF; /* je: equal / zero */

loc_0052609C: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x005260A6u); RECOMP_ABI_CALL(0x005AEBA0u, sub_005AEBA0); /* call 0x005AEBA0 */

loc_005260A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005260CF; /* je: equal / zero */

loc_005260AA: ;
    edi = MEM32(ebx + esi * 4 + 0x360);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005260CF; /* jle: less or equal (signed <=) */

loc_005260B5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xAF0);
    esi = esi + ebx + 0x364;

loc_005260C2: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x005260C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005260C6u); } /* indirect call */
    }

loc_005260C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005260C2; /* jne: not equal / not zero */

loc_005260CF: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x430);
    PUSH32(esp, 0x005260DFu); RECOMP_ABI_CALL(0x005225C0u, sub_005225C0); /* call 0x005225C0 */

loc_005260DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_005260E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00517080(); return; /* tail jmp 0x00517080 */

}

/**
 * sub_005260F0
 * Original: 0x005260F0 - 0x0052612D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005260F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005260F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x1C;
    ebx = 2;
    /* nop */

loc_00526100: ;
    ecx = MEM32(esi + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526113; /* je: equal / zero */

loc_00526107: ;
    PUSH32(esp, 0x0052610Cu); RECOMP_ABI_CALL(0x005F9A60u, sub_005F9A60); /* call 0x005F9A60 */

loc_0052610C: ;
    MEM32(esi + -8) = 0;

loc_00526113: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526124; /* je: equal / zero */

loc_00526119: ;
    PUSH32(esp, 0x0052611Eu); RECOMP_ABI_CALL(0x005F9A60u, sub_005F9A60); /* call 0x005F9A60 */

loc_0052611E: ;
    MEM32(esi) = 0;

loc_00526124: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526100; /* jne: not equal / not zero */

loc_0052612A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00526130
 * Original: 0x00526130 - 0x00526189 (89 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526130(void)
{

loc_00526130: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052614Eu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_0052614E: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(esi + 0x28) = LO8(eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM8(esi + 0x2A) = LO8(ecx);
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x00526176u); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_00526176: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(esi + 0x29) = LO8(edx);
    MEM8(esi + 0x2B) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00526190
 * Original: 0x00526190 - 0x0052619A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526190(void)
{

loc_00526190: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_005261A0
 * Original: 0x005261A0 - 0x005261D4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005261A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005261A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005261AE; /* jne: not equal / not zero */

loc_005261A8: ;
    eax = 0x64A36C;
    esp += 4; return; /* ret */

loc_005261AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005261B9; /* jne: not equal / not zero */

loc_005261B3: ;
    eax = 0x64A364;
    esp += 4; return; /* ret */

loc_005261B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005261C4; /* jne: not equal / not zero */

loc_005261BE: ;
    eax = 0x64A35C;
    esp += 4; return; /* ret */

loc_005261C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = 0x64A350;
    if (CMP_EQ(_fa, _fb)) goto loc_005261D3; /* je: equal / zero */

loc_005261CE: ;
    eax = 0x64A340;

loc_005261D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005261E0
 * Original: 0x005261E0 - 0x00526675 (1173 bytes, 318 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005261E0(void)
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

loc_005261E0: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00526214; /* je: equal / zero */

loc_005261F2: ;
    eax = MEM32(esp + 0x2D0);
    PUSH32(esp, 0x30494D43);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526204u); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_00526204: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x2C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00526214: ;
    ecx = MEM32(0x6754CC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2D0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2D8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2E0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, ebp);
    MEM8(esp + 0x27) = 0;
    MEM32(0x6754CC) = 8;
    PUSH32(esp, 0x00526257u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00526257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0052627C; /* jne: not equal / not zero */

loc_0052625F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x649E48);
    PUSH32(esp, 0x0052626Cu); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_0052626C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0052627C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x13C;
    PUSH32(esp, 0x0052628Au); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0052628A: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x13C;
    PUSH32(esp, 0x005262A0u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005262A0: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526554; /* je: equal / zero */

loc_005262AC: ;
    /* nop */

loc_005262B0: ;
    edi = 0x64A3A0;
    esi = esp + 0x34;
    ecx = 0xA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005262DC; /* jne: not equal / not zero */

loc_005262C4: ;
    ecx = esp + 0x134;
    PUSH32(esp, 0x005262D0u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_005262D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x13) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_00526532;

loc_005262DC: ;
    edi = 0x64A38C;
    esi = esp + 0x34;
    ecx = 0x11;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00526347; /* jne: not equal / not zero */

loc_005262F0: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, 0x00526301u); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_00526301: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebx + 0x2C);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esp + 0x134;
    PUSH32(esp, 0x0052633Cu); RECOMP_ABI_CALL(0x006157F0u, sub_006157F0); /* call 0x006157F0 */

loc_0052633C: ;
    eax = MEM32(ebx + 0x2C);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00526532;

loc_00526347: ;
    edi = 0x64A388;
    esi = esp + 0x34;
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
    if ((_flags == 0)) goto loc_00526532; /* jne: not equal / not zero */

loc_0052635F: ;
    ecx = esp + 0x134;
    PUSH32(esp, 0x0052636Bu); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_0052636B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(esp + 0x12) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0052638C; /* je: equal / zero */

loc_00526376: ;
    PUSH32(esp, 0x64A380);
    PUSH32(esp, 0x00526380u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_00526380: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052638C; /* je: equal / zero */

loc_00526387: ;
    MEM8(esp + 0x12) = 0;

loc_0052638C: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x138;
    PUSH32(esp, 0x0052639Du); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052639D: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, 0x005263B3u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005263B3: ;
    edi = 0x63E344;
    esi = esp + 0x34;
    ecx = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00526532; /* je: equal / zero */

loc_005263CB: ;
    goto loc_005263D0;

    /* nop */

loc_005263D0: ;
    edi = 0x64A36C;
    esi = esp + 0x34;
    ecx = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0052648B; /* jne: not equal / not zero */

loc_005263E8: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526415; /* jne: not equal / not zero */

loc_005263F2: ;
    ecx = MEM32(0x662E7C);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(0x662E7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    MEM32(0x662E7C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00526415; /* jne: not equal / not zero */

loc_0052640B: ;
    MEM32(0x662E7C) = 6;

loc_00526415: ;
    eax = MEM32(ebx + 0x14);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A374);
    ecx = esp + 0x1E4;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00526438u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00526438: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x12));
    if (CMP_EQ(_fa, _fb)) goto loc_00526465; /* je: equal / zero */

loc_00526448: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_00526450: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005265E5; /* je: equal / zero */

loc_0052645C: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, 2);
    goto loc_005264DB;

loc_00526465: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_0052646D: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);

loc_00526474: ;
    ecx = MEM32(0x6C263C);
    eax = esp + 0x1DC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    goto loc_005264EE;

loc_0052648B: ;
    edi = 0x64A364;
    esi = esp + 0x34;
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
    if ((_flags == 0)) goto loc_00526574; /* jne: not equal / not zero */

loc_005264A3: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0x64A364);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A374);
    ecx = esp + 0x1E4;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    esi = 1;
    PUSH32(esp, 0x005264C9u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005264C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005264CC: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_005264D4: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);

loc_005264DB: ;
    eax = MEM32(0x6C263C);
    edx = esp + 0x1DC;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_005264EE: ;
    PUSH32(esp, 0x005264F3u); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_005264F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_005264FA: ;
    edx = MEM32(ebx + 0x2C);
    ecx = esi + ebp * 4 + 4;
    MEM32(edx + ecx * 4) = eax;

loc_00526504: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, 0x0052651Au); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_0052651A: ;
    edi = 0x63E344;
    esi = esp + 0x34;
    ecx = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005263D0; /* jne: not equal / not zero */

loc_00526532: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x13C;
    PUSH32(esp, 0x00526548u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00526548: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005262B0; /* jne: not equal / not zero */

loc_00526554: ;
    ecx = MEM32(esp + 0x24);
    MEM32(0x6754CC) = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x00526567u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00526567: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00526574: ;
    edi = 0x64A35C;
    esi = esp + 0x34;
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
    if ((_flags == 0)) goto loc_005265EE; /* jne: not equal / not zero */

loc_00526588: ;
    ecx = MEM32(ebx + 0x14);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A374);
    edx = esp + 0x1E4;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    esi = 2;
    PUSH32(esp, 0x005265AEu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005265AE: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x12));
    if (CMP_EQ(_fa, _fb)) goto loc_005265DD; /* je: equal / zero */

loc_005265BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_005265C6: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005264D4; /* je: equal / zero */

loc_005265D2: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, esi);
    goto loc_00526474;

loc_005265DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_005265E5: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);
    goto loc_0052665B;

loc_005265EE: ;
    edi = 0x64A350;
    esi = esp + 0x34;
    ecx = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00526504; /* jne: not equal / not zero */

loc_00526606: ;
    edx = MEM32(ebx + 0x14);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A374);
    eax = esp + 0x1E4;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    esi = 3;
    PUSH32(esp, 0x0052662Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052662C: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005264CC; /* je: equal / zero */

loc_0052663C: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526504; /* je: equal / zero */

loc_00526648: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052646D; /* je: equal / zero */

loc_00526654: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, 2);

loc_0052665B: ;
    edx = MEM32(0x6C263C);
    ecx = esp + 0x1DC;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_005264EE;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00526680
 * Original: 0x00526680 - 0x00526785 (261 bytes, 94 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526680: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_005266BB; /* jne: not equal / not zero */

loc_0052668A: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 5);
    ecx = MEM32(ecx + 0x2C);
    edx = eax + 1;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005266A4; /* jne: not equal / not zero */

loc_005266A1: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005266A4: ;
    edx = eax + 1;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526781; /* je: equal / zero */

loc_005266B5: ;
    edx = MEM32(esp + 0xC);
    goto loc_005266E1;

loc_005266BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005266F8; /* jne: not equal / not zero */

loc_005266C0: ;
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005266CC; /* jne: not equal / not zero */

loc_005266CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005266CC: ;
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526781; /* je: equal / zero */

loc_005266DD: ;
    edx = MEM32(esp + 0x14);

loc_005266E1: ;
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_0052673C; /* je: equal / zero */

loc_005266EA: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005266F4u); RECOMP_ABI_CALL(0x005F2620u, sub_005F2620); /* call 0x005F2620 */

loc_005266F4: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_005266F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526749; /* jne: not equal / not zero */

loc_005266FD: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 5);
    ecx = MEM32(ecx + 0x2C);
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526718; /* jne: not equal / not zero */

loc_00526715: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00526718: ;
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526781; /* je: equal / zero */

loc_00526725: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052673A; /* je: equal / zero */

loc_00526730: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526736u); RECOMP_ABI_CALL(0x00521F90u, sub_00521F90); /* call 0x00521F90 */

loc_00526736: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_0052673A: ;
    PUSH32(esp, 0);

loc_0052673C: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526745u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_00526745: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_00526749: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526781; /* jne: not equal / not zero */

loc_0052674E: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 5);
    ecx = MEM32(ecx + 0x2C);
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526769; /* jne: not equal / not zero */

loc_00526766: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00526769: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526781; /* je: equal / zero */

loc_00526774: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00526781u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_00526781: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00526790
 * Original: 0x00526790 - 0x005267C1 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526790(void)
{

loc_00526790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526798u); RECOMP_ABI_CALL(0x00516F00u, sub_00516F00); /* call 0x00516F00 */

loc_00526798: ;
    eax = 1;
    MEM32(0x6C293C) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 0xF;
    MEM32(esi + 0x20) = 0x42C80000;
    MEM32(esi) = 0x64A3AC;
    MEM8(esi + 0x24) = 0x2D;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005267D0
 * Original: 0x005267D0 - 0x0052681E (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005267D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005267D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x64A3C0;
    if (CMP_EQ(_fa, _fb)) goto loc_005267EC; /* je: equal / zero */

loc_005267E0: ;
    PUSH32(esp, 0x005267E5u); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_005267E5: ;
    MEM32(esi + 8) = 0;

loc_005267EC: ;
    ecx = esi;
    PUSH32(esp, 0x005267F3u); RECOMP_ABI_CALL(0x005260F0u, sub_005260F0); /* call 0x005260F0 */

loc_005267F3: ;
    MEM32(0x6C293C) = MEM32(0x6C293C) - 1;
    _fa = (uint32_t)(MEM32(0x6C293C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526816; /* jne: not equal / not zero */

loc_005267FB: ;
    ecx = MEM32(0x6C2940);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052680C; /* je: equal / zero */

loc_00526805: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0052680Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526809u); } /* indirect call */
    }

loc_0052680C: ;
    MEM32(0x6C2940) = 0;

loc_00526816: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005171C0(); return; /* tail jmp 0x005171C0 */

}

/**
 * sub_00526820
 * Original: 0x00526820 - 0x0052687A (90 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526820(void)
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

loc_00526820: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526828u); RECOMP_ABI_CALL(0x004BA550u, sub_004BA550); /* call 0x004BA550 */

loc_00526828: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x6C2940);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64A3EC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00526841u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052683Fu); } /* indirect call */
    }

loc_00526841: ;
    MEM32(esi + 8) = eax;
    eax = esi + 0x1C;
    ecx = 2;
    /* nop */

loc_00526850: ;
    MEM32(eax + -8) = 0;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526850; /* jne: not equal / not zero */

loc_00526863: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052686Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526868u); } /* indirect call */
    }

loc_0052686B: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00526880
 * Original: 0x00526880 - 0x005269D4 (340 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526880: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx + 0x1C;
    goto loc_005268A0;

loc_00526897: ;
    ecx = MEM32(esp + 0x10);
    goto loc_005268A0;

    /* nop */

loc_005268A0: ;
    MEM32(ebp + -8) = 0;
    MEM32(ebp) = 0;
    SET_LO8(eax, MEM8(0x6C342D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_005269B7; /* je: equal / zero */

loc_005268BE: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(esi + eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526911; /* je: equal / zero */

loc_005268C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005268D0u); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_005268D0: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A374);
    edx = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005268EAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005268EA: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(edx + esi + 0x10);
    ecx = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052690Bu); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_0052690B: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_00526911: ;
    edx = MEM32(edi + 0x2C);
    eax = MEM32(esi + edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526964; /* je: equal / zero */

loc_0052691C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00526923u); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_00526923: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A374);
    ecx = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052693Du); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052693D: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + esi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x138);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052695Eu); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_0052695E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00526964: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(esi + ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005269B7; /* je: equal / zero */

loc_0052696F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00526976u); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_00526976: ;
    edx = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A374);
    eax = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526990u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00526990: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x2C);
    eax = MEM32(eax + esi + 0x1C);
    edx = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005269B1u); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_005269B1: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_005269B7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00526897; /* jl: less (signed <) */

loc_005269C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005269E0
 * Original: 0x005269E0 - 0x00526A18 (56 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005269E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005269E0: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005269F6; /* jne: not equal / not zero */

loc_005269EC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x005269F3u); RECOMP_ABI_CALL(0x005EE760u, sub_005EE760); /* call 0x005EE760 */

loc_005269F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005269F6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005269FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005269FAu); } /* indirect call */
    }

loc_005269FD: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00526A14u); RECOMP_ABI_CALL(0x00526680u, sub_00526680); /* call 0x00526680 */

loc_00526A14: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526A20
 * Original: 0x00526A20 - 0x00526AD9 (185 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526A20: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526AD5; /* je: equal / zero */

loc_00526A2E: ;
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00526A40; /* jne: not equal / not zero */

loc_00526A3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00526A40: ;
    esi = eax + 1;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(esi + edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526AD4; /* je: equal / zero */

loc_00526A51: ;
    eax = MEM32(ecx + eax * 4 + 0x14);
    PUSH32(esp, ecx);
    esi = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x00526AC2u); RECOMP_ABI_CALL(0x00526190u, sub_00526190); /* call 0x00526190 */

loc_00526AC2: ;
    ecx = MEM32(0x6C263C);
    ecx = MEM32(ecx + 0x430);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526AD4u); RECOMP_ABI_CALL(0x00522890u, sub_00522890); /* call 0x00522890 */

loc_00526AD4: ;
    POP32(esp, esi);

loc_00526AD5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00526AE0
 * Original: 0x00526AE0 - 0x00526B43 (99 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526AE8u); RECOMP_ABI_CALL(0x005173A0u, sub_005173A0); /* call 0x005173A0 */

loc_00526AE8: ;
    MEM32(esi) = 0x64A400;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526B36; /* jne: not equal / not zero */

loc_00526AF7: ;
    PUSH32(esp, 0x2E8);
    PUSH32(esp, 0x64A3F0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00526B08u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00526B08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526B25; /* je: equal / zero */

loc_00526B0F: ;
    ecx = eax;
    PUSH32(esp, 0x00526B16u); RECOMP_ABI_CALL(0x00527EB0u, sub_00527EB0); /* call 0x00527EB0 */

loc_00526B16: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x6C2940);
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00526B25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x6C2940);
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00526B36: ;
    ecx = MEM32(0x6C2940);
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00526B50
 * Original: 0x00526B50 - 0x00526B54 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526B50(void)
{

loc_00526B50: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00526B60
 * Original: 0x00526B60 - 0x00526B67 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526B60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00526B60: ;
    eax = MEM32(ecx + 0x2C);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00526B70
 * Original: 0x00526B70 - 0x00526BA3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526B70: ;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x64A400;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526B9B; /* jne: not equal / not zero */

loc_00526B82: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526B9A; /* je: equal / zero */

loc_00526B8A: ;
    ecx = esi;
    PUSH32(esp, 0x00526B91u); RECOMP_ABI_CALL(0x00527EE0u, sub_00527EE0); /* call 0x00527EE0 */

loc_00526B91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00526B97u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00526B97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526B9A: ;
    POP32(esp, esi);

loc_00526B9B: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_005177E0(); return; /* tail jmp 0x005177E0 */

}

/**
 * sub_00526BB0
 * Original: 0x00526BB0 - 0x00526C00 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526BB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x00526BBEu); RECOMP_ABI_CALL(0x00516FA0u, sub_00516FA0); /* call 0x00516FA0 */

loc_00526BBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526BFB; /* jne: not equal / not zero */

loc_00526BC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x64A3F0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00526BD1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00526BD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526BE3; /* je: equal / zero */

loc_00526BD8: ;
    ecx = eax;
    PUSH32(esp, 0x00526BDFu); RECOMP_ABI_CALL(0x00526AE0u, sub_00526AE0); /* call 0x00526AE0 */

loc_00526BDF: ;
    esi = eax;
    goto loc_00526BE5;

loc_00526BE3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00526BE5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00526BF8u); RECOMP_ABI_CALL(0x00517A00u, sub_00517A00); /* call 0x00517A00 */

loc_00526BF8: ;
    eax = esi;
    POP32(esp, esi);

loc_00526BFB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00526C00
 * Original: 0x00526C00 - 0x00526C87 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526C08u); RECOMP_ABI_CALL(0x005171A0u, sub_005171A0); /* call 0x005171A0 */

loc_00526C08: ;
    MEM32(esi) = 0x64A3C0;
    eax = MEM32(0x6C2940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526C55; /* jne: not equal / not zero */

loc_00526C17: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x644668);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00526C25u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00526C25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526C43; /* je: equal / zero */

loc_00526C2C: ;
    ecx = eax;
    PUSH32(esp, 0x00526C33u); RECOMP_ABI_CALL(0x00526790u, sub_00526790); /* call 0x00526790 */

loc_00526C33: ;
    PUSH32(esp, eax);
    MEM32(0x6C2940) = eax;
    PUSH32(esp, 0x00526C3Eu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00526C3E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00526C5B;

loc_00526C43: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x6C2940) = eax;
    PUSH32(esp, 0x00526C50u); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00526C50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00526C5B;

loc_00526C55: ;
    MEM32(0x6C293C) = MEM32(0x6C293C) + 1;
    _fa = (uint32_t)(MEM32(0x6C293C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00526C5B: ;
    eax = esi + 0x1C;
    ecx = 2;
    goto loc_00526C70;

    /* nop */
    /* nop */

loc_00526C70: ;
    MEM32(eax + -8) = 0;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526C70; /* jne: not equal / not zero */

loc_00526C83: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00526C90
 * Original: 0x00526C90 - 0x00526CAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526C98u); RECOMP_ABI_CALL(0x005267D0u, sub_005267D0); /* call 0x005267D0 */

loc_00526C98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00526CA8; /* je: equal / zero */

loc_00526C9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00526CA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00526CA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526CA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526CB0
 * Original: 0x00526CB0 - 0x00526CCE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00526CB8u); RECOMP_ABI_CALL(0x00526B70u, sub_00526B70); /* call 0x00526B70 */

loc_00526CB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00526CC8; /* je: equal / zero */

loc_00526CBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00526CC5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00526CC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526CC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526CD0
 * Original: 0x00526CD0 - 0x00526DAC (220 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x6796F0);
    esi = ecx;
    PUSH32(esp, 0x00526CDDu); RECOMP_ABI_CALL(0x005EDB00u, sub_005EDB00); /* call 0x005EDB00 */

loc_00526CDD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526CE4u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00526CE4: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00526CEBu); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00526CEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526CF6u); RECOMP_ABI_CALL(0x005EE520u, sub_005EE520); /* call 0x005EE520 */

loc_00526CF6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00526CFDu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00526CFD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526D04u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00526D04: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00526D0Bu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00526D0B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526D12u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00526D12: ;
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526D2F; /* jne: not equal / not zero */

loc_00526D1E: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x00526D2Au); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00526D2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00526D45;

loc_00526D2F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526D36u); RECOMP_ABI_CALL(0x00512BB0u, sub_00512BB0); /* call 0x00512BB0 */

loc_00526D36: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526D42u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00526D42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526D45: ;
    eax = MEM32(0x6C263C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526D85; /* je: equal / zero */

loc_00526D4E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x662E80));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00526D5Cu); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00526D5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526D78; /* jne: not equal / not zero */

loc_00526D64: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    ecx = MEM32(0x6C263C);
    g_seh_ebp = ebp; sub_00517D70(); return; /* tail jmp 0x00517D70 */

loc_00526D78: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526D85u); RECOMP_ABI_CALL(0x00517D70u, sub_00517D70); /* call 0x00517D70 */

loc_00526D85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526DA8; /* jne: not equal / not zero */

loc_00526D8A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00526D91u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00526D91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00526D97u); RECOMP_ABI_CALL(0x005EDBD0u, sub_005EDBD0); /* call 0x005EDBD0 */

loc_00526D97: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00526D9Eu); RECOMP_ABI_CALL(0x005EDC10u, sub_005EDC10); /* call 0x005EDC10 */

loc_00526D9E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00526DA5u); RECOMP_ABI_CALL(0x00512BB0u, sub_00512BB0); /* call 0x00512BB0 */

loc_00526DA5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526DA8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526DB0
 * Original: 0x00526DB0 - 0x00526DFE (78 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00526DB0: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00526DB7u); RECOMP_ABI_CALL(0x005EE4E0u, sub_005EE4E0); /* call 0x005EE4E0 */

loc_00526DB7: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526DC3u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00526DC3: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526DEE; /* jne: not equal / not zero */

loc_00526DCF: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526DDBu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00526DDB: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00526DE2u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00526DE2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00526DEBu); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_00526DEB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526DEE: ;
    PUSH32(esp, 0x00526DF3u); RECOMP_ABI_CALL(0x00512410u, sub_00512410); /* call 0x00512410 */

loc_00526DF3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00526DFAu); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00526DFA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00526E00
 * Original: 0x00526E00 - 0x00526F4A (330 bytes, 108 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526E00: ;
    edx = MEM32(0x6C263C);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x210);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x3D4);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00526F41; /* je: equal / zero */

loc_00526E1E: ;
    SET_LO8(eax, MEM8(edx + 0x214));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526F41; /* je: equal / zero */

loc_00526E2C: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x20 (32-bit) */
    eax = MEM32(ebx + esi * 4 + 0xE54);
    if (CMP_NE(_fa, _fb)) goto loc_00526E67; /* jne: not equal / not zero */

loc_00526E3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00526E60; /* jl: less (signed <) */

loc_00526E3F: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xBB8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + esi * 4 + 0xE58;
    edi = eax + 1;

loc_00526E51: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00526E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526E57u); } /* indirect call */
    }

loc_00526E5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526E51; /* jne: not equal / not zero */

loc_00526E60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00526E67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00526E98; /* jle: less or equal (signed <=) */

loc_00526E6B: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2EE0);
    edi = ecx + ebx + 0xE58;
    ebp = eax;
    /* nop */

loc_00526E80: ;
    ecx = MEM32(edi);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00526E8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526E89u); } /* indirect call */
    }

loc_00526E8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526E80; /* jne: not equal / not zero */

loc_00526E92: ;
    edx = MEM32(0x6C263C);

loc_00526E98: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526E60; /* jne: not equal / not zero */

loc_00526E9F: ;
    eax = MEM32(edx + 0x430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526E60; /* je: equal / zero */

loc_00526EA9: ;
    PUSH32(esp, 0x00526EAEu); RECOMP_ABI_CALL(0x00512410u, sub_00512410); /* call 0x00512410 */

loc_00526EAE: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x00526EB8u); RECOMP_ABI_CALL(0x005AEBA0u, sub_005AEBA0); /* call 0x005AEBA0 */

loc_00526EB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526F29; /* je: equal / zero */

loc_00526EBC: ;
    ebp = MEM32(ebx + esi * 4 + 0x3D38);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00526EFC; /* jle: less or equal (signed <=) */

loc_00526EC7: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xAF0);
    edi = ecx + ebx + 0x3D3C;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_00526EE0: ;
    ecx = MEM32(edi);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00526EEE; /* jne: not equal / not zero */

loc_00526EE9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00526EEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526EEBu); } /* indirect call */
    }

loc_00526EEE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00526EE0; /* jne: not equal / not zero */

loc_00526EFC: ;
    eax = ebp + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00526F29; /* jl: less (signed <) */

loc_00526F03: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2BC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx + esi * 4 + 0x3D3C;
    edi = eax + 1;

loc_00526F15: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526F23; /* je: equal / zero */

loc_00526F1E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00526F23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00526F20u); } /* indirect call */
    }

loc_00526F23: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00526F15; /* jne: not equal / not zero */

loc_00526F29: ;
    ecx = MEM32(0x6C263C);
    ecx = MEM32(ecx + 0x430);
    PUSH32(esp, 0x00526F3Au); RECOMP_ABI_CALL(0x005225C0u, sub_005225C0); /* call 0x005225C0 */

loc_00526F3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00526F41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00517080(); return; /* tail jmp 0x00517080 */

}

/**
 * sub_00526F50
 * Original: 0x00526F50 - 0x005270A5 (341 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00526F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00526F50: ;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x1C;
    goto loc_00526F70;

    /* nop */
    /* nop */

loc_00526F70: ;
    MEM32(ebp + -8) = 0;
    MEM32(ebp) = 0;
    SET_LO8(ecx, MEM8(0x6C342D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esi + 8);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00527088; /* je: equal / zero */

loc_00526F93: ;
    ecx = MEM32(eax + 0x2C);
    edx = MEM32(edi + ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00526FE6; /* je: equal / zero */

loc_00526F9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00526FA5u); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_00526FA5: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A374);
    eax = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00526FBFu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00526FBF: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(edx + edi + 0x10);
    ecx = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00526FDCu); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_00526FDC: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00526FE6: ;
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(edi + edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527039; /* je: equal / zero */

loc_00526FF1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00526FF8u); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_00526FF8: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A374);
    ecx = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00527012u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00527012: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x2C);
    eax = MEM32(eax + edi + 0x18);
    edx = MEM32(esp + 0x134);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052702Fu); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_0052702F: ;
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00527039: ;
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(edi + eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527088; /* je: equal / zero */

loc_00527044: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0052704Bu); RECOMP_ABI_CALL(0x005261A0u, sub_005261A0); /* call 0x005261A0 */

loc_0052704B: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A374);
    edx = esp + 0x28;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00527065u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00527065: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ecx + edi + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x138);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00527082u); RECOMP_ABI_CALL(0x005F2A50u, sub_005F2A50); /* call 0x005F2A50 */

loc_00527082: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00527088: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00526F70; /* jl: less (signed <) */

loc_00527098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005270B0
 * Original: 0x005270B0 - 0x005270FA (74 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005270B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005270B0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005270F9; /* je: equal / zero */

loc_005270B7: ;
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_005270C9; /* jne: not equal / not zero */

loc_005270C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005270C9: ;
    esi = eax + 1;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(esi + edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005270F8; /* je: equal / zero */

loc_005270D6: ;
    eax = MEM32(ecx + eax * 4 + 0x14);
    PUSH32(esp, ecx);
    esi = ecx + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005270E6u); RECOMP_ABI_CALL(0x00526190u, sub_00526190); /* call 0x00526190 */

loc_005270E6: ;
    ecx = MEM32(0x6C263C);
    ecx = MEM32(ecx + 0x430);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005270F8u); RECOMP_ABI_CALL(0x00522890u, sub_00522890); /* call 0x00522890 */

loc_005270F8: ;
    POP32(esp, esi);

loc_005270F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00527100
 * Original: 0x00527100 - 0x005271EE (238 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527100(void)
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

loc_00527100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005271EA; /* je: equal / zero */

loc_0052710E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00527113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00527110u); } /* indirect call */
    }

loc_00527113: ;
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052711Cu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0052711C: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052717C; /* jne: not equal / not zero */

loc_00527128: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005271D7; /* je: equal / zero */

loc_00527133: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 5);
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + 0x2C);
    edx = eax + 1;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052714C; /* jne: not equal / not zero */

loc_00527149: ;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052714C: ;
    esi = MEM32(esi + eax * 4 + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005271EA; /* je: equal / zero */

loc_0052715F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052716D; /* je: equal / zero */

loc_00527163: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00527169u); RECOMP_ABI_CALL(0x00521F90u, sub_00521F90); /* call 0x00521F90 */

loc_00527169: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052716D: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00527178u); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_00527178: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0052717C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005271D0; /* jne: not equal / not zero */

loc_00527181: ;
    edx = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527192; /* jne: not equal / not zero */

loc_00527190: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00527192: ;
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005271EA; /* je: equal / zero */

loc_0052719F: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x85857C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x85857c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_005271EA; /* jp: parity */

loc_005271AF: ;
    edx = MEM32(esi + edx * 4 + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005271C1; /* je: equal / zero */

loc_005271B7: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00521F90(); return; /* tail jmp 0x00521F90 */

loc_005271C1: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005271CCu); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_005271CC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005271D0: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005271EA; /* jne: not equal / not zero */

loc_005271D7: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005271EAu); RECOMP_ABI_CALL(0x00526680u, sub_00526680); /* call 0x00526680 */

loc_005271EA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005271F0
 * Original: 0x005271F0 - 0x00527355 (357 bytes, 140 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_005271F0(void)
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

loc_005271F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x40) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0x44) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 0x48) = edx;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0x4C) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x50) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 0x54) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x58) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x5C) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(edi + 0x60) = edx;
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x64) = eax;
    ecx = MEM32(esi + 0x28);
    MEM32(edi + 0x68) = ecx;
    edx = MEM32(esi + 0x2C);
    MEM32(edi + 0x6C) = edx;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_push(MEMF(esi + 0xC)); /* fld float */
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
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_push(MEMF(esi + 0x18)); /* fld float */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005272BB; /* je: equal / zero */

loc_005272B5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_005272BB: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005272D2; /* je: equal / zero */

loc_005272CA: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_005272D2: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005272DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005272D7u); } /* indirect call */
    }

loc_005272DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    ecx = MEM32(edi + 8);
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x005272E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005272E6u); } /* indirect call */
    }

loc_005272E9: ;
    ecx = edi + 0x34;
    edi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    POP32(esp, edi);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    POP32(esp, esi);
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00527360
 * Original: 0x00527360 - 0x0052736B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527360: ;
    MEM32(ecx) = 0x64A414;
    g_seh_ebp = ebp; sub_00526B70(); return; /* tail jmp 0x00526B70 */

}

/**
 * sub_00527370
 * Original: 0x00527370 - 0x005277D7 (1127 bytes, 306 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00527370(void)
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

loc_00527370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005273AB; /* je: equal / zero */

loc_0052738E: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x30494D43);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052739Cu); RECOMP_ABI_CALL(0x00614EC0u, sub_00614EC0); /* call 0x00614EC0 */

loc_0052739C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_005273AB: ;
    ecx = MEM32(0x67552C);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(0x675530);
    eax = MEM32(0x6754CC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x860220);
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = edx;
    MEM32(0x67552C) = 9;
    MEM32(0x675530) = 8;
    MEM32(esp + 0x2C) = eax;
    MEM32(0x6754CC) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527401u); RECOMP_ABI_CALL(0x006137C0u, sub_006137C0); /* call 0x006137C0 */

loc_00527401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0052742C; /* jne: not equal / not zero */

loc_00527409: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x649E48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527416u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00527416: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6754CC) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0052742C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052743Au); RECOMP_ABI_CALL(0x00616420u, sub_00616420); /* call 0x00616420 */

loc_0052743A: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527450u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00527450: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052770B; /* je: equal / zero */

loc_0052745C: ;
    /* nop */

loc_00527460: ;
    edi = 0x64A3A0;
    esi = esp + 0x40;
    ecx = 0xA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00527485; /* jne: not equal / not zero */

loc_00527474: ;
    ecx = esp + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527480u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00527480: ;
    goto loc_005276E9;

loc_00527485: ;
    edi = 0x64A38C;
    esi = esp + 0x40;
    ecx = 0x11;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_005274F4; /* jne: not equal / not zero */

loc_00527499: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005274AAu); RECOMP_ABI_CALL(0x00615870u, sub_00615870); /* call 0x00615870 */

loc_005274AA: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esp + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005274E9u); RECOMP_ABI_CALL(0x006157F0u, sub_006157F0); /* call 0x006157F0 */

loc_005274E9: ;
    eax = MEM32(esi + 0x2C);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_005276E9;

loc_005274F4: ;
    edi = 0x64A388;
    esi = esp + 0x40;
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
    if ((_flags == 0)) goto loc_005276E9; /* jne: not equal / not zero */

loc_0052750C: ;
    ecx = esp + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527518u); RECOMP_ABI_CALL(0x00615790u, sub_00615790); /* call 0x00615790 */

loc_00527518: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00527539; /* je: equal / zero */

loc_00527523: ;
    PUSH32(esp, 0x64A380);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052752Du); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052752D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527539; /* je: equal / zero */

loc_00527534: ;
    MEM8(esp + 0x13) = 0;

loc_00527539: ;
    PUSH32(esp, 0x63E350);
    ecx = esp + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052754Au); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052754A: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527560u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_00527560: ;
    edi = 0x63E344;
    esi = esp + 0x40;
    ecx = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_005276E9; /* je: equal / zero */

loc_00527578: ;
    goto loc_00527580;

    /* nop */

loc_00527580: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x1E0) = 0;
    ecx = 0x3F;
    edi = esp + 0x1E1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = 0x64A36C;
    esi = esp + 0x40;
    ecx = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00527638; /* jne: not equal / not zero */

loc_005275B3: ;
    SET_LO8(eax, MEM8(0x6C2944));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005275ED; /* jne: not equal / not zero */

loc_005275BC: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005275ED; /* jne: not equal / not zero */

loc_005275CA: ;
    edx = MEM32(0x662E7C);
    MEM32(eax + 0x30) = edx;
    eax = MEM32(0x662E7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    MEM32(0x662E7C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005275ED; /* jne: not equal / not zero */

loc_005275E3: ;
    MEM32(0x662E7C) = 6;

loc_005275ED: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005275EF: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x14);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A374);
    eax = esp + 0x1F0;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527614u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00527614: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x13));
    if (CMP_EQ(_fa, _fb)) goto loc_00527681; /* je: equal / zero */

loc_00527624: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005276BB; /* je: equal / zero */

loc_0052762C: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, 2);
    goto loc_005277BD;

loc_00527638: ;
    edi = 0x64A364;
    esi = esp + 0x40;
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
    if ((_flags == 0)) goto loc_0052773A; /* jne: not equal / not zero */

loc_00527650: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x64A364);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A374);
    edx = esp + 0x1F0;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    esi = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052767Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052767A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052767D: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_00527681: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005276BB; /* je: equal / zero */

loc_00527685: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);
    eax = esp + 0x1E8;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_005276A1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005276A6u); RECOMP_ABI_CALL(0x005F3D00u, sub_005F3D00); /* call 0x005F3D00 */

loc_005276A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005276BB; /* je: equal / zero */

loc_005276AD: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 0x2C);
    edx = esi + ebx * 4 + 4;
    MEM32(ecx + edx * 4) = eax;

loc_005276BB: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005276D1u); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005276D1: ;
    edi = 0x63E344;
    esi = esp + 0x40;
    ecx = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00527580; /* jne: not equal / not zero */

loc_005276E9: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x148;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005276FFu); RECOMP_ABI_CALL(0x00615220u, sub_00615220); /* call 0x00615220 */

loc_005276FF: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527460; /* jne: not equal / not zero */

loc_0052770B: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(0x6754CC) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x67552C) = edx;
    MEM32(0x675530) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00527731u); RECOMP_ABI_CALL(0x00617FB0u, sub_00617FB0); /* call 0x00617FB0 */

loc_00527731: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0052773A: ;
    edi = 0x64A35C;
    esi = esp + 0x40;
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
    if ((_flags == 0)) goto loc_00527758; /* jne: not equal / not zero */

loc_0052774E: ;
    esi = 2;
    goto loc_005275EF;

loc_00527758: ;
    edi = 0x64A350;
    esi = esp + 0x40;
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
    if ((_flags == 0)) goto loc_005276BB; /* jne: not equal / not zero */

loc_00527770: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x14);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A374);
    eax = esp + 0x1F0;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    esi = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0052779Au); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0052779A: ;
    SET_LO8(eax, MEM8(0x6C342D));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052767D; /* je: equal / zero */

loc_005277AA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005276BB; /* je: equal / zero */

loc_005277B6: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0);

loc_005277BD: ;
    edx = MEM32(0x6C263C);
    ecx = esp + 0x1E8;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    goto loc_005276A1;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005277E0
 * Original: 0x005277E0 - 0x00527815 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005277E0(void)
{

loc_005277E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005277E8u); RECOMP_ABI_CALL(0x00516F00u, sub_00516F00); /* call 0x00516F00 */

loc_005277E8: ;
    MEM32(0x6C2948) = 1;
    MEM32(esi + 0x1C) = 0x2F;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x20) = 0x42C80000;
    MEM32(esi) = 0x64A428;
    MEM8(esi + 0x24) = 0x6E;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00527820
 * Original: 0x00527820 - 0x00527873 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527820: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    MEM32(esi) = 0x64A43C;
    PUSH32(esp, 0x00527832u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00527832: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527848; /* je: equal / zero */

loc_0052783C: ;
    PUSH32(esp, 0x00527841u); RECOMP_ABI_CALL(0x005173D0u, sub_005173D0); /* call 0x005173D0 */

loc_00527841: ;
    MEM32(esi + 8) = 0;

loc_00527848: ;
    MEM32(0x6C2948) = MEM32(0x6C2948) - 1;
    _fa = (uint32_t)(MEM32(0x6C2948)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052786B; /* jne: not equal / not zero */

loc_00527850: ;
    ecx = MEM32(0x6C294C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527861; /* je: equal / zero */

loc_0052785A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00527861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052785Eu); } /* indirect call */
    }

loc_00527861: ;
    MEM32(0x6C294C) = 0;

loc_0052786B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005267D0(); return; /* tail jmp 0x005267D0 */

}

/**
 * sub_00527880
 * Original: 0x00527880 - 0x00527884 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527880(void)
{

loc_00527880: ;
    eax = ecx + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00527890
 * Original: 0x00527890 - 0x00527894 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527890(void)
{

loc_00527890: ;
    eax = ecx + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_005278A0
 * Original: 0x005278A0 - 0x005279E1 (321 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005278A0(void)
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

loc_005278A0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x005278AFu); RECOMP_ABI_CALL(0x004BA550u, sub_004BA550); /* call 0x004BA550 */

loc_005278AF: ;
    SET_LO8(eax, MEM8(0x6C342E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x110);
    if (CMP_NE(_fa, _fb)) goto loc_005278FE; /* jne: not equal / not zero */

loc_005278BF: ;
    eax = MEM32(esp + 0x118);
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A49C);
    edx = esp + 0x18;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005278E4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_005278E4: ;
    PUSH32(esp, 0x203);
    eax = esp + 0x24;
    PUSH32(esp, 0x64A488);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005278F8u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_005278F8: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x30) = eax;

loc_005278FE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x6C2944) = LO8(edx);
    SET_LO8(ecx, MEM8(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527924; /* je: equal / zero */

loc_0052790E: ;
    edi = edi;

loc_00527910: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527916; /* jne: not equal / not zero */

loc_00527915: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00527916: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527924; /* je: equal / zero */

loc_0052791B: ;
    SET_LO8(ecx, MEM8(eax + esi + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527910; /* jne: not equal / not zero */

loc_00527924: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527972; /* je: equal / zero */

loc_0052792A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    edi = eax + esi + 1;
    PUSH32(esp, 0x64A480);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052793Cu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0052793C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527967; /* je: equal / zero */

loc_00527943: ;
    PUSH32(esp, 0x64A478);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052794Eu); RECOMP_ABI_CALL(0x0061A460u, sub_0061A460); /* call 0x0061A460 */

loc_0052794E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527967; /* jne: not equal / not zero */

loc_00527955: ;
    PUSH32(esp, 0x64A46C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00527960u); RECOMP_ABI_CALL(0x0061A460u, sub_0061A460); /* call 0x0061A460 */

loc_00527960: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527971; /* je: equal / zero */

loc_00527967: ;
    SET_LO8(eax, 1);
    MEM8(ebp + 0x2C) = LO8(eax);
    MEM8(0x6C2944) = LO8(eax);

loc_00527971: ;
    POP32(esp, edi);

loc_00527972: ;
    ecx = MEM32(0x6C294C);
    eax = MEM32(esp + 0x10C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64A3EC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052798Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00527988u); } /* indirect call */
    }

loc_0052798A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0052799E; /* jne: not equal / not zero */

loc_00527991: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0052799E: ;
    eax = ebp + 0x1C;
    ecx = 2;
    goto loc_005279B0;

    /* nop */
    /* nop */

loc_005279B0: ;
    MEM32(eax + -8) = 0;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005279B0; /* jne: not equal / not zero */

loc_005279C3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x005279CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005279C8u); } /* indirect call */
    }

loc_005279CB: ;
    MEMF(ebp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005279F0
 * Original: 0x005279F0 - 0x00527A0A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005279F0(void)
{

loc_005279F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005279F8u); RECOMP_ABI_CALL(0x00526AE0u, sub_00526AE0); /* call 0x00526AE0 */

loc_005279F8: ;
    MEM32(esi) = 0x64A414;
    eax = MEM32(0x6C294C);
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00527A10
 * Original: 0x00527A10 - 0x00527A2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00527A18u); RECOMP_ABI_CALL(0x00527360u, sub_00527360); /* call 0x00527360 */

loc_00527A18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00527A28; /* je: equal / zero */

loc_00527A1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00527A25u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00527A25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00527A28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00527A30
 * Original: 0x00527A30 - 0x00527A80 (80 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527A30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x00527A3Eu); RECOMP_ABI_CALL(0x00516FA0u, sub_00516FA0); /* call 0x00516FA0 */

loc_00527A3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527A7B; /* jne: not equal / not zero */

loc_00527A42: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x64A488);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00527A51u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00527A51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527A63; /* je: equal / zero */

loc_00527A58: ;
    ecx = eax;
    PUSH32(esp, 0x00527A5Fu); RECOMP_ABI_CALL(0x005279F0u, sub_005279F0); /* call 0x005279F0 */

loc_00527A5F: ;
    esi = eax;
    goto loc_00527A65;

loc_00527A63: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00527A65: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00527A78u); RECOMP_ABI_CALL(0x00517A00u, sub_00517A00); /* call 0x00517A00 */

loc_00527A78: ;
    eax = esi;
    POP32(esp, esi);

loc_00527A7B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00527A80
 * Original: 0x00527A80 - 0x00527B04 (132 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00527A88u); RECOMP_ABI_CALL(0x00526C00u, sub_00526C00); /* call 0x00526C00 */

loc_00527A88: ;
    MEM32(esi) = 0x64A43C;
    eax = MEM32(0x6C294C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00527AEF; /* jne: not equal / not zero */

loc_00527A97: ;
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x644668);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00527AA5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00527AA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527AD0; /* je: equal / zero */

loc_00527AAC: ;
    ecx = eax;
    PUSH32(esp, 0x00527AB3u); RECOMP_ABI_CALL(0x005277E0u, sub_005277E0); /* call 0x005277E0 */

loc_00527AB3: ;
    PUSH32(esp, eax);
    MEM32(0x6C294C) = eax;
    PUSH32(esp, 0x00527ABEu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00527ABE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2C) = 0;
    MEM32(esi + 0x30) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00527AD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x6C294C) = eax;
    PUSH32(esp, 0x00527ADDu); RECOMP_ABI_CALL(0x005170B0u, sub_005170B0); /* call 0x005170B0 */

loc_00527ADD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x2C) = 0;
    MEM32(esi + 0x30) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00527AEF: ;
    MEM32(0x6C2948) = MEM32(0x6C2948) + 1;
    _fa = (uint32_t)(MEM32(0x6C2948)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x2C) = 0;
    MEM32(esi + 0x30) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00527B10
 * Original: 0x00527B10 - 0x00527B2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00527B18u); RECOMP_ABI_CALL(0x00527820u, sub_00527820); /* call 0x00527820 */

loc_00527B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00527B28; /* je: equal / zero */

loc_00527B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00527B25u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00527B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00527B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00527B30
 * Original: 0x00527B30 - 0x00527BF1 (193 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00527B38u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_00527B38: ;
    MEM32(esi) = 0x64A4A4;
    eax = 0x3F800000;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 1;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x2C) = 0x42480000;
    MEM32(esi + 0x30) = 0x42C80000;
    MEM32(esi + 0x40) = 0x43340000;
    MEM8(esi + 0x48) = LO8(edx);
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x68) = eax;
    MEM8(esi + 0x60) = LO8(ecx);
    MEM32(esi + 0x64) = 0x40000000;
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x70) = eax;
    MEM8(esi + 0x80) = LO8(edx);
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0x98) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00527C00
 * Original: 0x00527C00 - 0x00527C06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527C00(void)
{

loc_00527C00: ;
    eax = 0x64A4C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00527C10
 * Original: 0x00527C10 - 0x00527C1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00527C10: ;
    MEM32(ecx) = 0x64A4A4;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00527C20
 * Original: 0x00527C20 - 0x00527CA2 (130 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527C20(void)
{

loc_00527C20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00527C2Fu); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00527C2F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00527C36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00527C33u); } /* indirect call */
    }

loc_00527C36: ;
    eax = esi + 0x1C;
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + 0x70;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;
    edi = eax;
    ebx = MEM32(edi);
    edx = esi + 0x88;
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEM32(edx + 8) = ebx;
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax);
    edx = esi + 0x50;
    MEM32(edx) = edi;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(edx + 8) = edi;
    ecx = 0x3F800000;
    POP32(esp, edi);
    MEM32(edx + 0xC) = eax;
    MEM32(esi + 0x7C) = ecx;
    MEM32(esi + 0x94) = ecx;
    MEM32(esi + 0x5C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00527CB0
 * Original: 0x00527CB0 - 0x00527E81 (465 bytes, 167 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x630CC8);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x00527CCEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527CCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A5B8);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00527CE4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527CE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A5B0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00527CFAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527CFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A5A4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527D10u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A598);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527D26u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D26: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A58C);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x00527D3Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D3C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A580);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527D52u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D52: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A570);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527D68u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A564);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00527D7Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D7E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A558);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527D94u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527D94: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A54C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00527DAAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527DAA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A540);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00527DC0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527DC0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A534);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527DD6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527DD6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A524);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527DECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527DEC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A518);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527E02u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E02: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A50C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00527E18u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A500);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00527E31u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E31: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A4F0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00527E4Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E4A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A4E4);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00527E63u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64A4D0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00527E7Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00527E7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00527E90
 * Original: 0x00527E90 - 0x00527EAE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00527E98u); RECOMP_ABI_CALL(0x00527C10u, sub_00527C10); /* call 0x00527C10 */

loc_00527E98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00527EA8; /* je: equal / zero */

loc_00527E9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00527EA5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00527EA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00527EA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00527EB0
 * Original: 0x00527EB0 - 0x00527ED5 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527EB0: ;
    edx = ecx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 8) = esi;
    MEM32(edx + 4) = esi;
    MEM32(edx) = esi;
    MEM32(edx + 0xC) = esi;
    edi = edx + 0x10;
    ecx = 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx + 0x30) = esi;
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00527EE0
 * Original: 0x00527EE0 - 0x00527F11 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00527EE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x10;
    ebx = 2;
    goto loc_00527EF0;

    /* nop */

loc_00527EF0: ;
    edi = 4;

loc_00527EF5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527F04; /* je: equal / zero */

loc_00527EFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00527F01u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_00527F01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00527F04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00527EF5; /* jne: not equal / not zero */

loc_00527F0A: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00527EF0; /* jne: not equal / not zero */

loc_00527F0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00527F20
 * Original: 0x00527F20 - 0x005280C6 (422 bytes, 139 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00527F20(void)
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

loc_00527F20: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005280BE; /* je: equal / zero */

loc_00527F38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00527F40u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00527F40: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00527F46u); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00527F46: ;
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00527F51u); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00527F51: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00527F5Du); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00527F5D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00527F64u); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00527F64: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00527F6Au); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00527F6A: ;
    eax = MEM32(0x858430);
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x00527F79u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_00527F79: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(0x697B88);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    eax = MEM32(edx + 4);
    eax = eax + ecx + 0x88;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00527FA8; /* jg: greater (signed >) */

loc_00527F9D: ;
    SET_LO8(ecx, MEM8(eax + 0x34));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 0x30) = LO8(ebx);
    if (CMP_A(_fa, _fb)) goto loc_00527FAD; /* ja: above (unsigned >) */

loc_00527FA8: ;
    MEM8(esp + 0x30) = 0;

loc_00527FAD: ;
    edx = MEM32(0x6C3308);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + ecx + 2;
    ebx = ecx;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x00527FCBu); RECOMP_ABI_CALL(0x00517FD0u, sub_00517FD0); /* call 0x00517FD0 */

loc_00527FCB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00527FD4; /* je: equal / zero */

loc_00527FCF: ;
    ebx = 2;

loc_00527FD4: ;
    ecx = MEM32(0x6C263C);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    eax = MEM32(ecx + 0x3D0);
    edx = MEM32(eax + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00528028u); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_00528028: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_005280AF; /* jg: greater (signed >) */

loc_00528047: ;
    edi = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005280A7; /* jg: greater (signed >) */

loc_00528052: ;
    eax = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052809B; /* jle: less or equal (signed <=) */

loc_0052805E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052809B; /* jge: greater or equal (signed >=) */

loc_00528063: ;
    edx = MEM32(esi + 0xC);
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528097; /* je: equal / zero */

loc_0052806D: ;
    /* nop */

loc_00528070: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052808C; /* jne: not equal / not zero */

loc_00528076: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528085; /* je: equal / zero */

loc_0052807E: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052808C; /* jne: not equal / not zero */

loc_00528085: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052808Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00528089u); } /* indirect call */
    }

loc_0052808C: ;
    esi = MEM32(esi + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528070; /* jne: not equal / not zero */

loc_00528093: ;
    ecx = MEM32(esp + 0x10);

loc_00528097: ;
    esi = MEM32(esp + 0x18);

loc_0052809B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00528052; /* jle: less or equal (signed <=) */

loc_005280A3: ;
    eax = MEM32(esp + 0x14);

loc_005280A7: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00528047; /* jle: less or equal (signed <=) */

loc_005280AF: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005280B9u); RECOMP_ABI_CALL(0x005EE1A0u, sub_005EE1A0); /* call 0x005EE1A0 */

loc_005280B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_005280BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005280D0
 * Original: 0x005280D0 - 0x0052810A (58 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005280D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005280D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005280F5; /* je: equal / zero */

loc_005280DA: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_005280EC; /* je: equal / zero */

loc_005280E4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005280EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005280E8u); } /* indirect call */
    }

loc_005280EA: ;
    goto loc_005280F5;

loc_005280EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005280F2u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_005280F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005280F5: ;
    MEM32(esi + 4) = 0;
    MEM16(esi + 8) = 0;
    MEM16(esi + 0xA) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00528110
 * Original: 0x00528110 - 0x0052813A (42 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = ZX16(MEM16(ebx + 8));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00528136; /* jle: less or equal (signed <=) */

loc_0052811F: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00528122: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052812Du); RECOMP_ABI_CALL(0x00529FF0u, sub_00529FF0); /* call 0x00529FF0 */

loc_0052812D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528122; /* jl: less (signed <) */

loc_00528135: ;
    POP32(esp, edi);

loc_00528136: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00528140
 * Original: 0x00528140 - 0x00528273 (307 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528140: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052826B; /* je: equal / zero */

loc_00528153: ;
    eax = MEM32(0x6C263C);
    ecx = MEM32(eax + 0x41C);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebp);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(0x6C263C);
    eax = MEM32(edx + 0x420);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5A);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x64A5C4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0052818Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052818B: ;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00528269; /* jbe: below or equal (unsigned <=) */

loc_005281B5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005281B7: ;
    edx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C263C);
    eax = edx + edi + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x005281DCu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_005281DC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x14));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0052820D; /* js: sign (negative) */

loc_005281F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052820D; /* jge: greater or equal (signed >=) */

loc_005281F5: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx + edi + 0x44) = edx;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + eax * 4) = ecx;

loc_0052820D: ;
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052821F; /* jne: not equal / not zero */

loc_00528213: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052821Fu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052821F: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528232; /* jne: not equal / not zero */

loc_00528225: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00528232u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_00528232: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052823Fu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052823F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052824Cu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052824C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xE);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00528259u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_00528259: ;
    eax = ZX16(MEM16(esi + 8));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005281B7; /* jl: less (signed <) */

loc_00528269: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0052826B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00528280
 * Original: 0x00528280 - 0x00528290 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528280(void)
{

loc_00528280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00528290
 * Original: 0x00528290 - 0x005282B8 (40 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00528290: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebx + 8));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005282B3; /* jle: less or equal (signed <=) */

loc_0052829C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_005282A0: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x005282ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005282A9u); } /* indirect call */
    }

loc_005282AC: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005282A0; /* jne: not equal / not zero */

loc_005282B2: ;
    POP32(esp, esi);

loc_005282B3: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005282C0
 * Original: 0x005282C0 - 0x00528322 (98 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005282C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005282C0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_005282E1; /* je: equal / zero */

loc_005282D2: ;
    eax = eax + eax * 8;
    ecx = ecx + eax * 8;
    PUSH32(esp, 0x005282DDu); RECOMP_ABI_CALL(0x00529F60u, sub_00529F60); /* call 0x00529F60 */

loc_005282DD: ;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

loc_005282E1: ;
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005282EFu); RECOMP_ABI_CALL(0x00529F30u, sub_00529F30); /* call 0x00529F30 */

loc_005282EF: ;
    edx = MEM32(edi + 4);
    eax = edx + esi;
    edx = MEM32(eax + 0x10);
    ecx = eax + 0x20;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052830Eu); RECOMP_ABI_CALL(0x004CF180u, sub_004CF180); /* call 0x004CF180 */

loc_0052830E: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0052831Du); RECOMP_ABI_CALL(0x00529F70u, sub_00529F70); /* call 0x00529F70 */

loc_0052831D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00528330
 * Original: 0x00528330 - 0x00528349 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00528330: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x64A5D8;
    MEM32(eax + 4) = ecx;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00528350
 * Original: 0x00528350 - 0x0052839A (74 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528350: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64A5D8;
    PUSH32(esp, 0x0052835Eu); RECOMP_ABI_CALL(0x005280D0u, sub_005280D0); /* call 0x005280D0 */

loc_0052835E: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528367u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00528367: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528392; /* je: equal / zero */

loc_00528371: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00528389; /* je: equal / zero */

loc_0052837B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00528381u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052837Fu); } /* indirect call */
    }

loc_00528381: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

loc_00528389: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052838Fu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052838F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00528392: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_005283A0
 * Original: 0x005283A0 - 0x005283CC (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005283A0(void)
{

loc_005283A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x005283B5u); RECOMP_ABI_CALL(0x0052A650u, sub_0052A650); /* call 0x0052A650 */

loc_005283B5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x005283C6u); RECOMP_ABI_CALL(0x00528140u, sub_00528140); /* call 0x00528140 */

loc_005283C6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005283D0
 * Original: 0x005283D0 - 0x005283FC (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005283D0(void)
{

loc_005283D0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x005283EAu); RECOMP_ABI_CALL(0x0052A6D0u, sub_0052A6D0); /* call 0x0052A6D0 */

loc_005283EA: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x005283F8u); RECOMP_ABI_CALL(0x00528140u, sub_00528140); /* call 0x00528140 */

loc_005283F8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00528400
 * Original: 0x00528400 - 0x005284D1 (209 bytes, 74 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 1 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005284C9; /* jne: not equal / not zero */

loc_00528413: ;
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0052841Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052841Cu); } /* indirect call */
    }

loc_0052841F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005284C9; /* je: equal / zero */

loc_00528427: ;
    edx = MEM32(ebx + 4);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = edx;
    edx = MEM32(0x6C38B4);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528491; /* jl: less (signed <) */

loc_0052844F: ;
    ecx = esi;
    PUSH32(esp, 0x00528456u); RECOMP_ABI_CALL(0x00529F30u, sub_00529F30); /* call 0x00529F30 */

loc_00528456: ;
    eax = MEM32(0x67967C);
    ecx = MEM32(0x6C38B4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x67967C) = eax;
    edx = MEM32(ecx);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x00528488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00528482u); } /* indirect call */
    }

loc_00528488: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00528491: ;
    ecx = MEM32(0x67967C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(0x67967C) = ecx;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x005284C0u); RECOMP_ABI_CALL(0x005282C0u, sub_005282C0); /* call 0x005282C0 */

loc_005284C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_005284C9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005284E0
 * Original: 0x005284E0 - 0x00528684 (420 bytes, 134 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005284E0(void)
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

loc_005284E0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052867C; /* je: equal / zero */

loc_005284F4: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(0x698624);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x42C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00528516; /* je: equal / zero */

loc_0052850D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    goto loc_0052851A;

loc_00528516: ;
    MEM32(esp + 0x1C) = ebx;

loc_0052851A: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x78);
    ebp = MEM32(ecx + 0x34);
    ecx = MEM32(eax + 0x48);
    ecx = MEM32(ecx + 0x1D0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10 (32-bit) */
    MEM8(esp + 0x34) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00528559; /* je: equal / zero */

loc_00528540: ;
    SET_LO16(esi, MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528559; /* jl: less (signed <) */

loc_0052854A: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x34), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0052867A; /* jne: not equal / not zero */

loc_00528559: ;
    ecx = MEM32(0x697B88);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    ecx = MEM32(ecx + 4);
    esi = MEM32(ecx + 0x4E8);
    ecx = MEM32(edx + esi + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00528580; /* jg: greater (signed >) */

loc_00528576: ;
    _fa = (uint32_t)(MEM8(edx + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x34), LO8(ebx) (8-bit) */
    MEM8(esp + 0x12) = 1;
    if (CMP_A(_fa, _fb)) goto loc_00528584; /* ja: above (unsigned >) */

loc_00528580: ;
    MEM8(esp + 0x12) = LO8(ebx);

loc_00528584: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    ecx = MEM32(0x6C263C);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005285CFu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_005285CF: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + -1;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0052867A; /* jg: greater (signed >) */

loc_005285F2: ;
    ebp = edx + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052866D; /* jg: greater (signed >) */

loc_005285F9: ;
    /* nop */

loc_00528600: ;
    eax = MEM32(edi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00528664; /* js: sign (negative) */

loc_0052860A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00528664; /* jge: greater or equal (signed >=) */

loc_0052860F: ;
    esi = MEM32(edi + 0xC);
    esi = MEM32(esi + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528664; /* je: equal / zero */

loc_00528619: ;
    /* nop */

loc_00528620: ;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x34), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0052862D; /* je: equal / zero */

loc_00528629: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528655; /* jne: not equal / not zero */

loc_0052862D: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528638; /* je: equal / zero */

loc_00528633: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528655; /* jne: not equal / not zero */

loc_00528638: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528642; /* je: equal / zero */

loc_0052863E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528655; /* je: equal / zero */

loc_00528642: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x00528651u); RECOMP_ABI_CALL(0x00528400u, sub_00528400); /* call 0x00528400 */

loc_00528651: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052867A; /* jne: not equal / not zero */

loc_00528655: ;
    esi = MEM32(esi + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528620; /* jne: not equal / not zero */

loc_0052865C: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);

loc_00528664: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00528600; /* jle: less or equal (signed <=) */

loc_00528669: ;
    eax = MEM32(esp + 0x18);

loc_0052866D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_005285F2; /* jle: less or equal (signed <=) */

loc_0052867A: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0052867C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00528690
 * Original: 0x00528690 - 0x005286AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00528690: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00528698u); RECOMP_ABI_CALL(0x00528350u, sub_00528350); /* call 0x00528350 */

loc_00528698: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005286A8; /* je: equal / zero */

loc_0052869F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005286A5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_005286A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005286A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005286B0
 * Original: 0x005286B0 - 0x00528843 (403 bytes, 132 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005286B0(void)
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

loc_005286B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052883B; /* je: equal / zero */

loc_005286C4: ;
    eax = MEM32(0x69585C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 4 + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528839; /* je: equal / zero */

loc_005286D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005286DFu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_005286DF: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x78);
    edx = MEM32(ecx + 0x34);
    ecx = MEM32(eax + 0x48);
    ecx = MEM32(ecx + 0x1D0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x13) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00528721; /* je: equal / zero */

loc_0052870A: ;
    SET_LO16(ebp, MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528721; /* jl: less (signed <) */

loc_00528714: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00528839; /* jne: not equal / not zero */

loc_00528721: ;
    edx = MEM32(0x697B88);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + esi + 0x9C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    ecx = ecx + esi + 0x88;
    if (CMP_G(_fas, _fbs)) goto loc_0052874D; /* jg: greater (signed >) */

loc_00528743: ;
    _fa = (uint32_t)(MEM8(ecx + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x34), LO8(ebx) (8-bit) */
    MEM8(esp + 0x11) = 1;
    if (CMP_A(_fa, _fb)) goto loc_00528751; /* ja: above (unsigned >) */

loc_0052874D: ;
    MEM8(esp + 0x11) = LO8(ebx);

loc_00528751: ;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D51C)); /* fadd dword ptr [0x62d51c] */
    ecx = MEM32(0x6C263C);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052879Cu); RECOMP_ABI_CALL(0x00518FA0u, sub_00518FA0); /* call 0x00518FA0 */

loc_0052879C: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + -1;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00528839; /* jg: greater (signed >) */

loc_005287BB: ;
    goto loc_005287C0;

    /* nop */

loc_005287C0: ;
    ebp = edx + -1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00528830; /* jg: greater (signed >) */

loc_005287C7: ;
    eax = MEM32(edi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_00528827; /* js: sign (negative) */

loc_005287D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00528827; /* jge: greater or equal (signed >=) */

loc_005287D6: ;
    esi = MEM32(edi + 0xC);
    esi = MEM32(esi + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528827; /* je: equal / zero */

loc_005287E0: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_005287ED; /* je: equal / zero */

loc_005287E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528818; /* jne: not equal / not zero */

loc_005287ED: ;
    _fa = (uint32_t)(MEM8(esp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x11), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005287F8; /* je: equal / zero */

loc_005287F3: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528818; /* jne: not equal / not zero */

loc_005287F8: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528802; /* je: equal / zero */

loc_005287FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528818; /* je: equal / zero */

loc_00528802: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00528814u); RECOMP_ABI_CALL(0x00528400u, sub_00528400); /* call 0x00528400 */

loc_00528814: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00528839; /* jne: not equal / not zero */

loc_00528818: ;
    esi = MEM32(esi + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005287E0; /* jne: not equal / not zero */

loc_0052881F: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);

loc_00528827: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005287C7; /* jle: less or equal (signed <=) */

loc_0052882C: ;
    eax = MEM32(esp + 0x18);

loc_00528830: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_005287C0; /* jle: less or equal (signed <=) */

loc_00528839: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0052883B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00528850
 * Original: 0x00528850 - 0x005288A4 (84 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528850: ;
    eax = MEM32(0x6C38B4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00528868; /* jl: less (signed <) */

loc_00528860: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528866u); RECOMP_ABI_CALL(0x005286B0u, sub_005286B0); /* call 0x005286B0 */

loc_00528866: ;
    goto loc_00528885;

loc_00528868: ;
    eax = MEM32(0x6C3304);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00528885; /* jle: less or equal (signed <=) */

loc_00528873: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0052887Bu); RECOMP_ABI_CALL(0x005286B0u, sub_005286B0); /* call 0x005286B0 */

loc_0052887B: ;
    eax = MEM32(0x6C3304);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528873; /* jl: less (signed <) */

loc_00528885: ;
    ecx = MEM32(0x698624);
    esi = MEM32(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0052889B; /* js: sign (negative) */

loc_00528890: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00528898u); RECOMP_ABI_CALL(0x005284E0u, sub_005284E0); /* call 0x005284E0 */

loc_00528898: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00528890; /* jns: not sign (positive) */

loc_0052889B: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00528290(); return; /* tail jmp 0x00528290 */

}

/**
 * sub_005288B0
 * Original: 0x005288B0 - 0x00528951 (161 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005288B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005288B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005288B8u); RECOMP_ABI_CALL(0x005E33D0u, sub_005E33D0); /* call 0x005E33D0 */

loc_005288B8: ;
    eax = 0x3F800000;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi) = 0x64A5F8;
    MEM32(esi + 0x18) = 0x3F400000;
    ecx = 0x40000000;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x84) = 0x3E75C28F;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x88) = ecx;
    MEM32(esi + 0x94) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00528960
 * Original: 0x00528960 - 0x0052896B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00528960: ;
    MEM32(ecx) = 0x64A5F8;
    g_seh_ebp = ebp; sub_005E3280(); return; /* tail jmp 0x005E3280 */

}

/**
 * sub_00528970
 * Original: 0x00528970 - 0x00528AF6 (390 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00528970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A6DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0052898Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0052898E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A6D0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005289A4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005289A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x640268);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005289BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005289BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A6C0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005289D0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005289D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A6AC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005289E6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005289E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A69C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x005289FCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_005289FC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A690);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00528A12u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A12: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A680);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00528A28u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A28: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A670);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00528A3Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x640258);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00528A54u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A660);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00528A6Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x649CE0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528A80u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A650);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528A96u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528A96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6402F0);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528AACu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528AAC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x64A640);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528AC2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528AC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A62C);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528AD8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528AD8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64A618);
    PUSH32(esp, 9);
    ecx = edi;
    PUSH32(esp, 0x00528AF1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00528AF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00528B00
 * Original: 0x00528B00 - 0x00528C50 (336 bytes, 97 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528B00(void)
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

loc_00528B00: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x64A734);
    PUSH32(esp, 0x00528B14u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00528B14: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x64A720);
    MEM32(0x6C2A08) = eax;
    PUSH32(esp, 0x00528B26u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00528B26: ;
    PUSH32(esp, 0x112);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64A714);
    MEM32(0x6C2A0C) = eax;
    PUSH32(esp, 0x00528B3Bu); RECOMP_ABI_CALL(0x005F3E20u, sub_005F3E20); /* call 0x005F3E20 */

loc_00528B3B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6C2A10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00528B50;

    /* nop */
    edi = edi;

loc_00528B50: ;
    PUSH32(esp, 0x81);
    PUSH32(esp, 0x64A704);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x00528B64u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00528B64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528B74; /* je: equal / zero */

loc_00528B6B: ;
    ecx = eax;
    PUSH32(esp, 0x00528B72u); RECOMP_ABI_CALL(0x005288B0u, sub_005288B0); /* call 0x005288B0 */

loc_00528B72: ;
    goto loc_00528B76;

loc_00528B74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00528B76: ;
    MEM32(esi + 0x6C29C8) = eax;
    eax = MEM32(esi + 0x662E88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64A6F8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00528B94u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00528B94: ;
    ecx = MEM32(esi + 0x6C29C8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00528BA7u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_00528BA7: ;
    ecx = MEM32(esi + 0x6C29C8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00528BB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00528BAFu); } /* indirect call */
    }

loc_00528BB2: ;
    ecx = MEM32(esi + 0x662ED0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64A6EC);
    edx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00528BCAu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_00528BCA: ;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528BD7u); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00528BD7: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esi + 0x6C2950) = eax;
    PUSH32(esp, 0x00528BEAu); RECOMP_ABI_CALL(0x005EECE0u, sub_005EECE0); /* call 0x005EECE0 */

loc_00528BEA: ;
    MEM32(esi + 0x6C298C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528B50; /* jl: less (signed <) */

loc_00528BFF: ;
    MEM32(esp + 8) = edi;
    esi = 0x6C2A18;

loc_00528C08: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648164)); /* fmul dword ptr [0x648164] */
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638484)); /* fmul dword ptr [0x638484] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00528C2Fu); RECOMP_ABI_CALL(0x00609A30u, sub_00609A30); /* call 0x00609A30 */

loc_00528C2F: ;
    edx = MEM32(esp + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C2B98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6C2B98 (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00528C08; /* jl: less (signed <) */

loc_00528C43: ;
    POP32(esp, edi);
    MEM8(0x6C2A04) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00528C50
 * Original: 0x00528C50 - 0x00528CC0 (112 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00528C50: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00528C53: ;
    eax = MEM32(esi + 0x6C2950);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528C66; /* je: equal / zero */

loc_00528C5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528C63u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00528C63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00528C66: ;
    eax = MEM32(esi + 0x6C298C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528C79; /* je: equal / zero */

loc_00528C70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528C76u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00528C76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00528C79: ;
    ecx = MEM32(esi + 0x6C29C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00528C89; /* je: equal / zero */

loc_00528C83: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00528C89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00528C87u); } /* indirect call */
    }

loc_00528C89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00528C53; /* jl: less (signed <) */

loc_00528C91: ;
    ecx = MEM32(0x6C2A08);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00528C9Du); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00528C9D: ;
    edx = MEM32(0x6C2A0C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00528CA9u); RECOMP_ABI_CALL(0x005EEE80u, sub_005EEE80); /* call 0x005EEE80 */

loc_00528CA9: ;
    eax = MEM32(0x6C2A10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00528CB4u); RECOMP_ABI_CALL(0x005F3D80u, sub_005F3D80); /* call 0x005F3D80 */

loc_00528CB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x6C2A04) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00528CC0
 * Original: 0x00528CC0 - 0x005291F5 (1333 bytes, 311 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00528CC0(void)
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

loc_00528CC0: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xD0);
    ecx = MEM32(esp + 0xD4);
    edx = MEM32(esp + 0xD8);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(esp + 0xDC);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, ebx);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0xE8);
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0xF0);
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0xF4);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0xF8);
    PUSH32(esp, esi);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x100);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    esi = MEM32(edi * 4 + 0x6C29C8);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x10C);
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(0x85857C);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(0x858578);
    MEM32(esp + 0x88) = edx;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    edx = MEM32(0x858580);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x108)); /* fadd dword ptr [esp + 0x108] */
    MEM32(esp + 0x8C) = eax;
    eax = esp + 0x8C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x114)); /* fadd dword ptr [esp + 0x114] */
    MEM32(esp + 0x90) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x98) = edx;
    PUSH32(esp, 0x00528DB4u); RECOMP_ABI_CALL(0x006084F0u, sub_006084F0); /* call 0x006084F0 */

loc_00528DB4: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00528DBEu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00528DBE: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x68);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x70);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x7C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x84);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x88);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x00528E36u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00528E36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x98;
    PUSH32(esp, 0x00528E45u); RECOMP_ABI_CALL(0x005FB2E0u, sub_005FB2E0); /* call 0x005FB2E0 */

loc_00528E45: ;
    edx = MEM32(esi + 0x58);
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x40) = edx;
    ecx = MEM32(esi + 0x60);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    edx = MEM32(esi + 0x64);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x98) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA4) = eax;
    PUSH32(esp, 0x00528E9Cu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00528E9C: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = ZX8(LO8(eax));
    ebx = ebx | 0xFFFFFF00u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00528EB7u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00528EB7: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D528)); /* fmul dword ptr [0x62d528] */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00528ECEu); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00528ECE: ;
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00528ED9u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_00528ED9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00528EE0u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00528EE0: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x11C)); /* fmul dword ptr [esp + 0x11c] */
    ecx = esp + 0x14;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00528EF9u); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_00528EF9: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x54);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x50);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x58);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x00528F4Bu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00528F4B: ;
    ecx = MEM32(0x6C2A10);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00528F5Fu); RECOMP_ABI_CALL(0x005F25C0u, sub_005F25C0); /* call 0x005F25C0 */

loc_00528F5F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x58);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00528F91u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00528F91: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00528F99u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00528F99: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00528FA0u); RECOMP_ABI_CALL(0x005EE630u, sub_005EE630); /* call 0x005EE630 */

loc_00528FA0: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00528FABu); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00528FAB: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x80);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x90);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x88);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x8C);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x9C);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x94);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x98);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x12C)); /* fmul dword ptr [esp + 0x12c] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052903Cu); RECOMP_ABI_CALL(0x00607C60u, sub_00607C60); /* call 0x00607C60 */

loc_0052903C: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    edx = esp + 0x10;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x5C)); /* fadd dword ptr [esp + 0x5c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052909Cu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0052909C: ;
    eax = MEM32(edi * 4 + 0x6C2950);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005290A9u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_005290A9: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x005290B2u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_005290B2: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x6C);
    MEM32(esp + 0x50) = ecx;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x74);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    PUSH32(esp, 0x005290D8u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_005290D8: ;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2B0) = ebx;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(eax + 8) = ebx;
    edx = 0xBF800000u;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0x3F800000;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = edx;
    MEM32(eax + 8) = ebx;
    ecx = 0x3F800000;
    MEM32(eax + 4) = ecx;
    esi = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = esi;
    eax = MEM32(0x85B2AC);
    MEM32(0x85B2A4) = ebx;
    MEM32(0x85B2B0) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;
    edx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = ebx;
    MEM32(0x85B2B0) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    POP32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(0x85B2AC) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529200
 * Original: 0x00529200 - 0x005294B4 (692 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529200(void)
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

loc_00529200: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x6C29C8);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    ecx = esp + 0x30;
    fp_push(MEMF(0x858548)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x85854C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(0x858558)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x85855C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858560)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x5C)); /* fadd dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x005292B2u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_005292B2: ;
    edx = MEM32(0x6C2A08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x005292BEu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_005292BE: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x005292C7u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_005292C7: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x50);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x54);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x005292EDu); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_005292ED: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(0x85B2B0) = 0;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x85B2A4);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    edx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(eax + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    ecx = MEM32(0x85B2B0);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0x3F800000;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005294C0
 * Original: 0x005294C0 - 0x00529780 (704 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005294C0(void)
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

loc_005294C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x005294D0u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_005294D0: ;
    eax = MEM32(esp + 0x68);
    esi = MEM32(eax * 4 + 0x6C29C8);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    ecx = esp + 0x38;
    fp_push(MEMF(0x858548)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x85854C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858550)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_push(MEMF(0x858558)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x85855C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x858560)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x74)); /* fmul dword ptr [esp + 0x74] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x64)); /* fadd dword ptr [esp + 0x64] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x70)); /* fadd dword ptr [esp + 0x70] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052957Eu); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_0052957E: ;
    edx = MEM32(0x6C2A0C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052958Au); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_0052958A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00529593u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_00529593: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    edx = MEM32(esi + 0x40);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x44);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x005295B9u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_005295B9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEM32(0x85B2A4) = 0;
    MEM32(0x85B2B0) = 0;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(0x85B2AC);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(0x85B2A4);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEM32(0x85B2A4) = 0;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    edx = MEM32(0x85B2A4);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(eax + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    ecx = MEM32(0x85B2B0);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = eax;
    MEM32(0x85B2A4) = 0x3F800000;
    MEM32(0x85B2B0) = 0;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(0x85B2AC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEM32(0x85B2A4) = 0x3F800000;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(0x85B2B0) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    POP32(esp, esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529780
 * Original: 0x00529780 - 0x00529AA4 (804 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529780(void)
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

loc_00529780: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x6C29C8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00529799u); RECOMP_ABI_CALL(0x005EDB20u, sub_005EDB20); /* call 0x005EDB20 */

loc_00529799: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x005297A0u); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_005297A0: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 6);
    PUSH32(esp, 0x005297A9u); RECOMP_ABI_CALL(0x005FB070u, sub_005FB070); /* call 0x005FB070 */

loc_005297A9: ;
    eax = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x78);
    ecx = MEM32(esi + 0x80);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x84);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x005297D5u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_005297D5: ;
    eax = MEM32(0x85B2AC);
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0x3DCCCCCD;
    MEM32(eax + 8) = 0;
    ecx = MEM32(0x85B2C0);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x85B2A4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x85B2B0);
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x85B2AC) = MEM32(0x85B2AC) + 0x18;
    _fa = (uint32_t)(MEM32(0x85B2AC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x8C);
    edx = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x90);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x94);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x00529842u); RECOMP_ABI_CALL(0x0045F8D0u, sub_0045F8D0); /* call 0x0045F8D0 */

loc_00529842: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x6C2A1C;
    /* nop */

loc_00529850: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x85B2AC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + 0x10)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + 0x34)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + -32)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + -36)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + -40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + -20)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + -24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    fp_push(MEMF(eax + -8)); /* fld float */
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x85B2AC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D370)); /* fadd dword ptr [0x62d370] */
    fp_push(MEMF(eax + -16)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x85B2C0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x85B2A4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(0x85B2B0);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(0x85B2AC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C2B9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C2B9C (32-bit) */
    MEM32(0x85B2AC) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00529850; /* jl: less (signed <) */

loc_00529A9B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005FB150(); return; /* tail jmp 0x005FB150 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529AB0
 * Original: 0x00529AB0 - 0x00529B3B (139 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi * 4 + 0x6C298C);
    ebx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 8));
    PUSH32(esp, 8);
    PUSH32(esp, 0x00529ACDu); RECOMP_ABI_CALL(0x005EE1E0u, sub_005EE1E0); /* call 0x005EE1E0 */

loc_00529ACD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00529AD4u); RECOMP_ABI_CALL(0x005EE4A0u, sub_005EE4A0); /* call 0x005EE4A0 */

loc_00529AD4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00529ADBu); RECOMP_ABI_CALL(0x005EE130u, sub_005EE130); /* call 0x005EE130 */

loc_00529ADB: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00529AE7u); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00529AE7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00529AF0u); RECOMP_ABI_CALL(0x005EE5A0u, sub_005EE5A0); /* call 0x005EE5A0 */

loc_00529AF0: ;
    eax = MEM32(esi * 4 + 0x6C298C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00529AFDu); RECOMP_ABI_CALL(0x005EE920u, sub_005EE920); /* call 0x005EE920 */

loc_00529AFD: ;
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00529B10u); RECOMP_ABI_CALL(0x0044F880u, sub_0044F880); /* call 0x0044F880 */

loc_00529B10: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edx = eax + ecx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00529B34u); RECOMP_ABI_CALL(0x005EF6F0u, sub_005EF6F0); /* call 0x005EF6F0 */

loc_00529B34: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00529B40
 * Original: 0x00529B40 - 0x00529B5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00529B48u); RECOMP_ABI_CALL(0x00528960u, sub_00528960); /* call 0x00528960 */

loc_00529B48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00529B58; /* je: equal / zero */

loc_00529B4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00529B55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00529B55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00529B58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00529B60
 * Original: 0x00529B60 - 0x00529D27 (455 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00529B6Au); RECOMP_ABI_CALL(0x005EDF80u, sub_005EDF80); /* call 0x005EDF80 */

loc_00529B6A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00529B71u); RECOMP_ABI_CALL(0x005EE3E0u, sub_005EE3E0); /* call 0x005EE3E0 */

loc_00529B71: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00529B7Du); RECOMP_ABI_CALL(0x005EE220u, sub_005EE220); /* call 0x005EE220 */

loc_00529B7D: ;
    esi = MEM32(esp + 0x58);
    edi = MEM32(esp + 0x54);
    ebx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    PUSH32(esp, 0x00529BECu); RECOMP_ABI_CALL(0x005294C0u, sub_005294C0); /* call 0x005294C0 */

loc_00529BEC: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    PUSH32(esp, 0x00529C4Fu); RECOMP_ABI_CALL(0x00528CC0u, sub_00528CC0); /* call 0x00528CC0 */

loc_00529C4F: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    PUSH32(esp, 0x00529CB2u); RECOMP_ABI_CALL(0x00529200u, sub_00529200); /* call 0x00529200 */

loc_00529CB2: ;
    SET_LO8(eax, MEM8(esp + 0x88));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00529D23; /* je: equal / zero */

loc_00529CC0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    PUSH32(esp, 0x00529D20u); RECOMP_ABI_CALL(0x00529780u, sub_00529780); /* call 0x00529780 */

loc_00529D20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00529D23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00529D30
 * Original: 0x00529D30 - 0x00529D86 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00529D3Bu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00529D3B: ;
    eax = MEM32(esp + 0xC);
    MEM16(esi + 6) = LO16(eax);
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ZX16(LO16(eax));
    PUSH32(esp, 0x1D);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x64A7F4);
    PUSH32(esp, ecx);
    MEM16(esi + 4) = LO16(eax);
    PUSH32(esp, 0x00529D60u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00529D60: ;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00529D82; /* jbe: below or equal (unsigned <=) */

loc_00529D6D: ;
    /* nop */

loc_00529D70: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = 0;
    ecx = ZX16(MEM16(esi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00529D70; /* jb: below (unsigned <) */

loc_00529D82: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00529D90
 * Original: 0x00529D90 - 0x00529DA5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529D90(void)
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

loc_00529D90: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x8602E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x8602e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00529DA2; /* jp: parity */

loc_00529D9F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00529DA2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529DB0
 * Original: 0x00529DB0 - 0x00529DBC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00529DB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00529DB0: ;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529DC0
 * Original: 0x00529DC0 - 0x00529DDE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64A814;
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00529DD2u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00529DD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00529DE0
 * Original: 0x00529DE0 - 0x00529DF5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00529DE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00529DE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529E00
 * Original: 0x00529E00 - 0x00529E43 (67 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529E00: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(esp + 4);
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00529E28; /* je: equal / zero */

loc_00529E13: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

loc_00529E28: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00529E50
 * Original: 0x00529E50 - 0x00529E87 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00529E50: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00529E71; /* je: equal / zero */

loc_00529E5A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00529E86; /* jne: not equal / not zero */

loc_00529E5F: ;
    ecx = edx + 0x18;
    PUSH32(esp, 0x00529E67u); RECOMP_ABI_CALL(0x00529DB0u, sub_00529DB0); /* call 0x00529DB0 */

loc_00529E67: ;
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00529E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00529E6Du); } /* indirect call */
    }

loc_00529E70: ;
    esp += 4; return; /* ret */

loc_00529E71: ;
    ecx = edx + 0x18;
    PUSH32(esp, 0x00529E79u); RECOMP_ABI_CALL(0x00529D90u, sub_00529D90); /* call 0x00529D90 */

loc_00529E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00529E86; /* je: equal / zero */

loc_00529E7D: ;
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00529E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00529E83u); } /* indirect call */
    }

loc_00529E86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00529E90
 * Original: 0x00529E90 - 0x00529F17 (135 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529E90(void)
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

loc_00529E90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(edx + 0x38)); /* fld float */
    eax = MEM32(edx + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x6C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00529F11; /* jne: not equal / not zero */

loc_00529EB4: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00529F11; /* jne: not equal / not zero */

loc_00529EC4: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x34)); /* fsub dword ptr [edx + 0x34] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x3C)); /* fsub dword ptr [edx + 0x3c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00529F11; /* jp: parity */

loc_00529EE8: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00529F11; /* jne: not equal / not zero */

loc_00529F0B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00529F11: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529F20
 * Original: 0x00529F20 - 0x00529F2A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F20(void)
{

loc_00529F20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00529F30
 * Original: 0x00529F30 - 0x00529F5A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F30(void)
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

loc_00529F30: ;
    edx = ecx;
    ecx = edx + 0x18;
    PUSH32(esp, 0x00529F3Au); RECOMP_ABI_CALL(0x00529DB0u, sub_00529DB0); /* call 0x00529DB0 */

loc_00529F3A: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    ecx = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(edx);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00529F54; /* jp: parity */

loc_00529F4E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00529F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00529F50u); } /* indirect call */
    }

loc_00529F53: ;
    esp += 4; return; /* ret */

loc_00529F54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00529F59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00529F56u); } /* indirect call */
    }

loc_00529F59: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00529F60
 * Original: 0x00529F60 - 0x00529F68 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F60(void)
{

loc_00529F60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00529F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00529F64u); } /* indirect call */
    }

loc_00529F67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00529F70
 * Original: 0x00529F70 - 0x00529FDD (109 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00529F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0x3E));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00529F8A; /* jle: less or equal (signed <=) */

loc_00529F81: ;
    eax = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    goto loc_00529F8C;

loc_00529F8A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00529F8C: ;
    ebp = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00529FBA; /* jge: greater or equal (signed >=) */

loc_00529F95: ;
    ebx = MEM32(ecx + 0x38);

loc_00529F98: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = 1;
    ecx = edx;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ebx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + edx * 4), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00529FC9; /* jne: not equal / not zero */

loc_00529FB1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00529F98; /* jl: less (signed <) */

loc_00529FB6: ;
    ecx = MEM32(esp + 0x10);

loc_00529FBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x10) = 0x10;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00529FC9: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(ecx + 0x10) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00529FE0
 * Original: 0x00529FE0 - 0x00529FEF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00529FE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005D8830(); return; /* tail jmp 0x005D8830 */

}

/**
 * sub_00529FF0
 * Original: 0x00529FF0 - 0x0052A010 (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00529FF0(void)
{

loc_00529FF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00529FFDu); RECOMP_ABI_CALL(0x00529F70u, sub_00529F70); /* call 0x00529F70 */

loc_00529FFD: ;
    ecx = esi + 0x18;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x0052A00Cu); RECOMP_ABI_CALL(0x00529DB0u, sub_00529DB0); /* call 0x00529DB0 */

loc_0052A00C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A010
 * Original: 0x0052A010 - 0x0052A063 (83 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052A010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x38;
    PUSH32(esp, 0xF);
    ecx = edi;
    MEM8(esi + 8) = 1;
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(ebx);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM32(esi + 0xC) = 0xBF800000u;
    PUSH32(esp, 0x0052A037u); RECOMP_ABI_CALL(0x00529D30u, sub_00529D30); /* call 0x00529D30 */

loc_0052A037: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0052A04E; /* jbe: below or equal (unsigned <=) */

loc_0052A03F: ;
    /* nop */

loc_0052A040: ;
    ecx = MEM32(edi);
    MEM32(ecx + eax * 4) = ebx;
    edx = ZX16(MEM16(edi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0052A040; /* jb: below (unsigned <) */

loc_0052A04E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0052A056u); RECOMP_ABI_CALL(0x00529DE0u, sub_00529DE0); /* call 0x00529DE0 */

loc_0052A056: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052A05Cu); RECOMP_ABI_CALL(0x00529FF0u, sub_00529FF0); /* call 0x00529FF0 */

loc_0052A05C: ;
    POP32(esp, edi);
    MEM8(esi + 0x41) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A070
 * Original: 0x0052A070 - 0x0052A169 (249 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A070(void)
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

loc_0052A070: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052A163; /* jge: greater or equal (signed >=) */

loc_0052A081: ;
    eax = esi + 0x20;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x78) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x80) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x7C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0052A10D; /* jne: not equal / not zero */

loc_0052A0A6: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62FDF4)); /* fmul dword ptr [0x62fdf4] */
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    fp_push(MEMF(eax + 8)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    edx = esp + 0x30;
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x40) = LO8(ebx);
    ecx = MEM32(0x6C8EB8);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    edx = esp + 0x18;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x18) = ebx;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0052A101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A0FBu); } /* indirect call */
    }

loc_0052A101: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0052A10A; /* je: equal / zero */

loc_0052A107: ;
    MEM8(esi + 0x40) = LO8(ecx);

loc_0052A10A: ;
    MEM8(esi + 0x41) = LO8(ecx);

loc_0052A10D: ;
    edx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x40));
    ecx = 0x3F800000;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x8C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0xB8);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0xC0);
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x2C) = ecx;
    PUSH32(esp, 0x0052A160u); RECOMP_ABI_CALL(0x00529B60u, sub_00529B60); /* call 0x00529B60 */

loc_0052A160: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A163: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052A170
 * Original: 0x0052A170 - 0x0052A195 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052A170: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x18;
    MEM32(esi) = 0x64A814;
    PUSH32(esp, 0x0052A181u); RECOMP_ABI_CALL(0x00451050u, sub_00451050); /* call 0x00451050 */

loc_0052A181: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x38) = eax;
    MEM16(esi + 0x3C) = LO16(eax);
    PUSH32(esp, 0x0052A191u); RECOMP_ABI_CALL(0x0052A010u, sub_0052A010); /* call 0x0052A010 */

loc_0052A191: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052A1A0
 * Original: 0x0052A1A0 - 0x0052A1F0 (80 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052A1A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(edi + 4));
    esi = ecx;
    MEM16(esi + 4) = LO16(eax);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0x24);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x64A7F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052A1C3u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052A1C3: ;
    MEM32(esi) = eax;
    SET_LO16(ecx, MEM16(edi + 6));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(eax) (16-bit) */
    MEM16(esi + 6) = LO16(ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0052A1EB; /* jbe: below or equal (unsigned <=) */

loc_0052A1D8: ;
    edx = MEM32(edi);
    ecx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = ZX16(MEM16(esi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052A1D8; /* jl: less (signed <) */

loc_0052A1EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A1F0
 * Original: 0x0052A1F0 - 0x0052A315 (293 bytes, 106 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A1F0(void)
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

loc_0052A1F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6422DC);
    ecx = esi;
    PUSH32(esp, 0x0052A204u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A204: ;
    ebp = MEM32(esp + 0x14);
    eax = MEM32(esi);
    ecx = ebp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0052A213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A210u); } /* indirect call */
    }

loc_0052A213: ;
    PUSH32(esp, 0x64A9C0);
    ecx = esi;
    PUSH32(esp, 0x0052A21Fu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A21F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0052A226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A223u); } /* indirect call */
    }

loc_0052A226: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052A231u); RECOMP_ABI_CALL(0x00529DE0u, sub_00529DE0); /* call 0x00529DE0 */

loc_0052A231: ;
    PUSH32(esp, 0x64A9B8);
    ecx = esi;
    PUSH32(esp, 0x0052A23Du); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A23D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0052A244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A241u); } /* indirect call */
    }

loc_0052A244: ;
    MEMF(ebp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x64A9AC);
    ecx = esi;
    PUSH32(esp, 0x0052A253u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A253: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052A257: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052A282; /* jge: greater or equal (signed >=) */

loc_0052A25C: ;
    ecx = MEM32(edi * 4 + 0x662F14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052A26Du); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052A26D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A27B; /* je: equal / zero */

loc_0052A271: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0052A279u); RECOMP_ABI_CALL(0x005D8830u, sub_005D8830); /* call 0x005D8830 */

loc_0052A279: ;
    SET_LO8(ebx, 1);

loc_0052A27B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A257; /* je: equal / zero */

loc_0052A280: ;
    goto loc_0052A293;

loc_0052A282: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052A293; /* jne: not equal / not zero */

loc_0052A286: ;
    PUSH32(esp, 0x64A994);
    PUSH32(esp, 0x0052A290u); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0052A290: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A293: ;
    PUSH32(esp, 0x64A988);
    ecx = esi;
    PUSH32(esp, 0x0052A29Fu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A29F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052A2A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A2A3u); } /* indirect call */
    }

loc_0052A2A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 1);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, 0x64A978);
    ecx = esi;
    MEM8(ebp + 8) = LO8(eax);
    PUSH32(esp, 0x0052A2BCu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0052A2BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A2CF; /* je: equal / zero */

loc_0052A2C0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052A2C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A2C4u); } /* indirect call */
    }

loc_0052A2C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(ebp + 0xA) = LO8(eax);

loc_0052A2CF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64A968);
    ecx = esi;
    PUSH32(esp, 0x0052A2DDu); RECOMP_ABI_CALL(0x00615580u, sub_00615580); /* call 0x00615580 */

loc_0052A2DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A2F0; /* je: equal / zero */

loc_0052A2E1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0052A2E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A2E5u); } /* indirect call */
    }

loc_0052A2E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(ebp + 0xB) = LO8(eax);

loc_0052A2F0: ;
    PUSH32(esp, 0x64A958);
    ecx = esi;
    PUSH32(esp, 0x0052A2FCu); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A2FC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0052A303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A300u); } /* indirect call */
    }

loc_0052A303: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052A30Eu); RECOMP_ABI_CALL(0x00529FE0u, sub_00529FE0); /* call 0x00529FE0 */

loc_0052A30E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052A320
 * Original: 0x0052A320 - 0x0052A3D0 (176 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A320: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0x64AA04);
    ecx = ebx;
    PUSH32(esp, 0x0052A331u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A331: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052A338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A335u); } /* indirect call */
    }

loc_0052A338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0052A3CC; /* jle: less or equal (signed <=) */

loc_0052A344: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63E350);
    ecx = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0052A355u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052A355: ;
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0052A360;

    /* nop */

loc_0052A360: ;
    ecx = MEM32(esi * 4 + 0x662E88);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0052A371u); RECOMP_ABI_CALL(0x006154D0u, sub_006154D0); /* call 0x006154D0 */

loc_0052A371: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A3A0; /* je: equal / zero */

loc_0052A375: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052A380; /* jne: not equal / not zero */

loc_0052A37A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_0052A398;

loc_0052A380: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052A38B; /* jne: not equal / not zero */

loc_0052A385: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    goto loc_0052A398;

loc_0052A38B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052A395; /* jne: not equal / not zero */

loc_0052A390: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    goto loc_0052A398;

loc_0052A395: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);

loc_0052A398: ;
    ecx = edi;
    PUSH32(esp, 0x0052A39Fu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A39F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052A3A0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0052A360; /* jl: less (signed <) */

loc_0052A3A6: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A3BD; /* je: equal / zero */

loc_0052A3AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x64A9C8);
    PUSH32(esp, 0x0052A3BAu); RECOMP_ABI_CALL(0x006186B0u, sub_006186B0); /* call 0x006186B0 */

loc_0052A3BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A3BD: ;
    PUSH32(esp, 0x63E344);
    ecx = ebx;
    PUSH32(esp, 0x0052A3C9u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052A3C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0052A3CC: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052A3D0
 * Original: 0x0052A3D0 - 0x0052A47C (172 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    SET_LO8(ecx, MEM8(edi + 8));
    MEM8(esi + 8) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 9));
    MEM8(esi + 9) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0xA));
    MEM8(esi + 0xA) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0xB));
    MEM8(esi + 0xB) = LO8(ecx);
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = edi + 0x20;
    eax = MEM32(ecx);
    edx = esi + 0x20;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(edi + 0x2C);
    MEM32(esi + 0x2C) = edx;
    eax = MEM32(edi + 0x30);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 0x34);
    ebp = edi + 0x38;
    ebx = esi + 0x38;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esi + 0x34) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052A461; /* je: equal / zero */

loc_0052A448: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052A450u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052A450: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x0052A461u); RECOMP_ABI_CALL(0x0052A1A0u, sub_0052A1A0); /* call 0x0052A1A0 */

loc_0052A461: ;
    SET_LO8(eax, MEM8(edi + 0x40));
    MEM8(esi + 0x40) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x41));
    MEM8(esi + 0x41) = LO8(ecx);
    edx = MEM32(edi + 0x44);
    POP32(esp, edi);
    MEM32(esi + 0x44) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A480
 * Original: 0x0052A480 - 0x0052A4DF (95 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052A480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x64AA14);
    ecx = esi;
    PUSH32(esp, 0x0052A495u); RECOMP_ABI_CALL(0x00615470u, sub_00615470); /* call 0x00615470 */

loc_0052A495: ;
    PUSH32(esp, 0x63E350);
    ecx = esi;
    PUSH32(esp, 0x0052A4A1u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052A4A1: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0052A4AEu); RECOMP_ABI_CALL(0x0052A1F0u, sub_0052A1F0); /* call 0x0052A1F0 */

loc_0052A4AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0052A4B7u); RECOMP_ABI_CALL(0x0052A320u, sub_0052A320); /* call 0x0052A320 */

loc_0052A4B7: ;
    PUSH32(esp, 0x63E344);
    ecx = esi;
    PUSH32(esp, 0x0052A4C3u); RECOMP_ABI_CALL(0x006153E0u, sub_006153E0); /* call 0x006153E0 */

loc_0052A4C3: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0052A4DA; /* jne: not equal / not zero */

loc_0052A4CD: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A4DA; /* je: equal / zero */

loc_0052A4D5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0052A4DA: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0052A4E0
 * Original: 0x0052A4E0 - 0x0052A5A2 (194 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A4E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0052A526; /* jle: less or equal (signed <=) */

loc_0052A4F0: ;
    PUSH32(esp, 0x77);
    eax = ebp + ebp * 8;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0x63E2E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0052A508u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052A508: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A524; /* je: equal / zero */

loc_0052A50F: ;
    PUSH32(esp, 0x52A170);
    PUSH32(esp, ebp);
    ebx = eax + 4;
    PUSH32(esp, 0x48);
    PUSH32(esp, ebx);
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0052A522u); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_0052A522: ;
    goto loc_0052A526;

loc_0052A524: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052A526: ;
    eax = ZX16(MEM16(edi + 4));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052A536; /* jge: greater or equal (signed >=) */

loc_0052A52E: ;
    eax = ebp;
    MEM32(esp + 0x14) = eax;
    goto loc_0052A53A;

loc_0052A536: ;
    MEM32(esp + 0x14) = eax;

loc_0052A53A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052A565; /* jle: less or equal (signed <=) */

loc_0052A53E: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;

loc_0052A545: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + ebx;
    PUSH32(esp, 0x0052A552u); RECOMP_ABI_CALL(0x0052A3D0u, sub_0052A3D0); /* call 0x0052A3D0 */

loc_0052A552: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0052A545; /* jne: not equal / not zero */

loc_0052A560: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);

loc_0052A565: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM16(edi + 6) = LO16(ebp);
    MEM16(edi + 4) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0052A597; /* je: equal / zero */

loc_0052A573: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_0052A58E; /* je: equal / zero */

loc_0052A57D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052A583u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A581u); } /* indirect call */
    }

loc_0052A583: ;
    MEM32(edi) = ebx;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0052A58E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052A594u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052A594: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A597: ;
    MEM32(edi) = ebx;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A5B0
 * Original: 0x0052A5B0 - 0x0052A611 (97 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A5B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0052A5F5; /* je: equal / zero */

loc_0052A5BD: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    ecx = eax + eax * 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_0052A5DF; /* js: sign (negative) */

loc_0052A5CD: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_0052A5D1: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0052A5DBu); RECOMP_ABI_CALL(0x00529DC0u, sub_00529DC0); /* call 0x00529DC0 */

loc_0052A5DB: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052A5D1; /* jne: not equal / not zero */

loc_0052A5DE: ;
    POP32(esp, edi);

loc_0052A5DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052A5ED; /* je: equal / zero */

loc_0052A5E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052A5EAu); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_0052A5EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A5ED: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0052A5F5: ;
    ecx = esi;
    PUSH32(esp, 0x0052A5FCu); RECOMP_ABI_CALL(0x00529DC0u, sub_00529DC0); /* call 0x00529DC0 */

loc_0052A5FC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052A60A; /* je: equal / zero */

loc_0052A601: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052A607u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052A607: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A60A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052A620
 * Original: 0x0052A620 - 0x0052A645 (37 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052A620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx) = esi;
    eax = ZX16(MEM16(esi + 4));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052A63C; /* jle: less or equal (signed <=) */

loc_0052A634: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0052A63Cu); RECOMP_ABI_CALL(0x0052A4E0u, sub_0052A4E0); /* call 0x0052A4E0 */

loc_0052A63C: ;
    MEM16(esi + 4) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052A650
 * Original: 0x0052A650 - 0x0052A6D0 (128 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052A650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0052A65Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A65Au); } /* indirect call */
    }

loc_0052A65D: ;
    ecx = MEM32(esp + 0x10);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0052A66Cu); RECOMP_ABI_CALL(0x0052A620u, sub_0052A620); /* call 0x0052A620 */

loc_0052A66C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A6C9; /* je: equal / zero */

loc_0052A670: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052A6AE; /* jle: less or equal (signed <=) */

loc_0052A677: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    edi = edi;

loc_0052A680: ;
    ecx = MEM32(0x6C32E4);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esi);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0052A69Fu); RECOMP_ABI_CALL(0x0052A480u, sub_0052A480); /* call 0x0052A480 */

loc_0052A69F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A6A7; /* je: equal / zero */

loc_0052A6A3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A6A7: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052A680; /* jne: not equal / not zero */

loc_0052A6AD: ;
    POP32(esp, edi);

loc_0052A6AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A6C8; /* je: equal / zero */

loc_0052A6B2: ;
    esi = MEM32(esi);
    eax = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052A6C4; /* jle: less or equal (signed <=) */

loc_0052A6BC: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0052A6C4u); RECOMP_ABI_CALL(0x0052A4E0u, sub_0052A4E0); /* call 0x0052A4E0 */

loc_0052A6C4: ;
    MEM16(esi + 4) = LO16(ebp);

loc_0052A6C8: ;
    POP32(esp, ebp);

loc_0052A6C9: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052A6D0
 * Original: 0x0052A6D0 - 0x0052AA60 (912 bytes, 268 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052A6D0(void)
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

loc_0052A6D0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA0);
    esi = edi + edi * 4;
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x4C) = esi;
    PUSH32(esp, 0x0052A6FCu); RECOMP_ABI_CALL(0x0052A620u, sub_0052A620); /* call 0x0052A620 */

loc_0052A6FC: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AA51; /* je: equal / zero */

loc_0052A706: ;
    ecx = MEM32(0x697B88);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052A718u); RECOMP_ABI_CALL(0x0053D6C0u, sub_0053D6C0); /* call 0x0053D6C0 */

loc_0052A718: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0052AA37; /* jle: less or equal (signed <=) */

loc_0052A73B: ;
    ebx = MEM32(esp + 0xA4);

loc_0052A742: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AA22; /* je: equal / zero */

loc_0052A74A: ;
    fp_push(MEMF(ebx + 0x104)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62E2B0)); /* fsub dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63030C)); /* fmul dword ptr [0x63030c] */
    PUSH32(esp, 0x0052A761u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_0052A761: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052A76F; /* jge: greater or equal (signed >=) */

loc_0052A768: ;
    esi = 1;
    goto loc_0052A779;

loc_0052A76F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052A779; /* jle: less or equal (signed <=) */

loc_0052A774: ;
    esi = 5;

loc_0052A779: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A7C9; /* je: equal / zero */

loc_0052A781: ;
    edx = MEM32(esp + 0x14);
    ecx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = ebx + 0x114;
    if (CMP_NE(_fa, _fb)) goto loc_0052A798; /* jne: not equal / not zero */

loc_0052A792: ;
    eax = ebx + -276;

loc_0052A798: ;
    fp_push(MEMF(eax + 0xF0)); /* fld float */
    ecx = esp + 0x2C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0xF0)); /* fsub dword ptr [ebx + 0xf0] */
    MEM32(esp + 0x30) = 0;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0xF8)); /* fsub dword ptr [ebx + 0xf8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052A7C9u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_0052A7C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052AA18; /* jle: less or equal (signed <=) */

loc_0052A7D1: ;
    edx = esi + esi * 4;
    eax = edx * 8 + 0x64A86C;
    ecx = esi + esi * 4;
    ebp = ebp + ebp * 8;
    edx = ecx * 4 + 0x64A814;
    ebp = ebp << 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x28) = esi;

loc_0052A7F8: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    esi = MEM32(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0xF0;
    ecx = MEM32(eax);
    edi = esi + 0x20;
    edx = edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A84A; /* je: equal / zero */

loc_0052A825: ;
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x632574)); /* fmul dword ptr [0x632574] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x632574)); /* fmul dword ptr [0x632574] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x28) - fp_top()); /* fsubr dword ptr [esi + 0x28] */
    goto loc_0052A866;

loc_0052A84A: ;
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x632574)); /* fmul dword ptr [0x632574] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x632574)); /* fmul dword ptr [0x632574] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */

loc_0052A866: ;
    edx = MEM32(edi);
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    ecx = MEM32(esi + 0x28);
    fp_push(MEMF(esi + 0x24)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    MEM32(esp + 0x40) = eax;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x632600)); /* fsub dword ptr [0x632600] */
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x68) = ecx;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x64) = eax;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x78;
    PUSH32(esp, eax);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(0x6C8EB8);
    eax = esp + 0x54;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x54) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0052A8D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052A8D0u); } /* indirect call */
    }

loc_0052A8D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052A9E8; /* je: equal / zero */

loc_0052A8DE: ;
    ecx = MEM32(esp + 0x74);
    MEM32(edi) = ecx;
    edx = MEM32(esp + 0x78);
    MEM32(edi + 4) = edx;
    eax = MEM32(esp + 0x7C);
    PUSH32(esp, 0x40600000);
    ecx = esi;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0052A8FEu); RECOMP_ABI_CALL(0x00529DE0u, sub_00529DE0); /* call 0x00529DE0 */

loc_0052A8FE: ;
    fp_push(MEMF(ebx + 0xFC)); /* fld float */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0052A910u); RECOMP_ABI_CALL(0x005D8830u, sub_005D8830); /* call 0x005D8830 */

loc_0052A910: ;
    ecx = MEM32(esp + 0xA0);
    edx = MEM32(esp + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x40000000);
    ecx = esi;
    MEM8(esi + 8) = 1;
    MEM8(esi + 9) = LO8(edx);
    MEM8(esi + 0xA) = 0;
    MEM8(esi + 0xB) = 0;
    PUSH32(esp, 0x0052A93Cu); RECOMP_ABI_CALL(0x00529FE0u, sub_00529FE0); /* call 0x00529FE0 */

loc_0052A93C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0052A947u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A947: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0052A952u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A952: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0052A95Du); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A95D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0052A968u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A968: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0052A973u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A973: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0052A97Eu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A97E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x0052A989u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A989: ;
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0052A994u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A994: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0052A99Fu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A99F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x0052A9AAu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0052A9B5u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0052A9C0u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0052A9CBu); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x0052A9D6u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x0052A9E1u); RECOMP_ABI_CALL(0x00529E00u, sub_00529E00); /* call 0x00529E00 */

loc_0052A9E1: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x48;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052A9E8: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0052A7F8; /* jne: not equal / not zero */

loc_0052AA0D: ;
    ebp = MEM32(esp + 0x20);
    edi = MEM32(esp + 0xA0);

loc_0052AA18: ;
    esi = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x114;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052AA22: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0052A742; /* jl: less (signed <) */

loc_0052AA33: ;
    ebx = MEM32(esp + 0x24);

loc_0052AA37: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AA51; /* je: equal / zero */

loc_0052AA3B: ;
    esi = MEM32(ebx);
    eax = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0052AA4D; /* jle: less or equal (signed <=) */

loc_0052AA45: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0052AA4Du); RECOMP_ABI_CALL(0x0052A4E0u, sub_0052A4E0); /* call 0x0052A4E0 */

loc_0052AA4D: ;
    MEM16(esi + 4) = LO16(ebp);

loc_0052AA51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052AA60
 * Original: 0x0052AA60 - 0x0052AA7B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052AA60: ;
    ecx = MEM32(0x6CE2E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AA70; /* je: equal / zero */

loc_0052AA6A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AA70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AA6Eu); } /* indirect call */
    }

loc_0052AA70: ;
    MEM32(0x6CE2E4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052AA80
 * Original: 0x0052AA80 - 0x0052ADCD (845 bytes, 277 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052AA80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0052AA95u); RECOMP_ABI_CALL(0x005D39A0u, sub_005D39A0); /* call 0x005D39A0 */

loc_0052AA95: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi) = 0x64AAEC;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = 4;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = 4;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x88) = 0x3E99999A;
    MEM32(esi + 0x8C) = 4;
    MEM8(esi + 0x50) = LO8(ebx);
    MEM8(esi + 0x51) = LO8(ebx);
    MEM8(esi + 0x52) = LO8(ebx);
    MEM8(esi + 0x53) = LO8(ebx);
    PUSH32(esp, 0x0052AAFDu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AAFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AB16; /* je: equal / zero */

loc_0052AB04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x64AAE4);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0052AB14u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AB14: ;
    goto loc_0052AB18;

loc_0052AB16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AB18: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0052AB29u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AB29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AB42; /* je: equal / zero */

loc_0052AB30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AAD8);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AB40u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AB40: ;
    goto loc_0052AB44;

loc_0052AB42: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AB44: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x0052AB55u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AB55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AB6E; /* je: equal / zero */

loc_0052AB5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AAD0);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AB6Cu); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AB6C: ;
    goto loc_0052AB70;

loc_0052AB6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AB70: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x0052AB81u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AB81: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AB9A; /* je: equal / zero */

loc_0052AB88: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AAC0);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AB98u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AB98: ;
    goto loc_0052AB9C;

loc_0052AB9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AB9C: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x0052ABADu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052ABAD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ABC6; /* je: equal / zero */

loc_0052ABB4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AAAC);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052ABC4u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052ABC4: ;
    goto loc_0052ABC8;

loc_0052ABC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052ABC8: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x0052ABD9u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052ABD9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ABF2; /* je: equal / zero */

loc_0052ABE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AAA4);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052ABF0u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052ABF0: ;
    goto loc_0052ABF4;

loc_0052ABF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052ABF4: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x0052AC05u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AC05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AC1E; /* je: equal / zero */

loc_0052AC0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AA98);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AC1Cu); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AC1C: ;
    goto loc_0052AC20;

loc_0052AC1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AC20: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x0052AC31u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AC31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AC4A; /* je: equal / zero */

loc_0052AC38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AA88);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AC48u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AC48: ;
    goto loc_0052AC4C;

loc_0052AC4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AC4C: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x0052AC5Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AC5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AC77; /* je: equal / zero */

loc_0052AC64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x64AA7C);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052AC75u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052AC75: ;
    goto loc_0052AC79;

loc_0052AC77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AC79: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0052AC8Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AC8A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ACA4; /* je: equal / zero */

loc_0052AC91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x64AA74);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052ACA2u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052ACA2: ;
    goto loc_0052ACA6;

loc_0052ACA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052ACA6: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64AA1C);
    PUSH32(esp, 0x34);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x0052ACB7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052ACB7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ACD2; /* je: equal / zero */

loc_0052ACBE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x64AA6C);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052ACD0u); RECOMP_ABI_CALL(0x0052BD20u, sub_0052BD20); /* call 0x0052BD20 */

loc_0052ACD0: ;
    goto loc_0052ACD4;

loc_0052ACD2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052ACD4: ;
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(0x6CE514);
    PUSH32(esp, 0x0052ACE2u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_0052ACE2: ;
    PUSH32(esp, 0x64AA64);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x90) = 0x3F800000;
    PUSH32(esp, 0x0052ACFCu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052ACFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052AD34; /* jne: not equal / not zero */

loc_0052AD03: ;
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x64AA54);
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0x0052AD14u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AD14: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AD24; /* je: equal / zero */

loc_0052AD1B: ;
    ecx = eax;
    PUSH32(esp, 0x0052AD22u); RECOMP_ABI_CALL(0x0052E8B0u, sub_0052E8B0); /* call 0x0052E8B0 */

loc_0052AD22: ;
    goto loc_0052AD26;

loc_0052AD24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AD26: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0052AD34u); RECOMP_ABI_CALL(0x0052DC40u, sub_0052DC40); /* call 0x0052DC40 */

loc_0052AD34: ;
    PUSH32(esp, 0x64AA48);
    PUSH32(esp, 0x0052AD3Eu); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052AD3E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052AD76; /* jne: not equal / not zero */

loc_0052AD45: ;
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x64AA54);
    PUSH32(esp, 0x148);
    PUSH32(esp, 0x0052AD56u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AD56: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AD66; /* je: equal / zero */

loc_0052AD5D: ;
    ecx = eax;
    PUSH32(esp, 0x0052AD64u); RECOMP_ABI_CALL(0x00533150u, sub_00533150); /* call 0x00533150 */

loc_0052AD64: ;
    goto loc_0052AD68;

loc_0052AD66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052AD68: ;
    edx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0052AD76u); RECOMP_ABI_CALL(0x00531710u, sub_00531710); /* call 0x00531710 */

loc_0052AD76: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x0052AD83u); RECOMP_ABI_CALL(0x005D44F0u, sub_005D44F0); /* call 0x005D44F0 */

loc_0052AD83: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052ADC6; /* je: equal / zero */

loc_0052AD88: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    MEM32(esi + 0x58) = ebx;
    PUSH32(esp, 0x0052AD94u); RECOMP_ABI_CALL(0x005D3730u, sub_005D3730); /* call 0x005D3730 */

loc_0052AD94: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AA3C);
    PUSH32(esp, 0x0052ADA8u); RECOMP_ABI_CALL(0x005D5060u, sub_005D5060); /* call 0x005D5060 */

loc_0052ADA8: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64AA38);
    PUSH32(esp, 0x0052ADBCu); RECOMP_ABI_CALL(0x005D5060u, sub_005D5060); /* call 0x005D5060 */

loc_0052ADBC: ;
    MEM32(0x6743FC) = 0x3DCCCCCD;

loc_0052ADC6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052ADD0
 * Original: 0x0052ADD0 - 0x0052AEBF (239 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052ADD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052ADD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x64AAEC;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AB00);
    PUSH32(esp, 0x0052ADE9u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052ADE9: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AE10; /* je: equal / zero */

loc_0052ADF0: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA38);
    PUSH32(esp, 0x0052AE00u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052AE00: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA3C);
    PUSH32(esp, 0x0052AE10u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052AE10: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AE1D; /* je: equal / zero */

loc_0052AE17: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AE1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE1Bu); } /* indirect call */
    }

loc_0052AE1D: ;
    ecx = MEM32(esi + 0x28);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE2B; /* jne: not equal / not zero */

loc_0052AE25: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AE2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE29u); } /* indirect call */
    }

loc_0052AE2B: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE39; /* jne: not equal / not zero */

loc_0052AE33: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AE39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE37u); } /* indirect call */
    }

loc_0052AE39: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE47; /* jne: not equal / not zero */

loc_0052AE41: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AE47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE45u); } /* indirect call */
    }

loc_0052AE47: ;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE55; /* jne: not equal / not zero */

loc_0052AE4F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AE55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE53u); } /* indirect call */
    }

loc_0052AE55: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE63; /* jne: not equal / not zero */

loc_0052AE5D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AE63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE61u); } /* indirect call */
    }

loc_0052AE63: ;
    ecx = MEM32(esi + 0x38);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE71; /* jne: not equal / not zero */

loc_0052AE6B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE6Fu); } /* indirect call */
    }

loc_0052AE71: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE7F; /* jne: not equal / not zero */

loc_0052AE79: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AE7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE7Du); } /* indirect call */
    }

loc_0052AE7F: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE8D; /* jne: not equal / not zero */

loc_0052AE87: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AE8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE8Bu); } /* indirect call */
    }

loc_0052AE8D: ;
    ecx = MEM32(esi + 0x44);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AE9B; /* jne: not equal / not zero */

loc_0052AE95: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AE9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AE99u); } /* indirect call */
    }

loc_0052AE9B: ;
    ecx = MEM32(esi + 0x48);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AEA9; /* jne: not equal / not zero */

loc_0052AEA3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0052AEA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AEA7u); } /* indirect call */
    }

loc_0052AEA9: ;
    ecx = MEM32(esi + 0x4C);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0052AEB7; /* jne: not equal / not zero */

loc_0052AEB1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0052AEB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0052AEB5u); } /* indirect call */
    }

loc_0052AEB7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D38D0(); return; /* tail jmp 0x005D38D0 */

}

/**
 * sub_0052AEC0
 * Original: 0x0052AEC0 - 0x0052AF05 (69 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052AEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x94) = 0;
    MEM8(esi + 0x95) = 0;
    MEM8(esi + 0x96) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052AEE4; /* je: equal / zero */

loc_0052AEDF: ;
    PUSH32(esp, 0x0052AEE4u); RECOMP_ABI_CALL(0x0052F1D0u, sub_0052F1D0); /* call 0x0052F1D0 */

loc_0052AEE4: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AEF5; /* je: equal / zero */

loc_0052AEEB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052AEF5u); RECOMP_ABI_CALL(0x00532880u, sub_00532880); /* call 0x00532880 */

loc_0052AEF5: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052AF02; /* je: equal / zero */

loc_0052AEFD: ;
    PUSH32(esp, 0x0052AF02u); RECOMP_ABI_CALL(0x00534440u, sub_00534440); /* call 0x00534440 */

loc_0052AF02: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052AF10
 * Original: 0x0052AF10 - 0x0052AF27 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AF1F; /* je: equal / zero */

loc_0052AF1A: ;
    PUSH32(esp, 0x0052AF1Fu); RECOMP_ABI_CALL(0x0052DC50u, sub_0052DC50); /* call 0x0052DC50 */

loc_0052AF1F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D3720(); return; /* tail jmp 0x005D3720 */

}

/**
 * sub_0052AF30
 * Original: 0x0052AF30 - 0x0052AF78 (72 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052AF30: ;
    SET_LO8(eax, MEM8(0x6C3421));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0052AF76; /* jne: not equal / not zero */

loc_0052AF3C: ;
    PUSH32(esp, 0x64AB0C);
    PUSH32(esp, 0x0052AF46u); RECOMP_ABI_CALL(0x00612E10u, sub_00612E10); /* call 0x00612E10 */

loc_0052AF46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052AF76; /* jne: not equal / not zero */

loc_0052AF4D: ;
    PUSH32(esp, 0x1B1);
    PUSH32(esp, 0x64AA54);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0052AF5Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052AF5E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AF71; /* je: equal / zero */

loc_0052AF65: ;
    ecx = eax;
    PUSH32(esp, 0x0052AF6Cu); RECOMP_ABI_CALL(0x00534660u, sub_00534660); /* call 0x00534660 */

loc_0052AF6C: ;
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052AF71: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;

loc_0052AF76: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052AF80
 * Original: 0x0052AF80 - 0x0052AF9A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AF80(void)
{

loc_0052AF80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    esi = ecx;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AB00);
    PUSH32(esp, 0x0052AF95u); RECOMP_ABI_CALL(0x005D5160u, sub_005D5160); /* call 0x005D5160 */

loc_0052AF95: ;
    MEM32(esi + 0x54) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052AFA0
 * Original: 0x0052AFA0 - 0x0052B027 (135 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052AFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052AFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA38);
    PUSH32(esp, 0x0052AFB3u); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052AFB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AFBE; /* je: equal / zero */

loc_0052AFB7: ;
    ecx = eax;
    PUSH32(esp, 0x0052AFBEu); RECOMP_ABI_CALL(0x005D4400u, sub_005D4400); /* call 0x005D4400 */

loc_0052AFBE: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA3C);
    PUSH32(esp, 0x0052AFCEu); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052AFCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AFD9; /* je: equal / zero */

loc_0052AFD2: ;
    ecx = eax;
    PUSH32(esp, 0x0052AFD9u); RECOMP_ABI_CALL(0x005D4400u, sub_005D4400); /* call 0x005D4400 */

loc_0052AFD9: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AFE5; /* je: equal / zero */

loc_0052AFE0: ;
    PUSH32(esp, 0x0052AFE5u); RECOMP_ABI_CALL(0x00534420u, sub_00534420); /* call 0x00534420 */

loc_0052AFE5: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AFF1; /* je: equal / zero */

loc_0052AFEC: ;
    PUSH32(esp, 0x0052AFF1u); RECOMP_ABI_CALL(0x0052EAF0u, sub_0052EAF0); /* call 0x0052EAF0 */

loc_0052AFF1: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052AFFD; /* je: equal / zero */

loc_0052AFF8: ;
    PUSH32(esp, 0x0052AFFDu); RECOMP_ABI_CALL(0x005326B0u, sub_005326B0); /* call 0x005326B0 */

loc_0052AFFD: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B014; /* je: equal / zero */

loc_0052B004: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AB00);
    PUSH32(esp, 0x0052B014u); RECOMP_ABI_CALL(0x005D4DF0u, sub_005D4DF0); /* call 0x005D4DF0 */

loc_0052B014: ;
    MEM32(esi + 0x54) = 0;
    ecx = MEM32(0x6CE2F4);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005D4590(); return; /* tail jmp 0x005D4590 */

}

/**
 * sub_0052B030
 * Original: 0x0052B030 - 0x0052B046 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052B038u); RECOMP_ABI_CALL(0x005D3700u, sub_005D3700); /* call 0x005D3700 */

loc_0052B038: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B045; /* je: equal / zero */

loc_0052B040: ;
    g_seh_ebp = ebp; sub_00531790(); return; /* tail jmp 0x00531790 */

loc_0052B045: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B050
 * Original: 0x0052B050 - 0x0052B066 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052B058u); RECOMP_ABI_CALL(0x005D3710u, sub_005D3710); /* call 0x005D3710 */

loc_0052B058: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B065; /* je: equal / zero */

loc_0052B060: ;
    g_seh_ebp = ebp; sub_005317A0(); return; /* tail jmp 0x005317A0 */

loc_0052B065: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B070
 * Original: 0x0052B070 - 0x0052B08D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B07F; /* je: equal / zero */

loc_0052B07A: ;
    PUSH32(esp, 0x0052B07Fu); RECOMP_ABI_CALL(0x0052DCA0u, sub_0052DCA0); /* call 0x0052DCA0 */

loc_0052B07F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B08C; /* je: equal / zero */

loc_0052B087: ;
    g_seh_ebp = ebp; sub_00534140(); return; /* tail jmp 0x00534140 */

loc_0052B08C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B090
 * Original: 0x0052B090 - 0x0052B0AD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B090: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B09F; /* je: equal / zero */

loc_0052B09A: ;
    PUSH32(esp, 0x0052B09Fu); RECOMP_ABI_CALL(0x005341C0u, sub_005341C0); /* call 0x005341C0 */

loc_0052B09F: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B0AC; /* je: equal / zero */

loc_0052B0A7: ;
    g_seh_ebp = ebp; sub_0052F320(); return; /* tail jmp 0x0052F320 */

loc_0052B0AC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B0B0
 * Original: 0x0052B0B0 - 0x0052B0CD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B0BF; /* je: equal / zero */

loc_0052B0BA: ;
    PUSH32(esp, 0x0052B0BFu); RECOMP_ABI_CALL(0x0052DCF0u, sub_0052DCF0); /* call 0x0052DCF0 */

loc_0052B0BF: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B0CC; /* je: equal / zero */

loc_0052B0C7: ;
    g_seh_ebp = ebp; sub_00534200(); return; /* tail jmp 0x00534200 */

loc_0052B0CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B0D0
 * Original: 0x0052B0D0 - 0x0052B0F3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B0D0(void)
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

loc_0052B0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B0DF; /* je: equal / zero */

loc_0052B0DA: ;
    PUSH32(esp, 0x0052B0DFu); RECOMP_ABI_CALL(0x0052DC70u, sub_0052DC70); /* call 0x0052DC70 */

loc_0052B0DF: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B0EC; /* je: equal / zero */

loc_0052B0E7: ;
    g_seh_ebp = ebp; sub_00532A90(); return; /* tail jmp 0x00532A90 */

loc_0052B0EC: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052B100
 * Original: 0x0052B100 - 0x0052B113 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B100(void)
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

loc_0052B100: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B10C; /* je: equal / zero */

loc_0052B107: ;
    g_seh_ebp = ebp; sub_00532B80(); return; /* tail jmp 0x00532B80 */

loc_0052B10C: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052B120
 * Original: 0x0052B120 - 0x0052B12D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B120: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B12C; /* je: equal / zero */

loc_0052B127: ;
    g_seh_ebp = ebp; sub_0052F2A0(); return; /* tail jmp 0x0052F2A0 */

loc_0052B12C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B130
 * Original: 0x0052B130 - 0x0052B162 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x94) = 0;
    MEM8(esi + 0x95) = 0;
    MEM8(esi + 0x96) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052B154; /* je: equal / zero */

loc_0052B14F: ;
    PUSH32(esp, 0x0052B154u); RECOMP_ABI_CALL(0x0052DC80u, sub_0052DC80); /* call 0x0052DC80 */

loc_0052B154: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B161; /* je: equal / zero */

loc_0052B15C: ;
    g_seh_ebp = ebp; sub_005C3530(); return; /* tail jmp 0x005C3530 */

loc_0052B161: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B170
 * Original: 0x0052B170 - 0x0052B19F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B170: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B19D; /* jne: not equal / not zero */

loc_0052B17D: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x94) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0052B190; /* je: equal / zero */

loc_0052B18B: ;
    PUSH32(esp, 0x0052B190u); RECOMP_ABI_CALL(0x0052DD40u, sub_0052DD40); /* call 0x0052DD40 */

loc_0052B190: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B19D; /* je: equal / zero */

loc_0052B197: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00534370(); return; /* tail jmp 0x00534370 */

loc_0052B19D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052B1A0
 * Original: 0x0052B1A0 - 0x0052B1C4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052B1A8u); RECOMP_ABI_CALL(0x0052BEC0u, sub_0052BEC0); /* call 0x0052BEC0 */

loc_0052B1A8: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, 1);
    MEM8(esi + 0x95) = LO8(eax);
    MEM8(esi + 0x96) = LO8(eax);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B1C3; /* je: equal / zero */

loc_0052B1BE: ;
    g_seh_ebp = ebp; sub_00531790(); return; /* tail jmp 0x00531790 */

loc_0052B1C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B1D0
 * Original: 0x0052B1D0 - 0x0052B1DD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B1D0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B1DC; /* je: equal / zero */

loc_0052B1D7: ;
    g_seh_ebp = ebp; sub_00531720(); return; /* tail jmp 0x00531720 */

loc_0052B1DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B1E0
 * Original: 0x0052B1E0 - 0x0052B1FF (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B1EF; /* je: equal / zero */

loc_0052B1EA: ;
    PUSH32(esp, 0x0052B1EFu); RECOMP_ABI_CALL(0x0052DC90u, sub_0052DC90); /* call 0x0052DC90 */

loc_0052B1EF: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B1FC; /* je: equal / zero */

loc_0052B1F7: ;
    g_seh_ebp = ebp; sub_00533830(); return; /* tail jmp 0x00533830 */

loc_0052B1FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B200
 * Original: 0x0052B200 - 0x0052B20F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B200: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B20C; /* je: equal / zero */

loc_0052B207: ;
    g_seh_ebp = ebp; sub_005339D0(); return; /* tail jmp 0x005339D0 */

loc_0052B20C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B210
 * Original: 0x0052B210 - 0x0052B21F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B210: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B21C; /* je: equal / zero */

loc_0052B217: ;
    g_seh_ebp = ebp; sub_00533B60(); return; /* tail jmp 0x00533B60 */

loc_0052B21C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B220
 * Original: 0x0052B220 - 0x0052B22F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B220: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B22C; /* je: equal / zero */

loc_0052B227: ;
    g_seh_ebp = ebp; sub_00533B90(); return; /* tail jmp 0x00533B90 */

loc_0052B22C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B230
 * Original: 0x0052B230 - 0x0052B23F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B230: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B23C; /* je: equal / zero */

loc_0052B237: ;
    g_seh_ebp = ebp; sub_00533E90(); return; /* tail jmp 0x00533E90 */

loc_0052B23C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B240
 * Original: 0x0052B240 - 0x0052B24F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B240: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B24C; /* je: equal / zero */

loc_0052B247: ;
    g_seh_ebp = ebp; sub_00533EC0(); return; /* tail jmp 0x00533EC0 */

loc_0052B24C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B250
 * Original: 0x0052B250 - 0x0052B25F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B250: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B25C; /* je: equal / zero */

loc_0052B257: ;
    g_seh_ebp = ebp; sub_00533EF0(); return; /* tail jmp 0x00533EF0 */

loc_0052B25C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B260
 * Original: 0x0052B260 - 0x0052B26F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B260: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B26C; /* je: equal / zero */

loc_0052B267: ;
    g_seh_ebp = ebp; sub_00533F20(); return; /* tail jmp 0x00533F20 */

loc_0052B26C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B270
 * Original: 0x0052B270 - 0x0052B27F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B270: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B27C; /* je: equal / zero */

loc_0052B277: ;
    g_seh_ebp = ebp; sub_00533F50(); return; /* tail jmp 0x00533F50 */

loc_0052B27C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B280
 * Original: 0x0052B280 - 0x0052B28F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B280: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B28C; /* je: equal / zero */

loc_0052B287: ;
    g_seh_ebp = ebp; sub_00533DE0(); return; /* tail jmp 0x00533DE0 */

loc_0052B28C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B290
 * Original: 0x0052B290 - 0x0052B29F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B290: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B29C; /* je: equal / zero */

loc_0052B297: ;
    g_seh_ebp = ebp; sub_00533E10(); return; /* tail jmp 0x00533E10 */

loc_0052B29C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B2A0
 * Original: 0x0052B2A0 - 0x0052B2AF (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2A0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2AC; /* je: equal / zero */

loc_0052B2A7: ;
    g_seh_ebp = ebp; sub_00533F80(); return; /* tail jmp 0x00533F80 */

loc_0052B2AC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B2B0
 * Original: 0x0052B2B0 - 0x0052B2BF (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2B0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2BC; /* je: equal / zero */

loc_0052B2B7: ;
    g_seh_ebp = ebp; sub_00533BD0(); return; /* tail jmp 0x00533BD0 */

loc_0052B2BC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B2C0
 * Original: 0x0052B2C0 - 0x0052B2CF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2C0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2CC; /* je: equal / zero */

loc_0052B2C7: ;
    g_seh_ebp = ebp; sub_00533C10(); return; /* tail jmp 0x00533C10 */

loc_0052B2CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B2D0
 * Original: 0x0052B2D0 - 0x0052B2DF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2D0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2DC; /* je: equal / zero */

loc_0052B2D7: ;
    g_seh_ebp = ebp; sub_00533CD0(); return; /* tail jmp 0x00533CD0 */

loc_0052B2DC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B2E0
 * Original: 0x0052B2E0 - 0x0052B2EF (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2E0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2EC; /* je: equal / zero */

loc_0052B2E7: ;
    g_seh_ebp = ebp; sub_00533D10(); return; /* tail jmp 0x00533D10 */

loc_0052B2EC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B2F0
 * Original: 0x0052B2F0 - 0x0052B2FF (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B2F0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B2FC; /* je: equal / zero */

loc_0052B2F7: ;
    g_seh_ebp = ebp; sub_00532D70(); return; /* tail jmp 0x00532D70 */

loc_0052B2FC: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B300
 * Original: 0x0052B300 - 0x0052B32C (44 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B300: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B31A; /* je: equal / zero */

loc_0052B30F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052B31Au); RECOMP_ABI_CALL(0x00534030u, sub_00534030); /* call 0x00534030 */

loc_0052B31A: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B327; /* je: equal / zero */

loc_0052B321: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052B327u); RECOMP_ABI_CALL(0x0052F2E0u, sub_0052F2E0); /* call 0x0052F2E0 */

loc_0052B327: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B330
 * Original: 0x0052B330 - 0x0052B33D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B330: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B33C; /* je: equal / zero */

loc_0052B337: ;
    g_seh_ebp = ebp; sub_005340E0(); return; /* tail jmp 0x005340E0 */

loc_0052B33C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B340
 * Original: 0x0052B340 - 0x0052B34D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B340: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B34C; /* je: equal / zero */

loc_0052B347: ;
    g_seh_ebp = ebp; sub_00534110(); return; /* tail jmp 0x00534110 */

loc_0052B34C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B350
 * Original: 0x0052B350 - 0x0052B35D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B350: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B35C; /* je: equal / zero */

loc_0052B357: ;
    g_seh_ebp = ebp; sub_00531770(); return; /* tail jmp 0x00531770 */

loc_0052B35C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B360
 * Original: 0x0052B360 - 0x0052B36F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B360: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B36C; /* je: equal / zero */

loc_0052B367: ;
    g_seh_ebp = ebp; sub_00532E20(); return; /* tail jmp 0x00532E20 */

loc_0052B36C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B370
 * Original: 0x0052B370 - 0x0052B37F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B370: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B37C; /* je: equal / zero */

loc_0052B377: ;
    g_seh_ebp = ebp; sub_00531780(); return; /* tail jmp 0x00531780 */

loc_0052B37C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B380
 * Original: 0x0052B380 - 0x0052B38F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B380: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B38C; /* je: equal / zero */

loc_0052B387: ;
    g_seh_ebp = ebp; sub_00532DF0(); return; /* tail jmp 0x00532DF0 */

loc_0052B38C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B390
 * Original: 0x0052B390 - 0x0052B39F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B390: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B39C; /* je: equal / zero */

loc_0052B397: ;
    g_seh_ebp = ebp; sub_00532E70(); return; /* tail jmp 0x00532E70 */

loc_0052B39C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B3A0
 * Original: 0x0052B3A0 - 0x0052B3AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B3A0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B3AC; /* je: equal / zero */

loc_0052B3A7: ;
    g_seh_ebp = ebp; sub_00532EA0(); return; /* tail jmp 0x00532EA0 */

loc_0052B3AC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B3B0
 * Original: 0x0052B3B0 - 0x0052B3BF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B3B0: ;
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B3BC; /* je: equal / zero */

loc_0052B3B7: ;
    g_seh_ebp = ebp; sub_00532EC0(); return; /* tail jmp 0x00532EC0 */

loc_0052B3BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B3C0
 * Original: 0x0052B3C0 - 0x0052B3CF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B3C0: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B3CE; /* je: equal / zero */

loc_0052B3C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052B3CEu); RECOMP_ABI_CALL(0x0052ED40u, sub_0052ED40); /* call 0x0052ED40 */

loc_0052B3CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B3D0
 * Original: 0x0052B3D0 - 0x0052B3DF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B3D0: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B3DE; /* je: equal / zero */

loc_0052B3D7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052B3DEu); RECOMP_ABI_CALL(0x0052EE00u, sub_0052EE00); /* call 0x0052EE00 */

loc_0052B3DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B3E0
 * Original: 0x0052B3E0 - 0x0052B42E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3F800000);
    MEM8(esi + 0x95) = 0;
    MEM8(esi + 0x96) = 0;
    MEM8(esi + 0x53) = 0;
    PUSH32(esp, 0x0052B402u); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052B402: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B415; /* je: equal / zero */

loc_0052B40C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052B413u); RECOMP_ABI_CALL(0x0052DEE0u, sub_0052DEE0); /* call 0x0052DEE0 */

loc_0052B413: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052B415: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x50) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0052B426; /* je: equal / zero */

loc_0052B41D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052B426u); RECOMP_ABI_CALL(0x0052DDA0u, sub_0052DDA0); /* call 0x0052DDA0 */

loc_0052B426: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0052B430
 * Original: 0x0052B430 - 0x0052B44C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B430: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B44A; /* je: equal / zero */

loc_0052B43A: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B446; /* je: equal / zero */

loc_0052B441: ;
    PUSH32(esp, 0x0052B446u); RECOMP_ABI_CALL(0x0052DE60u, sub_0052DE60); /* call 0x0052DE60 */

loc_0052B446: ;
    MEM8(esi + 0x50) = 0;

loc_0052B44A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052B450
 * Original: 0x0052B450 - 0x0052B49A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3F800000);
    MEM8(esi + 0x95) = 0;
    MEM8(esi + 0x96) = 0;
    PUSH32(esp, 0x0052B46Eu); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052B46E: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B481; /* je: equal / zero */

loc_0052B478: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0052B47Fu); RECOMP_ABI_CALL(0x0052DEE0u, sub_0052DEE0); /* call 0x0052DEE0 */

loc_0052B47F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0052B481: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esi + 0x50) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0052B492; /* je: equal / zero */

loc_0052B489: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0052B492u); RECOMP_ABI_CALL(0x0052DDA0u, sub_0052DDA0); /* call 0x0052DDA0 */

loc_0052B492: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0052B4A0
 * Original: 0x0052B4A0 - 0x0052B4BC (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B4BA; /* je: equal / zero */

loc_0052B4AA: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x0052B4B2u); RECOMP_ABI_CALL(0x0052DEB0u, sub_0052DEB0); /* call 0x0052DEB0 */

loc_0052B4B2: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

loc_0052B4BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052B4C0
 * Original: 0x0052B4C0 - 0x0052B54C (140 bytes, 38 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B4C0(void)
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

loc_0052B4C0: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052B549; /* jp: parity */

loc_0052B4CE: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    eax = MEM32(esp + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    MEM32(ecx + 0x74) = eax;
    MEM32(ecx + 0x84) = 0;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0052B4FE; /* jnp: not parity */

loc_0052B4ED: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x84) = 1;
    MEM32(ecx + 0x70) = edx;

loc_0052B4FE: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B516; /* je: equal / zero */

loc_0052B507: ;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x64), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B516; /* je: equal / zero */

loc_0052B50C: ;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) | 2;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x78) = eax;

loc_0052B516: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B52E; /* je: equal / zero */

loc_0052B51F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B52E; /* je: equal / zero */

loc_0052B524: ;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x7C) = eax;

loc_0052B52E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B549; /* je: equal / zero */

loc_0052B537: ;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x6C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B549; /* je: equal / zero */

loc_0052B53C: ;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) | 8;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x80) = eax;

loc_0052B549: ;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052B550
 * Original: 0x0052B550 - 0x0052B638 (232 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B550: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, 9);
    PUSH32(esp, 0x63F384);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052B565u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0052B565: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B631; /* jne: not equal / not zero */

loc_0052B570: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F);
    edi = ebx + 9;
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052B582u); RECOMP_ABI_CALL(0x00619910u, sub_00619910); /* call 0x00619910 */

loc_0052B582: ;
    ecx = MEM32(0x6CE2F4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x4B) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052B62F; /* je: equal / zero */

loc_0052B598: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052B5A2u); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052B5A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B60D; /* jne: not equal / not zero */

loc_0052B5A8: ;
    eax = esp + 0xC;
    edx = eax + 1;
    /* nop */

loc_0052B5B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B5B0; /* jne: not equal / not zero */

loc_0052B5B7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esp + eax + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    eax = esp + eax + 0xB;
    if (CMP_L(_fas, _fbs)) goto loc_0052B5D4; /* jl: less (signed <) */

loc_0052B5C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0052B5D4; /* jg: greater (signed >) */

loc_0052B5CB: ;
    SET_LO8(ecx, MEM8(eax + -1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0052B5C6; /* jge: greater or equal (signed >=) */

loc_0052B5D4: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B5F5; /* je: equal / zero */

loc_0052B5DC: ;
    ecx = MEM32(0x6CE2F4);
    MEM8(eax) = 0;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052B5EFu); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052B5EF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B60D; /* jne: not equal / not zero */

loc_0052B5F5: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x0052B607u); RECOMP_ABI_CALL(0x005D5160u, sub_005D5160); /* call 0x005D5160 */

loc_0052B607: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B62F; /* je: equal / zero */

loc_0052B60D: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052B619u); RECOMP_ABI_CALL(0x005D4540u, sub_005D4540); /* call 0x005D4540 */

loc_0052B619: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B62F; /* jne: not equal / not zero */

loc_0052B61D: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0052B62Fu); RECOMP_ABI_CALL(0x005D4BD0u, sub_005D4BD0); /* call 0x005D4BD0 */

loc_0052B62F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0052B631: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0052B640
 * Original: 0x0052B640 - 0x0052B6A3 (99 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052B640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 9);
    PUSH32(esp, 0x63F384);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052B652u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0052B652: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052B69F; /* jne: not equal / not zero */

loc_0052B659: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052B665u); RECOMP_ABI_CALL(0x005D4540u, sub_005D4540); /* call 0x005D4540 */

loc_0052B665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B69F; /* je: equal / zero */

loc_0052B669: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B69F; /* je: equal / zero */

loc_0052B670: ;
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x28), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B68A; /* je: equal / zero */

loc_0052B677: ;
    eax = MEM32(eax + 0x24);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(0x6CE2F4);
    g_seh_ebp = ebp; sub_005D4DF0(); return; /* tail jmp 0x005D4DF0 */

loc_0052B68A: ;
    eax = 0x62DF21;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(0x6CE2F4);
    g_seh_ebp = ebp; sub_005D4DF0(); return; /* tail jmp 0x005D4DF0 */

loc_0052B69F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B6B0
 * Original: 0x0052B6B0 - 0x0052B6B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B6B0(void)
{

loc_0052B6B0: ;
    MEM8(ecx + 0x51) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B6C0
 * Original: 0x0052B6C0 - 0x0052B6F5 (53 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B6C0: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x64AA54);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x0052B6D1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0052B6D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B6EA; /* je: equal / zero */

loc_0052B6D8: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0052B6E4u); RECOMP_ABI_CALL(0x0052AA80u, sub_0052AA80); /* call 0x0052AA80 */

loc_0052B6E4: ;
    MEM32(0x6CE2E4) = eax;
    esp += 4; return; /* ret */

loc_0052B6EA: ;
    MEM32(0x6CE2E4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0052B700
 * Original: 0x0052B700 - 0x0052B71E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052B700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0052B708u); RECOMP_ABI_CALL(0x0052ADD0u, sub_0052ADD0); /* call 0x0052ADD0 */

loc_0052B708: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0052B718; /* je: equal / zero */

loc_0052B70F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052B715u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052B715: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052B718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0052B720
 * Original: 0x0052B720 - 0x0052BBB0 (1168 bytes, 376 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052B720(void)
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

loc_0052B720: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x51));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(esi + 0x52));
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B74A; /* je: equal / zero */

loc_0052B735: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0052B745; /* jne: not equal / not zero */

loc_0052B739: ;
    SET_LO8(eax, MEM8(esi + 0x53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0052B745; /* jne: not equal / not zero */

loc_0052B740: ;
    PUSH32(esp, 0x0052B745u); RECOMP_ABI_CALL(0x0052B030u, sub_0052B030); /* call 0x0052B030 */

loc_0052B745: ;
    MEM8(esi + 0x52) = LO8(ebx);
    goto loc_0052B760;

loc_0052B74A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B760; /* je: equal / zero */

loc_0052B74E: ;
    SET_LO8(eax, MEM8(esi + 0x53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0052B75C; /* jne: not equal / not zero */

loc_0052B755: ;
    ecx = esi;
    PUSH32(esp, 0x0052B75Cu); RECOMP_ABI_CALL(0x0052B050u, sub_0052B050); /* call 0x0052B050 */

loc_0052B75C: ;
    MEM8(esi + 0x52) = 0;

loc_0052B760: ;
    MEM8(esi + 0x51) = 0;
    PUSH32(esp, 0x0052B769u); RECOMP_ABI_CALL(0x0052BE00u, sub_0052BE00); /* call 0x0052BE00 */

loc_0052B769: ;
    ecx = esi;
    PUSH32(esp, 0x0052B770u); RECOMP_ABI_CALL(0x005D36E0u, sub_005D36E0); /* call 0x005D36E0 */

loc_0052B770: ;
    SET_LO8(eax, MEM8(0x6C32C1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B794; /* je: equal / zero */

loc_0052B779: ;
    ecx = 0x6C3250;
    PUSH32(esp, 0x0052B783u); RECOMP_ABI_CALL(0x0053B310u, sub_0053B310); /* call 0x0053B310 */

loc_0052B783: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0052B78Du); RECOMP_ABI_CALL(0x005D38A0u, sub_005D38A0); /* call 0x005D38A0 */

loc_0052B78D: ;
    MEM8(0x6C32C1) = 0;

loc_0052B794: ;
    eax = MEM32(0x6C2CAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B7D6; /* je: equal / zero */

loc_0052B79E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x58) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0052B7C9; /* ja: above (unsigned >) */

loc_0052B7A6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x52BBA0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0052B7ADu) goto loc_0052B7AD;
    if (_jt == 0x0052B7B4u) goto loc_0052B7B4;
    if (_jt == 0x0052B7BBu) goto loc_0052B7BB;
    if (_jt == 0x0052B7C2u) goto loc_0052B7C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0052B7AD: ;
    eax = 0x1F;
    goto loc_0052B7CE;

loc_0052B7B4: ;
    eax = 0x20;
    goto loc_0052B7CE;

loc_0052B7BB: ;
    eax = 0x22;
    goto loc_0052B7CE;

loc_0052B7C2: ;
    eax = 0x21;
    goto loc_0052B7CE;

loc_0052B7C9: ;
    eax = 0x1E;

loc_0052B7CE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0052B7D6u); RECOMP_ABI_CALL(0x005D3730u, sub_005D3730); /* call 0x005D3730 */

loc_0052B7D6: ;
    eax = MEM32(esi + 0x84);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B842; /* je: equal / zero */

loc_0052B7E2: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B842; /* je: equal / zero */

loc_0052B7E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0052B823; /* je: equal / zero */

loc_0052B7ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0052B7F7; /* je: equal / zero */

loc_0052B7F1: ;
    ecx = MEM32(esi + 0x78);
    MEM32(esi + 0x64) = ecx;

loc_0052B7F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0052B801; /* je: equal / zero */

loc_0052B7FB: ;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x68) = edx;

loc_0052B801: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0052B80E; /* je: equal / zero */

loc_0052B805: ;
    eax = MEM32(esi + 0x80);
    MEM32(esi + 0x6C) = eax;

loc_0052B80E: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052B820u); RECOMP_ABI_CALL(0x005D7CB0u, sub_005D7CB0); /* call 0x005D7CB0 */

loc_0052B820: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052B823: ;
    _fa = (uint32_t)(MEM8(esi + 0x84)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x84), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0052B83C; /* je: equal / zero */

loc_0052B82B: ;
    ecx = MEM32(esi + 0x70);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 0x60) = ecx;
    PUSH32(esp, 0x0052B839u); RECOMP_ABI_CALL(0x005D5B90u, sub_005D5B90); /* call 0x005D5B90 */

loc_0052B839: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052B83C: ;
    MEM32(esi + 0x84) = ebp;

loc_0052B842: ;
    MEM32(esi + 0x74) = ebp;
    ecx = MEM32(0x69585C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA6A; /* je: equal / zero */

loc_0052B85B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA6A; /* je: equal / zero */

loc_0052B864: ;
    SET_LO8(ebx, MEM8(0x6C3421));
    edx = MEM32(0x6C3424);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + ebx * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4 + 8), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA6A; /* je: equal / zero */

loc_0052B884: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052B88Au); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0052B88A: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0x0052B895u); RECOMP_ABI_CALL(0x004D6860u, sub_004D6860); /* call 0x004D6860 */

loc_0052B895: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B8C1; /* je: equal / zero */

loc_0052B899: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    ecx = MEM32(esi + 0x88);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    MEM32(esp + 0x14) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052B8C1; /* jp: parity */

loc_0052B8B3: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x642E84)); /* fadd dword ptr [0x642e84] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0052B8C1: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x0052B8D1u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0052B8D1: ;
    edx = MEM32(eax + 0x4C);
    eax = MEM32(edx + 0xC);
    edi = MEM32(eax + 0x2C);
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x30)) >> 32) & 1);
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0052B954; /* jle: less or equal (signed <=) */

loc_0052B8E8: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0052B8F0: ;
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0052B8FC; /* je: equal / zero */

loc_0052B8F7: ;
    ecx = eax + 0xC;
    goto loc_0052B8FE;

loc_0052B8FC: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0052B8FE: ;
    PUSH32(esp, 0x0052B903u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_0052B903: ;
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D434)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d434] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052B93E; /* jp: parity */

loc_0052B93A: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052B93E: ;
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x42C)) >> 32) & 1);
    ebx = ebx + 0x42C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0052B8F0; /* jl: less (signed <) */

loc_0052B950: ;
    ebx = MEM32(esp + 0x18);

loc_0052B954: ;
    ecx = MEM32(0x69585C);
    eax = MEM32(ecx + 0x28);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0052B9D1; /* jle: less or equal (signed <=) */

loc_0052B963: ;
    ebx = 8;

loc_0052B968: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052B9C2; /* je: equal / zero */

loc_0052B96E: ;
    _fa = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052B9C2; /* je: equal / zero */

loc_0052B974: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0052B97Au); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0052B97A: ;
    ecx = eax;
    PUSH32(esp, 0x0052B981u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_0052B981: ;
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x69585C);
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D434)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d434] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052B9C2; /* jp: parity */

loc_0052B9BE: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0052B9C2: ;
    eax = MEM32(ecx + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0052B968; /* jl: less (signed <) */

loc_0052B9CD: ;
    ebx = MEM32(esp + 0x18);

loc_0052B9D1: ;
    ecx = MEM32(esp + 0x10);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0052B9E2; /* jle: less or equal (signed <=) */

loc_0052B9DE: ;
    MEM32(esp + 0x10) = eax;

loc_0052B9E2: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64AB18)); /* fmul dword ptr [0x64ab18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0052B9FEu); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052B9FE: ;
    ecx = MEM32(0x69585C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0052BA0Au); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0052BA0A: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x50);
    SET_LO8(eax, MEM8(edx + 0x1EA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA22; /* je: equal / zero */

loc_0052BA1A: ;
    fp_push(MEMF(0x62D678)); /* fld float */
    goto loc_0052BA28;

loc_0052BA22: ;
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0052BA28: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x90)); /* fsub dword ptr [esi + 0x90] */
    ecx = MEM32(esi + 0x34);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D4)); /* fmul dword ptr [0x6307d4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x90)); /* fadd dword ptr [esi + 0x90] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(esi + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA57; /* je: equal / zero */

loc_0052BA4D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052BA57u); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052BA57: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BA6A; /* je: equal / zero */

loc_0052BA5E: ;
    edx = MEM32(esi + 0x90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0052BA6Au); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052BA6A: ;
    SET_LO8(eax, MEM8(esi + 0x95));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BAAA; /* je: equal / zero */

loc_0052BA74: ;
    SET_LO8(eax, MEM8(esi + 0x96));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BAE2; /* je: equal / zero */

loc_0052BA7E: ;
    ecx = MEM32(esi + 0x24);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_push(MEMF(0x6797F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64AB14)); /* fmul dword ptr [0x64ab14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0052BAE2; /* jne: not equal / not zero */

loc_0052BAA3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    goto loc_0052BADD;

loc_0052BAAA: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BAD5; /* je: equal / zero */

loc_0052BAB1: ;
    SET_LO8(ecx, MEM8(eax + 0x11C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BAD5; /* je: equal / zero */

loc_0052BABB: ;
    fp_push(MEMF(eax + 0x114)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x118)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x118] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052BAD5; /* jp: parity */

loc_0052BACE: ;
    PUSH32(esp, 0x3F333333);
    goto loc_0052BADA;

loc_0052BAD5: ;
    PUSH32(esp, 0x3F800000);

loc_0052BADA: ;
    ecx = MEM32(esi + 0x24);

loc_0052BADD: ;
    PUSH32(esp, 0x0052BAE2u); RECOMP_ABI_CALL(0x0052BD80u, sub_0052BD80); /* call 0x0052BD80 */

loc_0052BAE2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0052BB05; /* jp: parity */

loc_0052BAF0: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x5C)); /* fsub dword ptr [esi + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x5C)); /* fadd dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0052BB0C;

loc_0052BB05: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x5C) = ecx;

loc_0052BB0C: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6307D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6307d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0052BB37; /* jne: not equal / not zero */

loc_0052BB1C: ;
    edx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40000000);
    ecx = esi;
    PUSH32(esp, 0x0052BB37u); RECOMP_ABI_CALL(0x0052B4C0u, sub_0052B4C0); /* call 0x0052B4C0 */

loc_0052BB37: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB48; /* je: equal / zero */

loc_0052BB42: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052BB48u); RECOMP_ABI_CALL(0x005D6930u, sub_005D6930); /* call 0x005D6930 */

loc_0052BB48: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB55; /* je: equal / zero */

loc_0052BB4F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052BB55u); RECOMP_ABI_CALL(0x005D6930u, sub_005D6930); /* call 0x005D6930 */

loc_0052BB55: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB62; /* je: equal / zero */

loc_0052BB5C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052BB62u); RECOMP_ABI_CALL(0x005D6930u, sub_005D6930); /* call 0x005D6930 */

loc_0052BB62: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB6F; /* je: equal / zero */

loc_0052BB69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0052BB6Fu); RECOMP_ABI_CALL(0x005D6930u, sub_005D6930); /* call 0x005D6930 */

loc_0052BB6F: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB7B; /* je: equal / zero */

loc_0052BB76: ;
    PUSH32(esp, 0x0052BB7Bu); RECOMP_ABI_CALL(0x00533240u, sub_00533240); /* call 0x00533240 */

loc_0052BB7B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB87; /* je: equal / zero */

loc_0052BB82: ;
    PUSH32(esp, 0x0052BB87u); RECOMP_ABI_CALL(0x005344E0u, sub_005344E0); /* call 0x005344E0 */

loc_0052BB87: ;
    ecx = MEM32(esi + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0052BB9A; /* je: equal / zero */

loc_0052BB92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052EF10(); return; /* tail jmp 0x0052EF10 */

loc_0052BB9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_0052BBB0(); return; /* fallthrough 0x0052BBB0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0052BBB0
 * Original: 0x0052BBB0 - 0x0052BBD5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BBB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BBCB; /* je: equal / zero */

loc_0052BBBB: ;
    ecx = esi;
    PUSH32(esp, 0x0052BBC2u); RECOMP_ABI_CALL(0x00534740u, sub_00534740); /* call 0x00534740 */

loc_0052BBC2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052BBC8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0052BBC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0052BBCB: ;
    MEM32(edi + 0x20) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BBE0
 * Original: 0x0052BBE0 - 0x0052BC5F (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BBEF; /* je: equal / zero */

loc_0052BBEA: ;
    PUSH32(esp, 0x0052BBEFu); RECOMP_ABI_CALL(0x0052B430u, sub_0052B430); /* call 0x0052B430 */

loc_0052BBEF: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA3C);
    PUSH32(esp, 0x0052BBFFu); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052BBFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC0C; /* je: equal / zero */

loc_0052BC03: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052BC0Cu); RECOMP_ABI_CALL(0x005D4280u, sub_005D4280); /* call 0x005D4280 */

loc_0052BC0C: ;
    ecx = MEM32(0x6CE2F4);
    PUSH32(esp, 0x64AA38);
    PUSH32(esp, 0x0052BC1Cu); RECOMP_ABI_CALL(0x005D4520u, sub_005D4520); /* call 0x005D4520 */

loc_0052BC1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC29; /* je: equal / zero */

loc_0052BC20: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0052BC29u); RECOMP_ABI_CALL(0x005D4280u, sub_005D4280); /* call 0x005D4280 */

loc_0052BC29: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC35; /* je: equal / zero */

loc_0052BC30: ;
    PUSH32(esp, 0x0052BC35u); RECOMP_ABI_CALL(0x0052FEE0u, sub_0052FEE0); /* call 0x0052FEE0 */

loc_0052BC35: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC49; /* je: equal / zero */

loc_0052BC3C: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC49; /* je: equal / zero */

loc_0052BC43: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0052BC49u); RECOMP_ABI_CALL(0x00531A10u, sub_00531A10); /* call 0x00531A10 */

loc_0052BC49: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC5D; /* je: equal / zero */

loc_0052BC50: ;
    esi = MEM32(esi + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0052BC5D; /* je: equal / zero */

loc_0052BC57: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0052BC5Du); RECOMP_ABI_CALL(0x00534460u, sub_00534460); /* call 0x00534460 */

loc_0052BC5D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0052BC60
 * Original: 0x0052BC60 - 0x0052BC75 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0052BC60: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x52));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0052BC6F; /* jne: not equal / not zero */

loc_0052BC6A: ;
    PUSH32(esp, 0x0052BC6Fu); RECOMP_ABI_CALL(0x0052B030u, sub_0052B030); /* call 0x0052B030 */

loc_0052BC6F: ;
    MEM8(esi + 0x53) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
