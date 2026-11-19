/**
 * Midnight Club II (PC) - Recompiled code chunk 8
 * Functions: 250 (0x0046C8B0 - 0x00477990)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0046C8B0
 * Original: 0x0046C8B0 - 0x0046C8D3 (35 bytes, 11 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046C8B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046C8B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046C8E0
 * Original: 0x0046C8E0 - 0x0046C90B (43 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046C8E0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x130)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x130), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046C908; /* jne: not equal / not zero */

loc_0046C8E9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x134);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x180);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x17C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046C908u); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0046C908: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046C910
 * Original: 0x0046C910 - 0x0046C93D (45 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046C910: ;
    eax = MEM32(ecx + 0x44);
    edx = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + 0x6C3454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x38) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0046C93A; /* jl: less (signed <) */

loc_0046C92A: ;
    MEM32(esp + 4) = edx;
    ecx = eax * 4 + 0x6C32C4;
    g_seh_ebp = ebp; sub_005D8280(); return; /* tail jmp 0x005D8280 */

loc_0046C93A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046C940
 * Original: 0x0046C940 - 0x0046CAEA (426 bytes, 144 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C940(void)
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

loc_0046C940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x674FB0);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(eax + 0x6C3450);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x674FAC);
    if (CMP_EQ(_fa, _fb)) goto loc_0046CAE5; /* je: equal / zero */

loc_0046C96A: ;
    PUSH32(esp, 0x0046C96Fu); RECOMP_ABI_CALL(0x005ED990u, sub_005ED990); /* call 0x005ED990 */

loc_0046C96F: ;
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM8(eax + 0x130)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x130), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046C99E; /* jne: not equal / not zero */

loc_0046C97B: ;
    ecx = MEM32(eax + 0x138);
    edx = MEM32(0x63D200);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x180);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x17C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0046C99Eu); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0046C99E: ;
    eax = MEM32(0x6C330C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0046CA60; /* ja: above (unsigned >) */

loc_0046C9AC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x46CAEC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0046C9B3u) goto loc_0046C9B3;
    if (_jt == 0x0046C9D3u) goto loc_0046C9D3;
    if (_jt == 0x0046C9ECu) goto loc_0046C9EC;
    if (_jt == 0x0046C9F9u) goto loc_0046C9F9;
    if (_jt == 0x0046CA12u) goto loc_0046CA12;
    if (_jt == 0x0046CA20u) goto loc_0046CA20;
    if (_jt == 0x0046CA3Eu) goto loc_0046CA3E;
    if (_jt == 0x0046CA4Du) goto loc_0046CA4D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046C9B3: ;
    eax = MEM32(0x63D204);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046C9C1u); RECOMP_ABI_CALL(0x0046C8E0u, sub_0046C8E0); /* call 0x0046C8E0 */

loc_0046C9C1: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_0046CA58;

loc_0046C9D3: ;
    ecx = MEM32(0x63D208);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0046C9E2u); RECOMP_ABI_CALL(0x0046C8E0u, sub_0046C8E0); /* call 0x0046C8E0 */

loc_0046C9E2: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0046CA3E; /* je: equal / zero */

loc_0046C9E9: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046CA60; /* jne: not equal / not zero */

loc_0046C9EC: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    goto loc_0046CA57;

loc_0046C9F9: ;
    edx = MEM32(0x63D208);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046CA08u); RECOMP_ABI_CALL(0x0046C8E0u, sub_0046C8E0); /* call 0x0046C8E0 */

loc_0046CA08: ;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0046CA3E; /* je: equal / zero */

loc_0046CA0F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046CA60; /* jne: not equal / not zero */

loc_0046CA12: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    goto loc_0046CA58;

loc_0046CA20: ;
    eax = MEM32(0x63D20C);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CA2Eu); RECOMP_ABI_CALL(0x0046C8E0u, sub_0046C8E0); /* call 0x0046C8E0 */

loc_0046CA2E: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0046CA60; /* ja: above (unsigned >) */

loc_0046CA37: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x46CAFC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0046C9ECu) goto loc_0046C9EC;
    if (_jt == 0x0046CA12u) goto loc_0046CA12;
    if (_jt == 0x0046CA3Eu) goto loc_0046CA3E;
    if (_jt == 0x0046CA4Du) goto loc_0046CA4D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046CA3E: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_0046CA58;

loc_0046CA4D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);

loc_0046CA57: ;
    PUSH32(esp, edi);

loc_0046CA58: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0046CA60u); RECOMP_ABI_CALL(0x005FAA80u, sub_005FAA80); /* call 0x005FAA80 */

loc_0046CA60: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046CA6Cu); RECOMP_ABI_CALL(0x0057C260u, sub_0057C260); /* call 0x0057C260 */

loc_0046CA6C: ;
    edx = MEM32(esi + 0xC);
    MEM8(edx + 0x38) = 1;
    eax = MEM32(esi + 8);
    fp_push(MEMF(eax + 0x134)); /* fld float */
    ecx = MEM32(esi + 0xC);
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 8);
    fp_push(MEMF(edx + 0x138)); /* fld float */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0x70) = edx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0x70) = ecx;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0xC);
    MEM32(edx + 0x70) = eax;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0xC);
    MEM32(ecx + 0x70) = edx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x28);
    MEM32(eax + 0x70) = ecx;
    eax = MEM32(esi + 0xC);
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    edx = MEM32(eax + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x40)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0046CAE5u); RECOMP_ABI_CALL(0x005FA880u, sub_005FA880); /* call 0x005FA880 */

loc_0046CAE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046CB10
 * Original: 0x0046CB10 - 0x0046CBE0 (208 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CB10(void)
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

loc_0046CB10: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0046CB83; /* je: equal / zero */

loc_0046CB1C: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CBDB; /* je: equal / zero */

loc_0046CB2B: ;
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, 0x0046CB33u); RECOMP_ABI_CALL(0x0057C560u, sub_0057C560); /* call 0x0057C560 */

loc_0046CB33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CBDB; /* jne: not equal / not zero */

loc_0046CB3B: ;
    ecx = MEM32(0x860608);
    eax = MEM32(esi + 0x3C);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(0x86060C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x860610);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(0x860614);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CB7Eu); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046CB7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0046CB83: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CBDB; /* jne: not equal / not zero */

loc_0046CB8E: ;
    edi = MEM32(0x860608);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = edi;
    edi = MEM32(0x86060C);
    MEM32(edx + 4) = edi;
    edi = MEM32(0x860610);
    MEM32(edx + 8) = edi;
    edi = MEM32(0x860614);
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = edi;
    edx = MEM32(esi + eax * 4 + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046CBCCu); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046CBCC: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0046CBDBu); RECOMP_ABI_CALL(0x0046DF80u, sub_0046DF80); /* call 0x0046DF80 */

loc_0046CBDB: ;
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
 * sub_0046CBE0
 * Original: 0x0046CBE0 - 0x0046CC66 (134 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046CBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CBEFu); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046CBEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CC25; /* jne: not equal / not zero */

loc_0046CBF3: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0046CC25; /* jge: greater or equal (signed >=) */

loc_0046CBFB: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CC3E; /* je: equal / zero */

loc_0046CC03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CC29; /* jne: not equal / not zero */

loc_0046CC07: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0xF4) = 0xFFFFFFFFu;

loc_0046CC14: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + edx * 4 + 0x18);
    MEM32(eax + 0xBC) = 1;

loc_0046CC25: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0046CC29: ;
    ecx = MEM32(esi + 0xC);
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CC25; /* je: equal / zero */

loc_0046CC34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046CC3Au); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046CC3A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0046CC3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CC4D; /* jne: not equal / not zero */

loc_0046CC42: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0xF4) = eax;
    goto loc_0046CC14;

loc_0046CC4D: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CC25; /* jne: not equal / not zero */

loc_0046CC58: ;
    eax = MEM32(esi + eax * 4 + 0x18);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0057C280(); return; /* tail jmp 0x0057C280 */

}

/**
 * sub_0046CC70
 * Original: 0x0046CC70 - 0x0046CE2A (442 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CC70(void)
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

loc_0046CC70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x1B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0046CD19; /* je: equal / zero */

loc_0046CC8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CD19; /* je: equal / zero */

loc_0046CC96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CD19; /* je: equal / zero */

loc_0046CC9B: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CE26; /* jne: not equal / not zero */

loc_0046CCAA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax + 0x30;
    PUSH32(esp, 0x0046CCB6u); RECOMP_ABI_CALL(0x0046C880u, sub_0046C880); /* call 0x0046C880 */

loc_0046CCB6: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x38);
    edi = MEM32(esi + ecx * 4 + 0x18);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0046CCC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CCC5u); } /* indirect call */
    }

loc_0046CCC8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630308)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630308] */
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, 0x0046CCDDu); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046CCDD: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x4C);
    if (CMP_NE(_fa, _fb)) goto loc_0046CCF8; /* jne: not equal / not zero */

loc_0046CCED: ;
    MEM16(edx + 0xA178) = 0;
    goto loc_0046CD01;

loc_0046CCF8: ;
    MEM16(edx + 0xA178) = 1;

loc_0046CD01: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CE26; /* je: equal / zero */

loc_0046CD0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00503D80(); return; /* tail jmp 0x00503D80 */

loc_0046CD19: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046CD25u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046CD25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CE26; /* jne: not equal / not zero */

loc_0046CD2D: ;
    edx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CE26; /* je: equal / zero */

loc_0046CD3D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0x0046CD58u); RECOMP_ABI_CALL(0x0046E5F0u, sub_0046E5F0); /* call 0x0046E5F0 */

loc_0046CD58: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CD6Au); RECOMP_ABI_CALL(0x0046E5A0u, sub_0046E5A0); /* call 0x0046E5A0 */

loc_0046CD6A: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ecx + 0x7C) = 0x420C0000;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CDA4; /* jne: not equal / not zero */

loc_0046CD83: ;
    edx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046CDA4; /* je: equal / zero */

loc_0046CD8A: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x0046CD92u); RECOMP_ABI_CALL(0x0056B8B0u, sub_0056B8B0); /* call 0x0056B8B0 */

loc_0046CD92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CDA4; /* jne: not equal / not zero */

loc_0046CD96: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x44;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0046CDB6;

loc_0046CDA4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x6C);
    edx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046CDB6: ;
    eax = MEM32(esi + 0x30);
    MEM32(eax + 0x6C) = edx;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0046CDC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CDC1u); } /* indirect call */
    }

loc_0046CDC4: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CDED; /* jne: not equal / not zero */

loc_0046CDCB: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CDD7u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046CDD7: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x4C);
    MEM16(eax + 0xA178) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0046CDED: ;
    edx = MEM32(0x860608);
    eax = MEM32(0x86060C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(0x860610);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x860614);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x3F000000);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046CE26u); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046CE26: ;
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
 * sub_0046CE30
 * Original: 0x0046CE30 - 0x0046CED6 (166 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046CE30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x6C3450)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C3450), 0xFFFFFFFFu (32-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0046CE4D; /* jne: not equal / not zero */

loc_0046CE4B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046CE4D: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(esi + ecx * 4 + 0x18);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046CE5Du); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046CE5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CE8F; /* jne: not equal / not zero */

loc_0046CE61: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CE72; /* jne: not equal / not zero */

loc_0046CE68: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0046CE70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CE6Du); } /* indirect call */
    }

loc_0046CE70: ;
    goto loc_0046CE8F;

loc_0046CE72: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + eax * 4 + 0x18);
    edx = MEM32(edi);
    ecx = edi;
    MEM32(edi + 0x114) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0046CE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CE85u); } /* indirect call */
    }

loc_0046CE88: ;
    MEM32(edi + 0x114) = ebx;
    POP32(esp, edi);

loc_0046CE8F: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CE9Bu); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046CE9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CEB9; /* jne: not equal / not zero */

loc_0046CE9F: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(ecx + 0x114) = eax;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0046CEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CEADu); } /* indirect call */
    }

loc_0046CEB0: ;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 0x114) = ebx;

loc_0046CEB9: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0046CEC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CEC1u); } /* indirect call */
    }

loc_0046CEC4: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0046CECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CEC9u); } /* indirect call */
    }

loc_0046CECC: ;
    ecx = MEM32(esi + 0x34);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0046EF40(); return; /* tail jmp 0x0046EF40 */

}

/**
 * sub_0046CEE0
 * Original: 0x0046CEE0 - 0x0046CEE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046CEE0: ;
    ecx = MEM32(ecx + 0x34);
    g_seh_ebp = ebp; sub_0046ED60(); return; /* tail jmp 0x0046ED60 */

}

/**
 * sub_0046CEF0
 * Original: 0x0046CEF0 - 0x0046D037 (327 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046CEF0(void)
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

loc_0046CEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x6C);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x6C) = ecx;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(esi + ecx * 4 + 0x18);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0046CF1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046CF18u); } /* indirect call */
    }

loc_0046CF1B: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CF75; /* jne: not equal / not zero */

loc_0046CF22: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x4C);
    MEM16(edx + 0xA178) = 0;
    ecx = MEM32(0x860608);
    edx = MEM32(0x86060C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(0x860610);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x860614);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + eax * 4 + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046CF70u); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046CF70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0046CF75: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x4C);
    MEM16(ecx + 0xA178) = 1;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046CFA5; /* jne: not equal / not zero */

loc_0046CF90: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + edx * 4 + 0x18);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046CFA0u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046CFA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0046CFA5: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046CFF5; /* jne: not equal / not zero */

loc_0046CFB9: ;
    eax = MEM32(0x860608);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(0x86060C);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x860610);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x860614);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + eax * 4 + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046CFF0u); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046CFF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0046CFF5: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(esi + edx * 4 + 0x18);
    edi = MEM32(0x860608);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    edx = esp;
    MEM32(edx) = edi;
    edi = MEM32(0x86060C);
    MEM32(edx + 4) = edi;
    edi = MEM32(0x860610);
    MEM32(edx + 8) = edi;
    edi = MEM32(0x860614);
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D032u); RECOMP_ABI_CALL(0x0057C2B0u, sub_0057C2B0); /* call 0x0057C2B0 */

loc_0046D032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046D040
 * Original: 0x0046D040 - 0x0046D079 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046D040: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0046D06D; /* je: equal / zero */

loc_0046D04B: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D057u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046D057: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x4C);
    MEM16(eax + 0xA178) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0046D06D: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x0046D075u); RECOMP_ABI_CALL(0x0046EA10u, sub_0046EA10); /* call 0x0046EA10 */

loc_0046D075: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046D080
 * Original: 0x0046D080 - 0x0046D088 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046D080: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_0046D090
 * Original: 0x0046D090 - 0x0046D0BF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046D090: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D0B0; /* jne: not equal / not zero */

loc_0046D09E: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x10);
    edx = MEM32(eax + 0x4C);
    MEM16(edx + 0xA178) = 1;

loc_0046D0B0: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0057C280(); return; /* tail jmp 0x0057C280 */

}

/**
 * sub_0046D0C0
 * Original: 0x0046D0C0 - 0x0046D6C6 (1542 bytes, 389 insns)
 * Category: game_camera
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046D0C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esi + 0x44) = eax;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi) = 0x63D284;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(eax + 0x6C3454);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0046D100; /* jl: less (signed <) */

loc_0046D0F1: ;
    ecx = eax * 4 + 0x6C32C4;
    PUSH32(esp, 0x0046D0FDu); RECOMP_ABI_CALL(0x005D8260u, sub_005D8260); /* call 0x005D8260 */

loc_0046D0FD: ;
    MEM32(esi + 0x38) = eax;

loc_0046D100: ;
    eax = MEM32(esi + 0x44);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x6C3434) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6C3434;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0046D114u); RECOMP_ABI_CALL(0x00540780u, sub_00540780); /* call 0x00540780 */

loc_0046D114: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x63D274);
    PUSH32(esp, 0x150);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0046D12Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D12B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D13B; /* je: equal / zero */

loc_0046D132: ;
    ecx = eax;
    PUSH32(esp, 0x0046D139u); RECOMP_ABI_CALL(0x0046F7E0u, sub_0046F7E0); /* call 0x0046F7E0 */

loc_0046D139: ;
    goto loc_0046D13D;

loc_0046D13B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D13D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x9B);
    ebp = 0x1000F;
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0x140) = ebp;
    PUSH32(esp, 0x238);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0046D161u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D161: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D173; /* je: equal / zero */

loc_0046D168: ;
    ecx = eax;
    PUSH32(esp, 0x0046D16Fu); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046D16F: ;
    edi = eax;
    goto loc_0046D175;

loc_0046D173: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D175: ;
    MEM32(edi + 0x210) = ebp;
    MEM32(edi + 0x88) = ebx;
    MEM32(edi + 0x8C) = 0x3FD0A3D7;
    MEM32(edi + 0x90) = ebx;
    MEM32(edi + 0x108) = ebx;
    MEM32(edi + 0x10C) = 0x3E99999A;
    MEM32(edi + 0x110) = 0x40866666;
    ecx = edi;
    MEM32(edi + 0x224) = 0x3F4CCCCD;
    MEM32(edi + 0x228) = 0x4059999A;
    MEM32(edi + 0x22C) = 0x40B00000;
    PUSH32(esp, 0x0046D1D0u); RECOMP_ABI_CALL(0x0046F2A0u, sub_0046F2A0); /* call 0x0046F2A0 */

loc_0046D1D0: ;
    PUSH32(esp, 0xA6);
    PUSH32(esp, 0x63D274);
    PUSH32(esp, 0x238);
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x0046D1E7u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D1E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D1F7; /* je: equal / zero */

loc_0046D1EE: ;
    ecx = eax;
    PUSH32(esp, 0x0046D1F5u); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046D1F5: ;
    goto loc_0046D1F9;

loc_0046D1F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D1F9: ;
    MEM32(eax + 0x210) = ebp;
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = 0x3FB851EC;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0x108) = ebx;
    MEM32(eax + 0x10C) = 0x3F4CCCCD;
    MEM32(eax + 0x110) = 0x40866666;
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0x224) = 0x3F666666;
    MEM32(eax + 0x228) = 0x4059999A;
    MEM32(eax + 0x22C) = 0x40D00000;
    PUSH32(esp, 0x238);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0046D264u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D264: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D274; /* je: equal / zero */

loc_0046D26B: ;
    ecx = eax;
    PUSH32(esp, 0x0046D272u); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046D272: ;
    goto loc_0046D276;

loc_0046D274: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D276: ;
    MEM32(eax + 0x210) = ebp;
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = 0x3FD0A3D7;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0x108) = ebx;
    MEM32(eax + 0x10C) = 0x3FC00000;
    MEM32(eax + 0x110) = 0x40A00000;
    PUSH32(esp, 0xBA);
    edi = 0x40800000;
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0x224) = 0x3F8CCCCD;
    MEM32(eax + 0x228) = edi;
    MEM32(eax + 0x22C) = 0x41000000;
    PUSH32(esp, 0x238);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0046D2E2u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D2E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D2F2; /* je: equal / zero */

loc_0046D2E9: ;
    ecx = eax;
    PUSH32(esp, 0x0046D2F0u); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046D2F0: ;
    goto loc_0046D2F4;

loc_0046D2F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D2F4: ;
    MEM32(eax + 0x210) = ebp;
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = 0x3FF33333;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0x108) = ebx;
    MEM32(eax + 0x10C) = 0x3FE66666;
    MEM32(eax + 0x110) = 0x40B33333;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0xC9);
    edi = 0x40E00000;
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0xA4) = 0x41700000;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = 0x40000000;
    MEM32(eax + 0x130) = 0x41400000;
    MEM32(eax + 0x224) = 0x3F800000;
    MEM32(eax + 0x228) = 0x40A66666;
    MEM32(eax + 0x22C) = 0x41280000;
    PUSH32(esp, 0x214);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0046D38Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D38E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D39E; /* je: equal / zero */

loc_0046D395: ;
    ecx = eax;
    PUSH32(esp, 0x0046D39Cu); RECOMP_ABI_CALL(0x00579CE0u, sub_00579CE0); /* call 0x00579CE0 */

loc_0046D39C: ;
    goto loc_0046D3A0;

loc_0046D39E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D3A0: ;
    MEM32(eax + 0x210) = ebp;
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x8C) = 0x3FE00000;
    MEM32(eax + 0x90) = ebx;
    MEM32(eax + 0x108) = ebx;
    MEM32(eax + 0x10C) = 0x3F333333;
    MEM32(eax + 0x110) = 0xC0F00000u;
    PUSH32(esp, 0xD8);
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0x98) = ebx;
    MEM32(eax + 0x128) = 0x41A00000;
    MEM32(eax + 0x124) = ebx;
    MEM32(eax + 0xA4) = 0x41700000;
    MEM32(eax + 0x9C) = 0x41F00000;
    MEM32(eax + 0xC4) = edi;
    MEM32(eax + 0xC0) = 0x41000000;
    MEM32(eax + 0x7C) = 0x42480000;
    PUSH32(esp, 0xB4);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x0046D42Eu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D42E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D43E; /* je: equal / zero */

loc_0046D435: ;
    ecx = eax;
    PUSH32(esp, 0x0046D43Cu); RECOMP_ABI_CALL(0x0046E4A0u, sub_0046E4A0); /* call 0x0046E4A0 */

loc_0046D43C: ;
    goto loc_0046D440;

loc_0046D43E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D440: ;
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0x63D274);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x354);
    MEM32(eax + 0x9C) = ebp;
    PUSH32(esp, 0x0046D45Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D45D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D46D; /* je: equal / zero */

loc_0046D464: ;
    ecx = eax;
    PUSH32(esp, 0x0046D46Bu); RECOMP_ABI_CALL(0x0046E200u, sub_0046E200); /* call 0x0046E200 */

loc_0046D46B: ;
    goto loc_0046D46F;

loc_0046D46D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D46F: ;
    PUSH32(esp, 0xE1);
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x63D274);
    MEM32(eax + 0x210) = ebp;
    PUSH32(esp, 0xFC);
    MEM8(esi + 0x40) = LO8(ebx);
    PUSH32(esp, 0x0046D48Fu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D48F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D49F; /* je: equal / zero */

loc_0046D496: ;
    ecx = eax;
    PUSH32(esp, 0x0046D49Du); RECOMP_ABI_CALL(0x0046ECB0u, sub_0046ECB0); /* call 0x0046ECB0 */

loc_0046D49D: ;
    goto loc_0046D4A1;

loc_0046D49F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D4A1: ;
    ecx = MEM32(esp + 0x58);
    ecx = ecx + 0x6C3434;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x0046D4BCu); RECOMP_ABI_CALL(0x00540760u, sub_00540760); /* call 0x00540760 */

loc_0046D4BC: ;
    edi = MEM32(esp + 0x5C);
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x40) = LO8(ecx);
    eax = MEM32(edx + 0x10);
    ebp = MEM32(eax + 0x48);
    PUSH32(esp, 0x63D26C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D4E3u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D4E3: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0046D4F0u); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D4F0: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ebp = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D260);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D50Bu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D50B: ;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0046D518u); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D518: ;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 0xF4) = ebx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(ecx + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D254);
    edx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D53Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D53C: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0046D549u); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D549: ;
    eax = MEM32(esi + 0x20);
    MEM32(eax + 0xF4) = ebx;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    ebp = MEM32(edx + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D248);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D56Du); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D56D: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0046D57Au); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D57A: ;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 0xF4) = ebx;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ebp = MEM32(eax + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D23C);
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D59Eu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D59E: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0046D5ABu); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D5AB: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D230);
    MEM32(edx + 0xF4) = ebx;
    eax = MEM32(esi + 4);
    ebp = MEM32(eax + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D5CCu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D5CC: ;
    edx = MEM32(ebp + 0x48);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D5DCu); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D5DC: ;
    eax = MEM32(esi + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D224);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D5F4u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D5F4: ;
    edx = MEM32(ebp + 0x48);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D604u); RECOMP_ABI_CALL(0x0046E550u, sub_0046E550); /* call 0x0046E550 */

loc_0046D604: ;
    eax = MEM32(esi + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D214);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046D61Cu); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046D61C: ;
    edx = MEM32(ebp + 0x48);
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D62Cu); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046D62C: ;
    PUSH32(esp, 0x13D);
    PUSH32(esp, 0x63D274);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x0046D63Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D63D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0046D64F; /* je: equal / zero */

loc_0046D646: ;
    ecx = eax;
    PUSH32(esp, 0x0046D64Du); RECOMP_ABI_CALL(0x0057C1F0u, sub_0057C1F0); /* call 0x0057C1F0 */

loc_0046D64D: ;
    goto loc_0046D651;

loc_0046D64F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D651: ;
    PUSH32(esp, 0x13E);
    PUSH32(esp, 0x63D274);
    PUSH32(esp, 0xA0);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0046D668u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046D668: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D678; /* je: equal / zero */

loc_0046D66F: ;
    ecx = eax;
    PUSH32(esp, 0x0046D676u); RECOMP_ABI_CALL(0x0057C6A0u, sub_0057C6A0); /* call 0x0057C6A0 */

loc_0046D676: ;
    goto loc_0046D67A;

loc_0046D678: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046D67A: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0046D686u); RECOMP_ABI_CALL(0x0057C270u, sub_0057C270); /* call 0x0057C270 */

loc_0046D686: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + eax * 4 + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046D696u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_0046D696: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D6B5; /* je: equal / zero */

loc_0046D69D: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x10);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D6B5u); RECOMP_ABI_CALL(0x0046EDC0u, sub_0046EDC0); /* call 0x0046EDC0 */

loc_0046D6B5: ;
    ecx = esi;
    PUSH32(esp, 0x0046D6BCu); RECOMP_ABI_CALL(0x0046C940u, sub_0046C940); /* call 0x0046C940 */

loc_0046D6BC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0046D6D0
 * Original: 0x0046D6D0 - 0x0046D76F (159 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046D6D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x63D284;
    MEM32(esi + 0x14) = 0;
    edi = esi + 0x18;
    ebx = 5;
    /* nop */

loc_0046D6F0: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D6FC; /* je: equal / zero */

loc_0046D6F6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046D6FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D6FAu); } /* indirect call */
    }

loc_0046D6FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046D6F0; /* jne: not equal / not zero */

loc_0046D702: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D70F; /* je: equal / zero */

loc_0046D709: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0046D70Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D70Du); } /* indirect call */
    }

loc_0046D70F: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D71C; /* je: equal / zero */

loc_0046D716: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046D71Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D71Au); } /* indirect call */
    }

loc_0046D71C: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D729; /* je: equal / zero */

loc_0046D723: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0046D729u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D727u); } /* indirect call */
    }

loc_0046D729: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D736; /* je: equal / zero */

loc_0046D730: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046D736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D734u); } /* indirect call */
    }

loc_0046D736: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D743; /* je: equal / zero */

loc_0046D73D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0046D743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D741u); } /* indirect call */
    }

loc_0046D743: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D750; /* je: equal / zero */

loc_0046D74A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046D750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046D74Eu); } /* indirect call */
    }

loc_0046D750: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D76B; /* je: equal / zero */

loc_0046D757: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046D76B; /* jne: not equal / not zero */

loc_0046D75B: ;
    ecx = esi;
    PUSH32(esp, 0x0046D762u); RECOMP_ABI_CALL(0x005FA390u, sub_005FA390); /* call 0x005FA390 */

loc_0046D762: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046D768u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046D768: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046D76B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046D770
 * Original: 0x0046D770 - 0x0046D7A0 (48 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D770(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046D770: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x2C);
    fp_push(MEMF(ecx + 0xC0)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D790u); RECOMP_ABI_CALL(0x0046DF80u, sub_0046DF80); /* call 0x0046DF80 */

loc_0046D790: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0046D79Cu); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046D79C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046D7A0
 * Original: 0x0046D7A0 - 0x0046D7E2 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046D7A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x63D288);
    esi = ecx;
    PUSH32(esp, 0x0046D7ADu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046D7AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0046D7B9u); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046D7B9: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0046D7C2u); RECOMP_ABI_CALL(0x0046D040u, sub_0046D040); /* call 0x0046D040 */

loc_0046D7C2: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0046D7CBu); RECOMP_ABI_CALL(0x0046CBE0u, sub_0046CBE0); /* call 0x0046CBE0 */

loc_0046D7CB: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x0046D7D9u); RECOMP_ABI_CALL(0x0046CEF0u, sub_0046CEF0); /* call 0x0046CEF0 */

loc_0046D7D9: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0046D7F0
 * Original: 0x0046D7F0 - 0x0046DE1F (1583 bytes, 483 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_0046DE0D = 0; /* per-edge flags of joins */
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

loc_0046D7F0: ;
    eax = MEM32(0x85F888);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x85F8D8));
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x85F9D8));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, MEM8(eax + 0x85F8D8));
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0046D833; /* je: equal / zero */

loc_0046D818: ;
    SET_LO8(edx, MEM8(eax + 0x85F8CE));
    SET_LO8(edx, LO8(edx) | MEM8(eax + 0x85F8C2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0046D833; /* je: equal / zero */

loc_0046D826: ;
    PUSH32(esp, 0x63D2A4);
    PUSH32(esp, 0x0046D830u); RECOMP_ABI_CALL(0x005F2360u, sub_005F2360); /* call 0x005F2360 */

loc_0046D830: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046D833: ;
    eax = MEM32(0x6C3890);
    ecx = MEM32(eax + 4);
    edi = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D99A; /* je: equal / zero */

loc_0046D848: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D99A; /* jne: not equal / not zero */

loc_0046D853: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(0x69585C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D862u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_0046D862: ;
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D99A; /* je: equal / zero */

loc_0046D86D: ;
    PUSH32(esp, 0x0046D872u); RECOMP_ABI_CALL(0x00499900u, sub_00499900); /* call 0x00499900 */

loc_0046D872: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D99A; /* jne: not equal / not zero */

loc_0046D87A: ;
    ecx = MEM32(0x6C38A4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046D99A; /* jle: less or equal (signed <=) */

loc_0046D88A: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0x80);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x0046D8A0u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0046D8A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D8EE; /* je: equal / zero */

loc_0046D8A4: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D8B0u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D8B8: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D8C4u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D8C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D8CC: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, 0x0046D8D7u); RECOMP_ABI_CALL(0x0057C560u, sub_0057C560); /* call 0x0057C560 */

loc_0046D8D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D8DF: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D8EB; /* jne: not equal / not zero */

loc_0046D8E7: ;
    PUSH32(esp, 0);
    goto loc_0046D956;

loc_0046D8EB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0046D943;

loc_0046D8EE: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0x80);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x0046D904u); RECOMP_ABI_CALL(0x00467E90u, sub_00467E90); /* call 0x00467E90 */

loc_0046D904: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046D96A; /* je: equal / zero */

loc_0046D908: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046D914u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D918: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D924u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D928: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, 0x0046D933u); RECOMP_ABI_CALL(0x0057C560u, sub_0057C560); /* call 0x0057C560 */

loc_0046D933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D96A; /* jne: not equal / not zero */

loc_0046D937: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046D942; /* jne: not equal / not zero */

loc_0046D93E: ;
    PUSH32(esp, 4);
    goto loc_0046D956;

loc_0046D942: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0046D943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0046D94B; /* jge: greater or equal (signed >=) */

loc_0046D947: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0046D955;

loc_0046D94B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046D955; /* jle: less or equal (signed <=) */

loc_0046D950: ;
    eax = 4;

loc_0046D955: ;
    PUSH32(esp, eax);

loc_0046D956: ;
    ecx = esi;
    PUSH32(esp, 0x0046D95Du); RECOMP_ABI_CALL(0x0046C910u, sub_0046C910); /* call 0x0046C910 */

loc_0046D95D: ;
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0046D96Au); RECOMP_ABI_CALL(0x0046CEF0u, sub_0046CEF0); /* call 0x0046CEF0 */

loc_0046D96A: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x44);
    ecx = MEM32(ecx + 0x80);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0046D980u); RECOMP_ABI_CALL(0x00467E40u, sub_00467E40); /* call 0x00467E40 */

loc_0046D980: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    ecx = esi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0046D993; /* jnp: not parity */

loc_0046D98F: ;
    PUSH32(esp, 1);
    goto loc_0046D995;

loc_0046D993: ;
    PUSH32(esp, 0);

loc_0046D995: ;
    PUSH32(esp, 0x0046D99Au); RECOMP_ABI_CALL(0x0046CBE0u, sub_0046CBE0); /* call 0x0046CBE0 */

loc_0046D99A: ;
    edx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046DE18; /* je: equal / zero */

loc_0046D9A9: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D9B5u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D9B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DE18; /* jne: not equal / not zero */

loc_0046D9BD: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0046D9C9u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D9C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DE18; /* jne: not equal / not zero */

loc_0046D9D1: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046DE18; /* je: equal / zero */

loc_0046D9DC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046D9F7u); RECOMP_ABI_CALL(0x0057C400u, sub_0057C400); /* call 0x0057C400 */

loc_0046D9F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DC01; /* jne: not equal / not zero */

loc_0046D9FF: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x40), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DC01; /* jne: not equal / not zero */

loc_0046DA09: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, 0x0046DA14u); RECOMP_ABI_CALL(0x0057C560u, sub_0057C560); /* call 0x0057C560 */

loc_0046DA14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DC01; /* jne: not equal / not zero */

loc_0046DA1C: ;
    edx = MEM32(esi + 4);
    edx = MEM32(edx + 0x10);
    edi = MEM32(edx + 0x64);
    SET_LO16(eax, MEM16(edi + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046DA53; /* jle: less or equal (signed <=) */

loc_0046DA2E: ;
    ecx = MEM32(edx + 0x48);
    ecx = MEM32(ecx + 0xEC);
    _fa = (uint32_t)(MEM8(ecx + 0x18E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18E), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DA50; /* jne: not equal / not zero */

loc_0046DA40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0046DA4Bu); RECOMP_ABI_CALL(0x0046D770u, sub_0046D770); /* call 0x0046D770 */

loc_0046DA4B: ;
    goto loc_0046DC01;

loc_0046DA50: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */

loc_0046DA53: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0046DA78; /* jge: greater or equal (signed >=) */

loc_0046DA55: ;
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0xF0);
    SET_LO8(eax, MEM8(ecx + 0x18E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DA78; /* jne: not equal / not zero */

loc_0046DA68: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0046DA73u); RECOMP_ABI_CALL(0x0046D770u, sub_0046D770); /* call 0x0046D770 */

loc_0046DA73: ;
    goto loc_0046DC01;

loc_0046DA78: ;
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x44);
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046DAA9; /* jne: not equal / not zero */

loc_0046DA8C: ;
    eax = MEM32(edx + 0x48);
    fp_push(MEMF(eax + 0x18C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046DAA9; /* jne: not equal / not zero */

loc_0046DAA2: ;
    PUSH32(esp, 3);
    goto loc_0046DBF7;

loc_0046DAA9: ;
    ecx = MEM32(edx + 0x48);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046DAC7; /* je: equal / zero */

loc_0046DAB4: ;
    _fa = (uint32_t)(MEM16(edi + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046DAC2; /* je: equal / zero */

loc_0046DABB: ;
    PUSH32(esp, 2);
    goto loc_0046DBF7;

loc_0046DAC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DAE0; /* jne: not equal / not zero */

loc_0046DAC7: ;
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D210)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d210] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046DAE0; /* jne: not equal / not zero */

loc_0046DAD9: ;
    PUSH32(esp, 5);
    goto loc_0046DBF7;

loc_0046DAE0: ;
    fp_push(MEMF(ecx + 0x1B0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D370)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d370] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046DC00; /* jne: not equal / not zero */

loc_0046DAF7: ;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    PUSH32(esp, 0x11);
    PUSH32(esp, ebx);
    edi = esp + 0x40;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0046DB16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046DB10u); } /* indirect call */
    }

loc_0046DB16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DC00; /* jne: not equal / not zero */

loc_0046DB1E: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x6C);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(eax + 0x38);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 0x3F000000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0046DB54u); RECOMP_ABI_CALL(0x004685C0u, sub_004685C0); /* call 0x004685C0 */

loc_0046DB54: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    edx = MEM32(eax + 0x84);
    fp_push(MEMF(eax + 0x80)); /* fld float */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63D2A0)); /* fsub dword ptr [0x63d2a0] */
    ecx = MEM32(0x6C8EB8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, 0x11);
    PUSH32(esp, ebx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0046DBF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046DBEBu); } /* indirect call */
    }

loc_0046DBF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DC00; /* jne: not equal / not zero */

loc_0046DBF5: ;
    PUSH32(esp, 4);

loc_0046DBF7: ;
    ecx = esi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0046DC00u); RECOMP_ABI_CALL(0x0046D770u, sub_0046D770); /* call 0x0046D770 */

loc_0046DC00: ;
    POP32(esp, ebp);

loc_0046DC01: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx + 0x238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0046DE18; /* ja: above (unsigned >) */

loc_0046DC13: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x46DE20); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0046DC1Au) goto loc_0046DC1A;
    if (_jt == 0x0046DD22u) goto loc_0046DD22;
    if (_jt == 0x0046DD46u) goto loc_0046DD46;
    if (_jt == 0x0046DD70u) goto loc_0046DD70;
    if (_jt == 0x0046DDB3u) goto loc_0046DDB3;
    if (_jt == 0x0046DDD3u) goto loc_0046DDD3;
    if (_jt == 0x0046DDFCu) goto loc_0046DDFC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046DC1A: ;
    edi = MEM32(esi + 4);
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x3C);
    PUSH32(esp, 0x3F000000);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0046DC50u); RECOMP_ABI_CALL(0x004685C0u, sub_004685C0); /* call 0x004685C0 */

loc_0046DC50: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + 0x10);
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x11);
    PUSH32(esp, ebx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    eax = esp + 0x24;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(0x6C8EB8);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0046DCD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046DCCDu); } /* indirect call */
    }

loc_0046DCD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046DE18; /* je: equal / zero */

loc_0046DCDB: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x48);
    fp_push(MEMF(ecx + 0x1B0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046DE0F; /* je: equal / zero */

loc_0046DCFB: ;
    fp_push(MEMF(ecx + 0x1B0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046DE18; /* jp: parity */

loc_0046DD12: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DD1Bu); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DD1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046DD22: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(MEM16(edx + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x14), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0046DE18; /* jg: greater (signed >) */

loc_0046DD36: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DD3Fu); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DD3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046DD46: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x14), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0046DE18; /* jl: less (signed <) */

loc_0046DD5A: ;
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x18E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _jf_0046DE0D = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0046DE0D;

loc_0046DD70: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x44);
    fp_push(MEMF(edx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0046DE0F; /* jnp: not parity */

loc_0046DD8D: ;
    eax = MEM32(ecx + 0x48);
    fp_push(MEMF(eax + 0x18C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D520)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d520] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046DE18; /* jp: parity */

loc_0046DDA3: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DDACu); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DDAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046DDB3: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x64);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x16), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046DE18; /* jne: not equal / not zero */

loc_0046DDC3: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DDCCu); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DDCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046DDD3: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x44);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046DE18; /* jp: parity */

loc_0046DDEC: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DDF5u); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DDF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046DDFC: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _jf_0046DE0D = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0046DE0D: ;
    if (_jf_0046DE0D /* je: equal / zero */) goto loc_0046DE18;

loc_0046DE0F: ;
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0046DE18u); RECOMP_ABI_CALL(0x0046CB10u, sub_0046CB10); /* call 0x0046CB10 */

loc_0046DE18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046DE40
 * Original: 0x0046DE40 - 0x0046DE5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046DE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046DE48u); RECOMP_ABI_CALL(0x0046D6D0u, sub_0046D6D0); /* call 0x0046D6D0 */

loc_0046DE48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046DE58; /* je: equal / zero */

loc_0046DE4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046DE55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046DE55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046DE58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046DE60
 * Original: 0x0046DE60 - 0x0046DE9B (59 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046DE60: ;
    eax = ecx;
    MEM32(eax) = 0x63D2B0;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    MEM32(eax + 0x10) = 0x3F000000;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    ecx = 0x40000000;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x40A00000;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DEA0
 * Original: 0x0046DEA0 - 0x0046DEA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DEA0(void)
{

loc_0046DEA0: ;
    MEM32(ecx) = 0x63D2B0;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DEB0
 * Original: 0x0046DEB0 - 0x0046DF15 (101 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046DEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D2CC);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0046DECEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046DECE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D2C4);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0046DEE4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046DEE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D2BC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046DEFAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046DEFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63D2B4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046DF10u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046DF10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046DF20
 * Original: 0x0046DF20 - 0x0046DF45 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DF20: ;
    edx = ecx;
    MEM32(edx) = 0x63D2D4;
    ecx = edx + 0x354;
    eax = 7;

loc_0046DF33: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0046DF3Bu); RECOMP_ABI_CALL(0x0046DEA0u, sub_0046DEA0); /* call 0x0046DEA0 */

loc_0046DF3B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046DF33; /* jne: not equal / not zero */

loc_0046DF3E: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_0046F090(); return; /* tail jmp 0x0046F090 */

}

/**
 * sub_0046DF50
 * Original: 0x0046DF50 - 0x0046DF56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF50(void)
{

loc_0046DF50: ;
    eax = 0x63D30C;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DF60
 * Original: 0x0046DF60 - 0x0046DF65 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DF60: ;
    g_seh_ebp = ebp; sub_0046F0F0(); return; /* tail jmp 0x0046F0F0 */

}

/**
 * sub_0046DF70
 * Original: 0x0046DF70 - 0x0046DF75 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DF70: ;
    g_seh_ebp = ebp; sub_0046F140(); return; /* tail jmp 0x0046F140 */

}

/**
 * sub_0046DF80
 * Original: 0x0046DF80 - 0x0046E0F5 (373 bytes, 99 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF80(void)
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

loc_0046DF80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x238);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046E0EF; /* je: equal / zero */

loc_0046DF95: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046E0E9; /* jle: less or equal (signed <=) */

loc_0046DF9E: ;
    PUSH32(esp, esi);
    eax = edx + edx * 4;
    esi = MEM32(ecx + eax * 8 + 0x244);
    fp_push(MEMF(ecx + eax * 8 + 0x250)); /* fld float */
    fp_push(MEMF(ecx + eax * 8 + 0x254)); /* fld float */
    eax = ecx + eax * 8 + 0x23C;
    fp_push(MEMF(0x6796C4)); /* fld float */
    MEM32(esp + 8) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(eax + 0x1C);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x24);
    MEM32(esp + 0x24) = esi;
    esi = MEM32(ecx + 0xF0);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x6C);
    eax = MEM32(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x8C)); /* fmul dword ptr [eax + 0x8c] */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    fp_push(MEMF(0x6796C8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x6796C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_A(_fa, _fb)) goto loc_0046E067; /* ja: above (unsigned >) */

loc_0046E01C: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x46E0F8); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0046E023u) goto loc_0046E023;
    if (_jt == 0x0046E02Au) goto loc_0046E02A;
    if (_jt == 0x0046E033u) goto loc_0046E033;
    if (_jt == 0x0046E067u) goto loc_0046E067;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046E023: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    goto loc_0046E067;

loc_0046E02A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    goto loc_0046E067;

loc_0046E033: ;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046E067: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046E084; /* jne: not equal / not zero */

loc_0046E074: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_0046E084: ;
    esi = MEM32(esp + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = ecx + 0x88;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = esi;
    esi = MEM32(esp + 0xC);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;
    eax = ecx + 0x108;
    MEM32(eax) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x24);
    MEM32(ecx + 0x228) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x22C) = eax;
    MEM32(ecx + 0xBC) = 1;
    POP32(esp, esi);

loc_0046E0E9: ;
    MEM32(ecx + 0x238) = edx;

loc_0046E0EF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E110
 * Original: 0x0046E110 - 0x0046E1D9 (201 bytes, 58 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E110(void)
{

loc_0046E110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0046E11Eu); RECOMP_ABI_CALL(0x0046F2D0u, sub_0046F2D0); /* call 0x0046F2D0 */

loc_0046E11E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D344);
    ecx = edi;
    PUSH32(esp, 0x0046E12Cu); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E12C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x23C;
    PUSH32(esp, 0x0046E138u); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E138: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D33C);
    ecx = edi;
    PUSH32(esp, 0x0046E146u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E146: ;
    PUSH32(esp, eax);
    ecx = esi + 0x264;
    PUSH32(esp, 0x0046E152u); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E152: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D334);
    ecx = edi;
    PUSH32(esp, 0x0046E160u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E160: ;
    PUSH32(esp, eax);
    ecx = esi + 0x28C;
    PUSH32(esp, 0x0046E16Cu); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E16C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D32C);
    ecx = edi;
    PUSH32(esp, 0x0046E17Au); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E17A: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2B4;
    PUSH32(esp, 0x0046E186u); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E186: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D328);
    ecx = edi;
    PUSH32(esp, 0x0046E194u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E194: ;
    PUSH32(esp, eax);
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x0046E1A0u); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E1A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D320);
    ecx = edi;
    PUSH32(esp, 0x0046E1AEu); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E1AE: ;
    PUSH32(esp, eax);
    ecx = esi + 0x304;
    PUSH32(esp, 0x0046E1BAu); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E1BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63D318);
    ecx = edi;
    PUSH32(esp, 0x0046E1C8u); RECOMP_ABI_CALL(0x005E2D80u, sub_005E2D80); /* call 0x005E2D80 */

loc_0046E1C8: ;
    PUSH32(esp, eax);
    ecx = esi + 0x32C;
    PUSH32(esp, 0x0046E1D4u); RECOMP_ABI_CALL(0x0046DEB0u, sub_0046DEB0); /* call 0x0046DEB0 */

loc_0046E1D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E1E0
 * Original: 0x0046E1E0 - 0x0046E1FE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046E1E8u); RECOMP_ABI_CALL(0x0046DEA0u, sub_0046DEA0); /* call 0x0046DEA0 */

loc_0046E1E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046E1F8; /* je: equal / zero */

loc_0046E1EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046E1F5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046E1F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046E1F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E200
 * Original: 0x0046E200 - 0x0046E40B (523 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0046E20Au); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046E20A: ;
    edx = esi + 0x23C;
    MEM32(esi) = 0x63D2D4;
    edi = edx;
    ebx = 7;
    /* nop */

loc_0046E220: ;
    ecx = edi;
    PUSH32(esp, 0x0046E227u); RECOMP_ABI_CALL(0x0046DE60u, sub_0046DE60); /* call 0x0046DE60 */

loc_0046E227: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046E220; /* jne: not equal / not zero */

loc_0046E22D: ;
    MEM32(esi + 0x228) = 0x40000000;
    MEM32(esi + 0x124) = 0x40600000;
    MEM32(esi + 0x128) = 0x41180000;
    MEM32(esi + 0x12C) = 0x41200000;
    MEM32(esi + 0x130) = 0x42480000;
    MEM32(esi + 0x238) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F800000;
    edi = 0x40A00000;
    MEM32(esi + 0x22C) = edi;
    ebx = 0x3F4CCCCD;
    MEM32(esi + 0x74) = ebx;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = 0x3F666666;
    MEM32(edx + 0x20) = ebx;
    MEM32(edx + 0x24) = ecx;
    MEM32(esi + 0x26C) = eax;
    MEM32(esi + 0x274) = eax;
    MEM32(esi + 0x270) = ecx;
    MEM32(esi + 0x278) = 0x40000000;
    MEM32(esi + 0x27C) = ecx;
    MEM32(esi + 0x280) = 0xC0400000u;
    MEM32(esi + 0x288) = edi;
    edx = 0x40400000;
    MEM32(esi + 0x284) = edx;
    MEM32(esi + 0x294) = eax;
    MEM32(esi + 0x29C) = eax;
    MEM32(esi + 0x298) = ecx;
    MEM32(esi + 0x2A0) = eax;
    MEM32(esi + 0x2A4) = edx;
    MEM32(esi + 0x2A8) = 0x40E9999A;
    MEM32(esi + 0x2B0) = 0x41100000;
    ebx = 0x40800000;
    MEM32(esi + 0x2AC) = ebx;
    MEM32(esi + 0x2BC) = eax;
    MEM32(esi + 0x2C4) = eax;
    MEM32(esi + 0x2C0) = ecx;
    MEM32(esi + 0x2D0) = ebx;
    MEM32(esi + 0x2C8) = 0x40200000;
    MEM32(esi + 0x2CC) = 0x3F000000;
    MEM32(esi + 0x2D4) = ebx;
    MEM32(esi + 0x2D8) = edi;
    MEM32(esi + 0x2E4) = eax;
    MEM32(esi + 0x2EC) = eax;
    MEM32(esi + 0x2E8) = ecx;
    MEM32(esi + 0x2F4) = edi;
    MEM32(esi + 0x2F8) = edi;
    MEM32(esi + 0x2F0) = edx;
    MEM32(esi + 0x2FC) = 0x40C00000;
    MEM32(esi + 0x300) = 0x41000000;
    MEM32(esi + 0x314) = eax;
    MEM32(esi + 0x30C) = 0xBF000000u;
    MEM32(esi + 0x310) = ecx;
    MEM32(esi + 0x318) = 0xBE8A3D71u;
    MEM32(esi + 0x31C) = 0x3E6B851F;
    MEM32(esi + 0x320) = 0x3F666666;
    MEM32(esi + 0x324) = 0x3F4CCCCD;
    MEM32(esi + 0x328) = ecx;
    MEM32(esi + 0x334) = eax;
    MEM32(esi + 0x33C) = eax;
    MEM32(esi + 0x338) = ecx;
    MEM32(esi + 0x340) = eax;
    MEM32(esi + 0x344) = ecx;
    MEM32(esi + 0x348) = 0xC0400000u;
    POP32(esp, edi);
    MEM32(esi + 0x34C) = 0x40000000;
    MEM32(esi + 0x350) = edx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E410
 * Original: 0x0046E410 - 0x0046E42E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046E418u); RECOMP_ABI_CALL(0x0046DF20u, sub_0046DF20); /* call 0x0046DF20 */

loc_0046E418: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046E428; /* je: equal / zero */

loc_0046E41F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046E425u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046E425: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046E428: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E430
 * Original: 0x0046E430 - 0x0046E44F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E430: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E450
 * Original: 0x0046E450 - 0x0046E47B (43 bytes, 14 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E450: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx) - fp_top()); /* fsubr dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 4) - fp_top()); /* fsubr dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 8) - fp_top()); /* fsubr dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E480
 * Original: 0x0046E480 - 0x0046E49F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E480: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E4A0
 * Original: 0x0046E4A0 - 0x0046E52F (143 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046E4A8u); RECOMP_ABI_CALL(0x0057C4B0u, sub_0057C4B0); /* call 0x0057C4B0 */

loc_0046E4A8: ;
    MEM32(esi) = 0x63D34C;
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
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0xA0) = 0x3D4CCCCD;
    MEM32(esi + 0x9C) = 0x11;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xA4) = 0x41200000;
    MEM32(esi + 0xB0) = 0x3E4CCCCD;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E530
 * Original: 0x0046E530 - 0x0046E536 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E530(void)
{

loc_0046E530: ;
    eax = 0x63D380;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E540
 * Original: 0x0046E540 - 0x0046E54B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E540: ;
    MEM32(ecx) = 0x63D34C;
    g_seh_ebp = ebp; sub_0057C540(); return; /* tail jmp 0x0057C540 */

}

/**
 * sub_0046E550
 * Original: 0x0046E550 - 0x0046E58D (61 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E550: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x98) = eax;
    eax = MEM32(eax + 0x6C);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x6C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0046E589; /* je: equal / zero */

loc_0046E571: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0046E579u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_0046E579: ;
    eax = MEM32(esi + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0046E589u); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_0046E589: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0046E590
 * Original: 0x0046E590 - 0x0046E59B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E590(void)
{

loc_0046E590: ;
    MEM32(ecx + 0x94) = 0x3E800000;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E5A0
 * Original: 0x0046E5A0 - 0x0046E5EA (74 bytes, 23 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E5A0(void)
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

loc_0046E5A0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = ecx + 0x30;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x6C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    edx = ecx + 0x88;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    fp_push(MEMF(ecx + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62E2B0)); /* fadd dword ptr [0x62e2b0] */
    POP32(esp, esi);
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E5F0
 * Original: 0x0046E5F0 - 0x0046E612 (34 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E5F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E5F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(eax);
    MEMF(ecx + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xA8) = 0;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E620
 * Original: 0x0046E620 - 0x0046E63E (30 bytes, 9 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E620: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x63D38C);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0046E63Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046E63B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E640
 * Original: 0x0046E640 - 0x0046E65E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046E648u); RECOMP_ABI_CALL(0x0046E540u, sub_0046E540); /* call 0x0046E540 */

loc_0046E648: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046E658; /* je: equal / zero */

loc_0046E64F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046E655u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046E655: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046E658: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E660
 * Original: 0x0046E660 - 0x0046E7DD (381 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E660(void)
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

loc_0046E660: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x6C38A4);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    PUSH32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA4)); /* fmul dword ptr [esi + 0xa4] */
    PUSH32(esp, edi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA8)); /* fmul dword ptr [esi + 0xa8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xAC)); /* fmul dword ptr [esi + 0xac] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x94)); /* fadd dword ptr [esi + 0x94] */
    MEMF(esi + 0x34) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046E6CC; /* jne: not equal / not zero */

loc_0046E6C3: ;
    ecx = MEM32(esi + 0x8C);
    MEM32(esi + 0x34) = ecx;

loc_0046E6CC: ;
    edx = MEM32(esi + 0x98);
    eax = MEM32(edx + 0x6C);
    eax = MEM32(eax + 4);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x9C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0046E6FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046E6F4u); } /* indirect call */
    }

loc_0046E6FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0046E727; /* je: equal / zero */

loc_0046E6FF: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046E727: ;
    ecx = MEM32(esi + 0x6C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0046E737u); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_0046E737: ;
    fp_push(MEMF(esi + 0x94)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046E762; /* jne: not equal / not zero */

loc_0046E74A: ;
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x94)); /* fmul dword ptr [esi + 0x94] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0x94) - fp_top()); /* fsubr dword ptr [esi + 0x94] */
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046E762: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046E7D7; /* jne: not equal / not zero */

loc_0046E797: ;
    fp_push(MEMF(esi + 0xB0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA4)); /* fmul dword ptr [esi + 0xa4] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA4) - fp_top()); /* fsubr dword ptr [esi + 0xa4] */
    MEMF(esi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA8)); /* fmul dword ptr [esi + 0xa8] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xA8) - fp_top()); /* fsubr dword ptr [esi + 0xa8] */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xAC)); /* fmul dword ptr [esi + 0xac] */
    fp_top() = RECOMP_FP_PC(MEMF(esi + 0xAC) - fp_top()); /* fsubr dword ptr [esi + 0xac] */
    MEMF(esi + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046E7D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E7E0
 * Original: 0x0046E7E0 - 0x0046E81F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E7E0(void)
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

loc_0046E7E0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046E7F6; /* jp: parity */

loc_0046E7EF: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    esp += 4; return; /* ret */

loc_0046E7F6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046E80C; /* jne: not equal / not zero */

loc_0046E805: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    esp += 4; return; /* ret */

loc_0046E80C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E820
 * Original: 0x0046E820 - 0x0046E84D (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E820: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
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
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E850
 * Original: 0x0046E850 - 0x0046E887 (55 bytes, 18 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E850: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E890
 * Original: 0x0046E890 - 0x0046E8B6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046E890: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E8C0
 * Original: 0x0046E8C0 - 0x0046E91A (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E8C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E8C0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E920
 * Original: 0x0046E920 - 0x0046E978 (88 bytes, 33 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046E920(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046E920: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x24)); /* fadd dword ptr [ecx + 0x24] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x28)); /* fadd dword ptr [ecx + 0x28] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x2C)); /* fadd dword ptr [ecx + 0x2c] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046E980
 * Original: 0x0046E980 - 0x0046E9B3 (51 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E980(void)
{

loc_0046E980: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0046E9C0
 * Original: 0x0046E9C0 - 0x0046EA0B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x63D39C;
    if (CMP_EQ(_fa, _fb)) goto loc_0046E9D9; /* je: equal / zero */

loc_0046E9D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046E9D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046E9D7u); } /* indirect call */
    }

loc_0046E9D9: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046E9E9; /* je: equal / zero */

loc_0046E9E3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0046E9E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046E9E7u); } /* indirect call */
    }

loc_0046E9E9: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046E9F9; /* je: equal / zero */

loc_0046E9F3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0046E9F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046E9F7u); } /* indirect call */
    }

loc_0046E9F9: ;
    MEM32(esi + 0xF8) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00614360(); return; /* tail jmp 0x00614360 */

}

/**
 * sub_0046EA10
 * Original: 0x0046EA10 - 0x0046EAB9 (169 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046EA10: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x20) = ebx;
    eax = MEM32(0x698624);
    ecx = MEM32(eax);
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0x28) = 1;
    MEM8(esi + 0x74) = LO8(ebx);
    MEM32(esi + 0x14) = 0x40000000;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x70) = ebx;
    eax = 0xC61C3C00u;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = ebx;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EA71; /* je: equal / zero */

loc_0046EA6A: ;
    MEM32(eax + 0x7C) = 0x42700000;

loc_0046EA71: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EA80; /* je: equal / zero */

loc_0046EA7B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0046EA80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046EA7Du); } /* indirect call */
    }

loc_0046EA80: ;
    ecx = MEM32(esi + 0xF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EA8F; /* je: equal / zero */

loc_0046EA8A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0046EA8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046EA8Cu); } /* indirect call */
    }

loc_0046EA8F: ;
    ecx = MEM32(esi + 0xF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EA9E; /* je: equal / zero */

loc_0046EA99: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0046EA9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046EA9Bu); } /* indirect call */
    }

loc_0046EA9E: ;
    ecx = MEM32(esi + 0xF8);
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM8(esi + 0x49) = 1;
    MEM8(esi + 0x48) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00470C90(); return; /* tail jmp 0x00470C90 */

}

/**
 * sub_0046EAC0
 * Original: 0x0046EAC0 - 0x0046EBDE (286 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EAC0(void)
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

loc_0046EAC0: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xA4);
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x48);
    ebp = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046EB21; /* jle: less or equal (signed <=) */

loc_0046EAE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0046EAF0: ;
    ebp = MEM32(esi + 0x48);
    ebp = MEM32(ebp + 0x20);
    _fa = (uint32_t)(MEM8(eax + ebp + 0x18E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp + 0x18E), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046EB0C; /* jne: not equal / not zero */

loc_0046EB00: ;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x44) = MEM32(edx + 0x44) | ebp;
    _fa = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0046EB0D;

loc_0046EB0C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0046EB0D: ;
    ebp = MEM32(edx + 0xA4);
    ebp = MEM32(ebp + 0x48);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1D4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0046EAF0; /* jl: less (signed <) */

loc_0046EB21: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046EB9F; /* jne: not equal / not zero */

loc_0046EB2E: ;
    MEM32(edx + 4) = 0;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx + 0x6C);
    eax = MEM32(eax + 4);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    ecx = MEM32(eax + 0x3C);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x6627E0)); /* fld float */
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_AE(_fa, _fb)) goto loc_0046EBD5; /* jae: above or equal (unsigned >=) */

loc_0046EB64: ;
    ecx = MEM32(edx + 0x44);
    MEM32(edx + eax * 4 + 0x40) = ecx;
    eax = MEM32(edx + 0x20);
    ecx = eax + eax * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x20) = eax;
    MEMF(edx + ecx * 4 + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    ecx = edx + ecx * 4 + 0x34;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edx + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x44) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046EB9F: ;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0046EBD7; /* jbe: below or equal (unsigned <=) */

loc_0046EBA7: ;
    eax = eax + eax * 2;
    fp_push(MEMF(edx + eax * 4 + 0x2C)); /* fld float */
    ecx = edx + eax * 4 + 0x2C;
    edx = MEM32(esi + 0x48);
    eax = MEM32(edx + 0x6C);
    edx = MEM32(eax + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046EBD7; /* jp: parity */

loc_0046EBC5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046EBD7; /* jne: not equal / not zero */

loc_0046EBC9: ;
    edx = MEM32(edx + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0046EBD5: ;
    fp_pop(); /* fstp st(0) */

loc_0046EBD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0046EBE0
 * Original: 0x0046EBE0 - 0x0046EBF2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EBE0(void)
{

loc_0046EBE0: ;
    eax = MEM32(0x6797CC);
    ecx = MEM32(ecx + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046EBF1u); RECOMP_ABI_CALL(0x004710D0u, sub_004710D0); /* call 0x004710D0 */

loc_0046EBF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046EC00
 * Original: 0x0046EC00 - 0x0046EC0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046EC00: ;
    ecx = MEM32(ecx + 0xF8);
    g_seh_ebp = ebp; sub_00471080(); return; /* tail jmp 0x00471080 */

}

/**
 * sub_0046EC10
 * Original: 0x0046EC10 - 0x0046EC1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046EC10: ;
    MEM32(ecx) = 0x63D3A4;
    g_seh_ebp = ebp; sub_0057C540(); return; /* tail jmp 0x0057C540 */

}

/**
 * sub_0046EC20
 * Original: 0x0046EC20 - 0x0046EC26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC20(void)
{

loc_0046EC20: ;
    eax = 0x63D3D8;
    esp += 4; return; /* ret */

}

/**
 * sub_0046EC30
 * Original: 0x0046EC30 - 0x0046ECA1 (113 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC30(void)
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

loc_0046EC30: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x6C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0046EC4Bu); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_0046EC4B: ;
    esi = edi + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ecx = 0x3F800000;
    MEM32(esi) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    fp_push(MEMF(edi + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630D74)); /* fmul dword ptr [0x630d74] */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0046EC8Fu); RECOMP_ABI_CALL(0x006094D0u, sub_006094D0); /* call 0x006094D0 */

loc_0046EC8F: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0046EC9Bu); RECOMP_ABI_CALL(0x006066D0u, sub_006066D0); /* call 0x006066D0 */

loc_0046EC9B: ;
    POP32(esp, edi);
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
 * sub_0046ECB0
 * Original: 0x0046ECB0 - 0x0046ED39 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046ECB0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x63D39C;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM8(esi + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x47);
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x78) = ebx;
    PUSH32(esp, 0x63D3E4);
    PUSH32(esp, 0x1DC);
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x84) = ebx;
    PUSH32(esp, 0x0046ED15u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046ED15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046ED2E; /* je: equal / zero */

loc_0046ED1C: ;
    ecx = eax;
    PUSH32(esp, 0x0046ED23u); RECOMP_ABI_CALL(0x004708F0u, sub_004708F0); /* call 0x004708F0 */

loc_0046ED23: ;
    MEM32(esi + 0xF8) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0046ED2E: ;
    MEM32(esi + 0xF8) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED40
 * Original: 0x0046ED40 - 0x0046ED5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046ED40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046ED48u); RECOMP_ABI_CALL(0x0046E9C0u, sub_0046E9C0); /* call 0x0046E9C0 */

loc_0046ED48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046ED58; /* je: equal / zero */

loc_0046ED4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046ED55u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046ED55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046ED58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046ED60
 * Original: 0x0046ED60 - 0x0046ED71 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046ED60: ;
    eax = MEM32(0x6C3894);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046ED70; /* jne: not equal / not zero */

loc_0046ED6B: ;
    g_seh_ebp = ebp; sub_0046EC00(); return; /* tail jmp 0x0046EC00 */

loc_0046ED70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED80
 * Original: 0x0046ED80 - 0x0046ED9C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED80(void)
{

loc_0046ED80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046ED88u); RECOMP_ABI_CALL(0x0057CFF0u, sub_0057CFF0); /* call 0x0057CFF0 */

loc_0046ED88: ;
    MEM32(esi) = 0x63D3A4;
    MEM32(esi + 0x94) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046EDA0
 * Original: 0x0046EDA0 - 0x0046EDBE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046EDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046EDA8u); RECOMP_ABI_CALL(0x0046EC10u, sub_0046EC10); /* call 0x0046EC10 */

loc_0046EDA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046EDB8; /* je: equal / zero */

loc_0046EDAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046EDB5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046EDB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046EDB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046EDC0
 * Original: 0x0046EDC0 - 0x0046EF3C (380 bytes, 100 insns)
 * Category: game_vehicle
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046EDC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esi + 0xF0) = edx;
    edx = MEM32(esp + 0x54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esi + 0xEC) = ecx;
    ecx = MEM32(esi + 0xF8);
    ebx = esi + 0xB0;
    PUSH32(esp, edx);
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = edi;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x24) = edi;
    MEM32(ebx) = edi;
    PUSH32(esp, 0x0046EE14u); RECOMP_ABI_CALL(0x0046FB60u, sub_0046FB60); /* call 0x0046FB60 */

loc_0046EE14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63D3F8);
    PUSH32(esp, 0x0046EE20u); RECOMP_ABI_CALL(0x00612E30u, sub_00612E30); /* call 0x00612E30 */

loc_0046EE20: ;
    PUSH32(esp, 0x75);
    PUSH32(esp, 0x63D3E4);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x0046EE31u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046EE31: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EE41; /* je: equal / zero */

loc_0046EE38: ;
    ecx = eax;
    PUSH32(esp, 0x0046EE3Fu); RECOMP_ABI_CALL(0x0046ED80u, sub_0046ED80); /* call 0x0046ED80 */

loc_0046EE3F: ;
    goto loc_0046EE43;

loc_0046EE41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046EE43: ;
    MEM32(esi + 0xB8) = eax;
    eax = esi + 0xBC;
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x20) = edi;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = edi;
    PUSH32(esp, 0x7E);
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x28) = edi;
    MEM32(eax + 0x24) = edi;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, 0x63D3E4);
    PUSH32(esp, 0x238);
    MEM32(ecx + 0x6C) = eax;
    PUSH32(esp, 0x0046EE8Cu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0046EE8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046EE9E; /* je: equal / zero */

loc_0046EE93: ;
    ecx = eax;
    PUSH32(esp, 0x0046EE9Au); RECOMP_ABI_CALL(0x0046EF70u, sub_0046EF70); /* call 0x0046EF70 */

loc_0046EE9A: ;
    ebx = eax;
    goto loc_0046EEA0;

loc_0046EE9E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0046EEA0: ;
    MEM32(ebx + 0x210) = 0x11;
    MEM32(ebx + 0x88) = edi;
    MEM32(ebx + 0x8C) = 0x3FC00000;
    MEM32(ebx + 0x90) = edi;
    ecx = ebx;
    MEM32(ebx + 0x108) = edi;
    MEM32(ebx + 0x10C) = 0x3E4CCCCD;
    MEM32(ebx + 0x110) = 0x40600000;
    PUSH32(esp, 0x0046EEE1u); RECOMP_ABI_CALL(0x0046F2A0u, sub_0046F2A0); /* call 0x0046F2A0 */

loc_0046EEE1: ;
    PUSH32(esp, 0x63D3F0);
    PUSH32(esp, 0x63D260);
    edx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0046EEF7u); RECOMP_ABI_CALL(0x006149E0u, sub_006149E0); /* call 0x006149E0 */

loc_0046EEF7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xA4);
    ecx = MEM32(eax + 0x48);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0046EF0Cu); RECOMP_ABI_CALL(0x00579BB0u, sub_00579BB0); /* call 0x00579BB0 */

loc_0046EF0C: ;
    MEM32(ebx + 0xF4) = edi;
    ecx = esi;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0x9C) = 0x41F00000;
    MEM32(esi + 0xA0) = 0x42480000;
    PUSH32(esp, 0x0046EF33u); RECOMP_ABI_CALL(0x0046EA10u, sub_0046EA10); /* call 0x0046EA10 */

loc_0046EF33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0046EF40
 * Original: 0x0046EF40 - 0x0046EF6C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046EF40: ;
    eax = MEM32(0x6C3894);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0046EF59; /* je: equal / zero */

loc_0046EF53: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0046EBE0(); return; /* tail jmp 0x0046EBE0 */

loc_0046EF59: ;
    ecx = MEM32(esi + 0xF8);
    PUSH32(esp, 0x0046EF64u); RECOMP_ABI_CALL(0x0046FBA0u, sub_0046FBA0); /* call 0x0046FBA0 */

loc_0046EF64: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0046EAC0(); return; /* tail jmp 0x0046EAC0 */

}

/**
 * sub_0046EF70
 * Original: 0x0046EF70 - 0x0046F084 (276 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046EF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046EF78u); RECOMP_ABI_CALL(0x00579CE0u, sub_00579CE0); /* call 0x00579CE0 */

loc_0046EF78: ;
    MEM32(esi) = 0x63D43C;
    MEM32(esi + 0x8C) = 0x3FC00000;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x88) = eax;
    ecx = 0x3F000000;
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = 0x3E4CCCCD;
    MEM32(esi + 0x110) = 0x40C00000;
    MEM32(esi + 0x118) = ecx;
    edx = 0x40A00000;
    ecx = 0x40E00000;
    MEM32(esi + 0x234) = eax;
    MEM32(esi + 0xA0) = 0x41000000;
    MEM32(esi + 0xA4) = edx;
    MEM32(esi + 0x124) = 0x4019999A;
    MEM32(esi + 0x128) = ecx;
    MEM32(esi + 0x12C) = 0x3F800000;
    MEM32(esi + 0x130) = 0x41A00000;
    MEM32(esi + 0x134) = 0x40400000;
    MEM32(esi + 0x138) = 0x41000000;
    MEM32(esi + 0x168) = 0x3E19999A;
    MEM32(esi + 0x74) = 0x3EA8F5C3;
    MEM32(esi + 0x214) = 0x41700000;
    MEM32(esi + 0x218) = 0x425C0000;
    MEM32(esi + 0x21C) = 0x42200000;
    MEM32(esi + 0x220) = 0x42700000;
    MEM32(esi + 0x224) = 0x3F333333;
    MEM32(esi + 0x228) = edx;
    MEM32(esi + 0x22C) = ecx;
    MEM32(esi + 0x230) = 0x3DCCCCCD;
    MEM32(esi + 0xF8) = 0x3E4CCCCD;
    MEM32(esi + 0x210) = 0x11;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F090
 * Original: 0x0046F090 - 0x0046F09B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F090: ;
    MEM32(ecx) = 0x63D43C;
    g_seh_ebp = ebp; sub_00579FB0(); return; /* tail jmp 0x00579FB0 */

}

/**
 * sub_0046F0A0
 * Original: 0x0046F0A0 - 0x0046F0E8 (72 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046F0A0(void)
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

loc_0046F0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046F0A8u); RECOMP_ABI_CALL(0x00579FD0u, sub_00579FD0); /* call 0x00579FD0 */

loc_0046F0A8: ;
    fp_push(MEMF(esi + 0x228)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046F0C7; /* jp: parity */

loc_0046F0BB: ;
    fp_push(MEMF(esi + 0xC4)); /* fld float */
    MEMF(esi + 0x228) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046F0C7: ;
    fp_push(MEMF(esi + 0x22C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046F0E6; /* jp: parity */

loc_0046F0DA: ;
    fp_push(MEMF(esi + 0xC0)); /* fld float */
    MEMF(esi + 0x22C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046F0E6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F0F0
 * Original: 0x0046F0F0 - 0x0046F133 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046F0F0(void)
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

loc_0046F0F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x21C)); /* fld float */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0046F101u); RECOMP_ABI_CALL(0x00579FF0u, sub_00579FF0); /* call 0x00579FF0 */

loc_0046F101: ;
    fp_push(MEMF(0x65E384)); /* fld float */
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F12B; /* je: equal / zero */

loc_0046F111: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F12B; /* je: equal / zero */

loc_0046F11B: ;
    edx = MEM32(eax + 0xB0);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x234) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0046F12B: ;
    MEMF(esi + 0x234) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F140
 * Original: 0x0046F140 - 0x0046F29C (348 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F140(void)
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

loc_0046F140: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xF0);
    eax = MEM32(edi + 0xB0);
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046F169; /* jne: not equal / not zero */

loc_0046F161: ;
    MEM32(esp + 0x10) = 0;

loc_0046F169: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = MEM32(esi + 0x214);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x230)); /* fsub dword ptr [esi + 0x230] */
    edx = MEM32(esi + 0x218);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x234)); /* fmul dword ptr [esi + 0x234] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x230)); /* fmul dword ptr [esi + 0x230] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x234) = (float)fp_top(); /* fst */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046F1BA; /* jp: parity */

loc_0046F1B0: ;
    MEM32(esp + 0xC) = 0;
    goto loc_0046F1E9;

loc_0046F1BA: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046F1D3; /* jne: not equal / not zero */

loc_0046F1C9: ;
    MEM32(esp + 0xC) = 0x3F800000;
    goto loc_0046F1E9;

loc_0046F1D3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0046F1E9: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0046F1F3u); RECOMP_ABI_CALL(0x00460620u, sub_00460620); /* call 0x00460620 */

loc_0046F1F3: ;
    fp_push(MEMF(esi + 0x21C)); /* fld float */
    fp_push(MEMF(esi + 0x220)); /* fld float */
    eax = MEM32(edi + 0x1D4);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F215; /* je: equal / zero */

loc_0046F212: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x3C)); /* fadd dword ptr [eax + 0x3c] */

loc_0046F215: ;
    edi = MEM32(edi + 0x1D0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F222; /* je: equal / zero */

loc_0046F21F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x2C)); /* fadd dword ptr [edi + 0x2c] */

loc_0046F222: ;
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x224)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x62D57C)); /* fsub dword ptr [0x62d57c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_push(MEMF(esi + 0x228)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x22C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D474)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d474] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esi + 0x210);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046F285; /* jp: parity */

loc_0046F26E: ;
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x210) = eax;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0057B660(); return; /* tail jmp 0x0057B660 */

loc_0046F285: ;
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x210) = eax;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0057B660(); return; /* tail jmp 0x0057B660 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F2A0
 * Original: 0x0046F2A0 - 0x0046F2C3 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046F2A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046F2A0: ;
    fp_push(MEMF(ecx + 0x110)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x63D0F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx + 0x228) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D478)); /* fmul dword ptr [0x63d478] */
    MEMF(ecx + 0x22C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F2D0
 * Original: 0x0046F2D0 - 0x0046F7B9 (1257 bytes, 407 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046F2D0: ;
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
    PUSH32(esp, 0x0046F2EEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F2EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D68C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F304u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F304: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D680);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F31Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F31D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D674);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F336u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F336: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x9C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D66C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F34Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F34F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D664);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F368u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F368: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D65C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F381u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F381: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xAC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D654);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F39Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F39A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D648);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F3B3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F3B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D63C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F3CCu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F3CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xB8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D630);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F3E5u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F3E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D2CC);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0046F3FEu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F3FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D628);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F417u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F417: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x108;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D2C4);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x0046F430u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x114;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D61C);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F449u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F449: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D60C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F462u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F462: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x11C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D600);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F47Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F47B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5F4);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F494u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F494: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D5E8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F4ADu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F4AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x128;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D5DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F4C6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F4C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x12C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5D0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F4DFu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F4DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x130;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D5C4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F4F8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F4F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x134;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D5BC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F511u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F511: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x138;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D5B4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F52Au); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F52A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x13C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D5A4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F543u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F543: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x140;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D598);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F55Cu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F55C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x144;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D58C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F575u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F575: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x148;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D580);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F58Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F58E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D574);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F5A7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F5A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x150;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D568);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F5C0u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F5C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x154;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D560);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F5D9u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F5D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x158;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D554);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F5F2u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F5F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x15C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D548);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F60Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F60B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x160;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D540);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F624u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F624: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x164;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D538);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F63Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F63D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x168;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D52C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F656u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F656: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D520);
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x0046F66Fu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F66F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x16C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D514);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F688u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F688: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x170;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D508);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F6A1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F6A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x174;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D4FC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F6BAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F6BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D4EC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F6D3u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F6D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0xF8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D4DC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F6ECu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F6EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x214;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D4D0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F705u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F705: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x218;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D4C4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F71Eu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F71E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x21C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D4B8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F737u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F737: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x220;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D4AC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F750u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x224;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D4A0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F769u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F769: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x228;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63D494);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F782u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F782: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x22C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D488);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F79Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F79B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x230;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63D47C);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F7B4u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F7B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046F7C0
 * Original: 0x0046F7C0 - 0x0046F7DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046F7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046F7C8u); RECOMP_ABI_CALL(0x0046F090u, sub_0046F090); /* call 0x0046F090 */

loc_0046F7C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046F7D8; /* je: equal / zero */

loc_0046F7CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046F7D5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046F7D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046F7D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046F7E0
 * Original: 0x0046F7E0 - 0x0046F81A (58 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7E0(void)
{

loc_0046F7E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046F7E8u); RECOMP_ABI_CALL(0x0057B840u, sub_0057B840); /* call 0x0057B840 */

loc_0046F7E8: ;
    MEM32(esi) = 0x63D6A4;
    MEM32(esi + 0x144) = 0x3E800000;
    MEM32(esi + 0x148) = 0x3E4CCCCD;
    MEM32(esi + 0x14C) = 0x42200000;
    MEM32(esi + 0xF8) = 0x3ECCCCCD;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F820
 * Original: 0x0046F820 - 0x0046F826 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F820(void)
{

loc_0046F820: ;
    eax = 0x63D6DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F830
 * Original: 0x0046F830 - 0x0046F83B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F830: ;
    MEM32(ecx) = 0x63D6A4;
    g_seh_ebp = ebp; sub_0057B960(); return; /* tail jmp 0x0057B960 */

}

/**
 * sub_0046F840
 * Original: 0x0046F840 - 0x0046F8A3 (99 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046F840(void)
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

loc_0046F840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046F848u); RECOMP_ABI_CALL(0x0057BA80u, sub_0057BA80); /* call 0x0057BA80 */

loc_0046F848: ;
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    ecx = MEM32(esi + 0xF0);
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x20);
    fp_push(MEMF(eax + 0x11C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x110)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x110] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046F875; /* jne: not equal / not zero */

loc_0046F86D: ;
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0046F877;

loc_0046F875: ;
    fp_pop(); /* fstp st(0) */

loc_0046F877: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx + 0x20);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1D4);
    fp_push(MEMF(edx + eax + -184)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x110)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x110] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046F89F; /* jp: parity */

loc_0046F897: ;
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0046F89F: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F8B0
 * Original: 0x0046F8B0 - 0x0046F8BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8B0(void)
{

loc_0046F8B0: ;
    MEM32(ecx + 0x134) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F8C0
 * Original: 0x0046F8C0 - 0x0046F9A1 (225 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8C0(void)
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

loc_0046F8C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(eax + 0x1D8);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0046F94C; /* je: equal / zero */

loc_0046F8E2: ;
    _fa = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x14), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F94C; /* je: equal / zero */

loc_0046F8E9: ;
    ecx = MEM32(eax + 0x1C);
    fp_push(MEMF(0x65E384)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0046F932; /* jle: less or equal (signed <=) */

loc_0046F8FC: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(esi + 0xF0);
    ecx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    edi = edi;

loc_0046F910: ;
    SET_LO8(ebx, MEM8(eax + 0x8E));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F91D; /* je: equal / zero */

loc_0046F91A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0046F91D: ;
    _fb = (uint32_t)(0x1D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1D4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0046F910; /* jne: not equal / not zero */

loc_0046F925: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0046F932; /* je: equal / zero */

loc_0046F92E: ;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 4)); /* fidiv dword ptr [esp + 4] */

loc_0046F932: ;
    edx = MEM32(esi + 0x6C);
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x144)); /* fmul dword ptr [esi + 0x144] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63384C)); /* fmul dword ptr [0x63384c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0046F94C: ;
    eax = MEM32(0x6797CC);
    ecx = MEM32(esi + 0x148);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x134;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0046F96Au); RECOMP_ABI_CALL(0x0046A2E0u, sub_0046A2E0); /* call 0x0046A2E0 */

loc_0046F96A: ;
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(eax + 0x1D4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F986; /* je: equal / zero */

loc_0046F983: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x3C)); /* fadd dword ptr [ecx + 0x3c] */

loc_0046F986: ;
    eax = MEM32(eax + 0x1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046F993; /* je: equal / zero */

loc_0046F990: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */

loc_0046F993: ;
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0057BC40(); return; /* tail jmp 0x0057BC40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046F9B0
 * Original: 0x0046F9B0 - 0x0046F9F7 (71 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F9B0(void)
{

loc_0046F9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 1);
    eax = esi + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63D6F4);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F9D1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F9D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x148;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D6E8);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x0046F9EAu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0046F9EA: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0046F9F2u); RECOMP_ABI_CALL(0x0057B9B0u, sub_0057B9B0); /* call 0x0057B9B0 */

loc_0046F9F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046FA00
 * Original: 0x0046FA00 - 0x0046FA1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046FA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0046FA08u); RECOMP_ABI_CALL(0x0046F830u, sub_0046F830); /* call 0x0046F830 */

loc_0046FA08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0046FA18; /* je: equal / zero */

loc_0046FA0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0046FA15u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0046FA15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0046FA18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046FA20
 * Original: 0x0046FA20 - 0x0046FA4F (47 bytes, 15 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0046FA20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0046FA20: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    edx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 4)); /* fadd dword ptr [edx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 8)); /* fadd dword ptr [edx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046FA50
 * Original: 0x0046FA50 - 0x0046FAA7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FA50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046FA50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FAB0
 * Original: 0x0046FAB0 - 0x0046FB56 (166 bytes, 55 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FAB0(void)
{

loc_0046FAB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 0x34) = eax;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x60) = edx;
    eax = MEM32(eax + 0x2C);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0046FB60
 * Original: 0x0046FB60 - 0x0046FB9C (60 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046FB60: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esi + 0x30) = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0x0046FB83u); RECOMP_ABI_CALL(0x00471910u, sub_00471910); /* call 0x00471910 */

loc_0046FB83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x6967B8) = 0;
    MEM8(esi + 0x1F) = LO8(eax);
    MEM32(esi + 0x20) = eax;
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0046FBA0
 * Original: 0x0046FBA0 - 0x0046FCD9 (313 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FBA0(void)
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

loc_0046FBA0: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x697B88);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x4EC);
    edi = MEM32(eax + edx * 4);
    SET_LO8(eax, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FBF1; /* jne: not equal / not zero */

loc_0046FBCF: ;
    SET_LO8(eax, MEM8(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FBF1; /* jne: not equal / not zero */

loc_0046FBD6: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FBF1; /* je: equal / zero */

loc_0046FBDD: ;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62E2B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62e2b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046FBF1; /* jne: not equal / not zero */

loc_0046FBED: ;
    SET_LO8(ebx, 1);
    goto loc_0046FBF3;

loc_0046FBF1: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0046FBF3: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FC59; /* jne: not equal / not zero */

loc_0046FBFA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FC59; /* je: equal / zero */

loc_0046FBFE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FC59; /* je: equal / zero */

loc_0046FC02: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0046FC59; /* jle: less or equal (signed <=) */

loc_0046FC09: ;
    ecx = MEM32(ecx + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax + ecx + -276;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0046FC2Au); RECOMP_ABI_CALL(0x00419860u, sub_00419860); /* call 0x00419860 */

loc_0046FC2A: ;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x164;
    PUSH32(esp, 0x0046FC44u); RECOMP_ABI_CALL(0x0046FAB0u, sub_0046FAB0); /* call 0x0046FAB0 */

loc_0046FC44: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D714);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0046FC54u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_0046FC54: ;
    MEM8(esi + 0x1D) = 1;
    POP32(esp, ebp);

loc_0046FC59: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x19C) = ecx;
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esi + 0x1A0) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x1A4) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x1A8) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x1AC) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x1B0) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x1B4) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x1B8) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x1BC) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x1C0) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x1C4) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0x1C8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0046FCD2; /* jne: not equal / not zero */

loc_0046FCCF: ;
    MEM8(esi + 0x1D) = LO8(ebx);

loc_0046FCD2: ;
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
 * sub_0046FCE0
 * Original: 0x0046FCE0 - 0x0046FD0F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0046FCE0: ;
    MEM32(ecx + 0x28) = 0;
    eax = MEM32(0x85F888);
    SET_LO8(edx, MEM8(0x85FA63));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x85F963));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x85F963)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x85F963), LO8(edx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0046FD0E; /* je: equal / zero */

loc_0046FD07: ;
    MEM32(ecx + 0x28) = 1;

loc_0046FD0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FD10
 * Original: 0x0046FD10 - 0x0046FD5A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD10(void)
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

loc_0046FD10: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FD57; /* je: equal / zero */

loc_0046FD17: ;
    fp_push(MEMF(ecx + 0x168)); /* fld float */
    eax = MEM32(0x6C38A4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x138)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x138] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046FD4A; /* jp: parity */

loc_0046FD32: ;
    fp_push(MEMF(ecx + 0x148)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x130)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x130] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046FD4A; /* jne: not equal / not zero */

loc_0046FD45: ;
    fp_pop(); /* fstp st(0) */

loc_0046FD47: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0046FD4A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x13C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x13c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0046FD47; /* jnp: not parity */

loc_0046FD57: ;
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
 * sub_0046FD60
 * Original: 0x0046FD60 - 0x0046FDFB (155 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD60(void)
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

loc_0046FD60: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    edx = 0x40533333;
    if (CMP_A(_fa, _fb)) goto loc_0046FDD3; /* ja: above (unsigned >) */

loc_0046FD71: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x46FDFC); /* switch: 6 entries, 3 targets */
    if (_jt == 0x0046FD78u) goto loc_0046FD78;
    if (_jt == 0x0046FDBDu) goto loc_0046FDBD;
    if (_jt == 0x0046FDD3u) goto loc_0046FDD3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046FD78: ;
    eax = MEM32(0x679680);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D748)); /* fmul dword ptr [0x63d748] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D2A0)); /* fadd dword ptr [0x63d2a0] */
    MEMF(ecx + 0x130) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D410)); /* fadd dword ptr [0x63d410] */
    MEMF(ecx + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0046FDE3;

loc_0046FDBD: ;
    MEM32(ecx + 0x130) = 0x40800000;
    MEM32(ecx + 0x134) = 0x40AB3333;
    goto loc_0046FDE3;

loc_0046FDD3: ;
    MEM32(ecx + 0x130) = edx;
    MEM32(ecx + 0x134) = 0x40A00000;

loc_0046FDE3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FDF9; /* jne: not equal / not zero */

loc_0046FDE9: ;
    MEM32(ecx + 0x130) = edx;
    MEM32(ecx + 0x134) = 0x40E00000;

loc_0046FDF9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046FE20
 * Original: 0x0046FE20 - 0x0046FE4B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FE20: ;
    MEM8(ecx + 0x1F) = 1;
    eax = MEM32(0x692EA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FE3F; /* jne: not equal / not zero */

loc_0046FE2D: ;
    PUSH32(esp, 0x63D764);
    PUSH32(esp, 0x0046FE37u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FE37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00404F20(); return; /* tail jmp 0x00404F20 */

loc_0046FE3F: ;
    PUSH32(esp, 0x63D74C);
    PUSH32(esp, 0x0046FE49u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FE49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FE50
 * Original: 0x0046FE50 - 0x0046FE66 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FE50: ;
    MEM8(ecx + 0x1F) = 0;
    eax = MEM32(0x6C3890);
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FE65; /* je: equal / zero */

loc_0046FE60: ;
    g_seh_ebp = ebp; sub_00404F20(); return; /* tail jmp 0x00404F20 */

loc_0046FE65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FE70
 * Original: 0x0046FE70 - 0x0046FE98 (40 bytes, 13 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FE70(void)
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

loc_0046FE70: ;
    fp_push(MEMF(ecx + 0x148)); /* fld float */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x134)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x134] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0046FE95; /* jne: not equal / not zero */

loc_0046FE85: ;
    PUSH32(esp, 0x63D774);
    PUSH32(esp, 0x0046FE8Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FE8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0046FE95: ;
    SET_LO8(eax, LO8(edx));
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046FEA0
 * Original: 0x0046FEA0 - 0x0046FF25 (133 bytes, 47 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FEA0(void)
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

loc_0046FEA0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FEB9; /* je: equal / zero */

loc_0046FEAD: ;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x6C);
    edx = MEM32(eax + 4);

loc_0046FEB9: ;
    eax = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x6627FC);
    if (CMP_EQ(_fa, _fb)) goto loc_0046FF1C; /* je: equal / zero */

loc_0046FECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FF1C; /* je: equal / zero */

loc_0046FED0: ;
    ecx = MEM32(ecx + 0x38);
    fp_push(MEMF(0x6627E8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6307D4)); /* fsub dword ptr [0x6307d4] */
    eax = MEM32(0x6C8EB8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0xB4); PUSH32(esp, 0x0046FF01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0046FEFBu); } /* indirect call */
    }

loc_0046FF01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0046FF1C; /* je: equal / zero */

loc_0046FF06: ;
    PUSH32(esp, 0x63D794);
    PUSH32(esp, 0x0046FF10u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_0046FF10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0046FF1C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0046FF30
 * Original: 0x0046FF30 - 0x00470061 (305 bytes, 101 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FF30(void)
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

loc_0046FF30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0046FF3Bu); RECOMP_ABI_CALL(0x0046FEA0u, sub_0046FEA0); /* call 0x0046FEA0 */

loc_0046FF3B: ;
    ecx = MEM32(esp + 0xC);
    MEM8(ecx) = LO8(eax);
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0x30);
    fp_push(MEMF(edx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x12C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x12c] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046FFA6; /* jp: parity */

loc_0046FF87: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FFA6; /* je: equal / zero */

loc_0046FF92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0046FFA6; /* je: equal / zero */

loc_0046FF97: ;
    PUSH32(esp, 0x63D81C);
    PUSH32(esp, 0x0046FFA1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FFA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0046FFDF;

loc_0046FFA6: ;
    fp_push(MEMF(esi + 0x148)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x130)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x130] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0046FFBD; /* jp: parity */

loc_0046FFB9: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0046FFE1;

loc_0046FFBD: ;
    PUSH32(esp, 0x0046FFC2u); RECOMP_ABI_CALL(0x00471990u, sub_00471990); /* call 0x00471990 */

loc_0046FFC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FFE1; /* jne: not equal / not zero */

loc_0046FFC6: ;
    PUSH32(esp, 0x63D808);
    PUSH32(esp, 0x0046FFD0u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FFD0: ;
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0046FFDBu); RECOMP_ABI_CALL(0x004BCFD0u, sub_004BCFD0); /* call 0x004BCFD0 */

loc_0046FFDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0046FFE1; /* jne: not equal / not zero */

loc_0046FFDF: ;
    SET_LO8(ebx, 1);

loc_0046FFE1: ;
    fp_push(MEMF(esi + 0x148)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x134)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x134] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470003; /* jne: not equal / not zero */

loc_0046FFF4: ;
    PUSH32(esp, 0x63D7F4);
    PUSH32(esp, 0x0046FFFEu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0046FFFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_00470003: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047002D; /* je: equal / zero */

loc_0047000E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047002D; /* je: equal / zero */

loc_00470013: ;
    fp_push(MEMF(esi + 0x144)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x140)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x140] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047005A; /* jne: not equal / not zero */

loc_00470026: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0047002D: ;
    fp_push(MEMF(esi + 0x140)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D7F0)); /* fadd dword ptr [0x63d7f0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x144)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x144] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047005A; /* jp: parity */

loc_00470046: ;
    PUSH32(esp, 0x63D7D0);
    PUSH32(esp, 0x00470050u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00470050: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0047005A: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00470070
 * Original: 0x00470070 - 0x004700EA (122 bytes, 33 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00470070: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0xA4) = 5;
    MEM32(ecx + 0x3C) = 0xFFFF;
    MEM32(ecx + 0x158) = 3;
    edx = eax + 0x6967C0;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = ecx + 0x8C;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    eax = eax + 0x696808;
    esi = MEM32(eax);
    edx = ecx + 0x98;
    ecx = MEM32(ecx + 0x15C);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63D834);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x004700E0u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004700E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004700F0
 * Original: 0x004700F0 - 0x00470122 (50 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004700F0(void)
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

loc_004700F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470102; /* je: equal / zero */

loc_004700F8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00470102: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470118; /* jne: not equal / not zero */

loc_00470109: ;
    fp_push(MEMF(0x6797CC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1C)); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_00470118: ;
    MEM32(ecx + 0x1C) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00470130
 * Original: 0x00470130 - 0x00470139 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00470130: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00470140
 * Original: 0x00470140 - 0x00470199 (89 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00470140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 0x44C80000;
    MEM32(ecx + 4) = 0x41100000;
    MEM32(ecx + 8) = 0x40533333;
    MEM32(ecx + 0xC) = 0x40E00000;
    MEM32(ecx + 0x18) = 0x3E051EB8;
    MEM8(ecx + 0x24) = 1;
    MEM32(ecx + 0x30) = 3;
    MEM32(ecx + 0x28) = 0x42700000;
    MEM32(ecx + 0x2C) = 0x43480000;
    MEM32(ecx + 0x34) = eax;
    MEM8(ecx + 0x38) = LO8(eax);
    MEM32(ecx + 0x14) = 0x40000000;
    MEM32(ecx + 0x10) = 0x40200000;
    PUSH32(esp, 0x00470196u); RECOMP_ABI_CALL(0x00470130u, sub_00470130); /* call 0x00470130 */

loc_00470196: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004701A0
 * Original: 0x004701A0 - 0x00470269 (201 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004701A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004701A0: ;
    eax = ecx;
    MEM32(eax + 0x14) = 0xC1200000u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, edi);
    edi = 0x40700000;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x5C) = ecx;
    edx = 0x40133333;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = 0x41200000;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 4) = edi;
    MEM32(eax) = 0x3F800000;
    MEM32(eax + 8) = 0x40AB3333;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x2C) = 0x40600000;
    ecx = 0x3FD33333;
    MEM32(eax + 0x24) = ecx;
    edx = 0x3F90A3D7;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = 0x3F800000;
    ecx = 0xC0200000u;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x34) = 0x3F800000;
    MEM32(eax + 0x38) = ecx;
    edi = 0x3FB33333;
    MEM32(eax + 0x30) = edi;
    MEM32(eax + 0x78) = edi;
    MEM32(eax + 0x7C) = edx;
    MEM32(eax + 0x80) = 0x40200000;
    edi = 0x3FE51EB8;
    MEM32(eax + 0x3C) = edi;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = 0x3F4A3D71;
    MEM32(eax + 0x84) = edi;
    MEM32(eax + 0x88) = 0x3F800000;
    MEM32(eax + 0x8C) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00470270
 * Original: 0x00470270 - 0x0047027D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    MEM8(ecx + 0x24) = LO8(eax);
    g_seh_ebp = ebp; sub_0046FE50(); return; /* tail jmp 0x0046FE50 */

}

/**
 * sub_00470280
 * Original: 0x00470280 - 0x0047029A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00470280: ;
    PUSH32(esp, 0x00470285u); RECOMP_ABI_CALL(0x0046FCE0u, sub_0046FCE0); /* call 0x0046FCE0 */

loc_00470285: ;
    SET_LO8(eax, MEM8(ecx + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470299; /* je: equal / zero */

loc_0047028C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470299; /* jne: not equal / not zero */

loc_00470292: ;
    MEM32(ecx + 0x28) = 0;

loc_00470299: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004702A0
 * Original: 0x004702A0 - 0x004702EA (74 bytes, 23 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004702A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004702A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    PUSH32(esp, 0x63D868);
    ecx = edi;
    PUSH32(esp, 0x004702B3u); RECOMP_ABI_CALL(0x00471640u, sub_00471640); /* call 0x00471640 */

loc_004702B3: ;
    ecx = esi;
    PUSH32(esp, 0x004702BAu); RECOMP_ABI_CALL(0x0046FD60u, sub_0046FD60); /* call 0x0046FD60 */

loc_004702BA: ;
    ecx = MEM32(esi + 0xA4);
    eax = 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004702D4; /* jne: not equal / not zero */

loc_004702C9: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004702DD; /* je: equal / zero */

loc_004702D4: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004702DDu); RECOMP_ABI_CALL(0x00472550u, sub_00472550); /* call 0x00472550 */

loc_004702DD: ;
    POP32(esp, edi);
    ecx = esi + 0x128;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00470130(); return; /* tail jmp 0x00470130 */

}

/**
 * sub_004702F0
 * Original: 0x004702F0 - 0x004703DB (235 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004702F0(void)
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

loc_004702F0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x70));
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    ecx = MEM32(eax + 0x3C);
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    edx = ecx;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    MEM32(esp + 0xC) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    ecx = MEM32(esp + 0x78);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10001);
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x50;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x6C8EB8);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x1C) = 0;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x00470362u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047035Cu); } /* indirect call */
    }

loc_00470362: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0047036F; /* je: equal / zero */

loc_00470366: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x70)) >> 32) & 1);
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0047036F: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10001);
    PUSH32(esp, edx);
    edx = esp + 0x50;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(0x6C8EB8);
    PUSH32(esp, edx);
    edx = esp + 0x38;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x38) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x004703CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004703C8u); } /* indirect call */
    }

loc_004703CE: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x70)) >> 32) & 1);
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004703E0
 * Original: 0x004703E0 - 0x004703F2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004703E0(void)
{

loc_004703E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004703EFu); RECOMP_ABI_CALL(0x004700F0u, sub_004700F0); /* call 0x004700F0 */

loc_004703EF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00470400
 * Original: 0x00470400 - 0x0047040F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470400(void)
{

loc_00470400: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0047040Cu); RECOMP_ABI_CALL(0x004700F0u, sub_004700F0); /* call 0x004700F0 */

loc_0047040C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00470410
 * Original: 0x00470410 - 0x0047043E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00470410: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x63D880;
    if (CMP_EQ(_fa, _fb)) goto loc_00470426; /* je: equal / zero */

loc_00470420: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00470426u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00470424u); } /* indirect call */
    }

loc_00470426: ;
    ecx = MEM32(esi + 0x1CC);
    PUSH32(esp, ecx);
    MEM32(esi + 0x38) = 0;
    PUSH32(esp, 0x00470439u); RECOMP_ABI_CALL(0x00577350u, sub_00577350); /* call 0x00577350 */

loc_00470439: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00470440
 * Original: 0x00470440 - 0x00470466 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470440(void)
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

loc_00470440: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470463; /* je: equal / zero */

loc_00470447: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00470463; /* jp: parity */

loc_0047045E: ;
    PUSH32(esp, 0x00470463u); RECOMP_ABI_CALL(0x00470270u, sub_00470270); /* call 0x00470270 */

loc_00470463: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00470470
 * Original: 0x00470470 - 0x00470567 (247 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470470(void)
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

loc_00470470: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    MEM8(esi + 0x1E) = 1;
    if (CMP_GE(_fas, _fbs)) goto loc_0047055C; /* jge: greater or equal (signed >=) */

loc_00470486: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00470497u); RECOMP_ABI_CALL(0x00473770u, sub_00473770); /* call 0x00473770 */

loc_00470497: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047055C; /* je: equal / zero */

loc_0047049F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x18;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x48);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63384C)); /* fmul dword ptr [0x63384c] */
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) / fp_top()); /* fdivr dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0xCC;
    PUSH32(esp, 0x004704FCu); RECOMP_ABI_CALL(0x00471E40u, sub_00471E40); /* call 0x00471E40 */

loc_004704FC: ;
    SET_LO8(eax, MEM8(esi + 0x160));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xEC) = LO8(eax);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x160) = LO8(edx);
    eax = esi + 0xD8;
    edx = MEM32(eax);
    ecx = esi + 0x40;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = esi;
    MEM32(esi + 0xA4) = 7;
    MEM8(esi + 0xA8) = 0;
    PUSH32(esp, 0x00470544u); RECOMP_ABI_CALL(0x004702A0u, sub_004702A0); /* call 0x004702A0 */

loc_00470544: ;
    ecx = esi;
    PUSH32(esp, 0x0047054Bu); RECOMP_ABI_CALL(0x0046FE20u, sub_0046FE20); /* call 0x0046FE20 */

loc_0047054B: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(0x6627E4) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0047055C: ;
    MEM8(esi + 0x1E) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_00470570
 * Original: 0x00470570 - 0x004708B8 (840 bytes, 221 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470570(void)
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

loc_00470570: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004708B0; /* je: equal / zero */

loc_00470584: ;
    eax = MEM32(esi + 0x190);
    fp_push(MEMF(esi + 0x178)); /* fld float */
    ecx = MEM32(esi + 0x194);
    edx = MEM32(esi + 0x198);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x16), 0 (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x164);
    if (CMP_EQ(_fa, _fb)) goto loc_004705FA; /* je: equal / zero */

loc_004705BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x17C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00470624;

loc_004705FA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x17C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00470624: ;
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x6C);
    eax = MEM32(eax + 4);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6627FC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00470653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047064Du); } /* indirect call */
    }

loc_00470653: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004706A4; /* je: equal / zero */

loc_00470658: ;
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    PUSH32(esp, 0x63D8FC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x90)); /* fmul dword ptr [esp + 0x90] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x90)); /* fmul dword ptr [esp + 0x90] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x90)); /* fmul dword ptr [esp + 0x90] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004706A1u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_004706A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004706A4: ;
    ecx = MEM32(edi + 0xF0);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(edi + 0xF4);
    MEM32(esp + 0x48) = edx;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    eax = MEM32(edi + 0xF8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0xC;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004706E8u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_004706E8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004706FF; /* je: equal / zero */

loc_004706EF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D8DC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x004706FFu); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_004706FF: ;
    edx = MEM32(esi + 0x190);
    eax = MEM32(esi + 0x194);
    ecx = MEM32(esi + 0x198);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = eax;
    fp_push(MEMF(edi + 0x108)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x54) = ecx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 0x5C) = edx;
    edx = esp + 0x64;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x632600)); /* fadd dword ptr [0x632600] */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00470795u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_00470795: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004707ADu); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_004707AD: ;
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
    MEM32(esp + 0x70) = ecx;
    MEM32(0x679680) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D678)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d678] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00470879; /* jp: parity */

loc_004707F0: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62E2B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62e2b0] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470879; /* jne: not equal / not zero */

loc_0047082B: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    MEM32(esi + 0xA4) = 2;
    PUSH32(esp, 0x00470847u); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_00470847: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D8C8);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00470857u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_00470857: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D8BC);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00470867u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_00470867: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D8A8);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00470877u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_00470877: ;
    goto loc_0047089A;

loc_00470879: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = esi + 0x40;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0xA4) = 1;

loc_0047089A: ;
    ecx = esi;
    PUSH32(esp, 0x004708A1u); RECOMP_ABI_CALL(0x004702A0u, sub_004702A0); /* call 0x004702A0 */

loc_004708A1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63D884);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004708B0u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_004708B0: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004708C0
 * Original: 0x004708C0 - 0x004708EB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004708C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004708C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004708D0u); RECOMP_ABI_CALL(0x004729E0u, sub_004729E0); /* call 0x004729E0 */

loc_004708D0: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004708E1u); RECOMP_ABI_CALL(0x004702F0u, sub_004702F0); /* call 0x004702F0 */

loc_004708E1: ;
    MEM8(esi + 0x14C) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004708F0
 * Original: 0x004708F0 - 0x004709A5 (181 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004708F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004708F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x3C;
    ecx = edi + 0x10;
    MEM32(esi) = 0x63D880;
    PUSH32(esp, 0x00470906u); RECOMP_ABI_CALL(0x00471ED0u, sub_00471ED0); /* call 0x00471ED0 */

loc_00470906: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x90;
    MEM32(edi + 0x78) = 0x420C0000;
    MEM32(edi + 0x7C) = 0x40A00000;
    MEM8(edi + 0x8C) = LO8(ebx);
    PUSH32(esp, 0x00470927u); RECOMP_ABI_CALL(0x00472360u, sub_00472360); /* call 0x00472360 */

loc_00470927: ;
    ecx = edi;
    PUSH32(esp, 0x0047092Eu); RECOMP_ABI_CALL(0x00471870u, sub_00471870); /* call 0x00471870 */

loc_0047092E: ;
    ecx = esi + 0x128;
    PUSH32(esp, 0x00470939u); RECOMP_ABI_CALL(0x00470140u, sub_00470140); /* call 0x00470140 */

loc_00470939: ;
    ecx = esi + 0x164;
    PUSH32(esp, 0x00470944u); RECOMP_ABI_CALL(0x0046FA50u, sub_0046FA50); /* call 0x0046FA50 */

loc_00470944: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x0047094Fu); RECOMP_ABI_CALL(0x00473D10u, sub_00473D10); /* call 0x00473D10 */

loc_0047094F: ;
    PUSH32(esp, 0x76);
    PUSH32(esp, 0x63D924);
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x00470960u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00470960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470970; /* je: equal / zero */

loc_00470967: ;
    ecx = eax;
    PUSH32(esp, 0x0047096Eu); RECOMP_ABI_CALL(0x00472CF0u, sub_00472CF0); /* call 0x00472CF0 */

loc_0047096E: ;
    goto loc_00470972;

loc_00470970: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00470972: ;
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x1F) = LO8(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x18) = 0xFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(0x6967BC) = MEM32(0x6967BC) + 1;
    _fa = (uint32_t)(MEM32(0x6967BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x28) = ebx;
    MEM8(esi + 0x2C) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004709B0
 * Original: 0x004709B0 - 0x004709CE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004709B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004709B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004709B8u); RECOMP_ABI_CALL(0x00470410u, sub_00470410); /* call 0x00470410 */

loc_004709B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004709C8; /* je: equal / zero */

loc_004709BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004709C5u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004709C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004709C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004709D0
 * Original: 0x004709D0 - 0x00470C6A (666 bytes, 193 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004709D0(void)
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

loc_004709D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX16(MEM16(esi + 0x1D0));
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = eax;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, edi);
    goto loc_00470A00;

    /* nop */
    edi = edi;

loc_00470A00: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00470BD5; /* jge: greater or equal (signed >=) */

loc_00470A0E: ;
    ebp = esi + 0x1CC;
    ecx = ebp;
    PUSH32(esp, 0x00470A1Bu); RECOMP_ABI_CALL(0x00473A80u, sub_00473A80); /* call 0x00473A80 */

loc_00470A1B: ;
    edi = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470A49; /* jne: not equal / not zero */

loc_00470A24: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470A49; /* je: equal / zero */

loc_00470A2B: ;
    goto loc_00470A30;

    /* nop */

loc_00470A30: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470A49; /* je: equal / zero */

loc_00470A34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00470A49; /* jge: greater or equal (signed >=) */

loc_00470A3A: ;
    ecx = ebp;
    PUSH32(esp, 0x00470A41u); RECOMP_ABI_CALL(0x00473A80u, sub_00473A80); /* call 0x00473A80 */

loc_00470A41: ;
    edi = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470A30; /* jne: not equal / not zero */

loc_00470A49: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x16), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470A63; /* je: equal / zero */

loc_00470A56: ;
    PUSH32(esp, 0x63D9BC);
    PUSH32(esp, 0x00470A60u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00470A60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00470A63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00470B3F; /* ja: above (unsigned >) */

loc_00470A6C: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x470C6C); /* switch: 6 entries, 4 targets */
    if (_jt == 0x00470A73u) goto loc_00470A73;
    if (_jt == 0x00470A9Bu) goto loc_00470A9B;
    if (_jt == 0x00470ABFu) goto loc_00470ABF;
    if (_jt == 0x00470B31u) goto loc_00470B31;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00470A73: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470A8Au); RECOMP_ABI_CALL(0x00473720u, sub_00473720); /* call 0x00473720 */

loc_00470A8A: ;
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0xA4) = 1;
    goto loc_00470B6D;

loc_00470A9B: ;
    eax = MEM32(esp + 0x10);
    edx = esi + 0xB4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00470AAEu); RECOMP_ABI_CALL(0x00473730u, sub_00473730); /* call 0x00473730 */

loc_00470AAE: ;
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0xA4) = 6;
    goto loc_00470B6D;

loc_00470ABF: ;
    ecx = MEM32(esp + 0x10);
    edi = esi + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470ACFu); RECOMP_ABI_CALL(0x00473900u, sub_00473900); /* call 0x00473900 */

loc_00470ACF: ;
    fp_push(MEMF(esi + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x630308)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x630308] */
    SET_LO8(ebx, LO8(eax));
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470B25; /* jne: not equal / not zero */

loc_00470AE1: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    MEM32(esp + 0x1C) = 0x3DCCCCCD;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x639994)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x639994] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470B10; /* jne: not equal / not zero */

loc_00470AF9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63032C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63032c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00470B12; /* jp: parity */

loc_00470B06: ;
    MEM32(esp + 0x1C) = 0x3F000000;
    goto loc_00470B12;

loc_00470B10: ;
    fp_pop(); /* fstp st(0) */

loc_00470B12: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00470B25u); RECOMP_ABI_CALL(0x00471450u, sub_00471450); /* call 0x00471450 */

loc_00470B25: ;
    MEM32(esi + 0xA4) = 2;
    goto loc_00470B6D;

loc_00470B31: ;
    SET_LO8(ebx, 1);
    MEM32(esi + 0xA4) = 4;
    goto loc_00470B71;

loc_00470B3F: ;
    ecx = MEM32(esi + 0x15C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470B4Du); RECOMP_ABI_CALL(0x00470070u, sub_00470070); /* call 0x00470070 */

loc_00470B4D: ;
    ecx = MEM32(esi + 0x15C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(eax));
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esi + 0x15C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00470B6D; /* jl: less (signed <) */

loc_00470B63: ;
    MEM32(esi + 0x15C) = 0;

loc_00470B6D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470BC4; /* je: equal / zero */

loc_00470B71: ;
    ecx = esi;
    PUSH32(esp, 0x00470B78u); RECOMP_ABI_CALL(0x004702A0u, sub_004702A0); /* call 0x004702A0 */

loc_00470B78: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00470B81u); RECOMP_ABI_CALL(0x004708C0u, sub_004708C0); /* call 0x004708C0 */

loc_00470B81: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x84), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470BC4; /* je: equal / zero */

loc_00470B8D: ;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00470B9Bu); RECOMP_ABI_CALL(0x004702F0u, sub_004702F0); /* call 0x004702F0 */

loc_00470B9B: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470BA8; /* jne: not equal / not zero */

loc_00470BA1: ;
    PUSH32(esp, 0x63D978);
    goto loc_00470BBC;

loc_00470BA8: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00470BB1u); RECOMP_ABI_CALL(0x0046FEA0u, sub_0046FEA0); /* call 0x0046FEA0 */

loc_00470BB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470BC4; /* je: equal / zero */

loc_00470BB5: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x63D938);

loc_00470BBC: ;
    PUSH32(esp, 0x00470BC1u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00470BC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00470BC4: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00470A00; /* je: equal / zero */

loc_00470BD5: ;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA4), 5 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00470C23; /* je: equal / zero */

loc_00470BE0: ;
    MEM8(esi + 0xA8) = 1;
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
    MEM32(esp + 0x14) = ecx;
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    MEMF(esi + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00470C34;

loc_00470C23: ;
    MEM8(esi + 0xA8) = 0;
    MEM32(esi + 0x88) = 0x3F800000;

loc_00470C34: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470C53; /* je: equal / zero */

loc_00470C38: ;
    ecx = esi;
    PUSH32(esp, 0x00470C3Fu); RECOMP_ABI_CALL(0x004702A0u, sub_004702A0); /* call 0x004702A0 */

loc_00470C3F: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x00470C4Au); RECOMP_ABI_CALL(0x00473AA0u, sub_00473AA0); /* call 0x00473AA0 */

loc_00470C4A: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00470C53: ;
    eax = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xA4) = 4;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00470C90
 * Original: 0x00470C90 - 0x00470DB0 (288 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470C90(void)
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

loc_00470C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x63D9EC);
    esi = ecx;
    PUSH32(esp, 0x00470C9Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00470C9F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    eax = MEM32(0x69585C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470DAC; /* je: equal / zero */

loc_00470CB7: ;
    _fa = (uint32_t)(MEM32(0x6967BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6967BC), 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00470CC8; /* jle: less or equal (signed <=) */

loc_00470CC0: ;
    _fa = (uint32_t)(MEM8(0x6627E4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x6627E4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470D08; /* jne: not equal / not zero */

loc_00470CC8: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470D11; /* jne: not equal / not zero */

loc_00470CCD: ;
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
    MEM32(esp + 8) = ecx;
    MEM32(0x679680) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x634700)); /* fmul dword ptr [0x634700] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D210)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d210] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470D11; /* jne: not equal / not zero */

loc_00470D08: ;
    MEM32(esi + 8) = 1;
    goto loc_00470D14;

loc_00470D11: ;
    MEM32(esi + 8) = ebx;

loc_00470D14: ;
    PUSH32(esp, edi);
    ecx = esi + 0x3C;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x00470D23u); RECOMP_ABI_CALL(0x00471870u, sub_00471870); /* call 0x00471870 */

loc_00470D23: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00470D2Cu); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_00470D2C: ;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(0x63D70C);
    edi = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00470D46u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_00470D46: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00470D51u); RECOMP_ABI_CALL(0x004FF410u, sub_004FF410); /* call 0x004FF410 */

loc_00470D51: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00470D72; /* je: equal / zero */

loc_00470D5C: ;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(ecx + 0x3C);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(edx + eax * 4 + 0x10));
    MEM32(esi + 0x18) = eax;
    goto loc_00470D79;

loc_00470D72: ;
    MEM32(esi + 0x18) = 0xFFFF;

loc_00470D79: ;
    ecx = MEM32(0x6C3890);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470D97; /* jne: not equal / not zero */

loc_00470D85: ;
    edx = MEM32(esi + 0x30);
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x1D4);
    MEM8(ecx + 0x98) = LO8(ebx);

loc_00470D97: ;
    ecx = esi + 0x1CC;
    PUSH32(esp, 0x00470DA2u); RECOMP_ABI_CALL(0x00473BF0u, sub_00473BF0); /* call 0x00473BF0 */

loc_00470DA2: ;
    ecx = esi;
    PUSH32(esp, 0x00470DA9u); RECOMP_ABI_CALL(0x004709D0u, sub_004709D0); /* call 0x004709D0 */

loc_00470DA9: ;
    MEM8(esi + 0x1E) = LO8(ebx);

loc_00470DAC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00470DB0
 * Original: 0x00470DB0 - 0x00470FB2 (514 bytes, 161 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470DB0(void)
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

loc_00470DB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x697B90);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470DC8; /* jne: not equal / not zero */

loc_00470DC1: ;
    ecx = esi;
    PUSH32(esp, 0x00470DC8u); RECOMP_ABI_CALL(0x00470280u, sub_00470280); /* call 0x00470280 */

loc_00470DC8: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470DF8; /* je: equal / zero */

loc_00470DCF: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470DF8; /* jne: not equal / not zero */

loc_00470DD6: ;
    ecx = esi;
    PUSH32(esp, 0x00470DDDu); RECOMP_ABI_CALL(0x0046FD10u, sub_0046FD10); /* call 0x0046FD10 */

loc_00470DDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470DF8; /* je: equal / zero */

loc_00470DE1: ;
    MEM8(esi + 0x1C) = 1;
    PUSH32(esp, 0x00470DEAu); RECOMP_ABI_CALL(0x00470570u, sub_00470570); /* call 0x00470570 */

loc_00470DEA: ;
    ecx = MEM32(0x6797CC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470DF8u); RECOMP_ABI_CALL(0x004708C0u, sub_004708C0); /* call 0x004708C0 */

loc_00470DF8: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xB) = LO8(ebx);
    MEM8(esp + 0xA) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00470E9B; /* jne: not equal / not zero */

loc_00470E0D: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470E3E; /* je: equal / zero */

loc_00470E14: ;
    ecx = esi;
    PUSH32(esp, 0x00470E1Bu); RECOMP_ABI_CALL(0x0046FE70u, sub_0046FE70); /* call 0x0046FE70 */

loc_00470E1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470E78; /* je: equal / zero */

loc_00470E1F: ;
    edx = MEM32(esi + 0x134);
    MEM32(0x6967B8) = edx;
    ecx = esi;
    MEM8(esp + 0xB) = 1;
    MEM8(esi + 0x1E) = LO8(ebx);
    PUSH32(esp, 0x00470E3Au); RECOMP_ABI_CALL(0x0046FE50u, sub_0046FE50); /* call 0x0046FE50 */

loc_00470E3A: ;
    SET_LO8(ebx, 1);
    goto loc_00470E78;

loc_00470E3E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470E6A; /* jne: not equal / not zero */

loc_00470E45: ;
    fp_push(MEMF(0x6967B8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00470E6A; /* jne: not equal / not zero */

loc_00470E58: ;
    fp_push(MEMF(0x6967B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x6797CC)); /* fsub dword ptr [0x6797cc] */
    MEMF(0x6967B8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00470E6A: ;
    eax = esp + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00470E76u); RECOMP_ABI_CALL(0x0046FF30u, sub_0046FF30); /* call 0x0046FF30 */

loc_00470E76: ;
    SET_LO8(ebx, LO8(eax));

loc_00470E78: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470EBC; /* jne: not equal / not zero */

loc_00470E7F: ;
    fp_push(MEMF(0x6967B8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x638140)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x638140] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00470EBC; /* jp: parity */

loc_00470E92: ;
    ecx = esi;
    PUSH32(esp, 0x00470E99u); RECOMP_ABI_CALL(0x00470470u, sub_00470470); /* call 0x00470470 */

loc_00470E99: ;
    goto loc_00470EBC;

loc_00470E9B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00470EA4u); RECOMP_ABI_CALL(0x0046FEA0u, sub_0046FEA0); /* call 0x0046FEA0 */

loc_00470EA4: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470EBC; /* je: equal / zero */

loc_00470EAA: ;
    PUSH32(esp, 0x63DA10);
    MEM8(esp + 0xE) = 1;
    PUSH32(esp, 0x00470EB9u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00470EB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00470EBC: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x00470ECAu); RECOMP_ABI_CALL(0x0056B8B0u, sub_0056B8B0); /* call 0x0056B8B0 */

loc_00470ECA: ;
    edx = MEM32(esi + 0x28);
    ecx = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470EEF; /* je: equal / zero */

loc_00470ED6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470F2B; /* jne: not equal / not zero */

loc_00470EDA: ;
    SET_LO8(edx, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470FAE; /* jne: not equal / not zero */

loc_00470EE5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00470FAE; /* je: equal / zero */

loc_00470EED: ;
    goto loc_00470EF3;

loc_00470EEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470F2B; /* jne: not equal / not zero */

loc_00470EF3: ;
    SET_LO8(edx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00470F2B; /* jne: not equal / not zero */

loc_00470EFB: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00470F14; /* je: equal / zero */

loc_00470F05: ;
    MEM32(esi + 0xA4) = 4;
    goto loc_00470F9B;

loc_00470F14: ;
    PUSH32(esp, 0x00470F19u); RECOMP_ABI_CALL(0x004709D0u, sub_004709D0); /* call 0x004709D0 */

loc_00470F19: ;
    ecx = MEM32(0x6797CC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470F27u); RECOMP_ABI_CALL(0x004708C0u, sub_004708C0); /* call 0x004708C0 */

loc_00470F27: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00470F2B: ;
    edx = MEM32(esi + 0x38);
    MEM32(esi + 0xA4) = ecx;
    MEM32(esi + 0x3C) = 0xFFFF;
    MEM32(esi + 0x158) = 3;
    MEM8(esi + 0xA8) = 1;
    edx = MEM32(edx + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(edx);
    PUSH32(esp, edi);
    ecx = esi + 0x40;
    edi = ecx;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00470F8F; /* je: equal / zero */

loc_00470F6D: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    fp_push(MEMF(esi + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D674)); /* fadd dword ptr [0x62d674] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */

loc_00470F8F: ;
    MEM32(esi + 0x88) = 0x3F800000;
    ecx = esi;

loc_00470F9B: ;
    PUSH32(esp, 0x00470FA0u); RECOMP_ABI_CALL(0x004702A0u, sub_004702A0); /* call 0x004702A0 */

loc_00470FA0: ;
    ecx = MEM32(0x6797CC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00470FAEu); RECOMP_ABI_CALL(0x004708C0u, sub_004708C0); /* call 0x004708C0 */

loc_00470FAE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00470FC0
 * Original: 0x00470FC0 - 0x0047107E (190 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470FC0(void)
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

loc_00470FC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00470FCFu); RECOMP_ABI_CALL(0x00470440u, sub_00470440); /* call 0x00470440 */

loc_00470FCF: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00470FD8u); RECOMP_ABI_CALL(0x004690F0u, sub_004690F0); /* call 0x004690F0 */

loc_00470FD8: ;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(0x63D70C);
    edi = MEM32(ecx + 0x5C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00470FF2u); RECOMP_ABI_CALL(0x00469FA0u, sub_00469FA0); /* call 0x00469FA0 */

loc_00470FF2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00470FFDu); RECOMP_ABI_CALL(0x004FF410u, sub_004FF410); /* call 0x004FF410 */

loc_00470FFD: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047101D; /* je: equal / zero */

loc_00471007: ;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(ecx + 0x3C);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(edx + eax * 4 + 0x10));
    MEM32(esi + 0x18) = eax;
    goto loc_00471024;

loc_0047101D: ;
    MEM32(esi + 0x18) = 0xFFFF;

loc_00471024: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 0x48);
    fp_push(MEMF(edx + 0xB0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DA50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63da50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00471053; /* jne: not equal / not zero */

loc_0047103D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM8(esp + 0x10) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DA4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63da4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00471058; /* je: equal / zero */

loc_00471053: ;
    MEM8(esp + 0x10) = 0;

loc_00471058: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x128;
    PUSH32(esp, 0x00471069u); RECOMP_ABI_CALL(0x004703E0u, sub_004703E0); /* call 0x004703E0 */

loc_00471069: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00471071u); RECOMP_ABI_CALL(0x004708C0u, sub_004708C0); /* call 0x004708C0 */

loc_00471071: ;
    ecx = esi;
    PUSH32(esp, 0x00471078u); RECOMP_ABI_CALL(0x00470DB0u, sub_00470DB0); /* call 0x00470DB0 */

loc_00471078: ;
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
 * sub_00471080
 * Original: 0x00471080 - 0x004710C5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471080: ;
    eax = MEM32(0x692EA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004710C3; /* jne: not equal / not zero */

loc_0047108C: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004710A3; /* jne: not equal / not zero */

loc_00471093: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004710A3; /* jne: not equal / not zero */

loc_0047109A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004710A1u); RECOMP_ABI_CALL(0x00470FC0u, sub_00470FC0); /* call 0x00470FC0 */

loc_004710A1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004710A3: ;
    PUSH32(esp, 0x3D088889);
    ecx = esi;
    MEM8(esi + 0x2C) = 0;
    PUSH32(esp, 0x004710B3u); RECOMP_ABI_CALL(0x00470FC0u, sub_00470FC0); /* call 0x00470FC0 */

loc_004710B3: ;
    PUSH32(esp, 0x3D088889);
    ecx = esi + 0x128;
    PUSH32(esp, 0x004710C3u); RECOMP_ABI_CALL(0x00470400u, sub_00470400); /* call 0x00470400 */

loc_004710C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004710D0
 * Original: 0x004710D0 - 0x004710D9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004710D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004710D0: ;
    MEM8(ecx + 0x2C) = 1;
    g_seh_ebp = ebp; sub_00470FC0(); return; /* tail jmp 0x00470FC0 */

}

/**
 * sub_004710E0
 * Original: 0x004710E0 - 0x00471101 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004710E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004710E0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471110
 * Original: 0x00471110 - 0x0047124C (316 bytes, 97 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471110(void)
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

loc_00471110: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x34);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0xC);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, 0x85B220);
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0x0047114Du); RECOMP_ABI_CALL(0x0060A140u, sub_0060A140); /* call 0x0060A140 */

loc_0047114D: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004711BA; /* je: equal / zero */

loc_0047115C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004711BA; /* je: equal / zero */

loc_0047116B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004711BA; /* je: equal / zero */

loc_0047117A: ;
    PUSH32(esp, 0x85B260);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0047118Du); RECOMP_ABI_CALL(0x0060A140u, sub_0060A140); /* call 0x0060A140 */

loc_0047118D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004711BA; /* je: equal / zero */

loc_0047119C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004711BA; /* je: equal / zero */

loc_004711AB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004711C2; /* jne: not equal / not zero */

loc_004711BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004711C2: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004711E6; /* jne: not equal / not zero */

loc_004711DB: ;
    eax = 3;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004711E6: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00471222; /* je: equal / zero */

loc_004711F5: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00471222; /* je: equal / zero */

loc_00471204: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00471222; /* je: equal / zero */

loc_00471213: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047122D; /* jne: not equal / not zero */

loc_00471222: ;
    eax = 2;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0047122D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00471246; /* je: equal / zero */

loc_00471241: ;
    eax = 1;

loc_00471246: ;
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
 * sub_00471250
 * Original: 0x00471250 - 0x0047127B (43 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471250(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00471250: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471280
 * Original: 0x00471280 - 0x004712CB (75 bytes, 33 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00471280: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    POP32(esp, edi);
    fp_push(MEMF(eax + 4)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
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
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004712D0
 * Original: 0x004712D0 - 0x004712DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004712D0(void)
{

loc_004712D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004712E0
 * Original: 0x004712E0 - 0x00471420 (320 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004712E0(void)
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

loc_004712E0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x1C)); /* fdiv dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6627F8)); /* fmul dword ptr [0x6627f8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0047130B; /* je: equal / zero */

loc_00471301: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */

loc_0047130B: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x00471379u); RECOMP_ABI_CALL(0x00607110u, sub_00607110); /* call 0x00607110 */

loc_00471379: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    eax = esi + 0xC;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(eax) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471420
 * Original: 0x00471420 - 0x0047144B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471420: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x28) = 0x3F000000;
    MEM32(ecx + 0x2C) = 0x40A00000;
    MEM32(ecx + 0x30) = 0x40E00000;
    MEM8(ecx + 0x34) = LO8(eax);
    MEM8(ecx + 0x35) = LO8(eax);
    MEM32(ecx + 0x38) = 0x43061CAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00471450
 * Original: 0x00471450 - 0x0047150F (191 bytes, 63 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471450(void)
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

loc_00471450: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471484; /* jp: parity */

loc_0047147A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00471493;

loc_00471484: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00471493; /* jne: not equal / not zero */

loc_0047148E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */

loc_00471493: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x18)); /* fdiv dword ptr [ecx + 0x18] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004714B1; /* jne: not equal / not zero */

loc_004714AB: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004714BB;

loc_004714B1: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp) = 0;

loc_004714BB: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004714D8; /* jnp: not parity */

loc_004714D0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004714D8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM8(ecx + 0x35) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    MEM8(ecx + 0x34) = 0;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471508; /* jp: parity */

loc_004714FB: ;
    eax = MEM32(esp);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x1C) = eax;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00471508: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471510
 * Original: 0x00471510 - 0x004715F9 (233 bytes, 75 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471510(void)
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

loc_00471510: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471543; /* jp: parity */

loc_00471539: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00471552;

loc_00471543: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00471552; /* jne: not equal / not zero */

loc_0047154D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */

loc_00471552: ;
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004715E9; /* je: equal / zero */

loc_0047155D: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004715E9; /* jne: not equal / not zero */

loc_00471568: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x18)); /* fdiv dword ptr [ecx + 0x18] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(ecx + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047159D; /* jp: parity */

loc_0047159B: ;
    fp_top() = -fp_top(); /* fchs */

loc_0047159D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004715DD; /* jnp: not parity */

loc_004715A8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D418)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d418] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004715EF; /* jnp: not parity */

loc_004715B5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    MEM8(ecx + 0x34) = 0;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004715D0; /* jne: not equal / not zero */

loc_004715C3: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x1C)); /* fadd dword ptr [ecx + 0x1c] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_004715D0: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_004715DD: ;
    fp_pop(); /* fstp st(0) */
    MEM8(ecx + 0x34) = 1;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_004715E9: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x18)); /* fdiv dword ptr [ecx + 0x18] */
    MEMF(ecx + 0x20) = (float)fp_top(); /* fst */

loc_004715EF: ;
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 0x34) = 1;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471600
 * Original: 0x00471600 - 0x00471634 (52 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471600(void)
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

loc_00471600: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047162E; /* jp: parity */

loc_0047160E: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00471631; /* jne: not equal / not zero */

loc_00471625: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_0047162E: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */

loc_00471631: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471640
 * Original: 0x00471640 - 0x0047186D (557 bytes, 112 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471640: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 5;
    esi = 0x63DAF8;
    edi = esp + 8;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = 6;
    esi = 0x63DADC;
    edi = esp + 0x30;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4B) = edx;
    MEM32(esp + 0x4F) = edx;
    MEM32(esp + 0x53) = edx;
    MEM8(esp + 0x57) = LO8(edx);
    edx = MEM32(0x63DAC8);
    ecx = 5;
    esi = 0x63DAB4;
    edi = esp + 0x58;
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
    MEM32(esp + 0x80) = edx;
    edx = MEM32(0x63DAD0);
    MEM32(esp + 0x88) = edx;
    SET_LO16(edx, MEM16(0x63DAD8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp + 0x90) = LO16(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x93) = edx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x97) = edx;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x9B) = edx;
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(0x63DACC);
    MEM32(esp + 0x9F) = edx;
    MEM32(esp + 0xA3) = edx;
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(0x63DAD4);
    MEM8(esp + 0xA7) = LO8(edx);
    edx = MEM32(0x63DAA4);
    MEM32(esp + 0x8C) = ecx;
    SET_LO8(ecx, MEM8(0x63DADA));
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(0x63DAAC);
    MEM8(esp + 0x92) = LO8(ecx);
    ecx = MEM32(0x63DAA0);
    MEM32(esp + 0xB4) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(0x63DAA8);
    MEM32(esp + 0xBA) = edx;
    MEM32(esp + 0xB0) = ecx;
    SET_LO16(ecx, MEM16(0x63DAB0));
    MEM32(esp + 0xBE) = edx;
    MEM16(esp + 0xB8) = LO16(ecx);
    MEM32(esp + 0xC2) = edx;
    MEM32(esp + 0xC6) = edx;
    MEM32(esp + 0xCA) = edx;
    ecx = 6;
    esi = 0x63DA88;
    edi = esp + 0xD0;
    MEM16(esp + 0xCE) = LO16(edx);
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xEC) = ecx;
    MEM32(esp + 0xF0) = ecx;
    MEM32(esp + 0xF4) = ecx;
    ecx = 6;
    esi = 0x63DA70;
    eax = MEM32(eax + 0x68);
    edi = esp + 0xF8;
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
    MEM32(esp + 0x110) = edx;
    MEM32(esp + 0x114) = edx;
    MEM32(esp + 0x118) = edx;
    MEM32(esp + 0x11C) = edx;
    ecx = 5;
    esi = 0x63DA58;
    edi = esp + 0x120;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(esp + 0x136) = ecx;
    MEM32(esp + 0x13A) = ecx;
    MEM32(esp + 0x13E) = ecx;
    MEM32(esp + 0x142) = ecx;
    edx = eax + eax * 4;
    eax = esp + edx * 8 + 8;
    MEM16(esp + 0x146) = LO16(ecx);
    ecx = MEM32(esp + 0x14C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x630298);
    PUSH32(esp, 0x0047185Fu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_0047185F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00471870
 * Original: 0x00471870 - 0x0047190C (156 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 1;
    MEM32(esi + 0x68) = eax;
    MEM8(esi + 0x6C) = LO8(eax);
    eax = 3;
    MEM32(esi) = 0xFFFF;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x3F800000;
    MEM32(esi + 0x4C) = edx;
    ecx = esi + 0x10;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x004718ABu); RECOMP_ABI_CALL(0x00471420u, sub_00471420); /* call 0x00471420 */

loc_004718AB: ;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x40400000;
    MEM32(esi + 0x58) = 0xC1200000u;
    ecx = esi + 0xB4;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = edx;
    MEM32(esi + 0x64) = ebx;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x18) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x20) = edx;
    PUSH32(esp, 0x40490FDB);
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x28) = ebx;
    MEM32(ecx + 0x24) = ebx;
    PUSH32(esp, 0x004718F8u); RECOMP_ABI_CALL(0x00607110u, sub_00607110); /* call 0x00607110 */

loc_004718F8: ;
    MEM8(esi + 0xE4) = LO8(ebx);
    eax = MEM32(0x6627EC);
    MEM32(esi + 0xE8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00471910
 * Original: 0x00471910 - 0x0047193C (44 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471910(void)
{

loc_00471910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x10);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, 0x00471931u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_00471931: ;
    MEM32(esi + 0x18) = 0x46AFC800;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00471940
 * Original: 0x00471940 - 0x00471988 (72 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1C;
    MEM32(esi + 4) = 0xFFFF;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0047195Bu); RECOMP_ABI_CALL(0x00471870u, sub_00471870); /* call 0x00471870 */

loc_0047195B: ;
    MEM32(esi + 0x108) = ebx;
    MEM8(esi + 0x114) = LO8(ebx);
    MEM32(esi + 0x118) = 0x3F800000;
    MEM32(esi + 0x10C) = 0x41700000;
    MEM32(esi + 0x110) = 0x43061CAC;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00471990
 * Original: 0x00471990 - 0x004719D7 (71 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471990(void)
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

loc_00471990: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = MEM32(eax + 0x2C);
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004719D4; /* jp: parity */

loc_004719D1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_004719D4: ;
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
 * sub_004719E0
 * Original: 0x004719E0 - 0x00471B26 (326 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004719E0(void)
{

loc_004719E0: ;
    eax = ecx;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = edx + 4;
    edi = MEM32(ecx);
    esi = eax + 4;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    esi = edx + 0x10;
    edi = eax + 0x10;
    ecx = 0xF;
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
    ecx = MEM32(edx + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    ecx = edx + 0x50;
    edi = MEM32(ecx);
    esi = eax + 0x50;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = edx + 0x5C;
    edi = MEM32(ecx);
    esi = eax + 0x5C;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x68);
    MEM32(eax + 0x68) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x6C));
    MEM8(eax + 0x6C) = LO8(ecx);
    ecx = MEM32(edx + 0x70);
    MEM32(eax + 0x70) = ecx;
    ecx = MEM32(edx + 0x74);
    MEM32(eax + 0x74) = ecx;
    esi = edx + 0x78;
    edi = eax + 0x78;
    ecx = 6;
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
    esi = edx + 0x90;
    edi = eax + 0x90;
    ecx = 9;
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
    ecx = MEM32(edx + 0xB4);
    MEM32(eax + 0xB4) = ecx;
    ecx = MEM32(edx + 0xB8);
    MEM32(eax + 0xB8) = ecx;
    ecx = MEM32(edx + 0xBC);
    MEM32(eax + 0xBC) = ecx;
    ecx = MEM32(edx + 0xC0);
    MEM32(eax + 0xC0) = ecx;
    ecx = MEM32(edx + 0xC4);
    MEM32(eax + 0xC4) = ecx;
    ecx = MEM32(edx + 0xC8);
    MEM32(eax + 0xC8) = ecx;
    ecx = MEM32(edx + 0xCC);
    MEM32(eax + 0xCC) = ecx;
    ecx = MEM32(edx + 0xD0);
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx + 0xD4);
    MEM32(eax + 0xD4) = ecx;
    ecx = MEM32(edx + 0xD8);
    MEM32(eax + 0xD8) = ecx;
    ecx = MEM32(edx + 0xDC);
    MEM32(eax + 0xDC) = ecx;
    ecx = MEM32(edx + 0xE0);
    MEM32(eax + 0xE0) = ecx;
    SET_LO8(ecx, MEM8(edx + 0xE4));
    MEM8(eax + 0xE4) = LO8(ecx);
    edx = MEM32(edx + 0xE8);
    MEM32(eax + 0xE8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00471B30
 * Original: 0x00471B30 - 0x00471BAD (125 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471B30(void)
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

loc_00471B30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(edx)); /* fld float */
    MEM32(esp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x63DB10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x63db10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471B72; /* jp: parity */

loc_00471B64: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x638140)); /* fadd dword ptr [0x638140] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_00471B72: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x63DB10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x63db10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471B96; /* jp: parity */

loc_00471B88: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x638140)); /* fadd dword ptr [0x638140] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00471B96: ;
    ecx = MEM32(ecx + 0x10);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00471BA7u); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_00471BA7: ;
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
 * sub_00471BB0
 * Original: 0x00471BB0 - 0x00471BFC (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471BB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3D088889);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x00471BC6u); RECOMP_ABI_CALL(0x004712E0u, sub_004712E0); /* call 0x004712E0 */

loc_00471BC6: ;
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(esi + 0xBC);
    edx = MEM32(esi + 0xC0);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 8) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00471BF7u); RECOMP_ABI_CALL(0x00471B30u, sub_00471B30); /* call 0x00471B30 */

loc_00471BF7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00471C00
 * Original: 0x00471C00 - 0x00471C89 (137 bytes, 35 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471C00(void)
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

loc_00471C00: ;
    ecx = MEM32(ecx + 0x10);
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00471C86; /* jnp: not parity */

loc_00471C11: ;
    fp_push(MEMF(0x6627F0)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEM32(ecx + 0x7C) = eax;
    MEM8(0x6C2618) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x6627F0)); /* fdiv dword ptr [0x6627f0] */
    fp_push(MEMF(0x63DB18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x646DC8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(0x699860) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x64E9E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(0x6C39A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D674)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d674] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00471C6D; /* je: equal / zero */

loc_00471C66: ;
    MEM8(0x6C2618) = 1;

loc_00471C6D: ;
    fp_push(MEMF(0x63D2A0)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(0x69947C);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00471C86u); RECOMP_ABI_CALL(0x004E63C0u, sub_004E63C0); /* call 0x004E63C0 */

loc_00471C86: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471C90
 * Original: 0x00471C90 - 0x00471D14 (132 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471C90(void)
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

loc_00471C90: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x00471CC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00471CBCu); } /* indirect call */
    }

loc_00471CC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x38);
    if (CMP_EQ(_fa, _fb)) goto loc_00471CFD; /* je: equal / zero */

loc_00471CCA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00471CFD: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_00471D20
 * Original: 0x00471D20 - 0x00471D27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471D20(void)
{

loc_00471D20: ;
    SET_LO8(eax, MEM8(ecx + 0x114));
    esp += 4; return; /* ret */

}

/**
 * sub_00471D30
 * Original: 0x00471D30 - 0x00471E3C (268 bytes, 80 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471D30(void)
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

loc_00471D30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x108)); /* fld float */
    eax = MEM32(0x6797CC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x110)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x110] */
    MEM32(esp) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471D7E; /* jp: parity */

loc_00471D4F: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10C)); /* fmul dword ptr [ecx + 0x10c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x108)); /* fadd dword ptr [ecx + 0x108] */
    fp_push(MEMF(ecx + 0x110)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00471D78; /* jp: parity */

loc_00471D72: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_00471D78: ;
    MEMF(ecx + 0x108) = (float)fp_top(); fp_pop(); /* fstp */

loc_00471D7E: ;
    edx = MEM32(ecx + 0xC);
    fp_push(MEMF(ecx + 0x11C)); /* fld float */
    edx = MEM32(edx + 0x2C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x30)); /* fsub dword ptr [edx + 0x30] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x120)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x28)); /* fsub dword ptr [edx + 0x28] */
    fp_push(MEMF(ecx + 0x124)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x2C)); /* fsub dword ptr [edx + 0x2c] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x118)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x118] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00471E2B; /* jne: not equal / not zero */

loc_00471DCD: ;
    fp_push(MEMF(esp)); /* fld float */
    eax = MEM32(ecx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x108)); /* fmul dword ptr [ecx + 0x108] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    PUSH32(esp, ecx);
    ecx = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x24)); /* fadd dword ptr [edx + 0x24] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x28)); /* fadd dword ptr [edx + 0x28] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x2C)); /* fadd dword ptr [edx + 0x2c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00471E25u); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_00471E25: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00471E2B: ;
    fp_pop(); /* fstp st(0) */
    MEM8(ecx + 0x114) = 0;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, 1);
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
 * sub_00471E40
 * Original: 0x00471E40 - 0x00471E6F (47 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471E40(void)
{

loc_00471E40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00471E61u); RECOMP_ABI_CALL(0x00471280u, sub_00471280); /* call 0x00471280 */

loc_00471E61: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00471E6Bu); RECOMP_ABI_CALL(0x004712D0u, sub_004712D0); /* call 0x004712D0 */

loc_00471E6B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00471E70
 * Original: 0x00471E70 - 0x00471EC3 (83 bytes, 27 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00471E70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00471E70: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = ecx;
    MEM32(edx) = esi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x1C) = edx;
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D57C)); /* fmul dword ptr [0x62d57c] */
    fp_top() = RECOMP_FP_PC(MEMF(ecx + 8) - fp_top()); /* fsubr dword ptr [ecx + 8] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00471EBFu); RECOMP_ABI_CALL(0x004712D0u, sub_004712D0); /* call 0x004712D0 */

loc_00471EBF: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00471ED0
 * Original: 0x00471ED0 - 0x00471EF6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00471ED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = eax;
    edx = 0x3F800000;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x24) = eax;
    PUSH32(esp, 0x00471EF3u); RECOMP_ABI_CALL(0x00471420u, sub_00471420); /* call 0x00471420 */

loc_00471EF3: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00471F00
 * Original: 0x00471F00 - 0x00471FBD (189 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471F00(void)
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

loc_00471F00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = ecx;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 8);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    eax = ecx + 0xC;
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x10);
    MEM32(edx + 8) = esi;
    fp_push(MEMF(eax + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x18) = edx;
    fp_push(MEMF(eax + 4)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00471FB5u); RECOMP_ABI_CALL(0x00471420u, sub_00471420); /* call 0x00471420 */

loc_00471FB5: ;
    POP32(esp, edi);
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
 * sub_00471FC0
 * Original: 0x00471FC0 - 0x00471FE5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00471FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x63DB50;
    if (CMP_EQ(_fa, _fb)) goto loc_00471FD6; /* je: equal / zero */

loc_00471FD0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00471FD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00471FD4u); } /* indirect call */
    }

loc_00471FD6: ;
    MEM32(esi + 0x14) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00471940(); return; /* tail jmp 0x00471940 */

}

/**
 * sub_00471FF0
 * Original: 0x00471FF0 - 0x00472027 (55 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471FF0(void)
{

loc_00471FF0: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0x84) = 4;
    edx = MEM32(eax + 0x4C);
    MEM16(edx + 0xA178) = 0;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x48);
    eax = MEM32(edx + 0x1D4);
    PUSH32(esp, 0x42700000);
    MEM8(eax + 0x98) = 1;
    PUSH32(esp, 0x00472026u); RECOMP_ABI_CALL(0x00471C00u, sub_00471C00); /* call 0x00471C00 */

loc_00472026: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00472030
 * Original: 0x00472030 - 0x004721EB (443 bytes, 136 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472030(void)
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

loc_00472030: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x4C);
    _fa = (uint32_t)(MEM16(ecx + 0xA178)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xA178), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0047205B; /* jle: less or equal (signed <=) */

loc_00472047: ;
    ecx = edi;
    PUSH32(esp, 0x0047204Eu); RECOMP_ABI_CALL(0x00471FF0u, sub_00471FF0); /* call 0x00471FF0 */

loc_0047204E: ;
    PUSH32(esp, 0x63DB60);
    PUSH32(esp, 0x00472058u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00472058: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047205B: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(edx + 0x6C);
    esi = MEM32(eax + 4);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    edx = MEM32(esi + 0x38);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEM32(esp + 0x18) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DB58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63db58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004720B2; /* jp: parity */

loc_00472087: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    goto loc_004720BC;

loc_004720B2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63DB54)); /* fadd dword ptr [0x63db54] */

loc_004720BC: ;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6627FC);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ebx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x004720FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004720F5u); } /* indirect call */
    }

loc_004720FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00472130; /* je: equal / zero */

loc_00472100: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00472130: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esi);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(esi + 0x28);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    edx = MEM32(esi + 0x2C);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630D68)); /* fmul dword ptr [0x630d68] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630D68)); /* fmul dword ptr [0x630d68] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630D68)); /* fmul dword ptr [0x630d68] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x24) - fp_top()); /* fsubr dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004721E5u); RECOMP_ABI_CALL(0x00471B30u, sub_00471B30); /* call 0x00471B30 */

loc_004721E5: ;
    POP32(esp, edi);
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
 * sub_004721F0
 * Original: 0x004721F0 - 0x004722FC (268 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004721F0(void)
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

loc_004721F0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047220F; /* jne: not equal / not zero */

loc_004721FB: ;
    fp_push(MEMF(0x62D8AC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x68)); /* fdiv dword ptr [ecx + 0x68] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0047220Du); RECOMP_ABI_CALL(0x00471C00u, sub_00471C00); /* call 0x00471C00 */

loc_0047220D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0047220F: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(edx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(edx + 4)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
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
    fp_push(MEMF(0x63DBD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_push(MEMF(0x63DBCC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00472266; /* jp: parity */

loc_0047225E: ;
    fp_push(MEMF(0x63DBCC)); /* fld float */
    goto loc_00472268;

loc_00472266: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */

loc_00472268: ;
    fp_push(MEMF(0x6627F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6382CC)); /* fadd dword ptr [0x6382cc] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DBC8)); /* fmul dword ptr [0x63dbc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(MEMF(0x63DBC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630DB8)); /* fmul dword ptr [0x630db8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D4)); /* fmul dword ptr [0x6307d4] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DBC0)); /* fmul dword ptr [0x63dbc0] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x68)); /* fdiv dword ptr [ecx + 0x68] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6627F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6627f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004722D5; /* jp: parity */

loc_004722C4: ;
    eax = MEM32(0x6627F4);
    PUSH32(esp, eax);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x004722D3u); RECOMP_ABI_CALL(0x00471C00u, sub_00471C00); /* call 0x00471C00 */

loc_004722D3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004722D5: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x6627F0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x6627f0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004722F0; /* jne: not equal / not zero */

loc_004722E6: ;
    edx = MEM32(0x6627F0);
    MEM32(esp) = edx;

loc_004722F0: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004722FAu); RECOMP_ABI_CALL(0x00471C00u, sub_00471C00); /* call 0x00471C00 */

loc_004722FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00472300
 * Original: 0x00472300 - 0x0047232A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472300: ;
    eax = MEM32(0x6627FC);
    ecx = MEM32(0x6627EC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00472326u); RECOMP_ABI_CALL(0x00471C90u, sub_00471C90); /* call 0x00471C90 */

loc_00472326: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00472330
 * Original: 0x00472330 - 0x0047235A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472330: ;
    eax = MEM32(0x6627FC);
    ecx = MEM32(0x6627E8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00472356u); RECOMP_ABI_CALL(0x00471C90u, sub_00471C90); /* call 0x00471C90 */

loc_00472356: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00472360
 * Original: 0x00472360 - 0x00472399 (57 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472360: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(ecx + 0x20) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00472393u); RECOMP_ABI_CALL(0x00471E70u, sub_00471E70); /* call 0x00471E70 */

loc_00472393: ;
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004723A0
 * Original: 0x004723A0 - 0x00472521 (385 bytes, 117 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004723A0(void)
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

loc_004723A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    fp_push(MEMF(edi + 0x24)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEM32(esp + 0x10) = 0;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x10)); /* fsub dword ptr [esi + 0x10] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047251A; /* jne: not equal / not zero */

loc_004723F5: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00472400u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00472400: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0047241E: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472430; /* je: equal / zero */

loc_00472426: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00472430u); RECOMP_ABI_CALL(0x0046E920u, sub_0046E920); /* call 0x0046E920 */

loc_00472430: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    fp_push(MEMF(0x65E384)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_00472470; /* jne: not equal / not zero */

loc_0047243A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00472467; /* jp: parity */

loc_0047245F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */

loc_00472467: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x28)); /* fdiv dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */

loc_00472470: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(edi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    edx = MEM32(edi + 0x2C);
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x18;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(esp + 0x30);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x38);
    ecx = esp + 0x10;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6307D0)); /* fadd dword ptr [0x6307d0] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004724FAu); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_004724FA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    MEM8(esi + 0x14) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00472514; /* je: equal / zero */

loc_00472507: ;
    PUSH32(esp, 0x63DBD4);
    PUSH32(esp, 0x00472511u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00472511: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00472514: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0047251A: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0047241E;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00472530
 * Original: 0x00472530 - 0x0047254E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00472538u); RECOMP_ABI_CALL(0x00471FC0u, sub_00471FC0); /* call 0x00471FC0 */

loc_00472538: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00472548; /* je: equal / zero */

loc_0047253F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00472545u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00472545: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00472548: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00472550
 * Original: 0x00472550 - 0x00472613 (195 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472550: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00472564u); RECOMP_ABI_CALL(0x004719E0u, sub_004719E0); /* call 0x004719E0 */

loc_00472564: ;
    eax = MEM32(0x646DC8);
    MEM32(0x699860) = eax;
    eax = MEM32(edi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047257F; /* je: equal / zero */

loc_00472576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047257F; /* je: equal / zero */

loc_0047257B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00472584;

loc_0047257F: ;
    eax = 1;

loc_00472584: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x48);
    ecx = MEM32(edx + 0x1D4);
    MEM8(ecx + 0x98) = LO8(eax);
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x84), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004725A8; /* jne: not equal / not zero */

loc_0047259F: ;
    ecx = esi;
    PUSH32(esp, 0x004725A6u); RECOMP_ABI_CALL(0x00471FF0u, sub_00471FF0); /* call 0x00471FF0 */

loc_004725A6: ;
    goto loc_004725B7;

loc_004725A8: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x4C);
    MEM16(eax + 0xA178) = 1;

loc_004725B7: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004725C8; /* je: equal / zero */

loc_004725C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004725C8u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_004725C8: ;
    ecx = esi;
    PUSH32(esp, 0x004725CFu); RECOMP_ABI_CALL(0x00471D20u, sub_00471D20); /* call 0x00471D20 */

loc_004725CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004725EC; /* jne: not equal / not zero */

loc_004725D3: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(ebx + 8);
    MEM32(ecx + 8) = edx;

loc_004725EC: ;
    edi = MEM32(edi + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472606; /* je: equal / zero */

loc_004725F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472606; /* je: equal / zero */

loc_004725F9: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 0x468E6200;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00472606: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00472620
 * Original: 0x00472620 - 0x004729DD (957 bytes, 271 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472620(void)
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

loc_00472620: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x679684);
    edx = MEM32(0x67968C);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x679690);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x679688);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(0x679694);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(0x679698);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x67969C);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(0x6796A0);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(0x6796A4);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x6796A8);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(0x6796AC);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x6796B0);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(ebx + 8);
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = edx;
    eax = MEM32(eax + 0x48);
    fp_push(MEMF(eax + 0xB0)); /* fld float */
    ecx = MEM32(eax + 0x6C);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DC18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63dc18] */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047274E; /* jne: not equal / not zero */

loc_004726C2: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x7C);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x14) = 0;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DC14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63dc14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047274E; /* jne: not equal / not zero */

loc_004726FF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00472708u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00472708: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    edi = esi + 0x24;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    PUSH32(esp, edi);
    ecx = esp + 0x54;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62E2B0)); /* fmul dword ptr [0x62e2b0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0047274Cu); RECOMP_ABI_CALL(0x00608410u, sub_00608410); /* call 0x00608410 */

loc_0047274C: ;
    goto loc_004727A3;

loc_0047274E: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x4C) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x50) = edx;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x54) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x58) = ecx;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x5C) = edx;
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x60) = eax;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x64) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(esp + 0x68) = edx;
    eax = MEM32(esi + 0x20);
    edi = esi + 0x24;
    MEM32(esp + 0x6C) = eax;
    ecx = MEM32(edi);
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x74) = edx;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x78) = eax;

loc_004727A3: ;
    ecx = MEM32(edi);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DB58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63db58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00472806; /* jp: parity */

loc_004727C7: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D210)); /* fmul dword ptr [0x63d210] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    goto loc_00472810;

loc_00472806: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63DB54)); /* fadd dword ptr [0x63db54] */

loc_00472810: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x74);
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    MEM32(esp + 0x30) = ecx;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    edx = esp + 0x28;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    PUSH32(esp, edx);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    edx = MEM32(ebx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x80)); /* fadd dword ptr [esp + 0x80] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x84)); /* fadd dword ptr [esp + 0x84] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x88)); /* fadd dword ptr [esp + 0x88] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x70)); /* fadd dword ptr [ebx + 0x70] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004728B8u); RECOMP_ABI_CALL(0x00472330u, sub_00472330); /* call 0x00472330 */

loc_004728B8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004728CC; /* je: equal / zero */

loc_004728BF: ;
    PUSH32(esp, 0x63DBF0);
    PUSH32(esp, 0x004728C9u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004728C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004728CC: ;
    eax = MEM32(ebx + 0x80);
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    MEM32(esp + 0x24) = eax;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    ecx = esp + 0x40;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    ecx = MEM32(ebx + 8);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = esp + 0x3C;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x80)); /* fadd dword ptr [esp + 0x80] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x78)); /* fmul dword ptr [esp + 0x78] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x84)); /* fadd dword ptr [esp + 0x84] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x7C)); /* fmul dword ptr [esp + 0x7c] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x65E384)); /* fmul dword ptr [0x65e384] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x88)); /* fadd dword ptr [esp + 0x88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x7C)); /* fadd dword ptr [ebx + 0x7c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00472973u); RECOMP_ABI_CALL(0x00472330u, sub_00472330); /* call 0x00472330 */

loc_00472973: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    ecx = ebx;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x140)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x140] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_004729D1; /* jne: not equal / not zero */

loc_004729AF: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004729BEu); RECOMP_ABI_CALL(0x00471B30u, sub_00471B30); /* call 0x00471B30 */

loc_004729BE: ;
    PUSH32(esp, 0x42700000);
    ecx = ebx;
    PUSH32(esp, 0x004729CAu); RECOMP_ABI_CALL(0x00471C00u, sub_00471C00); /* call 0x00471C00 */

loc_004729CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_004729D1: ;
    PUSH32(esp, 0x004729D6u); RECOMP_ABI_CALL(0x00471FF0u, sub_00471FF0); /* call 0x00471FF0 */

loc_004729D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004729E0
 * Original: 0x004729E0 - 0x00472CC3 (739 bytes, 244 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004729E0(void)
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

loc_004729E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x84), 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(edx + 0xA178) = LO16(eax);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472A11; /* je: equal / zero */

loc_00472A0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00472A11u); RECOMP_ABI_CALL(0x0057C280u, sub_0057C280); /* call 0x0057C280 */

loc_00472A11: ;
    eax = MEM32(esi + 0x10);
    ecx = esi;
    MEM32(eax + 0x6C) = 0;
    PUSH32(esp, 0x00472A22u); RECOMP_ABI_CALL(0x00471D20u, sub_00471D20); /* call 0x00471D20 */

loc_00472A22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472A33; /* je: equal / zero */

loc_00472A26: ;
    PUSH32(esp, 0x00472A2Bu); RECOMP_ABI_CALL(0x00471D30u, sub_00471D30); /* call 0x00471D30 */

loc_00472A2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472A33: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00472C30; /* ja: above (unsigned >) */

loc_00472A42: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x472CC4); /* switch: 8 entries, 7 targets */
    if (_jt == 0x00472A49u) goto loc_00472A49;
    if (_jt == 0x00472AF1u) goto loc_00472AF1;
    if (_jt == 0x00472B07u) goto loc_00472B07;
    if (_jt == 0x00472B1Du) goto loc_00472B1D;
    if (_jt == 0x00472B33u) goto loc_00472B33;
    if (_jt == 0x00472BA1u) goto loc_00472BA1;
    if (_jt == 0x00472C30u) goto loc_00472C30;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00472A49: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esi + 8);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ebx = esi + 0x2C;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00472A67u); RECOMP_ABI_CALL(0x00471510u, sub_00471510); /* call 0x00471510 */

loc_00472A67: ;
    eax = MEM32(ebx + 0x1C);
    MEM32(esp + 0x38) = eax;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00472A89; /* jp: parity */

loc_00472A7F: ;
    MEM32(esp + 0x38) = 0;
    goto loc_00472AA2;

loc_00472A89: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00472AA2; /* jne: not equal / not zero */

loc_00472A9A: ;
    MEM32(esp + 0x38) = 0x3F800000;

loc_00472AA2: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ebp = edi + 0x24;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00472AB2u); RECOMP_ABI_CALL(0x00471250u, sub_00471250); /* call 0x00471250 */

loc_00472AB2: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00472AC0u); RECOMP_ABI_CALL(0x004710E0u, sub_004710E0); /* call 0x004710E0 */

loc_00472AC0: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x00472ACBu); RECOMP_ABI_CALL(0x00471600u, sub_00471600); /* call 0x00471600 */

loc_00472ACB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x28)); /* fadd dword ptr [edi + 0x28] */
    ecx = esi;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00472AE0u); RECOMP_ABI_CALL(0x00471B30u, sub_00471B30); /* call 0x00471B30 */

loc_00472AE0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00472AE9u); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472AE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472AF1: ;
    ecx = esi;
    PUSH32(esp, 0x00472AF8u); RECOMP_ABI_CALL(0x00472620u, sub_00472620); /* call 0x00472620 */

loc_00472AF8: ;
    ecx = esi;
    PUSH32(esp, 0x00472AFFu); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472AFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472B07: ;
    ecx = esi;
    PUSH32(esp, 0x00472B0Eu); RECOMP_ABI_CALL(0x00472030u, sub_00472030); /* call 0x00472030 */

loc_00472B0E: ;
    ecx = esi;
    PUSH32(esp, 0x00472B15u); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472B15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472B1D: ;
    ecx = esi;
    PUSH32(esp, 0x00472B24u); RECOMP_ABI_CALL(0x00471BB0u, sub_00471BB0); /* call 0x00471BB0 */

loc_00472B24: ;
    ecx = esi;
    PUSH32(esp, 0x00472B2Bu); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472B2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472B33: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x48);
    edx = MEM32(ecx + 0x6C);
    ecx = MEM32(edx + 4);
    SET_LO8(edx, MEM8(esi + 0xA8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472B74; /* je: equal / zero */

loc_00472B49: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_00472CAD;

loc_00472B74: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esi + 0xD0;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x94;
    PUSH32(esp, 0x00472B90u); RECOMP_ABI_CALL(0x004723A0u, sub_004723A0); /* call 0x004723A0 */

loc_00472B90: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    goto loc_00472CAD;

loc_00472BA1: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6306E8)); /* fadd dword ptr [0x6306e8] */
    ecx = MEM32(0x6627E8);
    PUSH32(esp, 0x10001);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00472BEAu); RECOMP_ABI_CALL(0x00471C90u, sub_00471C90); /* call 0x00471C90 */

loc_00472BEA: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00472C04u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_00472C04: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00472C28u); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472C28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00472C30: ;
    edi = MEM32(esi + 0x10);
    SET_LO8(eax, MEM8(esi + 0x100));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472CA2; /* je: equal / zero */

loc_00472C40: ;
    edx = MEM32(esi + 8);
    fp_push(MEMF(esi + 0x20)); /* fld float */
    eax = MEM32(edx + 0x48);
    ecx = MEM32(eax + 0x6C);
    eax = MEM32(ecx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00472C76u); RECOMP_ABI_CALL(0x004572A0u, sub_004572A0); /* call 0x004572A0 */

loc_00472C76: ;
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x20)); /* fadd dword ptr [esi + 0x20] */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00472CA2: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);

loc_00472CAD: ;
    ecx = esi;
    PUSH32(esp, 0x00472CB4u); RECOMP_ABI_CALL(0x00471B30u, sub_00471B30); /* call 0x00471B30 */

loc_00472CB4: ;
    ecx = esi;
    PUSH32(esp, 0x00472CBBu); RECOMP_ABI_CALL(0x004721F0u, sub_004721F0); /* call 0x004721F0 */

loc_00472CBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00472CF0
 * Original: 0x00472CF0 - 0x00472DB2 (194 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00472CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ecx = edi + 0x10;
    MEM32(esi) = 0x63DB50;
    PUSH32(esp, 0x00472D05u); RECOMP_ABI_CALL(0x00471ED0u, sub_00471ED0); /* call 0x00471ED0 */

loc_00472D05: ;
    ecx = edi + 0x90;
    MEM32(edi + 0x78) = 0x420C0000;
    MEM32(edi + 0x7C) = 0x40A00000;
    MEM8(edi + 0x8C) = 0;
    PUSH32(esp, 0x00472D25u); RECOMP_ABI_CALL(0x00472360u, sub_00472360); /* call 0x00472360 */

loc_00472D25: ;
    ecx = edi;
    PUSH32(esp, 0x00472D2Cu); RECOMP_ABI_CALL(0x00471870u, sub_00471870); /* call 0x00471870 */

loc_00472D2C: ;
    PUSH32(esp, 0x14E);
    PUSH32(esp, 0x63DC1C);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x00472D40u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00472D40: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00472D58; /* je: equal / zero */

loc_00472D49: ;
    ecx = edi;
    PUSH32(esp, 0x00472D50u); RECOMP_ABI_CALL(0x0057CFF0u, sub_0057CFF0); /* call 0x0057CFF0 */

loc_00472D50: ;
    MEM32(edi) = 0x63DB1C;
    goto loc_00472D5A;

loc_00472D58: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00472D5A: ;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x128) = 0;
    MEM32(esi + 0x12C) = 0x3FB0A3D7;
    MEM32(esi + 0x130) = 0x3F947AE1;
    MEM32(esi + 0x134) = 0;
    MEM32(esi + 0x138) = 0x3F09BA5E;
    MEM32(esi + 0x13C) = 0xBFA4FDF4u;
    ecx = esi;
    MEM32(esi + 0x140) = 0x40800000;
    PUSH32(esp, 0x00472DADu); RECOMP_ABI_CALL(0x00471940u, sub_00471940); /* call 0x00471940 */

loc_00472DAD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00472DC0
 * Original: 0x00472DC0 - 0x00472F37 (375 bytes, 131 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472DC0(void)
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

loc_00472DC0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    eax = MEM32(esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(esi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x30);
    MEM32(esp + 0x2C) = ecx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00472E46u); RECOMP_ABI_CALL(0x00472330u, sub_00472330); /* call 0x00472330 */

loc_00472E46: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x30);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00472E5Eu); RECOMP_ABI_CALL(0x00472330u, sub_00472330); /* call 0x00472330 */

loc_00472E5E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00472E72u); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_00472E72: ;
    ebx = MEM32(esp + 0x5C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00472E80u); RECOMP_ABI_CALL(0x00471510u, sub_00471510); /* call 0x00471510 */

loc_00472E80: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00472E9A; /* jp: parity */

loc_00472E90: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x65E384)); /* fld float */
    goto loc_00472EAF;

loc_00472E9A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00472EAF; /* jne: not equal / not zero */

loc_00472EA7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00472EAF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    PUSH32(esp, ecx);
    ecx = esi;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx)); /* fsub dword ptr [ebx] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 8)); /* fsub dword ptr [ebx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00472EFBu); RECOMP_ABI_CALL(0x00471600u, sub_00471600); /* call 0x00471600 */

loc_00472EFB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00472F13u); RECOMP_ABI_CALL(0x004702F0u, sub_004702F0); /* call 0x004702F0 */

loc_00472F13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00472F22; /* je: equal / zero */

loc_00472F1A: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00472F22: ;
    PUSH32(esp, 0x63DC30);
    PUSH32(esp, 0x00472F2Cu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00472F2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00472F40
 * Original: 0x00472F40 - 0x004730A0 (352 bytes, 103 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00472F40(void)
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

loc_00472F40: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x34);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 0x38);
    MEM32(esp + 8) = edx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    ecx = MEM32(eax + 0x3C);
    MEM32(esp + 0xC) = ecx;
    edx = esp + 0x28;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esi + 0x150)); /* fld float */
    ecx = esp + 8;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00472FB6u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_00472FB6: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x154)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = -fp_top(); /* fchs */
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x64;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x30)); /* fmul dword ptr [eax + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x150)); /* fld float */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0047304Eu); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_0047304E: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = eax;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    eax = esp + 0x40;
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00473081u); RECOMP_ABI_CALL(0x00472330u, sub_00472330); /* call 0x00472330 */

loc_00473081: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, 0x00473097u); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_00473097: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004730A0
 * Original: 0x004730A0 - 0x0047314E (174 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004730A0(void)
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

loc_004730A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x69C7D0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004730B3u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_004730B3: ;
    ecx = eax;
    PUSH32(esp, 0x004730BAu); RECOMP_ABI_CALL(0x004FFD90u, sub_004FFD90); /* call 0x004FFD90 */

loc_004730BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473146; /* je: equal / zero */

loc_004730C5: ;
    ecx = eax + eax * 4;
    fp_push(MEMF(0x63D704)); /* fld float */
    eax = MEM32(0x69C7D0);
    edx = MEM32(eax + 0x3C);
    ecx = edx + ecx * 4;
    edx = MEM32(eax + 0x34);
    eax = ZX16(MEM16(ecx));
    ecx = ZX16(MEM16(ecx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = eax;
    edx = MEM32(ecx);
    MEM32(esp) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ecx + 8);
    edx = esp;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(0x63D704)); /* fld float */
    eax = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0047313Eu); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_0047313E: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00473146: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_00473150
 * Original: 0x00473150 - 0x0047321A (202 bytes, 55 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473150(void)
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

loc_00473150: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    edx = MEM32(eax + 0x3C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 8) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = 0;
    fp_push(MEMF(ecx + 0x150)); /* fld float */
    MEM32(esp) = 0;
    fp_top() = -fp_top(); /* fchs */
    ecx = esp;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x30)); /* fmul dword ptr [eax + 0x30] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x6302F8)); /* fadd dword ptr [0x6302f8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004731E9u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_004731E9: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x28);
    edx = ecx;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x63DC7C);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x00473212u); RECOMP_ABI_CALL(0x006098C0u, sub_006098C0); /* call 0x006098C0 */

loc_00473212: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00473220
 * Original: 0x00473220 - 0x00473392 (370 bytes, 113 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473220(void)
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

loc_00473220: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00473237u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00473237: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00473240u); RECOMP_ABI_CALL(0x004FFD90u, sub_004FFD90); /* call 0x004FFD90 */

loc_00473240: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004732B0; /* je: equal / zero */

loc_00473247: ;
    ecx = eax + eax * 4;
    eax = MEM32(0x69C7D0);
    edx = MEM32(eax + 0x3C);
    ecx = edx + ecx * 4;
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(ecx + 2));
    ecx = ZX16(MEM16(ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    fp_push(MEMF(ebx + edx + 4)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, 0x7F7FFFFF);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx + 4)); /* fadd dword ptr [ecx + edx + 4] */
    edx = MEM32(esi + 0xC);
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEM32(esp + 0x20) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x5C);
    ecx = eax;
    PUSH32(esp, 0x0047329Cu); RECOMP_ABI_CALL(0x004FF410u, sub_004FF410); /* call 0x004FF410 */

loc_0047329C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_004732BA; /* jne: not equal / not zero */

loc_004732A3: ;
    PUSH32(esp, 0x63DC9C);
    PUSH32(esp, 0x004732ADu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004732AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004732B0: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004732BA: ;
    eax = ZX16(LO16(eax));
    edx = eax + eax * 4;
    eax = MEM32(0x69C7D0);
    ecx = MEM32(eax + 0x3C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + edx * 4 + 8);
    MEM32(esp + 0x3C) = edx;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D370)); /* fmul dword ptr [0x62d370] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D710)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x63d710] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004732EE; /* jp: parity */

loc_004732E8: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004732F9;

loc_004732EE: ;
    eax = MEM32(0x63D710);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x3C) = eax;

loc_004732F9: ;
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63D704)); /* fadd dword ptr [0x63d704] */
    esi = MEM32(esp + 0x40);
    eax = ecx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x30);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = eax;
    eax = esp + 0xC;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0047334Au); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_0047334A: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004732B0; /* jnp: not parity */

loc_00473360: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(esp + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004733A0
 * Original: 0x004733A0 - 0x0047353C (412 bytes, 129 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004733A0(void)
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

loc_004733A0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x63D704)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x34);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 0x38);
    MEM32(esp + 0x18) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    ecx = MEM32(eax + 0x3C);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x20;
    fp_push(MEMF(0x63D710)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DD0C)); /* fmul dword ptr [0x63dd0c] */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x30)); /* fmul dword ptr [eax + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00473412u); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_00473412: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
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
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x63D710)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63813C)); /* fmul dword ptr [0x63813c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004734B6; /* jp: parity */

loc_004734A0: ;
    PUSH32(esp, 0x63DCD8);
    PUSH32(esp, 0x004734AAu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_004734AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004734B6: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x10;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004734EEu); RECOMP_ABI_CALL(0x00472300u, sub_00472300); /* call 0x00472300 */

loc_004734EE: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047350A; /* jp: parity */

loc_00473500: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0047350A: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473540
 * Original: 0x00473540 - 0x00473713 (467 bytes, 141 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473540(void)
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

loc_00473540: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x90);
    ebx = ecx;
    ecx = MEM32(0x69C7D0);
    edx = MEM32(ecx + 0x50);
    eax = ZX16(LO16(ebp));
    SET_LO16(eax, MEM16(edx + eax * 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004736F6; /* je: equal / zero */

loc_0047356D: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00473576u); RECOMP_ABI_CALL(0x004F9E70u, sub_004F9E70); /* call 0x004F9E70 */

loc_00473576: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004736F6; /* jle: less or equal (signed <=) */

loc_00473585: ;
    ecx = MEM32(0x679680);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x269EC3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = ecx;
    ecx = SX16(LO16(eax));
    eax = MEM32(0x679680);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esi + 4);
    SET_LO16(edi, MEM16(esi + edx * 2));
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x69C7D0);
    SET_LO16(esi, MEM16(esi + edx * 2));
    edx = SX16(LO16(edi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x004735D0u); RECOMP_ABI_CALL(0x004F9E60u, sub_004F9E60); /* call 0x004F9E60 */

loc_004735D0: ;
    ecx = MEM32(0x69C7D0);
    edi = eax;
    eax = SX16(LO16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004735E1u); RECOMP_ABI_CALL(0x004F9E60u, sub_004F9E60); /* call 0x004F9E60 */

loc_004735E1: ;
    SET_LO8(ecx, MEM8(edi + 0x44));
    esi = eax;
    SET_LO8(eax, 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004736F6; /* jne: not equal / not zero */

loc_004735F0: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x44), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004736F6; /* jne: not equal / not zero */

loc_004735F9: ;
    ecx = MEM32(0x63D700);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0047360Cu); RECOMP_ABI_CALL(0x004FD4A0u, sub_004FD4A0); /* call 0x004FD4A0 */

loc_0047360C: ;
    eax = MEM32(0x63D700);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0047361Eu); RECOMP_ABI_CALL(0x004FD4A0u, sub_004FD4A0); /* call 0x004FD4A0 */

loc_0047361E: ;
    fp_push(MEMF(0x6627EC)); /* fld float */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    ecx = MEM32(esp + 0x9C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x64)); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x68)); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
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
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); fp_pop(); /* fdivp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x64)); /* fadd dword ptr [esp + 0x64] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x64)); /* fadd dword ptr [esp + 0x64] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x68)); /* fadd dword ptr [esp + 0x68] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004736E7u); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_004736E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004736F6: ;
    ecx = MEM32(esp + 0x9C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00473706u); RECOMP_ABI_CALL(0x004730A0u, sub_004730A0); /* call 0x004730A0 */

loc_00473706: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473720
 * Original: 0x00473720 - 0x0047372D (13 bytes, 4 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473720(void)
{

loc_00473720: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047372Au); RECOMP_ABI_CALL(0x00473150u, sub_00473150); /* call 0x00473150 */

loc_0047372A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00473730
 * Original: 0x00473730 - 0x0047376B (59 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    MEM8(edi + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0047375C; /* je: equal / zero */

loc_00473749: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00473750u); RECOMP_ABI_CALL(0x00473220u, sub_00473220); /* call 0x00473220 */

loc_00473750: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047375C; /* je: equal / zero */

loc_00473754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0047375C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00473765u); RECOMP_ABI_CALL(0x004733A0u, sub_004733A0); /* call 0x004733A0 */

loc_00473765: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00473770
 * Original: 0x00473770 - 0x00473821 (177 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473770(void)
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

loc_00473770: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    ecx = edi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D57C)); /* fadd dword ptr [0x62d57c] */
    esi = 0xC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = esi;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_004737B0: ;
    eax = MEM32(ebp + 0x30);
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10009);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x004737DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004737D4u); } /* indirect call */
    }

loc_004737DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004737F8; /* jne: not equal / not zero */

loc_004737DE: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x32 (32-bit) */
    MEM32(edx) = ecx;
    SET_LO8(ebx, 1);
    MEM32(esp + 0x40) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_004737B0; /* jle: less or equal (signed <=) */

loc_004737F6: ;
    goto loc_004737FC;

loc_004737F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473815; /* je: equal / zero */

loc_004737FC: ;
    eax = MEM32(esp + 0x44);
    fp_push(MEMF(eax)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x63DD10);
    PUSH32(esp, 0x00473812u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00473812: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00473815: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473830
 * Original: 0x00473830 - 0x004738F8 (200 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473830(void)
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

loc_00473830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00473847u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00473847: ;
    eax = ZX8(MEM8(eax + 5));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004738E3; /* je: equal / zero */

loc_00473852: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004738CE; /* je: equal / zero */

loc_00473857: ;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00473863u); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_00473863: ;
    ecx = eax;
    eax = ZX16(MEM16(ecx + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004738B9; /* jne: not equal / not zero */

loc_0047386D: ;
    esi = MEM32(ecx + 0x40);
    fp_push(MEMF(0x63D708)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    eax = MEM32(eax + 8);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x004738AFu); RECOMP_ABI_CALL(0x00471F00u, sub_00471F00); /* call 0x00471F00 */

loc_004738AF: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004738B9: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004738C6u); RECOMP_ABI_CALL(0x004730A0u, sub_004730A0); /* call 0x004730A0 */

loc_004738C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004738CE: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004738DBu); RECOMP_ABI_CALL(0x004730A0u, sub_004730A0); /* call 0x004730A0 */

loc_004738DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004738E3: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x004738F0u); RECOMP_ABI_CALL(0x00473540u, sub_00473540); /* call 0x00473540 */

loc_004738F0: ;
    POP32(esp, edi);
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
 * sub_00473900
 * Original: 0x00473900 - 0x00473A7C (380 bytes, 138 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473900(void)
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

loc_00473900: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x84);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x90);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00473968; /* je: equal / zero */

loc_0047391E: ;
    ecx = MEM32(0x69C7D0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0047392Au); RECOMP_ABI_CALL(0x004F9E50u, sub_004F9E50); /* call 0x004F9E50 */

loc_0047392A: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047395B; /* je: equal / zero */

loc_00473930: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00473939u); RECOMP_ABI_CALL(0x00473830u, sub_00473830); /* call 0x00473830 */

loc_00473939: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473968; /* je: equal / zero */

loc_0047393D: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0047394Cu); RECOMP_ABI_CALL(0x00472DC0u, sub_00472DC0); /* call 0x00472DC0 */

loc_0047394C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473968; /* je: equal / zero */

loc_00473950: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0047395B: ;
    PUSH32(esp, 0x63DD50);
    PUSH32(esp, 0x00473965u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00473965: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00473968: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00473971u); RECOMP_ABI_CALL(0x00471ED0u, sub_00471ED0); /* call 0x00471ED0 */

loc_00473971: ;
    eax = MEM32(esi + 0x30);
    edx = MEM32(eax + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    ecx = esi;
    PUSH32(esp, 0x00473999u); RECOMP_ABI_CALL(0x00472F40u, sub_00472F40); /* call 0x00472F40 */

loc_00473999: ;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0x004739B0u); RECOMP_ABI_CALL(0x00472DC0u, sub_00472DC0); /* call 0x00472DC0 */

loc_004739B0: ;
    SET_LO8(edx, MEM8(esp + 0xF));
    SET_LO8(ebx, LO8(eax));
    ecx = esp + 0x4C;
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x004739C1u); RECOMP_ABI_CALL(0x00471ED0u, sub_00471ED0); /* call 0x00471ED0 */

loc_004739C1: ;
    eax = MEM32(esi + 0x30);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = -fp_top(); /* fchs */
    ecx = esi;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(eax)); /* fld float */
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004739EEu); RECOMP_ABI_CALL(0x00472F40u, sub_00472F40); /* call 0x00472F40 */

loc_004739EE: ;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0x00473A05u); RECOMP_ABI_CALL(0x00472DC0u, sub_00472DC0); /* call 0x00472DC0 */

loc_00473A05: ;
    SET_LO8(eax, LO8(eax) & MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00473A1A; /* jne: not equal / not zero */

loc_00473A0D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00473A1A; /* jne: not equal / not zero */

loc_00473A11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00473A1A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, LO8(ebx));
    if (CMP_EQ(_fa, _fb)) goto loc_00473A3D; /* je: equal / zero */

loc_00473A20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473A35; /* je: equal / zero */

loc_00473A24: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x64] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00473A3B; /* jne: not equal / not zero */

loc_00473A33: ;
    SET_LO8(edx, 1);

loc_00473A35: ;
    esi = esp + 0x10;
    goto loc_00473A41;

loc_00473A3B: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00473A3D: ;
    esi = esp + 0x4C;

loc_00473A41: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = 0xF;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00473A64; /* je: equal / zero */

loc_00473A4C: ;
    PUSH32(esp, 0x63DD3C);
    PUSH32(esp, 0x00473A56u); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00473A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00473A64: ;
    PUSH32(esp, 0x63DD28);
    PUSH32(esp, 0x00473A6Eu); RECOMP_ABI_CALL(0x00618650u, sub_00618650); /* call 0x00618650 */

loc_00473A6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473A80
 * Original: 0x00473A80 - 0x00473A9F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473A80: ;
    eax = MEM32(ecx + 8);
    edx = ZX16(MEM16(ecx + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00473A96; /* jl: less (signed <) */

loc_00473A8F: ;
    MEM32(ecx + 8) = 0;

loc_00473A96: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00473AA0
 * Original: 0x00473AA0 - 0x00473AD6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473AA0: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 8);
    eax = edx + eax * 8 + 4;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473AC8; /* je: equal / zero */

loc_00473AB6: ;
    edx = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00473ACF; /* jl: less (signed <) */

loc_00473AC1: ;
    MEM32(ecx + 8) = 0;

loc_00473AC8: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

loc_00473ACF: ;
    edx = MEM32(ecx + 8);
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00473AE0
 * Original: 0x00473AE0 - 0x00473B56 (118 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473AE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x63DD88);
    esi = ecx;
    PUSH32(esp, 0x00473AF1u); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00473AF1: ;
    edi = ZX16(MEM16(esi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00473B50; /* jle: less or equal (signed <=) */

loc_00473AFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_00473B00: ;
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
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = MEM32(esi);
    ebp = MEM32(eax + ecx * 8 + 4);
    ebx = MEM32(eax + ecx * 8);
    MEM32(esp + 0x14) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebp = MEM32(eax + edx * 8);
    MEM32(eax + ecx * 8 + -8) = ebp;
    ebp = MEM32(eax + edx * 8 + 4);
    MEM32(eax + ecx * 8 + -4) = ebp;
    eax = MEM32(esi);
    MEM32(eax + edx * 8) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(eax + edx * 8 + 4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00473B00; /* jl: less (signed <) */

loc_00473B4E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00473B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00473B60
 * Original: 0x00473B60 - 0x00473BE3 (131 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473B60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00473B9E; /* jle: less or equal (signed <=) */

loc_00473B6F: ;
    PUSH32(esp, 0x77);
    eax = ebx * 8;
    PUSH32(esp, 0x63DDCC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00473B83u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00473B83: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473B9C; /* je: equal / zero */

loc_00473B8C: ;
    PUSH32(esp, 0x451050);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00473B9Au); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_00473B9A: ;
    goto loc_00473B9E;

loc_00473B9C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00473B9E: ;
    ecx = ZX16(MEM16(edi + 4));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00473BA8; /* jge: greater or equal (signed >=) */

loc_00473BA6: ;
    ecx = ebx;

loc_00473BA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00473BC6; /* jle: less or equal (signed <=) */

loc_00473BAE: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00473BB0: ;
    edx = MEM32(edi);
    ebp = MEM32(edx + eax * 8);
    MEM32(esi + eax * 8) = ebp;
    edx = MEM32(edx + eax * 8 + 4);
    MEM32(esi + eax * 8 + 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00473BB0; /* jl: less (signed <) */

loc_00473BC5: ;
    POP32(esp, ebp);

loc_00473BC6: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    MEM16(edi + 6) = LO16(ebx);
    MEM16(edi + 4) = LO16(ecx);
    PUSH32(esp, 0x00473BD6u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00473BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00473BF0
 * Original: 0x00473BF0 - 0x00473C54 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x63DDEC);
    esi = ecx;
    PUSH32(esp, 0x00473BFDu); RECOMP_ABI_CALL(0x00618670u, sub_00618670); /* call 0x00618670 */

loc_00473BFD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00473C1F; /* jbe: below or equal (unsigned <=) */

loc_00473C0A: ;
    /* nop */

loc_00473C10: ;
    edx = MEM32(esi);
    MEM32(edx + eax * 8 + 4) = ecx;
    edx = ZX16(MEM16(esi + 4));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00473C10; /* jl: less (signed <) */

loc_00473C1F: ;
    ecx = esi;
    PUSH32(esp, 0x00473C26u); RECOMP_ABI_CALL(0x00473AE0u, sub_00473AE0); /* call 0x00473AE0 */

loc_00473C26: ;
    eax = MEM32(0x679680);
    ecx = ZX16(MEM16(esi + 4));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x343FD);
    _fb = (uint32_t)(0x269EC3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x269EC3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x679680) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473C60
 * Original: 0x00473C60 - 0x00473D06 (166 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0xB (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00473C71; /* jae: above or equal (unsigned >=) */

loc_00473C6A: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x00473C71u); RECOMP_ABI_CALL(0x00473B60u, sub_00473B60); /* call 0x00473B60 */

loc_00473C71: ;
    eax = MEM32(esi);
    MEM16(esi + 4) = 0xB;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 2;
    MEM32(eax + 0x14) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x18) = 3;
    MEM32(eax + 0x1C) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x20) = 4;
    MEM32(eax + 0x24) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x28) = 5;
    MEM32(eax + 0x2C) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    MEM32(eax + 0x30) = 6;
    MEM32(eax + 0x34) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 6;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 6;
    MEM32(eax + 4) = ecx;
    esi = MEM32(esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 6;
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473D10
 * Original: 0x00473D10 - 0x00473D2F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM16(esi + 4) = LO16(eax);
    MEM16(esi + 6) = LO16(eax);
    PUSH32(esp, 0x00473D24u); RECOMP_ABI_CALL(0x00473C60u, sub_00473C60); /* call 0x00473C60 */

loc_00473D24: ;
    ecx = esi;
    PUSH32(esp, 0x00473D2Bu); RECOMP_ABI_CALL(0x00473BF0u, sub_00473BF0); /* call 0x00473BF0 */

loc_00473D2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473D30
 * Original: 0x00473D30 - 0x00473D81 (81 bytes, 30 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00473D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00473D30: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473D90
 * Original: 0x00473D90 - 0x00473DDF (79 bytes, 30 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00473D90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00473D90: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473DE0
 * Original: 0x00473DE0 - 0x00473E31 (81 bytes, 30 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00473DE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00473DE0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473E40
 * Original: 0x00473E40 - 0x00473E61 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00473E40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00473E40: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0xC)); /* fsub dword ptr [ecx + 0xc] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x10)); /* fsub dword ptr [ecx + 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473E70
 * Original: 0x00473E70 - 0x00473F09 (153 bytes, 39 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00473E70(void)
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

loc_00473E70: ;
    eax = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00473E8E; /* jge: greater or equal (signed >=) */

loc_00473E88: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00473E8E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DE20)); /* fmul dword ptr [0x63de20] */
    ecx = MEM32(esp + 4);
    edx = eax;
    edx = edx >> 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638484)); /* fmul dword ptr [0x638484] */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63384C)); /* fsub dword ptr [0x63384c] */
    MEM32(esp + 8) = edx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00473EC5; /* jge: greater or equal (signed >=) */

loc_00473EBF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00473EC5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DE20)); /* fmul dword ptr [0x63de20] */
    eax = eax >> 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638484)); /* fmul dword ptr [0x638484] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63384C)); /* fsub dword ptr [0x63384c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00473EF1; /* jge: greater or equal (signed >=) */

loc_00473EEB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D36C)); /* fadd dword ptr [0x62d36c] */

loc_00473EF1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62DE14)); /* fmul dword ptr [0x62de14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638484)); /* fmul dword ptr [0x638484] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63384C)); /* fsub dword ptr [0x63384c] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00473F10
 * Original: 0x00473F10 - 0x00473F54 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00473F10: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00473F51; /* jle: less or equal (signed <=) */

loc_00473F15: ;
    SET_LO8(eax, MEM8(0x6C3421));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473F26; /* je: equal / zero */

loc_00473F21: ;
    esi = 1;

loc_00473F26: ;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, 0x00473F31u); RECOMP_ABI_CALL(0x00517FD0u, sub_00517FD0); /* call 0x00517FD0 */

loc_00473F31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473F38; /* je: equal / zero */

loc_00473F35: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00473F38: ;
    eax = MEM32(0x6C3308);
    ecx = eax + esi;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00473F53; /* jge: greater or equal (signed >=) */

loc_00473F4B: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00473F51: ;
    eax = edi;

loc_00473F53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00473F60
 * Original: 0x00473F60 - 0x00473F73 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473F60(void)
{

loc_00473F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00473F68u); RECOMP_ABI_CALL(0x00521ED0u, sub_00521ED0); /* call 0x00521ED0 */

loc_00473F68: ;
    MEM32(esi + 0x24) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00473F80
 * Original: 0x00473F80 - 0x00473F90 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473F80: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00473F8B; /* je: equal / zero */

loc_00473F87: ;
    MEM16(eax + 8) = MEM16(eax + 8) - 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_00473F8B: ;
    g_seh_ebp = ebp; sub_00521C30(); return; /* tail jmp 0x00521C30 */

}

/**
 * sub_00473F90
 * Original: 0x00473F90 - 0x00474087 (247 bytes, 89 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00473F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00473F90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 0x24) = eax;
    MEM16(eax + 8) = MEM16(eax + 8) + 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x24);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00473FB7u); RECOMP_ABI_CALL(0x00521CB0u, sub_00521CB0); /* call 0x00521CB0 */

loc_00473FB7: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = 0x63DEB4;
    MEM32(esp + 0x14) = 0x63DEA0;
    MEM32(esp + 0x18) = 0x63DE84;
    MEM32(esp + 0x1C) = 0x63DE70;
    MEM32(esp + 0x20) = 0x63DE54;
    MEM32(esp + 0x24) = 0x63DE40;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00473FF0: ;
    esi = MEM32(esp + ebp * 4 + 0x10);
    eax = edx;

loc_00473FF6: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047401A; /* jne: not equal / not zero */

loc_00473FFE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00474016; /* je: equal / zero */

loc_00474002: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047401A; /* jne: not equal / not zero */

loc_0047400C: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00473FF6; /* jne: not equal / not zero */

loc_00474016: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0047401F;

loc_0047401A: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0047401F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0047402B; /* je: equal / zero */

loc_00474023: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00473FF0; /* jl: less (signed <) */

loc_00474029: ;
    goto loc_0047402F;

loc_0047402B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x14) = MEM8(edi + 0x14) | 2;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0047402F: ;
    PUSH32(esp, 0xC);
    esi = edx + 7;
    PUSH32(esp, 0x63DE30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0047403Fu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0047403F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(_fa, _fb)) goto loc_0047404D; /* jne: not equal / not zero */

loc_00474049: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0047404F;

loc_0047404D: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0047404F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x63DE24);
    PUSH32(esp, esi);
    MEM8(edi + 0x14) = LO8(eax);
    PUSH32(esp, 0x0047405Fu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0047405F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(_fa, _fb)) goto loc_00474078; /* jne: not equal / not zero */

loc_00474069: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi + 0x14) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00474078: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 0x14) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00474090
 * Original: 0x00474090 - 0x0047409F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474090(void)
{

loc_00474090: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0047409Bu); RECOMP_ABI_CALL(0x00473F60u, sub_00473F60); /* call 0x00473F60 */

loc_0047409B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004740A0
 * Original: 0x004740A0 - 0x004740B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004740A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004740A0: ;
    PUSH32(esp, esi);
    esi = ecx + 0x30;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004740ADu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_004740AD: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00473F80(); return; /* tail jmp 0x00473F80 */

}

/**
 * sub_004740C0
 * Original: 0x004740C0 - 0x004740E0 (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004740C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004740C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(0x6C263C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004740DDu); RECOMP_ABI_CALL(0x00473F90u, sub_00473F90); /* call 0x00473F90 */

loc_004740DD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004740E0
 * Original: 0x004740E0 - 0x00474106 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004740E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004740E0: ;
    eax = MEM32(ecx + 0x54);
    SET_LO8(edx, MEM8(eax + 0x148));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = ecx + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x004740FBu); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_004740FB: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00474104u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_00474104: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00474110
 * Original: 0x00474110 - 0x00474118 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00474110: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005212A0(); return; /* tail jmp 0x005212A0 */

}

/**
 * sub_00474120
 * Original: 0x00474120 - 0x00474153 (51 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474120(void)
{

loc_00474120: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00474129u); RECOMP_ABI_CALL(0x0058FDF0u, sub_0058FDF0); /* call 0x0058FDF0 */

loc_00474129: ;
    edi = esi + 0x40;
    ecx = edi;
    PUSH32(esp, 0x00474133u); RECOMP_ABI_CALL(0x004FCCA0u, sub_004FCCA0); /* call 0x004FCCA0 */

loc_00474133: ;
    ecx = esi + 0x50;
    MEM32(esi) = 0x63DEE8;
    MEM32(edi) = 0x63DED0;
    PUSH32(esp, 0x00474147u); RECOMP_ABI_CALL(0x00473F60u, sub_00473F60); /* call 0x00473F60 */

loc_00474147: ;
    POP32(esp, edi);
    MEM32(esi + 0x78) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00474160
 * Original: 0x00474160 - 0x004742E9 (393 bytes, 130 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474160(void)
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

loc_00474160: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x6C263C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x108;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x50;
    PUSH32(esp, 0x00474185u); RECOMP_ABI_CALL(0x00473F90u, sub_00473F90); /* call 0x00473F90 */

loc_00474185: ;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00474191u); RECOMP_ABI_CALL(0x0047BB60u, sub_0047BB60); /* call 0x0047BB60 */

loc_00474191: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0047419Cu); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_0047419C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004741BE; /* jne: not equal / not zero */

loc_004741A3: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63DF3C);
    PUSH32(esp, 0x004741B4u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004741B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004741BE: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004741E0; /* jne: not equal / not zero */

loc_004741C5: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63DF08);
    PUSH32(esp, 0x004741D6u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004741D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004741E0: ;
    fp_push(MEMF(eax + 0x14)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    PUSH32(esp, 0x1000);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00474200u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00474200: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474228; /* jne: not equal / not zero */

loc_00474224: ;
    PUSH32(esp, 1);
    goto loc_0047422A;

loc_00474228: ;
    PUSH32(esp, 0);

loc_0047422A: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x00474234u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00474234: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00474240u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047423Du); } /* indirect call */
    }

loc_00474240: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0x145));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004742E2; /* je: equal / zero */

loc_00474251: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 8);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00474298; /* je: equal / zero */

loc_00474292: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_00474298: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x62D520)); /* fadd dword ptr [0x62d520] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    MEMF(esi + 0x78) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004742B8; /* jp: parity */

loc_004742AE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    goto loc_004742CD;

loc_004742B8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62E2B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62e2b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004742CD; /* jne: not equal / not zero */

loc_004742C5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62E2B0)); /* fld float */

loc_004742CD: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x69C7D0);
    ecx = MEM32(edx + 0x58);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004742E2u); RECOMP_ABI_CALL(0x004FBA00u, sub_004FBA00); /* call 0x004FBA00 */

loc_004742E2: ;
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
 * sub_004742F0
 * Original: 0x004742F0 - 0x0047434B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004742F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004742F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0x148));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    edx = esi + 0x10;
    edi = esi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00474311u); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_00474311: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0047431Au); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047431A: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0x145));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474348; /* je: equal / zero */

loc_00474327: ;
    ecx = MEM32(0x69C7D0);
    ecx = MEM32(ecx + 0x58);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00474339u); RECOMP_ABI_CALL(0x004FB970u, sub_004FB970); /* call 0x004FB970 */

loc_00474339: ;
    edx = MEM32(0x69C7D0);
    ecx = MEM32(edx + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00474348u); RECOMP_ABI_CALL(0x004FBA00u, sub_004FBA00); /* call 0x004FBA00 */

loc_00474348: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00474350
 * Original: 0x00474350 - 0x00474397 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00474350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x50;
    PUSH32(esp, 0x0047435Du); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047435D: ;
    SET_LO16(eax, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474376; /* je: equal / zero */

loc_00474367: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00474376u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00474373u); } /* indirect call */
    }

loc_00474376: ;
    ecx = MEM32(esi + 0x74);
    SET_LO8(eax, MEM8(ecx + 0x145));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474395; /* je: equal / zero */

loc_00474383: ;
    edx = MEM32(0x69C7D0);
    ecx = MEM32(edx + 0x58);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00474395u); RECOMP_ABI_CALL(0x004FB970u, sub_004FB970); /* call 0x004FB970 */

loc_00474395: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004743A0
 * Original: 0x004743A0 - 0x004743A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004743A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004743A0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005212A0(); return; /* tail jmp 0x005212A0 */

}

/**
 * sub_004743B0
 * Original: 0x004743B0 - 0x004743B4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004743B0(void)
{

loc_004743B0: ;
    eax = ecx + -48;
    esp += 4; return; /* ret */

}

/**
 * sub_004743C0
 * Original: 0x004743C0 - 0x004743C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004743C0(void)
{

loc_004743C0: ;
    eax = 0x8600B0;
    esp += 4; return; /* ret */

}

/**
 * sub_004743D0
 * Original: 0x004743D0 - 0x004743E5 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004743D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004743D0: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    edx = MEM32(ecx + 0x38);
    eax = MEM32(esp + 4);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = edx;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004743F0
 * Original: 0x004743F0 - 0x0047442C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004743F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004743F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x50;
    PUSH32(esp, 0x004743FCu); RECOMP_ABI_CALL(0x005212A0u, sub_005212A0); /* call 0x005212A0 */

loc_004743FC: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00474429; /* jbe: below or equal (unsigned <=) */

loc_00474405: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00474410;

    /* nop */

loc_00474410: ;
    eax = MEM32(esi + 0x78);
    ecx = eax + ebx + 0x40;
    PUSH32(esp, 0x0047441Cu); RECOMP_ABI_CALL(0x005212A0u, sub_005212A0); /* call 0x005212A0 */

loc_0047441C: ;
    ecx = ZX8(MEM8(esi + 0xE));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00474410; /* jl: less (signed <) */

loc_00474428: ;
    POP32(esp, ebx);

loc_00474429: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00474430
 * Original: 0x00474430 - 0x004744CD (157 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474430(void)
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

loc_00474430: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x6C3304);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_004744C5; /* jle: less or equal (signed <=) */

loc_00474449: ;
    ecx = MEM32(0x69585C);
    ebp = 8;
    MEM32(esp + 0x10) = 0x6C3450;
    /* nop */

loc_00474460: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004744A6; /* je: equal / zero */

loc_00474469: ;
    _fa = (uint32_t)(MEM32(ecx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004744A6; /* je: equal / zero */

loc_0047446F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00474475u); RECOMP_ABI_CALL(0x00466FB0u, sub_00466FB0); /* call 0x00466FB0 */

loc_00474475: ;
    eax = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x34)); /* fsub dword ptr [edi + 0x34] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x3C)); /* fsub dword ptr [edi + 0x3c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004744C3; /* jnp: not parity */

loc_004744A0: ;
    ecx = MEM32(0x69585C);

loc_004744A6: ;
    edx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00474460; /* jl: less (signed <) */

loc_004744B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_004744C3: ;
    SET_LO8(eax, 1);

loc_004744C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004744D0
 * Original: 0x004744D0 - 0x004744FE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004744D0(void)
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

loc_004744D0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x662800)); /* fld float */
    SET_LO8(eax, MEM8(ecx + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x662800)); /* fmul dword ptr [0x662800] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_004744FA; /* je: equal / zero */

loc_004744E8: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004744F2u); RECOMP_ABI_CALL(0x00474430u, sub_00474430); /* call 0x00474430 */

loc_004744F2: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004744FA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00474500
 * Original: 0x00474500 - 0x00474591 (145 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00474500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x50;
    PUSH32(esp, 0x0047450Eu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047450E: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474524; /* je: equal / zero */

loc_00474516: ;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00474522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047451Fu); } /* indirect call */
    }

loc_00474522: ;
    goto loc_00474543;

loc_00474524: ;
    SET_LO16(eax, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474543; /* je: equal / zero */

loc_0047452E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x40)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x40) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474543; /* je: equal / zero */

loc_00474534: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00474543u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00474540u); } /* indirect call */
    }

loc_00474543: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00474588; /* jbe: below or equal (unsigned <=) */

loc_0047454C: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00474550: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    ecx = ecx + edi + 0x40;
    PUSH32(esp, 0x0047455Eu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047455E: ;
    edx = MEM32(esi + 0x78);
    SET_LO16(eax, MEM16(edx + edi + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047457B; /* je: equal / zero */

loc_0047456C: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0047457Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00474578u); } /* indirect call */
    }

loc_0047457B: ;
    ecx = ZX8(MEM8(esi + 0xE));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x74;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00474550; /* jl: less (signed <) */

loc_00474587: ;
    POP32(esp, edi);

loc_00474588: ;
    MEM8(esi + 0xF) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004745A0
 * Original: 0x004745A0 - 0x004745F3 (83 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004745A0(void)
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

loc_004745A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ecx + 0x42));
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEM32(esp) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    edx = esp + 8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636EB0)); /* fmul dword ptr [0x636eb0] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63DE1C)); /* fsub dword ptr [0x63de1c] */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004745DDu); RECOMP_ABI_CALL(0x00473E70u, sub_00473E70); /* call 0x00473E70 */

loc_004745DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004745ECu); RECOMP_ABI_CALL(0x00607A80u, sub_00607A80); /* call 0x00607A80 */

loc_004745EC: ;
    POP32(esp, esi);
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
 * sub_00474600
 * Original: 0x00474600 - 0x00474626 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474600(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00474600: ;
    PUSH32(esp, ecx);
    eax = ZX16(MEM16(ecx + 0xC));
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D580)); /* fmul dword ptr [0x62d580] */
    fp_top() = RECOMP_FP_PC(MEMF(0x8602E0) - fp_top()); /* fsubr dword ptr [0x8602e0] */
    fp_push(MEMD(0x63DF70)); /* fld double */
    PUSH32(esp, 0x00474624u); RECOMP_ABI_CALL(0x0061A53Au, sub_0061A53A); /* call 0x0061A53A */

loc_00474624: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00474630
 * Original: 0x00474630 - 0x0047473C (268 bytes, 84 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00474630(void)
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

loc_00474630: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x128);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474735; /* je: equal / zero */

loc_00474647: ;
    PUSH32(esp, 0x0047464Cu); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0047464C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00474735; /* jne: not equal / not zero */

loc_00474654: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00474667u); RECOMP_ABI_CALL(0x005A0520u, sub_005A0520); /* call 0x005A0520 */

loc_00474667: ;
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
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63D438)); /* fsub dword ptr [0x63d438] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474733; /* jne: not equal / not zero */

loc_0047469E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x638140)); /* fmul dword ptr [0x638140] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004746B9; /* jne: not equal / not zero */

loc_004746B1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004746B9: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(MEM8(eax + 0x134)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x134), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004746E2; /* jne: not equal / not zero */

loc_004746C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x128);
    fp_top() = RECOMP_FP_PC(MEMF(0x6307D0) - fp_top()); /* fsubr dword ptr [0x6307d0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004746E0u); RECOMP_ABI_CALL(0x0052D7A0u, sub_0052D7A0); /* call 0x0052D7A0 */

loc_004746E0: ;
    goto loc_004746E4;

loc_004746E2: ;
    fp_pop(); /* fstp st(0) */

loc_004746E4: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00474713; /* je: equal / zero */

loc_004746F0: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(esi + 0x78);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x128);
    PUSH32(esp, 0x0047470Cu); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_0047470C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00474713: ;
    edx = MEM32(0x6CE2E4);
    ecx = MEM32(edx + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x128);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0047472Cu); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_0047472C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00474733: ;
    fp_pop(); /* fstp st(0) */

loc_00474735: ;
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
 * sub_00474740
 * Original: 0x00474740 - 0x00474775 (53 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00474740: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x124);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474771; /* je: equal / zero */

loc_0047474E: ;
    edx = MEM32(0x6CE2E4);
    eax = MEM32(edx + 0x38);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00474765u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_00474765: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00474771u); RECOMP_ABI_CALL(0x0052CAC0u, sub_0052CAC0); /* call 0x0052CAC0 */

loc_00474771: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00474780
 * Original: 0x00474780 - 0x00474815 (149 bytes, 50 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00474780(void)
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

loc_00474780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x74);
    esi = MEM32(eax + 0x12C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474810; /* je: equal / zero */

loc_00474791: ;
    ecx = esi;
    PUSH32(esp, 0x00474798u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_00474798: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00474810; /* jne: not equal / not zero */

loc_0047479C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63DF80)); /* fsub dword ptr [0x63df80] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047480E; /* jne: not equal / not zero */

loc_004747B3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DF7C)); /* fmul dword ptr [0x63df7c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004747CE; /* jne: not equal / not zero */

loc_004747C6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004747CE: ;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(MEM8(ecx + 0x134)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x134), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004747F3; /* jne: not equal / not zero */

loc_004747DA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D520)); /* fmul dword ptr [0x62d520] */
    PUSH32(esp, ecx);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(MEMF(0x6307D0) - fp_top()); /* fsubr dword ptr [0x6307d0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004747F1u); RECOMP_ABI_CALL(0x0052D7A0u, sub_0052D7A0); /* call 0x0052D7A0 */

loc_004747F1: ;
    goto loc_004747F5;

loc_004747F3: ;
    fp_pop(); /* fstp st(0) */

loc_004747F5: ;
    eax = MEM32(0x6CE2E4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00474809u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00474806u); } /* indirect call */
    }

loc_00474809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0047480E: ;
    fp_pop(); /* fstp st(0) */

loc_00474810: ;
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
 * sub_00474820
 * Original: 0x00474820 - 0x004748AF (143 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00474820: ;
    SET_LO8(edx, MEM8(0x6968A4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474835; /* jne: not equal / not zero */

loc_0047482F: ;
    MEM32(0x6968A4) = MEM32(0x6968A4) | eax;
    _fa = (uint32_t)(MEM32(0x6968A4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00474835: ;
    eax = MEM32(ecx + 0x74);
    SET_LO8(edx, MEM8(eax + 0xA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004748AB; /* je: equal / zero */

loc_0047483F: ;
    edx = MEM32(ecx + 0x10);
    MEM32(0x696874) = edx;
    eax = MEM32(ecx + 0x14);
    MEM32(0x696878) = eax;
    edx = MEM32(ecx + 0x18);
    MEM32(0x69687C) = edx;
    eax = MEM32(ecx + 0x1C);
    MEM32(0x696880) = eax;
    edx = MEM32(ecx + 0x20);
    MEM32(0x696884) = edx;
    eax = MEM32(ecx + 0x24);
    MEM32(0x696888) = eax;
    edx = MEM32(ecx + 0x28);
    MEM32(0x69688C) = edx;
    eax = MEM32(ecx + 0x2C);
    MEM32(0x696890) = eax;
    edx = MEM32(ecx + 0x30);
    MEM32(0x696894) = edx;
    eax = MEM32(ecx + 0x34);
    MEM32(0x696898) = eax;
    edx = MEM32(ecx + 0x38);
    MEM32(0x69689C) = edx;
    eax = MEM32(ecx + 0x3C);
    MEM32(0x6968A0) = eax;
    eax = 0x696874;
    esp += 4; return; /* ret */

loc_004748AB: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_004748B0
 * Original: 0x004748B0 - 0x0047490A (90 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004748B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004748B0: ;
    SET_LO8(eax, MEM8(0x696858));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00474903; /* je: equal / zero */

loc_004748BB: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474903; /* je: equal / zero */

loc_004748C3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004748CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004748C7u); } /* indirect call */
    }

loc_004748CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474903; /* je: equal / zero */

loc_004748CF: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x004748DCu); RECOMP_ABI_CALL(0x0059FAC0u, sub_0059FAC0); /* call 0x0059FAC0 */

loc_004748DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004748F1; /* jne: not equal / not zero */

loc_004748E0: ;
    POP32(esp, edi);
    MEM32(esi + 0x1CB0) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004748F1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1CB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1CB8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00474903; /* jne: not equal / not zero */

loc_004748F9: ;
    MEM32(esi + 0x1CB4) = 0;

loc_00474903: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00474910
 * Original: 0x00474910 - 0x00474F8F (1663 bytes, 415 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474910(void)
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

loc_00474910: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x74);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA0);
    eax = MEM32(ebx + ebp * 4 + 0xBC);
    fp_push(MEMF(eax + 0x197C)); /* fld float */
    PUSH32(esp, esi);
    MEM32(esp + 0x98) = ecx;
    esi = ecx + 0x10;
    SET_LO8(ecx, MEM8(eax + 0x1958));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0047494C; /* je: equal / zero */

loc_00474945: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xAC)); /* fmul dword ptr [esp + 0xac] */

loc_0047494C: ;
    PUSH32(esp, 0x00474951u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00474951: ;
    edi = eax;
    PUSH32(esp, 0x00474958u); RECOMP_ABI_CALL(0x00473F10u, sub_00473F10); /* call 0x00473F10 */

loc_00474958: ;
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(ebx + ebp * 4 + 0xBC);
    ecx = MEM32(eax + 0x196C);
    edx = MEM32(eax + 0x1970);
    _fb = (uint32_t)(0x196C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x196C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEM32(esp + 0x34) = edx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(esp + 0x30) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474A22; /* je: equal / zero */

loc_004749FD: ;
    PUSH32(esp, 0x00474A02u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_00474A02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00474A22; /* jne: not equal / not zero */

loc_00474A06: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(ebx + 0x130);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00474A22u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_00474A22: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(eax, MEM8(ecx + 0x1957));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x7C) = 0;
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00474EF6; /* je: equal / zero */

loc_00474AC0: ;
    ecx = MEM32(0x6C263C);
    MEM32(esp + 0x30) = 0;
    edx = MEM32(ecx + 0x2A8);
    eax = MEM32(ecx + 0x2AC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x2B0);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x2B4);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 2);
    edx = esp + 0x34;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00474B07u); RECOMP_ABI_CALL(0x00519010u, sub_00519010); /* call 0x00519010 */

loc_00474B07: ;
    eax = MEM32(0x6C263C);
    fp_push(MEMF(eax + 0x26C)); /* fld float */
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_push(MEMF(eax + 0x268)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6302F4)); /* fmul dword ptr [0x6302f4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00474C14; /* je: equal / zero */

loc_00474B3E: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474C12; /* jne: not equal / not zero */

loc_00474B81: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474B96; /* jne: not equal / not zero */

loc_00474B8E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00474B96: ;
    ecx = MEM32(ecx + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    edx = ecx + 0x1C;
    eax = MEM32(edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 4);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00474C14;

loc_00474C12: ;
    fp_pop(); /* fstp st(0) */

loc_00474C14: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474CF6; /* je: equal / zero */

loc_00474C20: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] * fp_top()); fp_pop(); /* fmulp st(4) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474CF6; /* jne: not equal / not zero */

loc_00474C65: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474C7A; /* jne: not equal / not zero */

loc_00474C72: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00474C7A: ;
    ecx = MEM32(ecx + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    eax = ecx + 0x1C;
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00474CF8;

loc_00474CF6: ;
    fp_pop(); /* fstp st(0) */

loc_00474CF8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x28);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x14) = edx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00474D31; /* jne: not equal / not zero */

loc_00474D29: ;
    MEM32(esp + 0x10) = 0x3F800000;

loc_00474D31: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474D4A; /* jne: not equal / not zero */

loc_00474D42: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_00474D4A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474D63; /* jne: not equal / not zero */

loc_00474D5B: ;
    MEM32(esp + 0x18) = 0x3F800000;

loc_00474D63: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    fp_push(MEMF(ecx + 0x1960)); /* fld float */
    edx = MEM32(ecx + 0x18B4);
    fp_push(MEMF(0x62D57C)); /* fld float */
    eax = MEM32(ecx + 0x18B8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEM32(esp + 0x8C) = edx;
    edx = MEM32(ecx + 0x18BC);
    MEM32(esp + 0x90) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = MEM32(esp + 0x8C);
    MEM32(esp + 0x94) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x90);
    fp_push(MEMF(0x62D57C)); /* fld float */
    MEM32(esp + 0x80) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    edx = MEM32(ecx + 0x18C4);
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x20) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    edx = MEM32(ecx + 0x18CC);
    edi = MEM32(esp + 0x94);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(0x62D57C)); /* fld float */
    MEM32(esp + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18C0)); /* fld float */
    MEMF(esp + 0x98) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x98);
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    MEM32(esp + 0x88) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    eax = MEM32(ecx + 0x18C8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x18D0);
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    eax = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x2C);
    edx = eax;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x68) = eax;
    fp_push(MEMF(esp + 0x94)); /* fld float */
    MEM32(esp + 0x58) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x6C);
    eax = ecx + 0x18B4;
    MEM32(eax) = edx;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x70);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x74);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x78);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x4C);
    eax = ecx + 0x18C4;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x50);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x00474EF4u); RECOMP_ABI_CALL(0x00558430u, sub_00558430); /* call 0x00558430 */

loc_00474EF4: ;
    goto loc_00474EFD;

loc_00474EF6: ;
    edi = MEM32(esp + 0x84);

loc_00474EFD: ;
    eax = MEM32(esp + 0x9C);
    ecx = MEM32(eax + 0x74);
    edx = MEM32(ecx + ebp * 4 + 0xBC);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = MEM32(0x697B84);
    PUSH32(esp, 0x00474F28u); RECOMP_ABI_CALL(0x0055A490u, sub_0055A490); /* call 0x0055A490 */

loc_00474F28: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(eax, MEM8(ecx + 0x1957));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00474F82; /* je: equal / zero */

loc_00474F39: ;
    eax = MEM32(esp + 0x7C);
    edx = ecx + 0x18B4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x80);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x88);
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x5C);
    edx = ecx + 0x18C4;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x60);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x64);
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x00474F82u); RECOMP_ABI_CALL(0x00558430u, sub_00558430); /* call 0x00558430 */

loc_00474F82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00474F90
 * Original: 0x00474F90 - 0x0047522A (666 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00474F90(void)
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

loc_00474F90: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00474FA6u); RECOMP_ABI_CALL(0x005A0520u, sub_005A0520); /* call 0x005A0520 */

loc_00474FA6: ;
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
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63DF88)); /* fmul dword ptr [0x63df88] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00474FF1; /* jne: not equal / not zero */

loc_00474FE7: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */

loc_00474FF1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475006; /* jne: not equal / not zero */

loc_00474FFE: ;
    MEM32(esp + 8) = 0x3F800000;

loc_00475006: ;
    edi = MEM32(esi + 0x74);
    _fa = (uint32_t)(MEM8(edi + 0x13C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x13C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004751B1; /* je: equal / zero */

loc_00475016: ;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0;
    eax = MEM32(edi + 0x138);
    ecx = MEM32(eax + 0x196C);
    _fb = (uint32_t)(0x196C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x196C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi + 0x10;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00475092u); RECOMP_ABI_CALL(0x0046E920u, sub_0046E920); /* call 0x0046E920 */

loc_00475092: ;
    edi = MEM32(edi + 0x138);
    SET_LO8(eax, MEM8(edi + 0x1958));
    fp_push(MEMF(edi + 0x197C)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004750AC; /* je: equal / zero */

loc_004750A8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */

loc_004750AC: ;
    PUSH32(esp, 0x004750B1u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_004750B1: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004750C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004750C1u); } /* indirect call */
    }

loc_004750C4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    edx = MEM32(esi + 0x74);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx + 0x138);
    fp_push(MEMF(eax + 0x195C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047517C; /* jp: parity */

loc_00475108: ;
    PUSH32(esp, 0x0047510Du); RECOMP_ABI_CALL(0x00473F10u, sub_00473F10); /* call 0x00473F10 */

loc_0047510D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    ecx = MEM32(esi + 0x74);
    ecx = MEM32(ecx + 0x138);
    edx = MEM32(ecx + 0x1850);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = ecx + 0x1870;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1864) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1864;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00475179u); RECOMP_ABI_CALL(0x005073C0u, sub_005073C0); /* call 0x005073C0 */

loc_00475179: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047517C: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004751B1; /* je: equal / zero */

loc_00475189: ;
    PUSH32(esp, 0x0047518Eu); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_0047518E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004751B1; /* jne: not equal / not zero */

loc_00475192: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(esi + 0x74);
    ecx = MEM32(ecx + 0x130);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004751B1u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_004751B1: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63DF84)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63df84] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004751CE; /* jne: not equal / not zero */

loc_004751C2: ;
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004751CEu); RECOMP_ABI_CALL(0x00474780u, sub_00474780); /* call 0x00474780 */

loc_004751CE: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0xDC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00475220; /* jle: less or equal (signed <=) */

loc_004751DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = 0xBC;
    goto loc_004751F0;

    /* nop */

loc_004751F0: ;
    eax = MEM32(ebx + eax);
    fp_push(MEMF(eax + 0x195C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x60)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x60] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0047520D; /* jp: parity */

loc_00475204: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0047520Du); RECOMP_ABI_CALL(0x00474910u, sub_00474910); /* call 0x00474910 */

loc_0047520D: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0xDC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004751F0; /* jl: less (signed <) */

loc_0047521E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00475220: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00475230
 * Original: 0x00475230 - 0x004752B1 (129 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475230(void)
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

loc_00475230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0xE0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004752A8; /* jne: not equal / not zero */

loc_00475241: ;
    SET_LO8(ecx, MEM8(eax + 0x144));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475254; /* je: equal / zero */

loc_0047524B: ;
    fp_push(MEMF(0x63DF8C)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00475254: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0047525Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475259u); } /* indirect call */
    }

loc_0047525C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00475287; /* jne: not equal / not zero */

loc_00475266: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x90);
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0047527Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475279u); } /* indirect call */
    }

loc_0047527C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00475287: ;
    edx = (uint32_t)(int32_t)SMEM16(0x662814);
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0047529Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047529Au); } /* indirect call */
    }

loc_0047529D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004752A8: ;
    fp_push(MEMF(0x65E384)); /* fld float */
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
 * sub_004752C0
 * Original: 0x004752C0 - 0x0047531C (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004752C0(void)
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

loc_004752C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63032C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63032c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475316; /* jne: not equal / not zero */

loc_004752EE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63032C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63032c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475316; /* jne: not equal / not zero */

loc_004752FF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63032C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63032c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475316; /* jne: not equal / not zero */

loc_00475310: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00475316: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
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
 * sub_00475320
 * Original: 0x00475320 - 0x00475A17 (1783 bytes, 448 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475320(void)
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

loc_00475320: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x74);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB8);
    eax = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(edx, MEM8(eax + 0x1954));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x74) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00475355; /* je: equal / zero */

loc_0047534D: ;
    esi = ecx + 0x10;
    goto loc_004753F2;

loc_00475355: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    edx = ZX16(MEM16(ecx + 0x42));
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x8C) = 0x3F800000;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x98) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x636EB0)); /* fmul dword ptr [0x636eb0] */
    MEM32(esp + 0x9C) = 0x3F800000;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x63DE1C)); /* fsub dword ptr [0x63de1c] */
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = 0x3F800000;
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    esi = esp + 0x8C;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */

loc_004753F2: ;
    eax = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(ecx, MEM8(eax + 0x1958));
    fp_push(MEMF(eax + 0x197C)); /* fld float */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475410; /* je: equal / zero */

loc_00475409: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC4)); /* fmul dword ptr [esp + 0xc4] */

loc_00475410: ;
    PUSH32(esp, 0x00475415u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00475415: ;
    edi = eax;
    PUSH32(esp, 0x0047541Cu); RECOMP_ABI_CALL(0x00473F10u, sub_00473F10); /* call 0x00473F10 */

loc_0047541C: ;
    MEM32(esp + 0x70) = eax;
    eax = MEM32(ebx + ebp * 4 + 0xBC);
    ecx = MEM32(eax + 0x196C);
    edx = MEM32(eax + 0x1970);
    _fb = (uint32_t)(0x196C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x196C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEM32(esp + 0x38) = edx;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x28)); /* fadd dword ptr [esi + 0x28] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2C)); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004754E3; /* je: equal / zero */

loc_004754BE: ;
    PUSH32(esp, 0x004754C3u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_004754C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004754E3; /* jne: not equal / not zero */

loc_004754C7: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(ebx + 0x130);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004754E3u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_004754E3: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(eax, MEM8(ecx + 0x1957));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0047598D; /* je: equal / zero */

loc_00475538: ;
    ecx = MEM32(0x6C263C);
    MEM32(esp + 0x34) = 0;
    edx = MEM32(ecx + 0x2A8);
    eax = MEM32(ecx + 0x2AC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x2B0);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0x2B4);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 2);
    edx = esp + 0x38;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047557Fu); RECOMP_ABI_CALL(0x00519010u, sub_00519010); /* call 0x00519010 */

loc_0047557F: ;
    edi = MEM32(0x6C263C);
    fp_push(MEMF(edi + 0x26C)); /* fld float */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) / fp_top()); /* fdivr dword ptr [0x62d57c] */
    fp_push(MEMF(edi + 0x268)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63D408)); /* fmul dword ptr [0x63d408] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00475693; /* je: equal / zero */

loc_004755B3: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475691; /* jne: not equal / not zero */

loc_004755F6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    SET_LO8(edx, 1);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047560D; /* jne: not equal / not zero */

loc_00475605: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_0047560D: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x4C) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    MEM32(esp + 0x1C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00475693;

loc_00475691: ;
    fp_pop(); /* fstp st(0) */

loc_00475693: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047577F; /* je: equal / zero */

loc_0047569F: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 4) & 7] * fp_top()); fp_pop(); /* fmulp st(4) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047577F; /* jne: not equal / not zero */

loc_004756E4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    SET_LO8(edx, 1);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004756FB; /* jne: not equal / not zero */

loc_004756F3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_004756FB: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x4C) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x2C)); /* fmul dword ptr [eax + 0x2c] */
    MEM32(esp + 0x1C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00475781;

loc_0047577F: ;
    fp_pop(); /* fstp st(0) */

loc_00475781: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esp + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_0047578F; /* jne: not equal / not zero */

loc_00475789: ;
    eax = edi + 0x2A8;

loc_0047578F: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D0)); /* fmul dword ptr [0x6307d0] */
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0xC);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x18) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D0)); /* fmul dword ptr [0x6307d0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D0)); /* fmul dword ptr [0x6307d0] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004757E9; /* jne: not equal / not zero */

loc_004757E1: ;
    MEM32(esp + 0x10) = 0x3F800000;

loc_004757E9: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475802; /* jne: not equal / not zero */

loc_004757FA: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_00475802: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00475817; /* jne: not equal / not zero */

loc_0047580F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */

loc_00475817: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    eax = MEM32(ecx + 0x1960);
    MEM32(esp + 0x30) = eax;
    edx = MEM32(ecx + 0x18B4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    eax = MEM32(ecx + 0x18B8);
    MEM32(esp + 0x20) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    edx = MEM32(ecx + 0x18BC);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(0x62D57C)); /* fld float */
    edx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEM32(esp + 0x68) = eax;
    eax = MEM32(ecx + 0x18C4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 0x18CC);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x14);
    fp_push(MEMF(0x62D57C)); /* fld float */
    ebx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(esp + 0x80) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x18);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18C0)); /* fld float */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x2C);
    fp_push(MEMF(ecx + 0x18D0)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(ecx + 0x18C8);
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    MEM32(esp + 0x24) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x2C) = ebp;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x88) = ebp;
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x10);
    edx = eax;
    ebp = ecx + 0x18B4;
    MEM32(ebp) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(ebp + 0xC) = edx;
    edx = ecx + 0x18C4;
    MEM32(edx) = eax;
    eax = ebx;
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x88);
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = eax;
    PUSH32(esp, 0x00475982u); RECOMP_ABI_CALL(0x00558430u, sub_00558430); /* call 0x00558430 */

loc_00475982: ;
    ebx = MEM32(esp + 0x74);
    ebp = MEM32(esp + 0xC0);

loc_0047598D: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(ecx + 0x74);
    eax = MEM32(edx + ebp * 4 + 0xBC);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x697B84);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004759B2u); RECOMP_ABI_CALL(0x0055A490u, sub_0055A490); /* call 0x0055A490 */

loc_004759B2: ;
    ecx = MEM32(ebx + ebp * 4 + 0xBC);
    SET_LO8(eax, MEM8(ecx + 0x1957));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00475A0E; /* je: equal / zero */

loc_004759C7: ;
    edx = MEM32(esp + 0x50);
    eax = ecx + 0x18B4;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x40);
    eax = ecx + 0x18C4;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x00475A0Eu); RECOMP_ABI_CALL(0x00558430u, sub_00558430); /* call 0x00558430 */

loc_00475A0E: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00475A20
 * Original: 0x00475A20 - 0x00475CFD (733 bytes, 207 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475A20(void)
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

loc_00475A20: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x74);
    eax = MEM32(ebx + 0x138);
    ecx = MEM32(eax + 0x196C);
    _fb = (uint32_t)(0x196C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x196C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(ebx + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00475ADC; /* je: equal / zero */

loc_00475A94: ;
    eax = MEM32(esi + 0x78);
    edx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    MEM32(esp + 0x60) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x2C);
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x7C) = eax;
    goto loc_00475B1C;

loc_00475ADC: ;
    edx = MEM32(esi + 0x18);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(esi + 0x24);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esi + 0x30);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esi + 0x38);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esi + 0x3C);
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = edx;

loc_00475B1C: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x1C) = 0;
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEM32(esp + 0x20) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x78)); /* fadd dword ptr [esp + 0x78] */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x7C)); /* fadd dword ptr [esp + 0x7c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00475BFF; /* je: equal / zero */

loc_00475BA7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475BB5; /* je: equal / zero */

loc_00475BAB: ;
    ecx = MEM32(esi + 0x78);
    edx = ZX16(MEM16(ecx + 8));
    PUSH32(esp, edx);
    goto loc_00475BBA;

loc_00475BB5: ;
    eax = ZX16(MEM16(esi + 8));
    PUSH32(esp, eax);

loc_00475BBA: ;
    ecx = MEM32(0x6C8EB8);
    PUSH32(esp, 0x00475BC5u); RECOMP_ABI_CALL(0x00580720u, sub_00580720); /* call 0x00580720 */

loc_00475BC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475C10; /* je: equal / zero */

loc_00475BC9: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475BE5; /* je: equal / zero */

loc_00475BD0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00475BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475BE0u); } /* indirect call */
    }

loc_00475BE3: ;
    goto loc_00475C10;

loc_00475BE5: ;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = 0;
    goto loc_00475C10;

loc_00475BFF: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00475C10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475C0Du); } /* indirect call */
    }

loc_00475C10: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(ebx + 0x138);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6797CC)); /* fmul dword ptr [0x6797cc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x197C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x88)); /* fmul dword ptr [esp + 0x88] */
    PUSH32(esp, 0x00475C53u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00475C53: ;
    edi = eax;
    PUSH32(esp, 0x00475C5Au); RECOMP_ABI_CALL(0x00473F10u, sub_00473F10); /* call 0x00473F10 */

loc_00475C5A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    ecx = MEM32(ebx + 0x138);
    edx = MEM32(ecx + 0x1850);
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = ecx + 0x1870;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1864) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1864;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00475CC3u); RECOMP_ABI_CALL(0x005073C0u, sub_005073C0); /* call 0x005073C0 */

loc_00475CC3: ;
    ecx = MEM32(ebx + 0x130);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00475CF5; /* je: equal / zero */

loc_00475CD1: ;
    PUSH32(esp, 0x00475CD6u); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_00475CD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00475CF5; /* jne: not equal / not zero */

loc_00475CDA: ;
    eax = MEM32(0x6CE2E4);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x130);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00475CF5u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_00475CF5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00475D00
 * Original: 0x00475D00 - 0x00475D21 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475D00: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00475D0Fu); RECOMP_ABI_CALL(0x005DD2B0u, sub_005DD2B0); /* call 0x005DD2B0 */

loc_00475D0F: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ecx * 4 + 0x80) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00475D30
 * Original: 0x00475D30 - 0x00475D41 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475D30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00475D50
 * Original: 0x00475D50 - 0x00475E59 (265 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x837);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x00475D65u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00475D65: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475D79; /* je: equal / zero */

loc_00475D6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    ecx = eax;
    PUSH32(esp, 0x00475D77u); RECOMP_ABI_CALL(0x005DE640u, sub_005DE640); /* call 0x005DE640 */

loc_00475D77: ;
    goto loc_00475D7B;

loc_00475D79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00475D7B: ;
    edi = MEM32(esp + 0xC);
    MEM32(esi + 0x34) = eax;
    ecx = MEM32(edi + 0x74);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00475D92u); RECOMP_ABI_CALL(0x005DE300u, sub_005DE300); /* call 0x005DE300 */

loc_00475D92: ;
    eax = MEM32(edi + 0x74);
    ecx = MEM32(eax + 0xC);
    eax = ZX8(MEM8(ecx));
    PUSH32(esp, 0x83B);
    edx = eax + eax * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00475DB1u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00475DB1: ;
    PUSH32(esp, 0x83D);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x00475DC5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00475DC5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475DDF; /* je: equal / zero */

loc_00475DCC: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00475DDDu); RECOMP_ABI_CALL(0x005DD4F0u, sub_005DD4F0); /* call 0x005DD4F0 */

loc_00475DDD: ;
    goto loc_00475DE1;

loc_00475DDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00475DE1: ;
    MEM32(esi + 0x38) = eax;
    edx = MEM32(edi + 0x10);
    MEM32(esi) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x30);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x34);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(edi + 0x3C);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(edx + 0x10) = esi;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00475E39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475E36u); } /* indirect call */
    }

loc_00475E39: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x00475E41u); RECOMP_ABI_CALL(0x005DD5C0u, sub_005DD5C0); /* call 0x005DD5C0 */

loc_00475E41: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x00475E4Du); RECOMP_ABI_CALL(0x005DE520u, sub_005DE520); /* call 0x005DE520 */

loc_00475E4D: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x3C) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00475E60
 * Original: 0x00475E60 - 0x00475E83 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475E60(void)
{

loc_00475E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x00475E6Bu); RECOMP_ABI_CALL(0x005DD5C0u, sub_005DD5C0); /* call 0x005DD5C0 */

loc_00475E6B: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00475E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475E70u); } /* indirect call */
    }

loc_00475E73: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x00475E7Fu); RECOMP_ABI_CALL(0x005DE520u, sub_005DE520); /* call 0x005DE520 */

loc_00475E7F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00475E90
 * Original: 0x00475E90 - 0x00475ECF (63 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00475EBC; /* je: equal / zero */

loc_00475EA1: ;
    SET_LO8(edx, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00475ECB; /* jne: not equal / not zero */

loc_00475EA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00475EAEu); RECOMP_ABI_CALL(0x005DD9A0u, sub_005DD9A0); /* call 0x005DD9A0 */

loc_00475EAE: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x14);
    MEM8(eax + 0x32) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00475EBC: ;
    PUSH32(esp, 0x00475EC1u); RECOMP_ABI_CALL(0x005DD860u, sub_005DD860); /* call 0x005DD860 */

loc_00475EC1: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x14);
    MEM8(eax + 0x32) = 0;

loc_00475ECB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00475ED0
 * Original: 0x00475ED0 - 0x00475EE0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475ED0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00475EE0
 * Original: 0x00475EE0 - 0x00475F00 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475EE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x892);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00475EF7u); RECOMP_ABI_CALL(0x00614A10u, sub_00614A10); /* call 0x00614A10 */

loc_00475EF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00475F00
 * Original: 0x00475F00 - 0x00475F28 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00475F08u); RECOMP_ABI_CALL(0x0058FDF0u, sub_0058FDF0); /* call 0x0058FDF0 */

loc_00475F08: ;
    ecx = esi + 0x40;
    MEM32(esi) = 0x63DF9C;
    PUSH32(esp, 0x00475F16u); RECOMP_ABI_CALL(0x00521ED0u, sub_00521ED0); /* call 0x00521ED0 */

loc_00475F16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x70) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00475F30
 * Original: 0x00475F30 - 0x00475F49 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00475F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x40;
    MEM32(esi) = 0x63DF9C;
    PUSH32(esp, 0x00475F41u); RECOMP_ABI_CALL(0x00521C30u, sub_00521C30); /* call 0x00521C30 */

loc_00475F41: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0058FE10(); return; /* tail jmp 0x0058FE10 */

}

/**
 * sub_00475F50
 * Original: 0x00475F50 - 0x00475F7C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475F50: ;
    eax = ZX16(MEM16(ecx + 8));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00475F5Eu); RECOMP_ABI_CALL(0x00580720u, sub_00580720); /* call 0x00580720 */

loc_00475F5E: ;
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475F79; /* je: equal / zero */

loc_00475F65: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00475F6Eu); RECOMP_ABI_CALL(0x004752C0u, sub_004752C0); /* call 0x004752C0 */

loc_00475F6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00475F79; /* je: equal / zero */

loc_00475F75: ;
    MEM8(ecx + 0x10) = 1;

loc_00475F79: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00475F80
 * Original: 0x00475F80 - 0x00475FB4 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475F80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1968);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1968) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00475FB0; /* jg: greater (signed >) */

loc_00475F96: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = 0x69685C;
    PUSH32(esp, 0x00475FA4u); RECOMP_ABI_CALL(0x006122B0u, sub_006122B0); /* call 0x006122B0 */

loc_00475FA4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00475FACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00475FAAu); } /* indirect call */
    }

loc_00475FAC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00475FB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00475FC0
 * Original: 0x00475FC0 - 0x0047602E (110 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00475FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00475FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00475FC8u); RECOMP_ABI_CALL(0x00559360u, sub_00559360); /* call 0x00559360 */

loc_00475FC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1968) = eax;
    MEM8(esi + 0x1955) = LO8(eax);
    MEM8(esi + 0x1956) = LO8(eax);
    MEM8(esi + 0x1958) = LO8(eax);
    MEM32(esi + 0x195C) = eax;
    MEM8(esi + 0x1964) = LO8(eax);
    MEM32(esi + 0x1960) = eax;
    MEM32(esi) = 0x63DFBC;
    SET_LO8(ecx, 1);
    MEM8(esi + 0x1954) = LO8(ecx);
    MEM8(esi + 0x1957) = LO8(ecx);
    MEM32(esi + 0x196C) = eax;
    MEM32(esi + 0x1970) = eax;
    MEM32(esi + 0x1974) = eax;
    MEM32(esi + 0x1978) = eax;
    MEM32(esi + 0x197C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00476030
 * Original: 0x00476030 - 0x00476036 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476030(void)
{

loc_00476030: ;
    eax = 0x63DFDC;
    esp += 4; return; /* ret */

}

/**
 * sub_00476040
 * Original: 0x00476040 - 0x0047604B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00476040: ;
    MEM32(ecx) = 0x63DFBC;
    g_seh_ebp = ebp; sub_00557D50(); return; /* tail jmp 0x00557D50 */

}

/**
 * sub_00476050
 * Original: 0x00476050 - 0x004760C8 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00476050: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0x69685C;
    PUSH32(esp, 0x00476060u); RECOMP_ABI_CALL(0x006124A0u, sub_006124A0); /* call 0x006124A0 */

loc_00476060: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476069; /* jne: not equal / not zero */

loc_00476065: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00476069: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476075; /* je: equal / zero */

loc_0047606D: ;
    MEM32(eax + 0x1968) = MEM32(eax + 0x1968) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x1968)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00476075: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8F4);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x1980);
    PUSH32(esp, 0x0047608Au); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0047608A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047609C; /* je: equal / zero */

loc_00476091: ;
    ecx = eax;
    PUSH32(esp, 0x00476098u); RECOMP_ABI_CALL(0x00475FC0u, sub_00475FC0); /* call 0x00475FC0 */

loc_00476098: ;
    esi = eax;
    goto loc_0047609E;

loc_0047609C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047609E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004760A6u); RECOMP_ABI_CALL(0x005E3380u, sub_005E3380); /* call 0x005E3380 */

loc_004760A6: ;
    ecx = esi;
    PUSH32(esp, 0x004760ADu); RECOMP_ABI_CALL(0x005E3320u, sub_005E3320); /* call 0x005E3320 */

loc_004760AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x69685C;
    PUSH32(esp, 0x004760B9u); RECOMP_ABI_CALL(0x00612150u, sub_00612150); /* call 0x00612150 */

loc_004760B9: ;
    MEM32(esi + 0x1968) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004760D0
 * Original: 0x004760D0 - 0x004761F6 (294 bytes, 97 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004760D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004760D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004760DEu); RECOMP_ABI_CALL(0x00559040u, sub_00559040); /* call 0x00559040 */

loc_004760DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1954;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63E0B4);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x004760F7u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004760F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1955;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63E0A0);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00476110u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00476110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x1956;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E084);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00476129u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00476129: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1957;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63E068);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00476142u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00476142: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1958;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63E044);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0047615Bu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0047615B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x195C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E030);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x00476174u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_00476174: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1964;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63E024);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0047618Du); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_0047618D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x1960;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63E018);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004761A6u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004761A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edx = esi + 0x196C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E00C);
    PUSH32(esp, 8);
    ecx = edi;
    PUSH32(esp, 0x004761BFu); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004761BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x1978;
    PUSH32(esp, eax);
    PUSH32(esp, 0x63DFFC);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004761D8u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004761D8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x197C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x197C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63DFF0);
    PUSH32(esp, 6);
    ecx = edi;
    PUSH32(esp, 0x004761F1u); RECOMP_ABI_CALL(0x005E2980u, sub_005E2980); /* call 0x005E2980 */

loc_004761F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00476200
 * Original: 0x00476200 - 0x00476208 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00476200: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004786E0(); return; /* tail jmp 0x004786E0 */

}

/**
 * sub_00476210
 * Original: 0x00476210 - 0x00476240 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00476210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    MEM32(esi) = 0x63DEE8;
    MEM32(edi) = 0x63DED0;
    PUSH32(esp, 0x00476228u); RECOMP_ABI_CALL(0x00474350u, sub_00474350); /* call 0x00474350 */

loc_00476228: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00476230u); RECOMP_ABI_CALL(0x00473F80u, sub_00473F80); /* call 0x00473F80 */

loc_00476230: ;
    ecx = edi;
    PUSH32(esp, 0x00476237u); RECOMP_ABI_CALL(0x004FCCC0u, sub_004FCCC0); /* call 0x004FCCC0 */

loc_00476237: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0058FE10(); return; /* tail jmp 0x0058FE10 */

}

/**
 * sub_00476240
 * Original: 0x00476240 - 0x0047627B (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00476240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00476248u); RECOMP_ABI_CALL(0x005913B0u, sub_005913B0); /* call 0x005913B0 */

loc_00476248: ;
    ecx = esi + 0x50;
    MEM32(esi) = 0x63E0C4;
    PUSH32(esp, 0x00476256u); RECOMP_ABI_CALL(0x00473F60u, sub_00473F60); /* call 0x00473F60 */

loc_00476256: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x78) = eax;
    MEM8(esi + 0xE) = LO8(eax);
    MEM8(esi + 0xF) = LO8(eax);
    MEM16(esi + 0xC) = LO16(eax);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM16(esi + 0x42) = 0x4E20;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00476280
 * Original: 0x00476280 - 0x00476847 (1479 bytes, 460 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476280(void)
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

loc_00476280: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    esi = ecx;
    ecx = MEM32(0x6C263C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi + 0x50;
    PUSH32(esp, 0x004762AEu); RECOMP_ABI_CALL(0x00473F90u, sub_00473F90); /* call 0x00473F90 */

loc_004762AE: ;
    edx = MEM32(esi + 0x74);
    SET_LO8(eax, MEM8(edx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047655C; /* jne: not equal / not zero */

loc_004762BC: ;
    SET_LO8(eax, MEM8(edi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0xE) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004765DF; /* je: equal / zero */

loc_004762CA: ;
    ebx = ZX8(LO8(eax));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x74);
    PUSH32(esp, 0x181);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004762E5u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_004762E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476301; /* je: equal / zero */

loc_004762EC: ;
    PUSH32(esp, 0x475F00);
    PUSH32(esp, ebx);
    ebp = eax + 4;
    PUSH32(esp, 0x74);
    PUSH32(esp, ebp);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x004762FFu); RECOMP_ABI_CALL(0x00401750u, sub_00401750); /* call 0x00401750 */

loc_004762FF: ;
    goto loc_00476303;

loc_00476301: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00476303: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    MEM32(esi + 0x78) = ebp;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004765DF; /* jbe: below or equal (unsigned <=) */

loc_00476313: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00476320;

loc_00476317: ;
    edi = MEM32(esp + 0x9C);
    edi = edi;

loc_00476320: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx + ebp * 4);
    eax = MEM32(edx);
    ecx = MEM32(0x6C263C);
    edx = MEM32(esi + 0x78);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx + ebx + 0x40;
    PUSH32(esp, 0x00476342u); RECOMP_ABI_CALL(0x00521CE0u, sub_00521CE0); /* call 0x00521CE0 */

loc_00476342: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + ebp * 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x78);
    MEM32(esp + 0x14) = edx;
    edx = ecx + ebx + 0x64;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(esi + 0x10);
    MEM32(ecx + ebx + 0x10) = edx;
    eax = ecx + ebx + 0x10;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esi + 0x30);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(esi + 0x34);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(esi + 0x3C);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 0x78);
    fp_push(MEMF(edx + ebx + 0x1C)); /* fld float */
    eax = edx + ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x68)); /* fmul dword ptr [eax + 0x68] */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C)); /* fmul dword ptr [eax + 0x6c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x68)); /* fmul dword ptr [eax + 0x68] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x64)); /* fmul dword ptr [eax + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C)); /* fmul dword ptr [eax + 0x6c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x68)); /* fmul dword ptr [eax + 0x68] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x64)); /* fmul dword ptr [eax + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x6C)); /* fmul dword ptr [eax + 0x6c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x3C)); /* fadd dword ptr [eax + 0x3c] */
    PUSH32(esp, 0);
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x94);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x3C) = ecx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x78);
    eax = edx + ebx;
    ecx = eax + 0x10;
    PUSH32(esp, ecx);
    ecx = eax + 0x40;
    PUSH32(esp, 0x0047644Au); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_0047644A: ;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + ebp * 4);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00476458u); RECOMP_ABI_CALL(0x0047BB60u, sub_0047BB60); /* call 0x0047BB60 */

loc_00476458: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476507; /* jne: not equal / not zero */

loc_00476465: ;
    PUSH32(esp, 0x194);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00476476u); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_00476476: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476488; /* je: equal / zero */

loc_0047647D: ;
    ecx = eax;
    PUSH32(esp, 0x00476484u); RECOMP_ABI_CALL(0x0058F3E0u, sub_0058F3E0); /* call 0x0058F3E0 */

loc_00476484: ;
    edi = eax;
    goto loc_0047648A;

loc_00476488: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047648A: ;
    PUSH32(esp, 0x195);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0047649Bu); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0047649B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004764B0; /* je: equal / zero */

loc_004764A2: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x004764AEu); RECOMP_ABI_CALL(0x005A21A0u, sub_005A21A0); /* call 0x005A21A0 */

loc_004764AE: ;
    goto loc_004764B2;

loc_004764B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004764B2: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004764BAu); RECOMP_ABI_CALL(0x0058E7D0u, sub_0058E7D0); /* call 0x0058E7D0 */

loc_004764BA: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41200000);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004764C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004764C3u); } /* indirect call */
    }

loc_004764C6: ;
    eax = MEM32(edi);
    ecx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x50) = 0x41200000;
    MEM32(esp + 0x54) = 0x41200000;
    MEM32(esp + 0x58) = 0x41200000;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004764EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004764E7u); } /* indirect call */
    }

loc_004764EA: ;
    edx = MEM32(esp + 0x9C);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + ebp * 4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x63E174);
    PUSH32(esp, 0x00476504u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00476504: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00476507: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x200);
    ecx = edi;
    PUSH32(esp, 0x00476515u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00476515: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    ecx = edi;
    PUSH32(esp, 0x00476523u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00476523: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0047652Eu); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_0047652E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4000);
    ecx = edi;
    PUSH32(esp, 0x0047653Cu); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_0047653C: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00476547u); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_00476547: ;
    eax = ZX8(MEM8(esi + 0xE));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00476317; /* jl: less (signed <) */

loc_00476557: ;
    goto loc_004765DF;

loc_0047655C: ;
    PUSH32(esp, 0x1AD);
    PUSH32(esp, 0x63DF90);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0047656Du); RECOMP_ABI_CALL(0x005772E0u, sub_005772E0); /* call 0x005772E0 */

loc_0047656D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047657D; /* je: equal / zero */

loc_00476574: ;
    ecx = eax;
    PUSH32(esp, 0x0047657Bu); RECOMP_ABI_CALL(0x00475D30u, sub_00475D30); /* call 0x00475D30 */

loc_0047657B: ;
    goto loc_0047657F;

loc_0047657D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047657F: ;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x7C) = eax;
    edx = ZX16(MEM16(ecx + 8));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00476592u); RECOMP_ABI_CALL(0x00475D50u, sub_00475D50); /* call 0x00475D50 */

loc_00476592: ;
    eax = MEM32(esi + 0x7C);
    eax = MEM32(eax + 0x30);
    ecx = MEM32(eax);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x2C) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0x3C) = edx;

loc_004765DF: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x13C);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004765FC; /* je: equal / zero */

loc_004765F0: ;
    ecx = MEM32(0x6B1528);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004765FCu); RECOMP_ABI_CALL(0x005119D0u, sub_005119D0); /* call 0x005119D0 */

loc_004765FC: ;
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(esi + 0x34)); /* fld float */
    eax = MEM32(esi + 0x14);
    MEMF(esp + 0x7C) = (float)fp_top(); /* fst */
    ecx = MEM32(esi + 0x18);
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    MEM32(esp + 0x58) = edx;
    MEMF(esp + 0x84) = (float)fp_top(); /* fst */
    edx = MEM32(esi + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esi + 0x38);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esi + 0x30);
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x80) = edx;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x63DE1C)); /* fadd dword ptr [0x63de1c] */
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x78) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x630308)); /* fmul dword ptr [0x630308] */
    PUSH32(esp, 0x00476673u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00476673: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(esi + 0x42) = LO16(eax);
    PUSH32(esp, 0x63E170);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x00476690u); RECOMP_ABI_CALL(0x00607310u, sub_00607310); /* call 0x00607310 */

loc_00476690: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x44) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x004766AEu); RECOMP_ABI_CALL(0x0060D4D0u, sub_0060D4D0); /* call 0x0060D4D0 */

loc_004766AE: ;
    edx = MEM32(esi + 0x74);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004766BDu); RECOMP_ABI_CALL(0x0047BB60u, sub_0047BB60); /* call 0x0047BB60 */

loc_004766BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004766C8u); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_004766C8: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004766F0; /* jne: not equal / not zero */

loc_004766CF: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x63E144);
    PUSH32(esp, 0x004766E0u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_004766E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_004766F0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476718; /* jne: not equal / not zero */

loc_004766F7: ;
    edx = MEM32(esi + 0x74);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x63E114);
    PUSH32(esp, 0x00476708u); RECOMP_ABI_CALL(0x00618690u, sub_00618690); /* call 0x00618690 */

loc_00476708: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00476718: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x00476724u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00476724: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx + 0x13C);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00476743; /* jne: not equal / not zero */

loc_00476734: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0x00476743u); RECOMP_ABI_CALL(0x0058E800u, sub_0058E800); /* call 0x0058E800 */

loc_00476743: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0047674Fu); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_0047674F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0x0047675Eu); RECOMP_ABI_CALL(0x0058E830u, sub_0058E830); /* call 0x0058E830 */

loc_0047675E: ;
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0047676Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00476769u); } /* indirect call */
    }

loc_0047676C: ;
    eax = MEM32(0x63E108);
    ecx = MEM32(0x63E100);
    edx = MEM32(0x63E104);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x63E10C);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(0x63E112));
    MEM32(esp + 0x20) = edx;
    SET_LO16(edx, MEM16(0x63E110));
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x63E0F0);
    MEM8(esp + 0x2E) = LO8(eax);
    eax = MEM32(0x63E0F8);
    MEM16(esp + 0x2C) = LO16(edx);
    edx = MEM32(0x63E0F4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x63E0FC);
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x1C;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x3C) = ecx;
    edx = eax + 1;

loc_004767D6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004767D6; /* jne: not equal / not zero */

loc_004767DD: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x74);
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004767F2u); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_004767F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476823; /* je: equal / zero */

loc_004767F9: ;
    eax = esp + 0x30;
    edx = eax + 1;

loc_00476800: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476800; /* jne: not equal / not zero */

loc_00476807: ;
    ecx = MEM32(esi + 0x74);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0047681Cu); RECOMP_ABI_CALL(0x006197E0u, sub_006197E0); /* call 0x006197E0 */

loc_0047681C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047683A; /* jne: not equal / not zero */

loc_00476823: ;
    ecx = MEM32(0x6968A8);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00476832u); RECOMP_ABI_CALL(0x004FD3C0u, sub_004FD3C0); /* call 0x004FD3C0 */

loc_00476832: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0047683Au); RECOMP_ABI_CALL(0x004FD530u, sub_004FD530); /* call 0x004FD530 */

loc_0047683A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00476850
 * Original: 0x00476850 - 0x004768B2 (98 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00476850: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00476896; /* je: equal / zero */

loc_0047685D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x74);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0047687F; /* js: sign (negative) */

loc_0047686F: ;
    edi = eax + 1;

loc_00476872: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x74;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x0047687Cu); RECOMP_ABI_CALL(0x00475F30u, sub_00475F30); /* call 0x00475F30 */

loc_0047687C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00476872; /* jne: not equal / not zero */

loc_0047687F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0047688D; /* je: equal / zero */

loc_00476884: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0047688Au); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0047688A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047688D: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00476896: ;
    ecx = edi;
    PUSH32(esp, 0x0047689Du); RECOMP_ABI_CALL(0x00475F30u, sub_00475F30); /* call 0x00475F30 */

loc_0047689D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004768AB; /* je: equal / zero */

loc_004768A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004768A8u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004768A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004768AB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004768C0
 * Original: 0x004768C0 - 0x00476BF9 (825 bytes, 257 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004768C0(void)
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

loc_004768C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004769BB; /* je: equal / zero */

loc_004768D4: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0xDC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00476954; /* jle: less or equal (signed <=) */

loc_004768E3: ;
    ebx = 0xBC;
    PUSH32(esp, ebp);
    /* nop */

loc_004768F0: ;
    ebp = MEM32(eax + ebx);
    SET_LO8(eax, MEM8(ebp + 0x1964));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476935; /* jne: not equal / not zero */

loc_004768FD: ;
    SET_LO8(eax, MEM8(ebp + 0x1955));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476942; /* je: equal / zero */

loc_00476907: ;
    SET_LO8(eax, MEM8(esi + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476942; /* je: equal / zero */

loc_0047690E: ;
    fp_push(MEMF(ebp + 0x1978)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00476935; /* jnp: not parity */

loc_00476921: ;
    ecx = esi;
    PUSH32(esp, 0x00476928u); RECOMP_ABI_CALL(0x00474600u, sub_00474600); /* call 0x00474600 */

loc_00476928: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x1978)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x1978] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00476942; /* jp: parity */

loc_00476935: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00476942u); RECOMP_ABI_CALL(0x00475320u, sub_00475320); /* call 0x00475320 */

loc_00476942: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0xDC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004768F0; /* jl: less (signed <) */

loc_00476953: ;
    POP32(esp, ebp);

loc_00476954: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(MEM8(eax + 0x13C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x13C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004769BB; /* je: equal / zero */

loc_00476960: ;
    edi = MEM32(eax + 0x138);
    SET_LO8(eax, MEM8(edi + 0x1964));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476977; /* je: equal / zero */

loc_00476970: ;
    PUSH32(esp, 0x3F800000);
    goto loc_004769B4;

loc_00476977: ;
    SET_LO8(eax, MEM8(edi + 0x1955));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004769BB; /* je: equal / zero */

loc_00476981: ;
    SET_LO8(eax, MEM8(esi + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004769BB; /* je: equal / zero */

loc_00476988: ;
    fp_push(MEMF(edi + 0x1978)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x65E384)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x65e384] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004769AF; /* jnp: not parity */

loc_0047699B: ;
    ecx = esi;
    PUSH32(esp, 0x004769A2u); RECOMP_ABI_CALL(0x00474600u, sub_00474600); /* call 0x00474600 */

loc_004769A2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x1978)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x1978] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004769BB; /* je: equal / zero */

loc_004769AF: ;
    PUSH32(esp, 0x3F000000);

loc_004769B4: ;
    ecx = esi;
    PUSH32(esp, 0x004769BBu); RECOMP_ABI_CALL(0x00475A20u, sub_00475A20); /* call 0x00475A20 */

loc_004769BB: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00476A38; /* je: equal / zero */

loc_004769C1: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ebx, MEM8(eax + 0x148));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x50;
    PUSH32(esp, 0x004769DCu); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_004769DC: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00476A38; /* je: equal / zero */

loc_004769E2: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004769EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004769E7u); } /* indirect call */
    }

loc_004769EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476A38; /* jne: not equal / not zero */

loc_004769EF: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x92);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00476A38; /* jle: less or equal (signed <=) */

loc_00476A01: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62D57C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62d57c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00476A1D; /* je: equal / zero */

loc_00476A16: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476A38; /* jne: not equal / not zero */

loc_00476A1D: ;
    ecx = esi;
    PUSH32(esp, 0x00476A24u); RECOMP_ABI_CALL(0x00474600u, sub_00474600); /* call 0x00474600 */

loc_00476A24: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00476A38; /* jne: not equal / not zero */

loc_00476A2F: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00476A38u); RECOMP_ABI_CALL(0x00474500u, sub_00474500); /* call 0x00474500 */

loc_00476A38: ;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476AA2; /* je: equal / zero */

loc_00476A3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00476A45u); RECOMP_ABI_CALL(0x00475E60u, sub_00475E60); /* call 0x00475E60 */

loc_00476A45: ;
    edx = MEM32(esi + 0x7C);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(eax);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(eax + 0x1C);
    MEM32(esi + 0x2C) = edx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 0x24);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 0x2C);
    MEM32(esi + 0x3C) = edx;
    edx = ZX16(MEM16(esi + 8));
    ecx = MEM32(0x6C8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00476AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00476A9Fu); } /* indirect call */
    }

loc_00476AA2: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0xE0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476BF0; /* je: equal / zero */

loc_00476AB3: ;
    ecx = ZX16(MEM16(esi + 8));
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C8EB8);
    PUSH32(esp, 0x00476AC3u); RECOMP_ABI_CALL(0x00580720u, sub_00580720); /* call 0x00580720 */

loc_00476AC3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476BF0; /* je: equal / zero */

loc_00476ACD: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(esi + 0x74);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x118)); /* fmul dword ptr [eax + 0x118] */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x114;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    ecx = MEM32(edi + 0x64);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x80)); /* fmul dword ptr [edi + 0x80] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x7C)); /* fmul dword ptr [edi + 0x7c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x78)); /* fmul dword ptr [edi + 0x78] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00476B52; /* jne: not equal / not zero */

loc_00476B3A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x63D408)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x63d408] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00476B52; /* jne: not equal / not zero */

loc_00476B4D: ;
    PUSH32(esp, 0x00476B52u); RECOMP_ABI_CALL(0x0058F6E0u, sub_0058F6E0); /* call 0x0058F6E0 */

loc_00476B52: ;
    edx = MEM32(edi + 0x64);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476BF0; /* jne: not equal / not zero */

loc_00476B5E: ;
    esi = MEM32(esi + 0x74);
    edi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x100)); /* fmul dword ptr [esi + 0x100] */
    eax = MEM32(esi + 0x100);
    fp_push(MEMF(edi + 0x10)); /* fld float */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xFC)); /* fmul dword ptr [esi + 0xfc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF8)); /* fmul dword ptr [esi + 0xf8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x120)); /* fmul dword ptr [esi + 0x120] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_push(MEMF(esi + 0xFC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    if (CMP_EQ(_fa, _fb)) goto loc_00476BEE; /* je: equal / zero */

loc_00476BB9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xA0)); /* fadd dword ptr [edi + 0xa0] */
    MEMF(edi + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xA4)); /* fadd dword ptr [edi + 0xa4] */
    MEMF(edi + 0xA4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xA8)); /* fadd dword ptr [edi + 0xa8] */
    MEMF(edi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00476BEE: ;
    fp_pop(); /* fstp st(0) */

loc_00476BF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00476C00
 * Original: 0x00476C00 - 0x004775D2 (2514 bytes, 704 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00476C00(void)
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

loc_00476C00: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(eax + 0x13C);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00476C6B; /* jne: not equal / not zero */

loc_00476C1A: ;
    SET_LO8(ecx, MEM8(eax + 0xE0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476C6B; /* jne: not equal / not zero */

loc_00476C24: ;
    PUSH32(esp, 0x00476C29u); RECOMP_ABI_CALL(0x00478590u, sub_00478590); /* call 0x00478590 */

loc_00476C29: ;
    edx = MEM32(eax + 0x38);
    eax = edx;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x00476C3Au); RECOMP_ABI_CALL(0x00474430u, sub_00474430); /* call 0x00474430 */

loc_00476C3A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476C6B; /* jne: not equal / not zero */

loc_00476C3E: ;
    ecx = MEM32(esp + 0xA4);
    MEM32(ecx) = 6;
    PUSH32(esp, 0);
    ecx = ebp + 0x50;
    PUSH32(esp, 0x00476C55u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_00476C55: ;
    MEM32(0x696854) = MEM32(0x696854) + 1;
    _fa = (uint32_t)(MEM32(0x696854)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 0xF) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00476C6B: ;
    MEM8(ebp + 0xF) = 1;
    fp_push(MEMF(0x8602E0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x62D674)); /* fmul dword ptr [0x62d674] */
    PUSH32(esp, 0x00476C80u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00476C80: ;
    edx = MEM32(ebp + 0x74);
    MEM16(ebp + 0xC) = LO16(eax);
    eax = MEM32(edx + 0x13C);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00476CB0; /* je: equal / zero */

loc_00476C93: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x46BB8000);
    PUSH32(esp, 0x40800000);
    ecx = ebp + 0x10;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00476CADu); RECOMP_ABI_CALL(0x00508DA0u, sub_00508DA0); /* call 0x00508DA0 */

loc_00476CAD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00476CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM8(esi + 0x13C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x13C), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00476DF6; /* je: equal / zero */

loc_00476CC3: ;
    eax = MEM32(esi + 0x138);
    edx = MEM32(eax + 0x196C);
    ecx = MEM32(eax + 0x1970);
    _fb = (uint32_t)(0x196C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x196C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x34) = eax;
    eax = esp + 0x34;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0x00476D06u); RECOMP_ABI_CALL(0x0046E920u, sub_0046E920); /* call 0x0046E920 */

loc_00476D06: ;
    eax = MEM32(esi + 0x138);
    edx = MEM32(eax + 0x1850);
    ecx = eax;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ebp + 0x38);
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x2C) = 0x3F800000;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esi + 0x138);
    fp_push(MEMF(eax + 0x197C)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = eax + 0x1870;
    PUSH32(esp, edx);
    ecx = eax + 0x1864;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00476D93u); RECOMP_ABI_CALL(0x00619764u, sub_00619764); /* call 0x00619764 */

loc_00476D93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00476D99u); RECOMP_ABI_CALL(0x00505280u, sub_00505280); /* call 0x00505280 */

loc_00476D99: ;
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(eax + 0x130);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476DD1; /* je: equal / zero */

loc_00476DA9: ;
    PUSH32(esp, 0x00476DAEu); RECOMP_ABI_CALL(0x0052D750u, sub_0052D750); /* call 0x0052D750 */

loc_00476DAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476DD1; /* jne: not equal / not zero */

loc_00476DB2: ;
    ecx = MEM32(0x6CE2E4);
    edx = MEM32(ecx + 0x38);
    ecx = MEM32(ebp + 0x74);
    ecx = MEM32(ecx + 0x130);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00476DD1u); RECOMP_ABI_CALL(0x0052CEE0u, sub_0052CEE0); /* call 0x0052CEE0 */

loc_00476DD1: ;
    edx = MEM32(ebp + 0x74);
    ecx = MEM32(edx + 0x138);
    fp_push(MEMF(ecx + 0x1850)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x62E2B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x62e2b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00476DF6; /* jne: not equal / not zero */

loc_00476DED: ;
    eax = MEM32(ecx + 0x1850);
    PUSH32(esp, eax);
    goto loc_00476DFB;

loc_00476DF6: ;
    PUSH32(esp, 0x41A00000);

loc_00476DFB: ;
    ecx = ebp;
    PUSH32(esp, 0x00476E02u); RECOMP_ABI_CALL(0x00474740u, sub_00474740); /* call 0x00474740 */

loc_00476E02: ;
    esi = MEM32(esp + 0xA8);
    ecx = MEM32(0x8600B0);
    edx = MEM32(0x8600B4);
    eax = MEM32(0x8600B8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00476EA7; /* je: equal / zero */

loc_00476E2C: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00476E34u); RECOMP_ABI_CALL(0x0059FA90u, sub_0059FA90); /* call 0x0059FA90 */

loc_00476E34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00476E58; /* je: equal / zero */

loc_00476E3A: ;
    edi = MEM32(esi + 0x1CB0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00476E46u); RECOMP_ABI_CALL(0x0059FA90u, sub_0059FA90); /* call 0x0059FA90 */

loc_00476E46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476E77; /* jne: not equal / not zero */

loc_00476E4A: ;
    edi = MEM32(esi + 0x1CB4);
    ebx = MEM32(esi + 0x1CB8);
    goto loc_00476E82;

loc_00476E58: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00476E5Fu); RECOMP_ABI_CALL(0x0059FAC0u, sub_0059FAC0); /* call 0x0059FAC0 */

loc_00476E5F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00476E71; /* jne: not equal / not zero */

loc_00476E63: ;
    edi = MEM32(esi + 0x1CB4);
    ebx = MEM32(esi + 0x1CB8);
    goto loc_00476E82;

loc_00476E71: ;
    edi = MEM32(esi + 0x1CB0);

loc_00476E77: ;
    ecx = esi;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00476E80u); RECOMP_ABI_CALL(0x0059FAC0u, sub_0059FAC0); /* call 0x0059FAC0 */

loc_00476E80: ;
    ebx = eax;

loc_00476E82: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476EA7; /* je: equal / zero */

loc_00476E86: ;
    edi = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x7C);
    edx = MEM32(edi + 0x80);
    eax = MEM32(edi + 0x84);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;

loc_00476EA7: ;
    ecx = MEM32(ebp + 0x74);
    edx = MEM32(ecx + 0x13C);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004771B8; /* je: equal / zero */

loc_00476EBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00476F27; /* je: equal / zero */

loc_00476ED8: ;
    eax = MEM32(esi + 0x1CB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476F27; /* je: equal / zero */

loc_00476EE2: ;
    eax = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x7C)); /* fld float */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63813C)); /* fmul dword ptr [0x63813c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63813C)); /* fmul dword ptr [0x63813c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x63813C)); /* fmul dword ptr [0x63813c] */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = edx;

loc_00476F27: ;
    ecx = MEM32(0x6B1528);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00476F33u); RECOMP_ABI_CALL(0x0050F4C0u, sub_0050F4C0); /* call 0x0050F4C0 */

loc_00476F33: ;
    edi = eax;
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(eax + 0x140);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = ebp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00476F67u); RECOMP_ABI_CALL(0x00606860u, sub_00606860); /* call 0x00606860 */

loc_00476F67: ;
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00476F75u); RECOMP_ABI_CALL(0x00607DD0u, sub_00607DD0); /* call 0x00607DD0 */

loc_00476F75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00476F90; /* je: equal / zero */

loc_00476F79: ;
    ecx = esi + 0x2C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;

loc_00476F90: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00476F9Eu); RECOMP_ABI_CALL(0x0046E920u, sub_0046E920); /* call 0x0046E920 */

loc_00476F9E: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00477044; /* jne: not equal / not zero */

loc_00477004: ;
    ecx = esi;
    eax = edi + 0x48;
    MEM32(eax) = ecx;
    edx = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = edi + 0x38;
    eax = esi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(edx + 8) = eax;
    MEM32(edi + 0x44) = 0x3F000000;
    goto loc_004771B1;

loc_00477044: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047717C; /* je: equal / zero */

loc_0047704C: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 4), 0xE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047717C; /* jne: not equal / not zero */

loc_0047705C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0047707Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477078u); } /* indirect call */
    }

loc_0047707B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047712D; /* jne: not equal / not zero */

loc_00477084: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp + 0x34;
    PUSH32(esp, 0x00477095u); RECOMP_ABI_CALL(0x0040AD60u, sub_0040AD60); /* call 0x0040AD60 */

loc_00477095: ;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x20;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x004770B2u); RECOMP_ABI_CALL(0x00468590u, sub_00468590); /* call 0x00468590 */

loc_004770B2: ;
    fp_push(MEMF(0x62D57C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6307D4)); /* fmul dword ptr [0x6307d4] */
    fp_top() = RECOMP_FP_PC(MEMF(0x62D57C) - fp_top()); /* fsubr dword ptr [0x62d57c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004770F6u); RECOMP_ABI_CALL(0x00450390u, sub_00450390); /* call 0x00450390 */

loc_004770F6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6382D0)); /* fmul dword ptr [0x6382d0] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0047712Du); RECOMP_ABI_CALL(0x00473D90u, sub_00473D90); /* call 0x00473D90 */

loc_0047712D: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = edi + 0x48;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    eax = edi + 0x38;
    MEM32(eax) = ecx;
    MEM32(esp + 0x14) = 0;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(edi + 0x44) = 0x40A00000;
    goto loc_004771B1;

loc_0047717C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = edi + 0x48;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = edi + 0x38;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(edi + 0x44) = 0x3FC00000;

loc_004771B1: ;
    ecx = edi;
    PUSH32(esp, 0x004771B8u); RECOMP_ABI_CALL(0x0050F560u, sub_0050F560); /* call 0x0050F560 */

loc_004771B8: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edi = ebp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    eax = MEM32(0x8600B0);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    ecx = MEM32(0x8600B4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    edx = MEM32(0x8600B8);
    MEM32(esp + 0x30) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0xC)); /* fmul dword ptr [edi + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esp + 0x3C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x20)); /* fmul dword ptr [edi + 0x20] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x38) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(esp + 0x34) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(eax + 0xDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0047730A; /* jle: less or equal (signed <=) */

loc_00477247: ;
    esi = 0xBC;
    /* nop */

loc_00477250: ;
    ecx = MEM32(ebp + 0x74);
    eax = MEM32(esi + ecx);
    SET_LO8(ebx, MEM8(eax + 0x1956));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004772B8; /* je: equal / zero */

loc_00477260: ;
    edx = MEM32(eax + 0x1864);
    ecx = MEM32(eax + 0x1868);
    _fb = (uint32_t)(0x1864) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1864;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = edx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    edx = MEM32(eax + 8);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(eax) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEM32(eax + 4) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;

loc_004772B8: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x004772C9u); RECOMP_ABI_CALL(0x00475320u, sub_00475320); /* call 0x00475320 */

loc_004772C9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004772ED; /* je: equal / zero */

loc_004772CD: ;
    eax = MEM32(ebp + 0x74);
    ecx = MEM32(esi + eax);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x1864) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1864;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;

loc_004772ED: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(ebp + 0x74);
    edx = MEM32(ecx + 0xDC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00477250; /* jl: less (signed <) */

loc_0047730A: ;
    SET_LO8(eax, MEM8(ebp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00477448; /* je: equal / zero */

loc_00477315: ;
    eax = MEM32(esp + 0xB0);
    MEM32(eax) = 3;
    edx = ZX8(MEM8(ebp + 0xE));
    PUSH32(esp, 0);
    ecx = ebp + 0x50;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x00477333u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_00477333: ;
    SET_LO8(eax, MEM8(ebp + 0xE));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004775C3; /* jbe: below or equal (unsigned <=) */

loc_00477340: ;
    MEM32(esp + 0x30) = ebx;

loc_00477344: ;
    esi = MEM32(ebp + 0x78);
    ecx = MEM32(edi);
    _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(edi + 0x10);
    eax = esi + 0x10;
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(edi + 0x18);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(edi + 0x20);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(edi + 0x28);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(edi + 0x2C);
    MEM32(eax + 0x2C) = edx;
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    PUSH32(esp, 0);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x68)); /* fmul dword ptr [esi + 0x68] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x24)); /* fadd dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x64)); /* fmul dword ptr [esi + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x68)); /* fmul dword ptr [esi + 0x68] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x28)); /* fadd dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x6C)); /* fmul dword ptr [esi + 0x6c] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x64)); /* fmul dword ptr [esi + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x68)); /* fmul dword ptr [esi + 0x68] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0x3C) = ecx;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + 0x40;
    MEM32(esp + 0x48) = ecx;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00477401u); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_00477401: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0047740Cu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047740C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x00477417u); RECOMP_ABI_CALL(0x0058FD80u, sub_0058FD80); /* call 0x0058FD80 */

loc_00477417: ;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x70) = ebp;
    MEM32(ebx * 4 + 0x6C9038) = esi;
    edx = ZX8(MEM8(ebp + 0xE));
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00477344; /* jl: less (signed <) */

loc_00477439: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00477448: ;
    eax = MEM32(ebp + 0x74);
    SET_LO8(ecx, MEM8(eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047746E; /* je: equal / zero */

loc_00477452: ;
    eax = MEM32(esp + 0xB0);
    MEM32(eax) = 0;

loc_0047745F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0047746E: ;
    SET_LO8(ecx, MEM8(eax + 0xE0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00477563; /* je: equal / zero */

loc_0047747C: ;
    ecx = 0x6968B8;
    PUSH32(esp, 0x00477486u); RECOMP_ABI_CALL(0x0047BD20u, sub_0047BD20); /* call 0x0047BD20 */

loc_00477486: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047745F; /* je: equal / zero */

loc_0047748C: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00477494u); RECOMP_ABI_CALL(0x00591450u, sub_00591450); /* call 0x00591450 */

loc_00477494: ;
    ecx = esi;
    PUSH32(esp, 0x0047749Bu); RECOMP_ABI_CALL(0x00591520u, sub_00591520); /* call 0x00591520 */

loc_0047749B: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, 0x004774A3u); RECOMP_ABI_CALL(0x0058FC60u, sub_0058FC60); /* call 0x0058FC60 */

loc_004774A3: ;
    ecx = MEM32(ebp + 0x74);
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x004774B9u); RECOMP_ABI_CALL(0x00596B50u, sub_00596B50); /* call 0x00596B50 */

loc_004774B9: ;
    edx = esp + 0x74;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x004774C5u); RECOMP_ABI_CALL(0x004745A0u, sub_004745A0); /* call 0x004745A0 */

loc_004774C5: ;
    ecx = MEM32(ebp + 0x74);
    fp_push(MEMF(ecx + 0x104)); /* fld float */
    eax = esp + 0x74;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x004774DEu); RECOMP_ABI_CALL(0x00596B80u, sub_00596B80); /* call 0x00596B80 */

loc_004774DE: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = ebx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00477504u); RECOMP_ABI_CALL(0x00596B20u, sub_00596B20); /* call 0x00596B20 */

loc_00477504: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0047750Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477508u); } /* indirect call */
    }

loc_0047750B: ;
    ecx = MEM32(0x8602E0);
    MEM32(esi + 0x84) = ecx;
    eax = MEM32(ebp + 0x74);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x108;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0047752Bu); RECOMP_ABI_CALL(0x00473D30u, sub_00473D30); /* call 0x00473D30 */

loc_0047752B: ;
    ecx = MEM32(esp + 0xAC);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0047753Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477537u); } /* indirect call */
    }

loc_0047753A: ;
    eax = MEM32(esp + 0xB0);
    POP32(esp, edi);
    MEM32(eax + 4) = 1;
    MEM32(0x6C9060) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax) = 4;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00477563: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    ecx = ebp;
    PUSH32(esp, 0x0047756Eu); RECOMP_ABI_CALL(0x0058FD80u, sub_0058FD80); /* call 0x0058FD80 */

loc_0047756E: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00477576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477573u); } /* indirect call */
    }

loc_00477576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004775B6; /* jne: not equal / not zero */

loc_0047757B: ;
    ecx = MEM32(ebp + 4);
    SET_LO16(eax, MEM16(ecx + 0x92));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004775B6; /* jle: less or equal (signed <=) */

loc_0047758A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_004775B6; /* jg: greater (signed >) */

loc_00477590: ;
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, 0);
    ecx = ebp + 0x50;
    MEM32(edx) = 6;
    PUSH32(esp, 0x004775A7u); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_004775A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_004775B6: ;
    eax = MEM32(esp + 0xB0);
    MEM32(eax) = 1;

loc_004775C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004775E0
 * Original: 0x004775E0 - 0x0047762C (76 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004775E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004775E0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00477629; /* je: equal / zero */

loc_004775E9: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047761C; /* jl: less (signed <) */

loc_004775F1: ;
    if (CMP_NE(_fa, _fb)) goto loc_00477602; /* jne: not equal / not zero */

loc_004775F3: ;
    eax = MEM32(eax + 0x74);
    edx = MEM32(eax + 0x10);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00475E90(); return; /* tail jmp 0x00475E90 */

loc_00477602: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 4 + 0x7C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0047761C; /* je: equal / zero */

loc_0047760C: ;
    eax = MEM32(eax + edx * 4 + 0x80);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00475E90(); return; /* tail jmp 0x00475E90 */

loc_0047761C: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00475E90(); return; /* tail jmp 0x00475E90 */

loc_00477629: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00477630
 * Original: 0x00477630 - 0x00477665 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00477630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047763Cu); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_0047763C: ;
    ecx = MEM32(esi + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047764C; /* je: equal / zero */

loc_00477646: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0047764Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047764Au); } /* indirect call */
    }

loc_0047764C: ;
    esi = MEM32(esi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00477663; /* je: equal / zero */

loc_00477653: ;
    ecx = esi;
    PUSH32(esp, 0x0047765Au); RECOMP_ABI_CALL(0x005DD570u, sub_005DD570); /* call 0x005DD570 */

loc_0047765A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00477660u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00477660: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00477663: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00477670
 * Original: 0x00477670 - 0x004776E4 (116 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477670(void)
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

loc_00477670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0047767Du); RECOMP_ABI_CALL(0x005DD2D0u, sub_005DD2D0); /* call 0x005DD2D0 */

loc_0047767D: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x74);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004776DE; /* je: equal / zero */

loc_0047768B: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00477697u); RECOMP_ABI_CALL(0x005DD9A0u, sub_005DD9A0); /* call 0x005DD9A0 */

loc_00477697: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x14);
    MEM8(eax + 0x32) = 1;
    ecx = MEM32(edi + 0x74);
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x14);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x74);
    ecx = ZX16(MEM16(ecx + 8));
    eax = MEM32(esi + 0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004776DEu); RECOMP_ABI_CALL(0x00475E60u, sub_00475E60); /* call 0x00475E60 */

loc_004776DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004776F0
 * Original: 0x004776F0 - 0x0047770E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004776F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004776F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004776F8u); RECOMP_ABI_CALL(0x00476040u, sub_00476040); /* call 0x00476040 */

loc_004776F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00477708; /* je: equal / zero */

loc_004776FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00477705u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_00477705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00477708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00477710
 * Original: 0x00477710 - 0x0047772A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00477710: ;
    eax = MEM32(ecx + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00477725; /* jne: not equal / not zero */

loc_00477719: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00477720u); RECOMP_ABI_CALL(0x004768C0u, sub_004768C0); /* call 0x004768C0 */

loc_00477720: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00477725: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00477730
 * Original: 0x00477730 - 0x00477893 (355 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00477730: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00477741u); RECOMP_ABI_CALL(0x004745A0u, sub_004745A0); /* call 0x004745A0 */

loc_00477741: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = esi + 0x10;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(esi + 0x7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004777BC; /* je: equal / zero */

loc_0047779F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004777A5u); RECOMP_ABI_CALL(0x00477670u, sub_00477670); /* call 0x00477670 */

loc_004777A5: ;
    eax = MEM32(esi + 0x74);
    SET_LO8(ecx, MEM8(eax + 0x148));
    edx = MEM32(esi + 0x7C);
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    goto loc_004777CB;

loc_004777BC: ;
    ecx = MEM32(esi + 0x74);
    SET_LO8(edx, MEM8(ecx + 0x148));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);

loc_004777CB: ;
    edi = esi + 0x50;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004777D6u); RECOMP_ABI_CALL(0x00521D50u, sub_00521D50); /* call 0x00521D50 */

loc_004777D6: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x004777DFu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_004777DF: ;
    SET_LO16(eax, MEM16(esi + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00477810; /* je: equal / zero */

loc_004777E9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x40)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x40) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004777FE; /* je: equal / zero */

loc_004777EF: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004777FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004777FBu); } /* indirect call */
    }

loc_004777FE: ;
    eax = ZX16(MEM16(esi + 0x40));
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00477810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047780Du); } /* indirect call */
    }

loc_00477810: ;
    SET_LO8(eax, MEM8(esi + 0xE));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00477857; /* jbe: below or equal (unsigned <=) */

loc_0047781A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00477820: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    ecx = edi + ecx + 0x40;
    PUSH32(esp, 0x0047782Eu); RECOMP_ABI_CALL(0x00517A40u, sub_00517A40); /* call 0x00517A40 */

loc_0047782E: ;
    edx = MEM32(esi + 0x78);
    SET_LO16(eax, MEM16(edi + edx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047784B; /* je: equal / zero */

loc_0047783C: ;
    ecx = MEM32(0x6C8EB8);
    edx = MEM32(ecx);
    eax = ZX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0047784Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477848u); } /* indirect call */
    }

loc_0047784B: ;
    ecx = ZX8(MEM8(esi + 0xE));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x74;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00477820; /* jl: less (signed <) */

loc_00477857: ;
    edx = MEM32(esi + 0x74);
    eax = MEM32(edx + 0xDC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_00477889; /* jle: less or equal (signed <=) */

loc_00477867: ;
    goto loc_00477870;

    /* nop */

loc_00477870: ;
    ecx = MEM32(0x697B84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0047787Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00477878u); } /* indirect call */
    }

loc_0047787B: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx + 0xDC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00477870; /* jl: less (signed <) */

loc_00477889: ;
    POP32(esp, edi);
    MEM8(esi + 0xF) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004778A0
 * Original: 0x004778A0 - 0x004778FB (91 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004778A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004778A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    MEM32(esi) = 0x63E0C4;
    PUSH32(esp, 0x004778B1u); RECOMP_ABI_CALL(0x00474500u, sub_00474500); /* call 0x00474500 */

loc_004778B1: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004778D3; /* je: equal / zero */

loc_004778B8: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_004778CA; /* je: equal / zero */

loc_004778C2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004778C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004778C6u); } /* indirect call */
    }

loc_004778C8: ;
    goto loc_004778D3;

loc_004778CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004778D0u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004778D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004778D3: ;
    edi = MEM32(esi + 0x7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004778EA; /* je: equal / zero */

loc_004778DA: ;
    ecx = edi;
    PUSH32(esp, 0x004778E1u); RECOMP_ABI_CALL(0x00477630u, sub_00477630); /* call 0x00477630 */

loc_004778E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004778E7u); RECOMP_ABI_CALL(0x00577320u, sub_00577320); /* call 0x00577320 */

loc_004778E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004778EA: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x004778F2u); RECOMP_ABI_CALL(0x00473F80u, sub_00473F80); /* call 0x00473F80 */

loc_004778F2: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0058FE10(); return; /* tail jmp 0x0058FE10 */

}

/**
 * sub_00477900
 * Original: 0x00477900 - 0x00477925 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00477900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00477908u); RECOMP_ABI_CALL(0x00476240u, sub_00476240); /* call 0x00476240 */

loc_00477908: ;
    MEM32(esi) = 0x63E190;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x80;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00477930
 * Original: 0x00477930 - 0x0047793B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00477930: ;
    MEM32(ecx) = 0x63E190;
    g_seh_ebp = ebp; sub_004778A0(); return; /* tail jmp 0x004778A0 */

}

/**
 * sub_00477940
 * Original: 0x00477940 - 0x0047798E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00477940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x63E1BC;
    PUSH32(esp, 0x00477952u); RECOMP_ABI_CALL(0x0058FD50u, sub_0058FD50); /* call 0x0058FD50 */

loc_00477952: ;
    edi = esi + 0xE0;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00477961u); RECOMP_ABI_CALL(0x0058E7D0u, sub_0058E7D0); /* call 0x0058E7D0 */

loc_00477961: ;
    ebx = esi + 0x50;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0047796Du); RECOMP_ABI_CALL(0x005A3B20u, sub_005A3B20); /* call 0x005A3B20 */

loc_0047796D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00477976u); RECOMP_ABI_CALL(0x0058EE90u, sub_0058EE90); /* call 0x0058EE90 */

loc_00477976: ;
    ecx = edi;
    PUSH32(esp, 0x0047797Du); RECOMP_ABI_CALL(0x0058ECB0u, sub_0058ECB0); /* call 0x0058ECB0 */

loc_0047797D: ;
    ecx = ebx;
    PUSH32(esp, 0x00477984u); RECOMP_ABI_CALL(0x005A2300u, sub_005A2300); /* call 0x005A2300 */

loc_00477984: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0058FE10(); return; /* tail jmp 0x0058FE10 */

}

/**
 * sub_00477990
 * Original: 0x00477990 - 0x00477996 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00477990(void)
{

loc_00477990: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}
